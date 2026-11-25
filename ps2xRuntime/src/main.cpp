#include "ps2_runtime.h"
#include "games_database.h"
#include "ps2_host_settings.h"
#if defined(PS2X_ENABLE_DEBUG_UI) && !defined(PLATFORM_VITA)
#include "ps2_debug_panel.h"
#endif

#ifdef _DEBUG
#include "ps2_log.h"
#endif

#include <iostream>
#include <string>
#include <filesystem>
#include <exception>
#include <algorithm>
#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <vector>
#if defined(_WIN32)
extern "C" __declspec(dllimport) int __stdcall MessageBoxA(void *window, const char *text, const char *caption, unsigned type);
// Per monitor DPI awareness: the window gets the monitor's real pixels instead of a picture Windows scales up
// (blurry, and cropped in fullscreen on displays set to 125 % or more).
extern "C" __declspec(dllimport) int __stdcall SetProcessDpiAwarenessContext(void *context);
#endif

#if defined(__ANDROID__)
#include <android/log.h>
#include <unistd.h>
#include <thread>
#include <cstdio>
#include <cstring>
#endif

namespace
{
#if defined(__ANDROID__)
    int g_logcatPipeFds[2]{-1, -1};
    std::thread g_logcatThread;

    void stopLogcatRedirect()
    {
        std::fflush(stdout);
        std::fflush(stderr);
        close(STDOUT_FILENO);
        close(STDERR_FILENO);
        if (g_logcatPipeFds[1] >= 0)
        {
            close(g_logcatPipeFds[1]);
            g_logcatPipeFds[1] = -1;
        }
        if (g_logcatThread.joinable())
        {
            g_logcatThread.join();
        }
    }

    void redirectStdioToLogcat()
    {
        if (pipe(g_logcatPipeFds) != 0)
        {
            return;
        }

        setvbuf(stdout, nullptr, _IOLBF, 0);
        setvbuf(stderr, nullptr, _IONBF, 0);
        dup2(g_logcatPipeFds[1], STDOUT_FILENO);
        dup2(g_logcatPipeFds[1], STDERR_FILENO);

        g_logcatThread = std::thread([]()
                                     {
                                         FILE *reader = fdopen(g_logcatPipeFds[0], "r");
                                         if (!reader)
                                         {
                                             return;
                                         }
                                         char line[1024];
                                         while (fgets(line, sizeof(line), reader))
                                         {
                                             size_t len = std::strlen(line);
                                             if (len > 0 && line[len - 1] == '\n')
                                             {
                                                 line[len - 1] = '\0';
                                             }
                                             __android_log_write(ANDROID_LOG_INFO, "ps2x", line);
                                         }
                                         fclose(reader);
                                         g_logcatPipeFds[0] = -1;
                                     });
        if (std::atexit(stopLogcatRedirect) != 0)
        {
            close(STDOUT_FILENO);
            close(STDERR_FILENO);
            close(g_logcatPipeFds[1]);
            g_logcatPipeFds[1] = -1;
            if (g_logcatThread.joinable())
            {
                g_logcatThread.join();
            }
        }
    }
#endif

    void setupTerminateLogger() // to help on release build crashs
    {
        std::set_terminate([]()
                           {
                               std::cerr << "[terminate] unhandled exception" << std::endl;
                               const std::exception_ptr ep = std::current_exception();
                               if (ep)
                               {
                                   try
                                   {
                                       std::rethrow_exception(ep);
                                   }
                                   catch (const std::system_error &e)
                                   {
                                       std::cerr << "[terminate] std::system_error code=" << e.code().value()
                                                 << " category=" << e.code().category().name()
                                                 << " message=" << e.what() << std::endl;
                                   }
                                   catch (const std::exception &e)
                                   {
                                       std::cerr << "[terminate] std::exception: " << e.what() << std::endl;
                                   }
                                   catch (...)
                                   {
                                       std::cerr << "[terminate] non-std exception" << std::endl;
                                   }
                               }
                               std::abort(); });
    }

    std::string normalizeGameId(const std::string &folderName)
    {
        std::string result = folderName;

        size_t underscore = result.find('_');
        if (underscore != std::string::npos)
            result[underscore] = '-';

        size_t dot = result.find('.');
        if (dot != std::string::npos)
            result.erase(dot, 1);

        std::ranges::transform(result, result.begin(), [](unsigned char character)
                               { return static_cast<char>(std::toupper(character)); });

        return result;
    }

    // The folder of this program (settings.json, saves/ and the extracted disc live there).
    std::filesystem::path programFolder(const char *argv0)
    {
        std::error_code ec;
        std::filesystem::path self = std::filesystem::absolute(std::filesystem::path(argv0 ? argv0 : "."), ec);
        if (ec || self.empty())
            return std::filesystem::current_path();
        return self.parent_path();
    }

    // The game ELF on an extracted disc: the folder itself, an extracted copy of an ISO (disc1/ next to the
    // program, written by the launcher), or nothing.
    std::filesystem::path findGameElf(const std::filesystem::path &folder, const std::string &discSetting)
    {
        std::error_code ec;
        std::vector<std::filesystem::path> candidates;
        if (!discSetting.empty())
        {
            const std::filesystem::path disc = std::filesystem::u8path(discSetting);
            if (std::filesystem::is_directory(disc, ec))
                candidates.push_back(disc / "SLUS_211.80");
        }
        candidates.push_back(folder / "disc1" / "SLUS_211.80");
        candidates.push_back(folder / "SLUS_211.80");
        for (const auto &candidate : candidates)
            if (std::filesystem::is_regular_file(candidate, ec))
                return candidate;
        return {};
    }

    std::filesystem::path getExecutablePath(int argc, char *argv[])
    {
        // Arguments: [game ELF] [--settings settings.json]. Without an ELF the game data is looked up
        // from the settings (the launcher writes them) or next to the program.
        std::filesystem::path elf;
        std::filesystem::path settingsFile;
        for (int i = 1; i < argc; ++i)
        {
            const std::string arg = argv[i] ? argv[i] : "";
            if (arg == "--settings" && i + 1 < argc)
                settingsFile = std::filesystem::u8path(argv[++i]);
            else if (!arg.empty() && arg[0] != '-' && elf.empty())
                elf = std::filesystem::u8path(arg);
        }
        const std::filesystem::path folder = programFolder(argc > 0 ? argv[0] : nullptr);
        if (settingsFile.empty() && std::filesystem::exists(folder / "settings.json"))
            settingsFile = folder / "settings.json";
        if (!settingsFile.empty())
            (void)ps2xLoadHostSettings(settingsFile);
        if (ps2xHostSettings().saveDirectory.empty())
            ps2xHostSettings().saveDirectory = folder / "saves";
        if (!elf.empty())
        {
            std::cout << "Using argv boot path" << std::endl;
            return elf;
        }
        if (std::filesystem::path found = findGameElf(folder, ps2xHostSettings().disc1Path); !found.empty())
        {
            std::cout << "Using game data " << found.string() << std::endl;
            return found;
        }
        if (false)
        {
        }
#if defined(PS2X_DEFAULT_BOOT_ELF)
        std::cout << "Using default boot file" << std::endl;
        const std::filesystem::path configuredPath = std::filesystem::path(PS2X_DEFAULT_BOOT_ELF);
#if defined(PLATFORM_VITA)
        return configuredPath;
#endif
        if (configuredPath.is_absolute())
        {
            return configuredPath;
        }
        return (std::filesystem::current_path() / configuredPath).lexically_normal();
#else
        throw std::runtime_error("The game data was not found. Start OnimushaLauncher.exe, select your Disc 1 ISO and press PLAY.");
#endif
    }
}

int main(int argc, char *argv[])
{
#if defined(__ANDROID__)
    redirectStdioToLogcat();
#endif
#if defined(_WIN32)
    // Without a console the log goes to onimusha.log next to the exe (PS2X_LOG_FILE=off keeps it on stderr).
    if (const char *logEnv = std::getenv("PS2X_LOG_FILE"); !logEnv || std::string(logEnv) != "off")
    {
        std::error_code ec;
        const std::filesystem::path exeDir = argc > 0 ? std::filesystem::absolute(argv[0], ec).parent_path() : std::filesystem::path{};
        const std::filesystem::path logPath = (logEnv && *logEnv) ? std::filesystem::path(logEnv) : exeDir / "onimusha.log";
        if (std::freopen(logPath.string().c_str(), "w", stderr))
        {
            std::setvbuf(stderr, nullptr, _IONBF, 0);
            std::freopen(logPath.string().c_str(), "a", stdout);
            std::setvbuf(stdout, nullptr, _IOLBF, 4096);
        }
    }
#endif
#if defined(_WIN32)
    SetProcessDpiAwarenessContext(reinterpret_cast<void *>(static_cast<intptr_t>(-4))); // DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2
#endif
    setupTerminateLogger();

    try
    {
        std::filesystem::path pathObj = getExecutablePath(argc, argv);

        std::string filePathStr = pathObj.string();
        std::string elfName = pathObj.filename().string();
        std::string normalizedId = normalizeGameId(elfName);

        std::string windowTitle = elfName == "SLUS_211.80" ? "Onimusha: Dawn of Dreams" : "PS2-Recomp | ";
        const char *gameName = getGameName(normalizedId);

#if !defined(PLATFORM_VITA)
        if (elfName == "SLUS_211.80")
        {
        }
        else if (gameName)
        {
            windowTitle += std::string(gameName) + " | " + elfName;
        }
        else
#endif
        {
            windowTitle += elfName;
        }

        PS2Runtime runtime;
#if defined(PS2X_ENABLE_DEBUG_UI) && !defined(PLATFORM_VITA)
        // This hook is to prevent leak rlimgui deps to recompiler etc
        PS2DebugPanel debugPanel;
        runtime.setDebugUiCallbacks(
            [](PS2Runtime &rt, void *userData)
            {
                (void)rt;
                static_cast<PS2DebugPanel *>(userData)->initialize();
            },
            [](PS2Runtime &rt, void *userData)
            {
                static_cast<PS2DebugPanel *>(userData)->draw(rt);
            },
            [](PS2Runtime &rt, void *userData)
            {
                (void)rt;
                static_cast<PS2DebugPanel *>(userData)->shutdown();
            },
            &debugPanel);
#endif
        if (!runtime.initialize(windowTitle.c_str()))
        {
            std::cerr << "Failed to initialize PS2 runtime" << std::endl;
            return 1;
        }

        if (!runtime.loadELF(filePathStr))
        {
            std::cerr << "Failed to load ELF file: " << filePathStr << std::endl;
            return 1;
        }

        runtime.run();

#ifdef _DEBUG
        ps2_log::print_saved_location();
#endif
        std::cout.flush();
        std::cerr.flush();
        std::_Exit(0);
    }
    catch (const std::exception &e)
    {
        std::cerr << "[main] fatal exception: " << e.what() << std::endl;
#if defined(_WIN32)
        MessageBoxA(nullptr, e.what(), "Onimusha: Dawn of Dreams", 0x10u /* MB_ICONERROR */);
#endif
    }
    catch (...)
    {
        std::cerr << "[main] fatal exception: unknown" << std::endl;
    }

    std::cout.flush();
    std::cerr.flush();
    std::_Exit(1);
}

#pragma once
#include <atomic>
#include <cstdint>
#include <filesystem>
#include <string>

// ISO 9660 disc images: look up a file in the root, and copy every file to a folder.
bool isoHasRootFile(const std::filesystem::path& iso, const std::string& name);

struct ExtractProgress {
    std::atomic<uint64_t> done{0}, total{0};
    std::atomic<bool> finished{false}, failed{false}, cancel{false};
    std::string error;   // set before finished when failed
};
// Copies all files of the ISO below `target` (a marker file records the image it came from).
void extractIso(const std::filesystem::path& iso, const std::filesystem::path& target, ExtractProgress& progress);
// True when `target` already holds a complete copy of this ISO.
bool isoExtracted(const std::filesystem::path& iso, const std::filesystem::path& target);

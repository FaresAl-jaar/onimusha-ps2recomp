#pragma once

// HD texture replacement in the PCSX2 texture pack format (textures/<serial>/replacements/*.dds), as the
// Onimusha: Dawn of Dreams HD Remastered Project ships it. A texture is named after the XXH3 hash of its
// GS memory blocks, the hash of its palette and its TEX0/TEXA bits, exactly as PCSX2 computes them, so a pack
// made for PCSX2 replaces the same textures here.
//
// The pack can be a folder (the replacements folder, the game folder above it, or the textures folder) or the
// zip as downloaded. Files load in the background; a texture shows its original until its file is ready.

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ps2x::native
{
    struct HdTextureName
    {
        uint64_t texHash = 0;
        uint64_t clutHash = 0;
        uint32_t bits = 0; // PSM, TW, TH, TEXA TA0/AEM/TA1 (PCSX2's TextureName bits, without the old TCC bit)

        bool operator==(const HdTextureName &o) const
        {
            return texHash == o.texHash && clutHash == o.clutHash && bits == o.bits;
        }
    };

    // A loaded replacement: BC7 or uncompressed RGBA8 mip levels, largest first.
    struct HdTextureImage
    {
        uint32_t width = 0;
        uint32_t height = 0;
        bool bc7 = false;
        struct Level
        {
            uint32_t width = 0;
            uint32_t height = 0;
            std::vector<uint8_t> data;
        };
        std::vector<Level> levels;
    };

    class HdTexturePack
    {
    public:
        // Opens a pack for the game serial ("SLUS-21180"). False when nothing usable is there.
        bool open(const std::string &path, const std::string &serial);
        bool isOpen() const;
        size_t count() const;

        // True when the pack has a file for this name (cheap, no loading).
        bool has(const HdTextureName &name) const;
        // The image once loaded; until then null, and the first call starts loading it in the background.
        std::shared_ptr<const HdTextureImage> request(const HdTextureName &name);

        ~HdTexturePack();

    private:
        struct Impl;
        std::unique_ptr<Impl> m_impl;
    };

    // The pack the launcher's settings point to (opened once, on first use).
    HdTexturePack &hdTextures();

    // PCSX2's texture hashes over this GS memory (4 MiB, as the GS lays it out).
    // tex0: the raw TEX0 register, texa: the raw TEXA register, clut: the GS CLUT buffer as PCSX2 and the CPU
    // backend keep it (512 halfwords: the low halves of the 32-bit entries, then the high halves).
    // Returns false for textures PCSX2 would name in a way this does not cover (regions, other formats).
    bool hdTextureName(const uint8_t *vram, uint64_t tex0, uint64_t texa, const uint16_t *clut, HdTextureName &out);
}

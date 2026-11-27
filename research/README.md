# Onimusha: Dawn of Dreams PC recompile: research notes and dumps

This folder holds everything needed to keep working on the open problems without access to the original sessions: reference dumps from PCSX2, the matching dumps from our port, scripts to compare them, and a written record of what is known.

Game: Onimusha: Dawn of Dreams (USA), Disc 1, SLUS_211.80. The dumps contain game data from the user's own copy. Keep this repository private; remove `research/pcsx2` and `research/ours` before ever making it public.

## Goal of the project

A native Windows port built with PS2Recomp: the EE code is recompiled ahead of time to C++, VIF1, VU1, GS and the IOP are emulated in `ps2xRuntime`. The aim is native performance (high and uncapped frame rates, 4K), so hot paths should be translated ahead of time instead of interpreted.

## How to build and run

* Build (Linux): `cmake --build out/fast --target ps2EntryRunner -j`
* Windows builds come from `.github/workflows/onimusha-windows.yml` on every push to `main` (release "latest").
* The runner needs the unpacked Disc 1 files; the Windows launcher unpacks the ISO on first start.
* Logs: on Windows `onimusha.log` next to the exe. The `[speed]` line every 10 s gives VBlanks per second (60 = full speed), audio underruns, and the game thread's milliseconds per second in game code, VU1, GS, IOP, present and VIF.

## State on 2026-11-27

Works: intro, movies, sound, menus, New Game, Stage 1 in 3D with ground, sky, HUD, subtitles, Soki and enemies in the right shape. GPU renderer (OpenGL) and CPU renderer. HD texture packs in PCSX2 format.

Speed on the user's PC (RTX 4090): menus 55 to 60, Stage 1 19 to 25 VBlanks per second.

### Fixed recently (with the evidence)

1. **DMA chains cut at 4096 tags.** Onimusha sends each frame as one VIF1 chain of about 15000 tags (`ps2_memory.cpp`, `kMaxChainTags`). The ground starts at tag 4312, characters at 9296, Soki at 10491. Found by walking the chain from VIF1 TADR in the PCSX2 savestate RAM (`scripts/walk.py`).
2. **Camera matrix workaround removed.** The matrix UNPACK at VU1 0x3f0 used to arrive with a stale STCYCL 4,1. That was a symptom of the cut chains. `PS2X_VIF_MATRIX_FIX=1` restores the old workaround.
3. **V4-5 unpack.** RGBA5551 must expand to 8 bits: R, G, B shifted left by 3, A to 0 or 0x80. The skinning microprogram reads two bone weights as V4-5 and scales them by 1/248 (`LOI 0x3b842108`, `MULi.w vf31`). Without the shift blended vertices collapsed towards the origin.
4. **XYZF fog.** XYZF2/XYZF3 now set the fog value for later XYZ2 vertices. The game never writes the FOG register. Visual effect not confirmed.
5. **VU1 ahead of time translation.** All nine Stage 1 micro images are lifted to C++ (`tools/vu1lift`, based on Gitaroo Man Native's MIT lifter). About 3.5 million runs under `PS2X_VU1_VERIFY=1` without a mismatch.

### Stage 1 character textures

The Disc 1 libgraph routine `sceGsExecLoadImage` at `0x1039b8` sends the six-qword header on GIF DMA channel 2 and then sends the caller's pixel buffer on the same channel. The old runtime combined the two in a guest-heap allocation. Disc 1 sets up a 32 KiB heap at `0x936700` during startup. A 32 KiB image plus its 96-byte header already exceeds the whole heap. The stub returned `-1` before starting DMA, explaining both the missing transfers and the absence of hardware polling. Small textures and palettes still fitted. For example, `0x25c0` holds a 128×256 PSMT8 texture (32 KiB), and `0x2640` and `0x2740` each hold a 256×256 PSMT8 texture (64 KiB).

The runtime now sends both buffers from their existing addresses. PATH3 tracks how many image qwords the header announced so the next DMA can supply the pixels. The regression test uploads the 32 KiB and 64 KiB examples with the original heap size, checks each texel in GS memory and checks that the guest heap stayed intact.

**Stage 1 replay.** Twelve large texture ranges were zero in the port's capture. To test the upload independently of the game loader, we recovered their pixels from the PCSX2 street dump and passed each texture through the recompiled game's upload routine at `0x1341c0`. It constructs the header at `0x6b0d70`, calls `sceGsExecLoadImage` at `0x134244` and calls `sceGsSyncPath` without checking the upload's return value. We also reuploaded the known-good 16 KiB texture at `0x3d60`. On `e246fae` only the small control arrived. With the fix all 13 GS texture ranges matched the reference byte for byte. Replaying the port's same 7,624 GIF packets on both versions showed Soki's blue armour and red sword and restored the enemy textures in both the CPU and OpenGL backends. OpenGL used Mesa llvmpipe on Linux. A fresh boot into Stage 1 on Windows is still to be verified.

**Earlier observations.** The texture, CLUT and vertex ST/Q previously compared at `0x3d60` already matched PCSX2. That texture is the small control. The PCSX2 and port captures come from different moments, so individual vertex colours can differ. The replay held all vertex inputs fixed. `PS2X_DMA_START_LOG`, `PS2X_IO_READ_LOG` and the GS transfer-range logs documented the pre-fix behaviour. The VIF1 DIRECT and PATH2 continuation fixes were not exercised by these PATH3 uploads.

### Open problem: speed in 3D

Stage 1 runs at 19 to 25 of 60. VU1 is mostly lifted now. On the Linux server (2 cores, software OpenGL) the profile is dominated by llvmpipe and is not representative. The next Windows log with the new `[speed]` timing line will show whether the GS backend, the IOP or the game code dominates.

## Files

### `pcsx2/` (reference, made with PCSX2 on the user's PC)

| File | What it is |
| --- | --- |
| `stage1_soki_closeup.gs.zst` | PCSX2 single frame GS dump, camera close behind Soki |
| `stage1_soki_closeup.png` | PCSX2 screenshot of that frame |
| `stage1_street.gs.zst` | PCSX2 single frame GS dump of the Stage 1 street with the tower and the giant |
| `stage1_street.png` | screenshot of that frame |
| `stage1_street_savestate.p2s` | PCSX2 savestate at the street. A zip whose entries are zstd compressed (method 93): eeMemory.bin, vu1Memory.bin, vu1MicroMem.bin, eeHwRegs.bin and more |

GS dump format: u32 0xFFFFFFFF, u32 header size, header (state_version, state_size, serial offset and size, crc, screenshot size and offset), then the GS state (registers, then 4 MiB GS memory), then 8192 bytes of privileged registers, then packets: type 0 transfer (u8 path, u32 size, data), type 1 VSync (u8), type 2 ReadFIFO (u32), type 3 registers (8192 bytes). `tools/gsdump/parse.py` reads it.

### `ours/` (our port at the same place, Linux server build)

| File | What it is |
| --- | --- |
| `gif_frame_stage1.bin.zst` | every GIF packet of about two frames in Stage 1, records of u32 size plus bytes (`PS2X_GIF_DUMP`) |
| `eeram_stage1.bin.zst` | 32 MiB EE RAM in Stage 1 (`PS2X_RAM_DUMP`) |
| `gsvram_stage1.bin.zst` | 4 MiB GS memory at the same moment |
| `vu1_dumps/vu1dump_N.bin` | 40 snapshots at MSCNT of the skinning image: 16 KiB VU1 data, 16 VI (int32), TOP, ITOP, PC, then 32 VF (4 floats each) (`PS2X_VU1_DUMP_IMAGE`) |
| `census_run1`, `census_run2` | VU1 census runs: micro images and their entry points, cycles and JR targets. Run 1 is from before the chain fix (3 images), run 2 after it (9 images) |
| `screenshots/` | our Stage 1 after the V4-5 fix, with the fog fix, and without the matrix workaround |

### `scripts/`

* `walk.py`: walks a DMA chain in an EE RAM image
* `vua.py`: reads the VU1 dumps (vertex layout of the skinning program: 4 qwords per vertex; q0 position with bone A pointer in w, q1 normal with bone B pointer in w, q2 ST, q3 V4-5 weights)
* `soki.py`: pulls one texture's vertices out of a GIF stream for vertex by vertex comparison
* `../tools/gsdump/`: GS dump parser, GIF tag walker, draw and tag statistics, comparison of a PCSX2 dump with our GIF dump

## Diagnostics in the runtime (environment variables)

| Variable | Effect |
| --- | --- |
| `PS2X_GIF_DUMP=<n>` | every n VBlanks write the next frame's GIF packets to /tmp/gifdump_<vblank>.bin |
| `PS2X_RAM_DUMP=<n>` | every n VBlanks write EE RAM and GS memory to /tmp |
| `PS2X_VU1_CENSUS=<dir>` | record micro images, entries and JR targets for the lifter |
| `PS2X_VU1_VERIFY=1` | run lifted VU1 code and the interpreter side by side and report differences |
| `PS2X_VU1_LIFT=0` | interpreter only |
| `PS2X_VU1_DUMP_IMAGE=<bin>` | VU1 snapshots at MSCNT when the loaded code starts like that image |
| `PS2X_GS_RENDERER=cpu` | CPU renderer instead of OpenGL |
| `PS2X_GS_ZALWAYS`, `PS2X_GS_NOATEST`, `PS2X_GS_NOFOG` | turn off the depth test, alpha test or fog |
| `PS2X_GS_TRX_LOG`, `PS2X_GS_FOG_LOG` | log transfers into the character CLUT area, FOG writes |
| `PS2X_GIF_PATH_LOG`, `PS2X_VIF1_TADR_LOG`, `PS2X_VIF_UNPACK_STATS`, `PS2X_VIF_IRQ_LOG` | GIF path counters, VIF1 chain starts, unpack format histogram, VIF IRQs |
| `PS2X_VIF_MATRIX_FIX=1` | old camera matrix workaround |

## Things that are known not to be the cause of the dark characters

* VU0 micro mode: never used (no VCALLMS).
* VIF IRQ and DMAC interrupt handlers: not used in Stage 1.
* PATH2 IMAGE continuation and the scratchpad bit in DMA tags: never hit in Stage 1.
* VU1 microcode: identical to PCSX2's micro memory (the rest is NOP fill).
* Model data: loaded at the same addresses as in PCSX2.

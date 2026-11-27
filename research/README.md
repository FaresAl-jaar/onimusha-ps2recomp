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

### Open problem 1: characters are very dark

Soki and the enemies have the right shape but render almost black, in both the GPU and the CPU renderer (CPU slightly brighter, Soki's head and highlights visible).

Verified equal to PCSX2:

* TEX0 of Soki's batches (for example `0x2003c681dd30bd60`: PSMT8, CSM1 CLUT, CLD 1).
* CLUT and texture bytes in GS memory (compare `ours/gsvram_stage1.bin.zst` with the GS memory inside `pcsx2/stage1_soki_closeup.gs.zst`; in the PCSX2 GS dump state the 4 MiB memory starts at `state_size - 4 MiB - 84`).
* S, T and Q of every vertex of a Soki batch (TBP 0x3d60) compared vertex by vertex.

Different from PCSX2:

* Vertex colours. PCSX2 gives values like (165,169,164); ours often exactly (72,77,77). That is the ambient term alone. The skinning program (`ours/census_run2/vu1_b2e94bcee0f3b344.bin`, 34 percent of VU1 cycles) computes `colour = vf9 * max(N.L + 0.4, 0) + vf10 * 1 + ...` with vf5 to vf8 as the light matrix and vf9 to vf12 as light colours (vf10 = ambient 72.6, 77.6, 77.1).
* An offline evaluation of N.L + 0.4 on our VU1 data (`ours/vu1_dumps`, `scripts/vua.py`) gives values between about -0.2 and 0.96, so most vertices should be lit. Either the program computes something else than this simplified reading, or the colours are right and the darkness comes from the GS side. Note the PCSX2 dump and our dump are not the same moment, so per vertex lighting can legitimately differ.

Update 2026-11-27 (with Codex): the real cause is missing texture data. 152 pages of our GS memory (blocks 0x1ee0 to about 0x2800, the character textures, Soki's armour among them) are all zero while PCSX2 has data there. Replaying the PCSX2 dump with only those pages filled in makes Soki and the enemies coloured with the same draws and lighting. A full transfer log (`PS2X_GS_TRX_LOG=1 PS2X_GS_TRX_LO=0x1ee0 PS2X_GS_TRX_HI=0x2800`, uploads and local copies, each destination once) shows that in our whole run no transfer ever targets 0x1ee0 to 0x24c0; only 0x24e0, 0x2540, 0x2560 and 0x2580 arrive (around VBlank 8206 to 8237, during the Stage 1 load). So the EE never issues these uploads in our port: the cause is on the game side (texture manager, a load that silently fails, or game state), not in the GS backends.

Update 2026-11-27, later: how the uploads are sent. With `PS2X_DMA_START_LOG=1` every texture and CLUT upload in the Stage 1 load is a GIF DMA in normal mode from one bounce buffer at EE 0x00936700: qwc 70 for a 16x16 CT32 CLUT (64 data qwords plus 6 header qwords), qwc 518 for 128x128 T4, qwc 1030 for 128x128 T8 or 128x64 T8 pairs. The largest transfer ever seen is 1030 qwords. Uploads that arrive: 0x24e0, 0x2540, 0x2560, 0x2580, 0x2f40, 0x2f80, 0x3040 to 0x32e0, 0x39a0 to 0x3a00. Missing are exactly the next entries of each batch (0x25c0, 0x2640, 0x2740 after 0x2580; 0x3320 to 0x3620 after 0x32e0; 0x3a40 after 0x3a00), and their CLUTs do arrive. The missing ones are the larger textures (256 wide, about 4096 data qwords). So the open question is how the game sends a texture bigger than one bounce buffer load (several chunks? another path?) and why that never happens in our port: a DMA or GIF status the game polls between chunks (D2_CHCR STR, GIF_STAT, D_STAT CIS) is the first suspect. `PS2X_DMA_CHAIN_LOG` and `PS2X_VIF_DIRECT_LOG` exist as well; a DIRECT that runs past the end of a transfer now continues in the next one (never seen in Stage 1).

Older suggested next steps (before the update):

1. Replay `pcsx2/stage1_soki_closeup.gs.zst` through our GS backends (CPU and GPU) and compare with `pcsx2/stage1_soki_closeup.png`. Dark output means a GS problem, bright output means the problem is before the GS.
2. Run the full skinning program on one VU1 dump in isolation (our VU1 interpreter can be driven directly) and compare its XGKICK output with the vertex colours in our GIF dump.
3. Check TFX, TCC, TEXA, ALPHA and FBA for the character draws against the PCSX2 dump.

### Open problem 2: speed in 3D

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

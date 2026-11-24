#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023F368
// Address: 0x23f368 - 0x23f510
void sub_0023F368_0x23f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F368_0x23f368");
#endif

    switch (ctx->pc) {
        case 0x23f3b0u: goto label_23f3b0;
        case 0x23f3c0u: goto label_23f3c0;
        case 0x23f3c8u: goto label_23f3c8;
        case 0x23f3ecu: goto label_23f3ec;
        case 0x23f400u: goto label_23f400;
        case 0x23f408u: goto label_23f408;
        case 0x23f42cu: goto label_23f42c;
        case 0x23f4b0u: goto label_23f4b0;
        case 0x23f4ecu: goto label_23f4ec;
        default: break;
    }

    ctx->pc = 0x23f368u;

    // 0x23f368: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23f368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23f36c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x23f36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x23f370: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x23f370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x23f374: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23f374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f378: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x23f378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x23f37c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x23f37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x23f380: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x23f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x23f384: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x23f384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x23f388: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23f38c: 0x8e9301ac  lw          $s3, 0x1AC($s4)
    ctx->pc = 0x23f38cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 428)));
    // 0x23f390: 0x12600056  beqz        $s3, . + 4 + (0x56 << 2)
    ctx->pc = 0x23F390u;
    {
        const bool branch_taken_0x23f390 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F390u;
        // 0x23f394: 0x269101e4  addiu       $s1, $s4, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f390) {
            ctx->pc = 0x23F4ECu;
            goto label_23f4ec;
        }
    }
    ctx->pc = 0x23F398u;
    // 0x23f398: 0x3c150088  lui         $s5, 0x88
    ctx->pc = 0x23f398u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)136 << 16));
    // 0x23f39c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23f39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3a4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x23f3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23f3a8: 0xc049590  jal         func_125640
    ctx->pc = 0x23F3A8u;
    SET_GPR_U32(ctx, 31, 0x23F3B0u);
    ctx->pc = 0x23F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3A8u;
    // 0x23f3ac: 0x26b05af0  addiu       $s0, $s5, 0x5AF0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 23280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F3A8u, 0x23F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3B0u;
label_23f3b0:
    // 0x23f3b0: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x23f3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x23f3b4: 0x12120008  beq         $s0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F3B4u;
    {
        const bool branch_taken_0x23f3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x23F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3B4u;
        // 0x23f3b8: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3b4) {
            ctx->pc = 0x23F3D8u;
            goto label_23f3d8;
        }
    }
    ctx->pc = 0x23F3BCu;
    // 0x23f3bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23f3c0:
    // 0x23f3c0: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F3C0u;
    SET_GPR_U32(ctx, 31, 0x23F3C8u);
    ctx->pc = 0x23F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3C0u;
    // 0x23f3c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F3C0u, 0x23F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3C8u;
label_23f3c8:
    // 0x23f3c8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f3cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23f3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23f3d0: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F3D0u;
    {
        const bool branch_taken_0x23f3d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x23F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3D0u;
        // 0x23f3d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3d0) {
            ctx->pc = 0x23F3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f3c0;
        }
    }
    ctx->pc = 0x23F3D8u;
label_23f3d8:
    // 0x23f3d8: 0x26a45af0  addiu       $a0, $s5, 0x5AF0
    ctx->pc = 0x23f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 23280));
    // 0x23f3dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23f3e0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x23f3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23f3e4: 0xc08c85a  jal         func_232168
    ctx->pc = 0x23F3E4u;
    SET_GPR_U32(ctx, 31, 0x23F3ECu);
    ctx->pc = 0x23F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3E4u;
    // 0x23f3e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232168u, 0x23F3E4u, 0x23F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3ECu;
label_23f3ec:
    // 0x23f3ec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x23f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f3f0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x23f3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x23f3f4: 0x12120009  beq         $s0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F3F4u;
    {
        const bool branch_taken_0x23f3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x23F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3F4u;
        // 0x23f3f8: 0x26a45af0  addiu       $a0, $s5, 0x5AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 23280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3f4) {
            ctx->pc = 0x23F41Cu;
            goto label_23f41c;
        }
    }
    ctx->pc = 0x23F3FCu;
    // 0x23f3fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23f400:
    // 0x23f400: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23F400u;
    SET_GPR_U32(ctx, 31, 0x23F408u);
    ctx->pc = 0x23F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F400u;
    // 0x23f404: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23F400u, 0x23F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F408u;
label_23f408:
    // 0x23f408: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f40c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23f40cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23f410: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23F410u;
    {
        const bool branch_taken_0x23f410 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x23F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F410u;
        // 0x23f414: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f410) {
            ctx->pc = 0x23F400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f400;
        }
    }
    ctx->pc = 0x23F418u;
    // 0x23f418: 0x26a45af0  addiu       $a0, $s5, 0x5AF0
    ctx->pc = 0x23f418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 23280));
label_23f41c:
    // 0x23f41c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x23f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x23f420: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x23f420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23f424: 0xc08c85a  jal         func_232168
    ctx->pc = 0x23F424u;
    SET_GPR_U32(ctx, 31, 0x23F42Cu);
    ctx->pc = 0x23F428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F424u;
    // 0x23f428: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232168u, 0x23F424u, 0x23F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F42Cu;
label_23f42c:
    // 0x23f42c: 0x440002f  bltz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x23F42Cu;
    {
        const bool branch_taken_0x23f42c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x23F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F42Cu;
        // 0x23f430: 0x83a7003d  lb          $a3, 0x3D($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f42c) {
            ctx->pc = 0x23F4ECu;
            goto label_23f4ec;
        }
    }
    ctx->pc = 0x23F434u;
    // 0x23f434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23f434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f438: 0x83a30003  lb          $v1, 0x3($sp)
    ctx->pc = 0x23f438u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x23f43c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23f440: 0x28e50010  slti        $a1, $a3, 0x10
    ctx->pc = 0x23f440u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23f444: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x23f444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f448: 0x6ba8002b  ldl         $t0, 0x2B($sp)
    ctx->pc = 0x23f448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x23f44c: 0x6fa80024  ldr         $t0, 0x24($sp)
    ctx->pc = 0x23f44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x23f450: 0x8ba9002f  lwl         $t1, 0x2F($sp)
    ctx->pc = 0x23f450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x23f454: 0x9ba9002c  lwr         $t1, 0x2C($sp)
    ctx->pc = 0x23f454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x23f458: 0xb2280023  sdl         $t0, 0x23($s1)
    ctx->pc = 0x23f458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f45c: 0xb628001c  sdr         $t0, 0x1C($s1)
    ctx->pc = 0x23f45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f460: 0xaa290027  swl         $t1, 0x27($s1)
    ctx->pc = 0x23f460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x23f464: 0xba290024  swr         $t1, 0x24($s1)
    ctx->pc = 0x23f464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x23f468: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x23f468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x23f46c: 0x6ba80037  ldl         $t0, 0x37($sp)
    ctx->pc = 0x23f46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x23f470: 0x6fa80030  ldr         $t0, 0x30($sp)
    ctx->pc = 0x23f470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x23f474: 0x8ba9003b  lwl         $t1, 0x3B($sp)
    ctx->pc = 0x23f474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 59); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x23f478: 0x9ba90038  lwr         $t1, 0x38($sp)
    ctx->pc = 0x23f478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x23f47c: 0xb228002f  sdl         $t0, 0x2F($s1)
    ctx->pc = 0x23f47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f480: 0xb6280028  sdr         $t0, 0x28($s1)
    ctx->pc = 0x23f480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f484: 0xaa290033  swl         $t1, 0x33($s1)
    ctx->pc = 0x23f484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x23f488: 0xba290030  swr         $t1, 0x30($s1)
    ctx->pc = 0x23f488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x23f48c: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x23f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x23f490: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23f490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x23f494: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F494u;
    {
        const bool branch_taken_0x23f494 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F494u;
        // 0x23f498: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f494) {
            ctx->pc = 0x23F4B8u;
            goto label_23f4b8;
        }
    }
    ctx->pc = 0x23F49Cu;
    // 0x23f49c: 0xa6200034  sh          $zero, 0x34($s1)
    ctx->pc = 0x23f49cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x23f4a0: 0x2626003a  addiu       $a2, $s1, 0x3A
    ctx->pc = 0x23f4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 58));
    // 0x23f4a4: 0x26240036  addiu       $a0, $s1, 0x36
    ctx->pc = 0x23f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
    // 0x23f4a8: 0xc08fc18  jal         func_23F060
    ctx->pc = 0x23F4A8u;
    SET_GPR_U32(ctx, 31, 0x23F4B0u);
    ctx->pc = 0x23F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4A8u;
    // 0x23f4ac: 0x26250038  addiu       $a1, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F060u, 0x23F4A8u, 0x23F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4B0u;
label_23f4b0:
    // 0x23f4b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23F4B0u;
    {
        const bool branch_taken_0x23f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4B0u;
        // 0x23f4b4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4b0) {
            ctx->pc = 0x23F4F0u;
            goto label_23f4f0;
        }
    }
    ctx->pc = 0x23F4B8u;
label_23f4b8:
    // 0x23f4b8: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x23f4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x23f4bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F4BCu;
    {
        const bool branch_taken_0x23f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4BCu;
        // 0x23f4c0: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4bc) {
            ctx->pc = 0x23F4E0u;
            goto label_23f4e0;
        }
    }
    ctx->pc = 0x23F4C4u;
    // 0x23f4c4: 0x6a820a27  ldl         $v0, 0xA27($s4)
    ctx->pc = 0x23f4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 2599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x23f4c8: 0x6e820a20  ldr         $v0, 0xA20($s4)
    ctx->pc = 0x23f4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 2592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x23f4cc: 0xb222003b  sdl         $v0, 0x3B($s1)
    ctx->pc = 0x23f4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f4d0: 0xb6220034  sdr         $v0, 0x34($s1)
    ctx->pc = 0x23f4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f4d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23F4D4u;
    {
        const bool branch_taken_0x23f4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4D4u;
        // 0x23f4d8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4d4) {
            ctx->pc = 0x23F4F0u;
            goto label_23f4f0;
        }
    }
    ctx->pc = 0x23F4DCu;
    // 0x23f4dc: 0x0  nop
    ctx->pc = 0x23f4dcu;
    // NOP
label_23f4e0:
    // 0x23f4e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f4e4: 0xc049590  jal         func_125640
    ctx->pc = 0x23F4E4u;
    SET_GPR_U32(ctx, 31, 0x23F4ECu);
    ctx->pc = 0x23F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4E4u;
    // 0x23f4e8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F4E4u, 0x23F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4ECu;
label_23f4ec:
    // 0x23f4ec: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x23f4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23f4f0:
    // 0x23f4f0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x23f4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23f4f4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x23f4f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f4f8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x23f4f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f4fc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x23f4fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f500: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x23f500u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23f504: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23f504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f508: 0x3e00008  jr          $ra
    ctx->pc = 0x23F508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F508u;
        // 0x23f50c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F510u;
}

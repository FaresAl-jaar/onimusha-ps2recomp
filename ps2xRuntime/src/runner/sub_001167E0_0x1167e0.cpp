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

// Function: sub_001167E0
// Address: 0x1167e0 - 0x1168e0
void sub_001167E0_0x1167e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001167E0_0x1167e0");
#endif

    switch (ctx->pc) {
        case 0x116808u: goto label_116808;
        case 0x11681cu: goto label_11681c;
        case 0x116860u: goto label_116860;
        case 0x1168a0u: goto label_1168a0;
        default: break;
    }

    ctx->pc = 0x1167e0u;

    // 0x1167e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1167e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1167e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1167e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1167e8: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1167e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1167ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1167ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1167f0: 0x8e422b60  lw          $v0, 0x2B60($s2)
    ctx->pc = 0x1167f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B60u));
    // 0x1167f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1167f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1167f8: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1167F8u;
    {
        const bool branch_taken_0x1167f8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1167FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167F8u;
        // 0x1167fc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167f8) {
            ctx->pc = 0x1168C4u;
            goto label_1168c4;
        }
    }
    ctx->pc = 0x116800u;
    // 0x116800: 0x3c110069  lui         $s1, 0x69
    ctx->pc = 0x116800u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
    // 0x116804: 0x26300840  addiu       $s0, $s1, 0x840
    ctx->pc = 0x116804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_116808:
    // 0x116808: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x116808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11680c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116810: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x116810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x116814: 0xc044752  jal         func_111D48
    ctx->pc = 0x116814u;
    SET_GPR_U32(ctx, 31, 0x11681Cu);
    ctx->pc = 0x116818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116814u;
    // 0x116818: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x116814u, 0x11681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11681Cu;
label_11681c:
    // 0x11681c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11681Cu;
    {
        const bool branch_taken_0x11681c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x11681c) {
            ctx->pc = 0x116820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11681Cu;
            // 0x116820: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11682Cu;
            goto label_11682c;
        }
    }
    ctx->pc = 0x116824u;
    // 0x116824: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x116824u;
    {
        const bool branch_taken_0x116824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116824u;
        // 0x116828: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116824) {
            ctx->pc = 0x1168C8u;
            goto label_1168c8;
        }
    }
    ctx->pc = 0x11682Cu;
label_11682c:
    // 0x11682c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11682Cu;
    {
        const bool branch_taken_0x11682c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11682Cu;
        // 0x116830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11682c) {
            ctx->pc = 0x116894u;
            goto label_116894;
        }
    }
    ctx->pc = 0x116834u;
    // 0x116834: 0x3c110069  lui         $s1, 0x69
    ctx->pc = 0x116834u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
    // 0x116838: 0xae402b60  sw          $zero, 0x2B60($s2)
    ctx->pc = 0x116838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11104), GPR_U32(ctx, 0));
    // 0x11683c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11683cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116840: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x116840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x116844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116848: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x116848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11684c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11684cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116850: 0x26290640  addiu       $t1, $s1, 0x640
    ctx->pc = 0x116850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x116854: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116854u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116858: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x116858u;
    SET_GPR_U32(ctx, 31, 0x116860u);
    ctx->pc = 0x11685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116858u;
    // 0x11685c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x116858u, 0x116860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116860u;
label_116860:
    // 0x116860: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116860u;
    {
        const bool branch_taken_0x116860 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x116864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116860u;
        // 0x116864: 0x3c030069  lui         $v1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116860) {
            ctx->pc = 0x116874u;
            goto label_116874;
        }
    }
    ctx->pc = 0x116868u;
    // 0x116868: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x11686c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11686Cu;
    {
        const bool branch_taken_0x11686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11686Cu;
        // 0x116870: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11686c) {
            ctx->pc = 0x1168C8u;
            goto label_1168c8;
        }
    }
    ctx->pc = 0x116874u;
label_116874:
    // 0x116874: 0x26270640  addiu       $a3, $s1, 0x640
    ctx->pc = 0x116874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x116878: 0x24660868  addiu       $a2, $v1, 0x868
    ctx->pc = 0x116878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2152));
    // 0x11687c: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x11687cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x116880: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x116880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x116884: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x116884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x116888: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x116888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11688c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11688Cu;
    {
        const bool branch_taken_0x11688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11688Cu;
        // 0x116890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11688c) {
            ctx->pc = 0x1168C8u;
            goto label_1168c8;
        }
    }
    ctx->pc = 0x116894u;
label_116894:
    // 0x116894: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x116894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x116898: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x116898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11689c: 0x0  nop
    ctx->pc = 0x11689cu;
    // NOP
label_1168a0:
    // 0x1168a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1168a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1168a4: 0x0  nop
    ctx->pc = 0x1168a4u;
    // NOP
    // 0x1168a8: 0x0  nop
    ctx->pc = 0x1168a8u;
    // NOP
    // 0x1168ac: 0x0  nop
    ctx->pc = 0x1168acu;
    // NOP
    // 0x1168b0: 0x0  nop
    ctx->pc = 0x1168b0u;
    // NOP
    // 0x1168b4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1168B4u;
    {
        const bool branch_taken_0x1168b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1168b4) {
            ctx->pc = 0x1168A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1168a0;
        }
    }
    ctx->pc = 0x1168BCu;
    // 0x1168bc: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1168BCu;
    {
        const bool branch_taken_0x1168bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1168C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168BCu;
        // 0x1168c0: 0x26300840  addiu       $s0, $s1, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168bc) {
            ctx->pc = 0x116808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116808;
        }
    }
    ctx->pc = 0x1168C4u;
label_1168c4:
    // 0x1168c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1168c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1168c8:
    // 0x1168c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1168c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1168cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1168ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1168d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1168d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1168d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1168d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1168d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1168D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1168DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168D8u;
        // 0x1168dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1168D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168E0u;
}

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

// Function: sub_0036A3C0
// Address: 0x36a3c0 - 0x36a498
void sub_0036A3C0_0x36a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A3C0_0x36a3c0");
#endif

    switch (ctx->pc) {
        case 0x36a3f8u: goto label_36a3f8;
        case 0x36a408u: goto label_36a408;
        case 0x36a41cu: goto label_36a41c;
        case 0x36a448u: goto label_36a448;
        case 0x36a454u: goto label_36a454;
        case 0x36a470u: goto label_36a470;
        case 0x36a480u: goto label_36a480;
        default: break;
    }

    ctx->pc = 0x36a3c0u;

    // 0x36a3c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36a3c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36a3c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36a3cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a3d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a3d4: 0x90822b2a  lbu         $v0, 0x2B2A($a0)
    ctx->pc = 0x36a3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11050)));
    // 0x36a3d8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x36A3D8u;
    {
        const bool branch_taken_0x36a3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3D8u;
        // 0x36a3dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a3d8) {
            ctx->pc = 0x36A478u;
            goto label_36a478;
        }
    }
    ctx->pc = 0x36A3E0u;
    // 0x36a3e0: 0x92032b28  lbu         $v1, 0x2B28($s0)
    ctx->pc = 0x36a3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x36a3e4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x36a3e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36a3e8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x36A3E8u;
    {
        const bool branch_taken_0x36a3e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3E8u;
        // 0x36a3ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a3e8) {
            ctx->pc = 0x36A438u;
            goto label_36a438;
        }
    }
    ctx->pc = 0x36A3F0u;
    // 0x36a3f0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x36a3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3f4: 0x0  nop
    ctx->pc = 0x36a3f4u;
    // NOP
label_36a3f8:
    // 0x36a3f8: 0x8e252b3c  lw          $a1, 0x2B3C($s1)
    ctx->pc = 0x36a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11068)));
    // 0x36a3fc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x36a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x36a400: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x36A400u;
    SET_GPR_U32(ctx, 31, 0x36A408u);
    ctx->pc = 0x36A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A400u;
    // 0x36a404: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x36A400u, 0x36A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A408u;
label_36a408:
    // 0x36a408: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36A408u;
    {
        const bool branch_taken_0x36a408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a408) {
            ctx->pc = 0x36A420u;
            goto label_36a420;
        }
    }
    ctx->pc = 0x36A410u;
    // 0x36a410: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x36a410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x36a414: 0xc0da7f0  jal         func_369FC0
    ctx->pc = 0x36A414u;
    SET_GPR_U32(ctx, 31, 0x36A41Cu);
    ctx->pc = 0x36A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A414u;
    // 0x36a418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369FC0u, 0x36A414u, 0x36A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A41Cu;
label_36a41c:
    // 0x36a41c: 0x0  nop
    ctx->pc = 0x36a41cu;
    // NOP
label_36a420:
    // 0x36a420: 0x92032b28  lbu         $v1, 0x2B28($s0)
    ctx->pc = 0x36a420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x36a424: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36a424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36a428: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x36a428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36a42c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x36A42Cu;
    {
        const bool branch_taken_0x36a42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A42Cu;
        // 0x36a430: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a42c) {
            ctx->pc = 0x36A3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a3f8;
        }
    }
    ctx->pc = 0x36A434u;
    // 0x36a434: 0x0  nop
    ctx->pc = 0x36a434u;
    // NOP
label_36a438:
    // 0x36a438: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x36a438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36a43c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x36A43Cu;
    {
        const bool branch_taken_0x36a43c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A43Cu;
        // 0x36a440: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a43c) {
            ctx->pc = 0x36A468u;
            goto label_36a468;
        }
    }
    ctx->pc = 0x36A444u;
    // 0x36a444: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36a444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36a448:
    // 0x36a448: 0x8e452b3c  lw          $a1, 0x2B3C($s2)
    ctx->pc = 0x36a448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11068)));
    // 0x36a44c: 0xc0da7f0  jal         func_369FC0
    ctx->pc = 0x36A44Cu;
    SET_GPR_U32(ctx, 31, 0x36A454u);
    ctx->pc = 0x36A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A44Cu;
    // 0x36a450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369FC0u, 0x36A44Cu, 0x36A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A454u;
label_36a454:
    // 0x36a454: 0x92022b28  lbu         $v0, 0x2B28($s0)
    ctx->pc = 0x36a454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x36a458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36a458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36a45c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x36a45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36a460: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x36A460u;
    {
        const bool branch_taken_0x36a460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A460u;
        // 0x36a464: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a460) {
            ctx->pc = 0x36A448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a448;
        }
    }
    ctx->pc = 0x36A468u;
label_36a468:
    // 0x36a468: 0xc0da6e8  jal         func_369BA0
    ctx->pc = 0x36A468u;
    SET_GPR_U32(ctx, 31, 0x36A470u);
    ctx->pc = 0x36A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A468u;
    // 0x36a46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369BA0u, 0x36A468u, 0x36A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A470u;
label_36a470:
    // 0x36a470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36a470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a474: 0xa2022b2a  sb          $v0, 0x2B2A($s0)
    ctx->pc = 0x36a474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11050), (uint8_t)GPR_U32(ctx, 2));
label_36a478:
    // 0x36a478: 0xc0a4d18  jal         func_293460
    ctx->pc = 0x36A478u;
    SET_GPR_U32(ctx, 31, 0x36A480u);
    ctx->pc = 0x36A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A478u;
    // 0x36a47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293460u, 0x36A478u, 0x36A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A480u;
label_36a480:
    // 0x36a480: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36a480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36a484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a48c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a490: 0x3e00008  jr          $ra
    ctx->pc = 0x36A490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A490u;
        // 0x36a494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A498u;
}

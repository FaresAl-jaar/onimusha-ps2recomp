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

// Function: sub_00332840
// Address: 0x332840 - 0x3328c4
void sub_00332840_0x332840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332840_0x332840");
#endif

    switch (ctx->pc) {
        case 0x332878u: goto label_332878;
        case 0x332888u: goto label_332888;
        default: break;
    }

    ctx->pc = 0x332840u;

    // 0x332840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x332844: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x332844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x332848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x332848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33284c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x332850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x332854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x332854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x332858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x332858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33285c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33285Cu;
    {
        const bool branch_taken_0x33285c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x332860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33285Cu;
        // 0x332860: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33285c) {
            ctx->pc = 0x332870u;
            goto label_332870;
        }
    }
    ctx->pc = 0x332864u;
    // 0x332864: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x332864u;
    {
        const bool branch_taken_0x332864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332864u;
        // 0x332868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332864) {
            ctx->pc = 0x3328B0u;
            goto label_3328b0;
        }
    }
    ctx->pc = 0x33286Cu;
    // 0x33286c: 0x0  nop
    ctx->pc = 0x33286cu;
    // NOP
label_332870:
    // 0x332870: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x332870u;
    SET_GPR_U32(ctx, 31, 0x332878u);
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x332870u, 0x332878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332878u;
label_332878:
    // 0x332878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x332878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33287c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332880: 0xc0cc9ec  jal         func_3327B0
    ctx->pc = 0x332880u;
    SET_GPR_U32(ctx, 31, 0x332888u);
    ctx->pc = 0x332884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332880u;
    // 0x332884: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3327B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3327B0u, 0x332880u, 0x332888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332888u;
label_332888:
    // 0x332888: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x332888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33288c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33288cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x332890: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x332890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x332894: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x332894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x332898: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x332898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33289c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x33289cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x3328a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3328A0u;
    {
        const bool branch_taken_0x3328a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3328a0) {
            ctx->pc = 0x3328B0u;
            goto label_3328b0;
        }
    }
    ctx->pc = 0x3328A8u;
    // 0x3328a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3328A8u;
    {
        const bool branch_taken_0x3328a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3328ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3328A8u;
        // 0x3328ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3328a8) {
            ctx->pc = 0x3328B0u;
            goto label_3328b0;
        }
    }
    ctx->pc = 0x3328B0u;
label_3328b0:
    // 0x3328b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3328b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3328b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3328b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3328b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3328b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3328bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3328BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3328C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3328BCu;
        // 0x3328c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3328BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3328C4u;
}

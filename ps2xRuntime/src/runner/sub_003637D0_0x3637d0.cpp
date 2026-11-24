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

// Function: sub_003637D0
// Address: 0x3637d0 - 0x36387c
void sub_003637D0_0x3637d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003637D0_0x3637d0");
#endif

    switch (ctx->pc) {
        case 0x363818u: goto label_363818;
        case 0x363840u: goto label_363840;
        case 0x363858u: goto label_363858;
        default: break;
    }

    ctx->pc = 0x3637d0u;

    // 0x3637d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3637d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3637d4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3637d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3637d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3637d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3637dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3637dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3637e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3637e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3637e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3637e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3637e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3637E8u;
    {
        const bool branch_taken_0x3637e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3637ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637E8u;
        // 0x3637ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3637e8) {
            ctx->pc = 0x3637F8u;
            goto label_3637f8;
        }
    }
    ctx->pc = 0x3637F0u;
    // 0x3637f0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3637f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3637f4: 0x94306ac4  lhu         $s0, 0x6AC4($at)
    ctx->pc = 0x3637f4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)FAST_READ16(0x7E6AC4u));
label_3637f8:
    // 0x3637f8: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3637f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3637fc: 0x8c22c0f4  lw          $v0, -0x3F0C($at)
    ctx->pc = 0x3637fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x91C0F4u));
    // 0x363800: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363800u;
    {
        const bool branch_taken_0x363800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363800u;
        // 0x363804: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363800) {
            ctx->pc = 0x363810u;
            goto label_363810;
        }
    }
    ctx->pc = 0x363808u;
    // 0x363808: 0x36220008  ori         $v0, $s1, 0x8
    ctx->pc = 0x363808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x36380c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x36380cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_363810:
    // 0x363810: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x363810u;
    SET_GPR_U32(ctx, 31, 0x363818u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x363810u, 0x363818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363818u;
label_363818:
    // 0x363818: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x363818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36381c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36381cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x363820: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x363820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x363824: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x363824u;
    {
        const bool branch_taken_0x363824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x363824) {
            ctx->pc = 0x363838u;
            goto label_363838;
        }
    }
    ctx->pc = 0x36382Cu;
    // 0x36382c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36382Cu;
    {
        const bool branch_taken_0x36382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36382Cu;
        // 0x363830: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36382c) {
            ctx->pc = 0x363868u;
            goto label_363868;
        }
    }
    ctx->pc = 0x363834u;
    // 0x363834: 0x0  nop
    ctx->pc = 0x363834u;
    // NOP
label_363838:
    // 0x363838: 0xc0d8d30  jal         func_3634C0
    ctx->pc = 0x363838u;
    SET_GPR_U32(ctx, 31, 0x363840u);
    ctx->pc = 0x36383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363838u;
    // 0x36383c: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3634C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3634C0u, 0x363838u, 0x363840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363840u;
label_363840:
    // 0x363840: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x363840u;
    {
        const bool branch_taken_0x363840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363840) {
            ctx->pc = 0x363850u;
            goto label_363850;
        }
    }
    ctx->pc = 0x363848u;
    // 0x363848: 0x36220004  ori         $v0, $s1, 0x4
    ctx->pc = 0x363848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x36384c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x36384cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_363850:
    // 0x363850: 0xc0d8d48  jal         func_363520
    ctx->pc = 0x363850u;
    SET_GPR_U32(ctx, 31, 0x363858u);
    ctx->pc = 0x363854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363850u;
    // 0x363854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363520u, 0x363850u, 0x363858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363858u;
label_363858:
    // 0x363858: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x363858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36385c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x36385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x363860: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x363860u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363864: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x363864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_363868:
    // 0x363868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x363868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36386c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36386cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363874: 0x3e00008  jr          $ra
    ctx->pc = 0x363874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363874u;
        // 0x363878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36387Cu;
}

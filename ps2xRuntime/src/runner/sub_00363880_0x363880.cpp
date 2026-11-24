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

// Function: sub_00363880
// Address: 0x363880 - 0x36391c
void sub_00363880_0x363880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363880_0x363880");
#endif

    switch (ctx->pc) {
        case 0x3638a8u: goto label_3638a8;
        case 0x3638b8u: goto label_3638b8;
        default: break;
    }

    ctx->pc = 0x363880u;

    // 0x363880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x363880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x363884: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x363884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363888: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x363888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36388c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x363890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x363894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363898: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x363898u;
    {
        const bool branch_taken_0x363898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x36389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363898u;
        // 0x36389c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363898) {
            ctx->pc = 0x3638B0u;
            goto label_3638b0;
        }
    }
    ctx->pc = 0x3638A0u;
    // 0x3638a0: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x3638A0u;
    SET_GPR_U32(ctx, 31, 0x3638A8u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x3638A0u, 0x3638A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3638A8u;
label_3638a8:
    // 0x3638a8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x3638a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3638ac: 0x0  nop
    ctx->pc = 0x3638acu;
    // NOP
label_3638b0:
    // 0x3638b0: 0xc0d8e60  jal         func_363980
    ctx->pc = 0x3638B0u;
    SET_GPR_U32(ctx, 31, 0x3638B8u);
    ctx->pc = 0x3638B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3638B0u;
    // 0x3638b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363980u, 0x3638B0u, 0x3638B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3638B8u;
label_3638b8:
    // 0x3638b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3638B8u;
    {
        const bool branch_taken_0x3638b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3638b8) {
            ctx->pc = 0x3638C8u;
            goto label_3638c8;
        }
    }
    ctx->pc = 0x3638C0u;
    // 0x3638c0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3638c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3638c4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x3638c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3638c8:
    // 0x3638c8: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3638c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3638cc: 0x8c22c0f0  lw          $v0, -0x3F10($at)
    ctx->pc = 0x3638ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x91C0F0u));
    // 0x3638d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3638d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3638d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3638d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3638d8: 0x28420015  slti        $v0, $v0, 0x15
    ctx->pc = 0x3638d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x3638dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3638DCu;
    {
        const bool branch_taken_0x3638dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3638E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3638DCu;
        // 0x3638e0: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3638dc) {
            ctx->pc = 0x3638F8u;
            goto label_3638f8;
        }
    }
    ctx->pc = 0x3638E4u;
    // 0x3638e4: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3638e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3638e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3638E8u;
    {
        const bool branch_taken_0x3638e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3638e8) {
            ctx->pc = 0x3638F8u;
            goto label_3638f8;
        }
    }
    ctx->pc = 0x3638F0u;
    // 0x3638f0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3638f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3638f4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x3638f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3638f8:
    // 0x3638f8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3638f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3638fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3638fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x363904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363908: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x363908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x36390c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36390cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363910: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x363910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363914: 0x3e00008  jr          $ra
    ctx->pc = 0x363914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363914u;
        // 0x363918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36391Cu;
}

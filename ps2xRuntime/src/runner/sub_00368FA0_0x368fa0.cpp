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

// Function: sub_00368FA0
// Address: 0x368fa0 - 0x36904c
void sub_00368FA0_0x368fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368FA0_0x368fa0");
#endif

    switch (ctx->pc) {
        case 0x368ff0u: goto label_368ff0;
        case 0x369000u: goto label_369000;
        case 0x369010u: goto label_369010;
        case 0x369020u: goto label_369020;
        case 0x369030u: goto label_369030;
        case 0x369040u: goto label_369040;
        default: break;
    }

    ctx->pc = 0x368fa0u;

    // 0x368fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368fa4: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x368fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x368fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368fac: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x368facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x368fb0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x368FB0u;
    {
        const bool branch_taken_0x368fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x368FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FB0u;
        // 0x368fb4: 0x24020087  addiu       $v0, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368fb0) {
            ctx->pc = 0x369028u;
            goto label_369028;
        }
    }
    ctx->pc = 0x368FB8u;
    // 0x368fb8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x368FB8u;
    {
        const bool branch_taken_0x368fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368fb8) {
            ctx->pc = 0x369018u;
            goto label_369018;
        }
    }
    ctx->pc = 0x368FC0u;
    // 0x368fc0: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x368fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x368fc4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x368FC4u;
    {
        const bool branch_taken_0x368fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x368FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FC4u;
        // 0x368fc8: 0x24020085  addiu       $v0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368fc4) {
            ctx->pc = 0x369008u;
            goto label_369008;
        }
    }
    ctx->pc = 0x368FCCu;
    // 0x368fcc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x368FCCu;
    {
        const bool branch_taken_0x368fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368fcc) {
            ctx->pc = 0x368FF8u;
            goto label_368ff8;
        }
    }
    ctx->pc = 0x368FD4u;
    // 0x368fd4: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x368fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x368fd8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368FD8u;
    {
        const bool branch_taken_0x368fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368fd8) {
            ctx->pc = 0x368FE8u;
            goto label_368fe8;
        }
    }
    ctx->pc = 0x368FE0u;
    // 0x368fe0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x368FE0u;
    {
        const bool branch_taken_0x368fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368fe0) {
            ctx->pc = 0x369038u;
            goto label_369038;
        }
    }
    ctx->pc = 0x368FE8u;
label_368fe8:
    // 0x368fe8: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x368FE8u;
    SET_GPR_U32(ctx, 31, 0x368FF0u);
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x368FE8u, 0x368FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368FF0u;
label_368ff0:
    // 0x368ff0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x368FF0u;
    {
        const bool branch_taken_0x368ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ff0) {
            ctx->pc = 0x369040u;
            goto label_369040;
        }
    }
    ctx->pc = 0x368FF8u;
label_368ff8:
    // 0x368ff8: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x368FF8u;
    SET_GPR_U32(ctx, 31, 0x369000u);
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x368FF8u, 0x369000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369000u;
label_369000:
    // 0x369000: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x369000u;
    {
        const bool branch_taken_0x369000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369000) {
            ctx->pc = 0x369040u;
            goto label_369040;
        }
    }
    ctx->pc = 0x369008u;
label_369008:
    // 0x369008: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x369008u;
    SET_GPR_U32(ctx, 31, 0x369010u);
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x369008u, 0x369010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369010u;
label_369010:
    // 0x369010: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x369010u;
    {
        const bool branch_taken_0x369010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369010) {
            ctx->pc = 0x369040u;
            goto label_369040;
        }
    }
    ctx->pc = 0x369018u;
label_369018:
    // 0x369018: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x369018u;
    SET_GPR_U32(ctx, 31, 0x369020u);
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x369018u, 0x369020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369020u;
label_369020:
    // 0x369020: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x369020u;
    {
        const bool branch_taken_0x369020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369020) {
            ctx->pc = 0x369040u;
            goto label_369040;
        }
    }
    ctx->pc = 0x369028u;
label_369028:
    // 0x369028: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x369028u;
    SET_GPR_U32(ctx, 31, 0x369030u);
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x369028u, 0x369030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369030u;
label_369030:
    // 0x369030: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x369030u;
    {
        const bool branch_taken_0x369030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369030) {
            ctx->pc = 0x369040u;
            goto label_369040;
        }
    }
    ctx->pc = 0x369038u;
label_369038:
    // 0x369038: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x369038u;
    SET_GPR_U32(ctx, 31, 0x369040u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x369038u, 0x369040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369040u;
label_369040:
    // 0x369040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369044: 0x3e00008  jr          $ra
    ctx->pc = 0x369044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369044u;
        // 0x369048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36904Cu;
}

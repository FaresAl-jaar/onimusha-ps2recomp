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

// Function: sub_002EEE60
// Address: 0x2eee60 - 0x2eeef4
void sub_002EEE60_0x2eee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEE60_0x2eee60");
#endif

    switch (ctx->pc) {
        case 0x2eeea8u: goto label_2eeea8;
        case 0x2eeeb8u: goto label_2eeeb8;
        case 0x2eeed8u: goto label_2eeed8;
        case 0x2eeee8u: goto label_2eeee8;
        default: break;
    }

    ctx->pc = 0x2eee60u;

    // 0x2eee60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eee64: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2eee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2eee68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eee6c: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x2eee6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2eee70: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EEE70u;
    {
        const bool branch_taken_0x2eee70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE70u;
        // 0x2eee74: 0x24020095  addiu       $v0, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee70) {
            ctx->pc = 0x2EEEB0u;
            goto label_2eeeb0;
        }
    }
    ctx->pc = 0x2EEE78u;
    // 0x2eee78: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EEE78u;
    {
        const bool branch_taken_0x2eee78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eee78) {
            ctx->pc = 0x2EEEB0u;
            goto label_2eeeb0;
        }
    }
    ctx->pc = 0x2EEE80u;
    // 0x2eee80: 0x24020094  addiu       $v0, $zero, 0x94
    ctx->pc = 0x2eee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2eee84: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EEE84u;
    {
        const bool branch_taken_0x2eee84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE84u;
        // 0x2eee88: 0x2402008a  addiu       $v0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee84) {
            ctx->pc = 0x2EEEB0u;
            goto label_2eeeb0;
        }
    }
    ctx->pc = 0x2EEE8Cu;
    // 0x2eee8c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEE8Cu;
    {
        const bool branch_taken_0x2eee8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eee8c) {
            ctx->pc = 0x2EEEA0u;
            goto label_2eeea0;
        }
    }
    ctx->pc = 0x2EEE94u;
    // 0x2eee94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EEE94u;
    {
        const bool branch_taken_0x2eee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eee94) {
            ctx->pc = 0x2EEEC0u;
            goto label_2eeec0;
        }
    }
    ctx->pc = 0x2EEE9Cu;
    // 0x2eee9c: 0x0  nop
    ctx->pc = 0x2eee9cu;
    // NOP
label_2eeea0:
    // 0x2eeea0: 0xc0bbbec  jal         func_2EEFB0
    ctx->pc = 0x2EEEA0u;
    SET_GPR_U32(ctx, 31, 0x2EEEA8u);
    ctx->pc = 0x2EEFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEFB0u, 0x2EEEA0u, 0x2EEEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEEA8u;
label_2eeea8:
    // 0x2eeea8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EEEA8u;
    {
        const bool branch_taken_0x2eeea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeea8) {
            ctx->pc = 0x2EEEE8u;
            goto label_2eeee8;
        }
    }
    ctx->pc = 0x2EEEB0u;
label_2eeeb0:
    // 0x2eeeb0: 0xc0bbc34  jal         func_2EF0D0
    ctx->pc = 0x2EEEB0u;
    SET_GPR_U32(ctx, 31, 0x2EEEB8u);
    ctx->pc = 0x2EF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF0D0u, 0x2EEEB0u, 0x2EEEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEEB8u;
label_2eeeb8:
    // 0x2eeeb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EEEB8u;
    {
        const bool branch_taken_0x2eeeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeeb8) {
            ctx->pc = 0x2EEEE8u;
            goto label_2eeee8;
        }
    }
    ctx->pc = 0x2EEEC0u;
label_2eeec0:
    // 0x2eeec0: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x2eeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2eeec4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2eeec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eeec8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEEC8u;
    {
        const bool branch_taken_0x2eeec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeec8) {
            ctx->pc = 0x2EEEE0u;
            goto label_2eeee0;
        }
    }
    ctx->pc = 0x2EEED0u;
    // 0x2eeed0: 0xc0bbc34  jal         func_2EF0D0
    ctx->pc = 0x2EEED0u;
    SET_GPR_U32(ctx, 31, 0x2EEED8u);
    ctx->pc = 0x2EF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF0D0u, 0x2EEED0u, 0x2EEED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEED8u;
label_2eeed8:
    // 0x2eeed8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEED8u;
    {
        const bool branch_taken_0x2eeed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeed8) {
            ctx->pc = 0x2EEEE8u;
            goto label_2eeee8;
        }
    }
    ctx->pc = 0x2EEEE0u;
label_2eeee0:
    // 0x2eeee0: 0xc0bbbc0  jal         func_2EEF00
    ctx->pc = 0x2EEEE0u;
    SET_GPR_U32(ctx, 31, 0x2EEEE8u);
    ctx->pc = 0x2EEF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEF00u, 0x2EEEE0u, 0x2EEEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEEE8u;
label_2eeee8:
    // 0x2eeee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eeee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eeeec: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEECu;
        // 0x2eeef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEEF4u;
}

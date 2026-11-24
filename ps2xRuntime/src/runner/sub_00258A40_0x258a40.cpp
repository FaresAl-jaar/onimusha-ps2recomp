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

// Function: sub_00258A40
// Address: 0x258a40 - 0x258a90
void sub_00258A40_0x258a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258A40_0x258a40");
#endif

    switch (ctx->pc) {
        case 0x258a58u: goto label_258a58;
        default: break;
    }

    ctx->pc = 0x258a40u;

    // 0x258a40: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x258a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x258a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x258a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a48: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x258a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x258a4c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x258a4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x258a50: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x258a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x258a54: 0x0  nop
    ctx->pc = 0x258a54u;
    // NOP
label_258a58:
    // 0x258a58: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x258a58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258a5c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258A5Cu;
    {
        const bool branch_taken_0x258a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A5Cu;
        // 0x258a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a5c) {
            ctx->pc = 0x258A70u;
            goto label_258a70;
        }
    }
    ctx->pc = 0x258A64u;
    // 0x258a64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x258A64u;
    {
        const bool branch_taken_0x258a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258a64) {
            ctx->pc = 0x258A88u;
            goto label_258a88;
        }
    }
    ctx->pc = 0x258A6Cu;
    // 0x258a6c: 0x0  nop
    ctx->pc = 0x258a6cu;
    // NOP
label_258a70:
    // 0x258a70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x258a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x258a74: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x258a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x258a78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x258A78u;
    {
        const bool branch_taken_0x258a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A78u;
        // 0x258a7c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a78) {
            ctx->pc = 0x258A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258a58;
        }
    }
    ctx->pc = 0x258A80u;
    // 0x258a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a84: 0x0  nop
    ctx->pc = 0x258a84u;
    // NOP
label_258a88:
    // 0x258a88: 0x3e00008  jr          $ra
    ctx->pc = 0x258A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258A90u;
}

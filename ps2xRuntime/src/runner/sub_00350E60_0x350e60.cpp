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

// Function: sub_00350E60
// Address: 0x350e60 - 0x350e98
void sub_00350E60_0x350e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350E60_0x350e60");
#endif

    ctx->pc = 0x350e60u;

    // 0x350e60: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x350e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x350e64: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x350e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x350e68: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350E68u;
    {
        const bool branch_taken_0x350e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x350E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E68u;
        // 0x350e6c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e68) {
            ctx->pc = 0x350E80u;
            goto label_350e80;
        }
    }
    ctx->pc = 0x350E70u;
    // 0x350e70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350E70u;
    {
        const bool branch_taken_0x350e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x350e70) {
            ctx->pc = 0x350E80u;
            goto label_350e80;
        }
    }
    ctx->pc = 0x350E78u;
    // 0x350e78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x350E78u;
    {
        const bool branch_taken_0x350e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350e78) {
            ctx->pc = 0x350E88u;
            goto label_350e88;
        }
    }
    ctx->pc = 0x350E80u;
label_350e80:
    // 0x350e80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x350E80u;
    {
        const bool branch_taken_0x350e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E80u;
        // 0x350e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e80) {
            ctx->pc = 0x350E90u;
            goto label_350e90;
        }
    }
    ctx->pc = 0x350E88u;
label_350e88:
    // 0x350e88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e8c: 0x0  nop
    ctx->pc = 0x350e8cu;
    // NOP
label_350e90:
    // 0x350e90: 0x3e00008  jr          $ra
    ctx->pc = 0x350E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350E98u;
}

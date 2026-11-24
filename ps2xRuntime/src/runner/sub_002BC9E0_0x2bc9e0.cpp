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

// Function: sub_002BC9E0
// Address: 0x2bc9e0 - 0x2bca08
void sub_002BC9E0_0x2bc9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC9E0_0x2bc9e0");
#endif

    ctx->pc = 0x2bc9e0u;

    // 0x2bc9e0: 0xa08000e6  sb          $zero, 0xE6($a0)
    ctx->pc = 0x2bc9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 230), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc9e4: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x2bc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2bc9e8: 0x90c70001  lbu         $a3, 0x1($a2)
    ctx->pc = 0x2bc9e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bc9ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bc9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc9f0: 0xdca30508  ld          $v1, 0x508($a1)
    ctx->pc = 0x2bc9f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1288)));
    // 0x2bc9f4: 0x24e60020  addiu       $a2, $a3, 0x20
    ctx->pc = 0x2bc9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2bc9f8: 0xc42014  dsllv       $a0, $a0, $a2
    ctx->pc = 0x2bc9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x2bc9fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2bc9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2bca00: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA00u;
        // 0x2bca04: 0xfca30508  sd          $v1, 0x508($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 1288), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCA08u;
}

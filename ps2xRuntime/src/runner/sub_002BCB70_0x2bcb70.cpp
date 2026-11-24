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

// Function: sub_002BCB70
// Address: 0x2bcb70 - 0x2bcb90
void sub_002BCB70_0x2bcb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCB70_0x2bcb70");
#endif

    ctx->pc = 0x2bcb70u;

    // 0x2bcb70: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2bcb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2bcb74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCB74u;
    {
        const bool branch_taken_0x2bcb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcb74) {
            ctx->pc = 0x2BCB88u;
            goto label_2bcb88;
        }
    }
    ctx->pc = 0x2BCB7Cu;
    // 0x2bcb7c: 0x90820037  lbu         $v0, 0x37($a0)
    ctx->pc = 0x2bcb7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2bcb80: 0xa08200e7  sb          $v0, 0xE7($a0)
    ctx->pc = 0x2bcb80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 231), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bcb84: 0x0  nop
    ctx->pc = 0x2bcb84u;
    // NOP
label_2bcb88:
    // 0x2bcb88: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB88u;
        // 0x2bcb8c: 0x24c20002  addiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCB90u;
}

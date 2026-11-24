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

// Function: sub_00363250
// Address: 0x363250 - 0x363274
void sub_00363250_0x363250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363250_0x363250");
#endif

    ctx->pc = 0x363250u;

    // 0x363250: 0x97848bc4  lhu         $a0, -0x743C($gp)
    ctx->pc = 0x363250u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937540)));
    // 0x363254: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x363254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x363258: 0x2442ff07  addiu       $v0, $v0, -0xF9
    ctx->pc = 0x363258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967047));
    // 0x36325c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x36325cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x363260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x363260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x363264: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x363264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x363268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36326c: 0x3e00008  jr          $ra
    ctx->pc = 0x36326Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36326Cu;
        // 0x363270: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36326Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363274u;
}

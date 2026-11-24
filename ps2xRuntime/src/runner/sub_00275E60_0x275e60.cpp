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

// Function: sub_00275E60
// Address: 0x275e60 - 0x275e88
void sub_00275E60_0x275e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275E60_0x275e60");
#endif

    ctx->pc = 0x275e60u;

    // 0x275e60: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x275e60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x275e64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x275e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x275e68: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x275e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x275e6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275e70: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x275e70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x275e74: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x275e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x275e78: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x275e78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x275e7c: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x275e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x275e80: 0x3e00008  jr          $ra
    ctx->pc = 0x275E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E80u;
        // 0x275e84: 0xac8307ec  sw          $v1, 0x7EC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275E88u;
}

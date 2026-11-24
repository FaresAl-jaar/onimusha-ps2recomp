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

// Function: sub_001E3A70
// Address: 0x1e3a70 - 0x1e3aac
void sub_001E3A70_0x1e3a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3A70_0x1e3a70");
#endif

    ctx->pc = 0x1e3a70u;

    // 0x1e3a70: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e3a74: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1e3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1e3a78: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x1e3a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e3a7c: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x1e3a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x1e3a80: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e3a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e3a84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e3a88: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x1e3a88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x1e3a8c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1e3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e3a90: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1e3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x1e3a94: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1e3a94u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1e3a98: 0x0  nop
    ctx->pc = 0x1e3a98u;
    // NOP
    // 0x1e3a9c: 0x0  nop
    ctx->pc = 0x1e3a9cu;
    // NOP
    // 0x1e3aa0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e3aa0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e3aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3AACu;
}

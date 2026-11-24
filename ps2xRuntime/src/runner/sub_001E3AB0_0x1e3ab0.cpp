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

// Function: sub_001E3AB0
// Address: 0x1e3ab0 - 0x1e3af0
void sub_001E3AB0_0x1e3ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3AB0_0x1e3ab0");
#endif

    ctx->pc = 0x1e3ab0u;

    // 0x1e3ab0: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1e3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e3ab4: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x1e3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e3ab8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1e3ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e3abc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e3ac0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1e3ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x1e3ac4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1e3ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e3ac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e3acc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1e3accu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x1e3ad0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1e3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e3ad4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1e3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x1e3ad8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e3ad8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e3adc: 0x0  nop
    ctx->pc = 0x1e3adcu;
    // NOP
    // 0x1e3ae0: 0x0  nop
    ctx->pc = 0x1e3ae0u;
    // NOP
    // 0x1e3ae4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e3ae4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e3ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AE8u;
        // 0x1e3aec: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3AF0u;
}

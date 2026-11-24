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

// Function: sub_00327490
// Address: 0x327490 - 0x3274d0
void sub_00327490_0x327490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327490_0x327490");
#endif

    ctx->pc = 0x327490u;

    // 0x327490: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x327490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x327494: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x327494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x327498: 0x841021  addu        $v0, $a0, $a0
    ctx->pc = 0x327498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 4)));
    // 0x32749c: 0x34650dcd  ori         $a1, $v1, 0xDCD
    ctx->pc = 0x32749cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x3274a0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3274a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3274a4: 0xc51018  mult        $v0, $a2, $a1
    ctx->pc = 0x3274a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3274a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3274a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3274ac: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3274acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3274b0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3274b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3274b4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3274b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3274b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3274b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3274bc: 0x0  nop
    ctx->pc = 0x3274bcu;
    // NOP
    // 0x3274c0: 0x0  nop
    ctx->pc = 0x3274c0u;
    // NOP
    // 0x3274c4: 0x1010  mfhi        $v0
    ctx->pc = 0x3274c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3274c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3274C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3274CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274C8u;
        // 0x3274cc: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3274C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3274D0u;
}

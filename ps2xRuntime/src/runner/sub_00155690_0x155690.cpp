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

// Function: sub_00155690
// Address: 0x155690 - 0x1556b8
void sub_00155690_0x155690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155690_0x155690");
#endif

    ctx->pc = 0x155690u;

    // 0x155690: 0x24033ca0  addiu       $v1, $zero, 0x3CA0
    ctx->pc = 0x155690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15520));
    // 0x155694: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x155694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x155698: 0x833018  mult        $a2, $a0, $v1
    ctx->pc = 0x155698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15569c: 0x24a51c60  addiu       $a1, $a1, 0x1C60
    ctx->pc = 0x15569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7264));
    // 0x1556a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1556a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1556a4: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x1556a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x1556a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1556a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1556ac: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1556acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1556b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1556B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1556B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556B0u;
        // 0x1556b4: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1556B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1556B8u;
}

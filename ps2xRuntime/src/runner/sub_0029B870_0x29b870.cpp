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

// Function: sub_0029B870
// Address: 0x29b870 - 0x29b890
void sub_0029B870_0x29b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B870_0x29b870");
#endif

    ctx->pc = 0x29b870u;

    // 0x29b870: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x29b870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29b874: 0x2403fe7e  addiu       $v1, $zero, -0x182
    ctx->pc = 0x29b874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966910));
    // 0x29b878: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x29b878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x29b87c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29b880: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29b880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29b884: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x29b884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x29b888: 0x3e00008  jr          $ra
    ctx->pc = 0x29B888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B888u;
        // 0x29b88c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B890u;
}

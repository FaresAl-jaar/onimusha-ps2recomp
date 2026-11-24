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

// Function: sub_002B0040
// Address: 0x2b0040 - 0x2b0064
void sub_002B0040_0x2b0040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0040_0x2b0040");
#endif

    ctx->pc = 0x2b0040u;

    // 0x2b0040: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2b0040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2b0044: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2b0044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b0048: 0x24424b56  addiu       $v0, $v0, 0x4B56
    ctx->pc = 0x2b0048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19286));
    // 0x2b004c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0050: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2b0050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0054: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2b0054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2b0058: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2b0058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2b005c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B005Cu;
        // 0x2b0060: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0064u;
}

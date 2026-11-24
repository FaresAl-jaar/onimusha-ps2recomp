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

// Function: sub_002A1B50
// Address: 0x2a1b50 - 0x2a1b7c
void sub_002A1B50_0x2a1b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1B50_0x2a1b50");
#endif

    ctx->pc = 0x2a1b50u;

    // 0x2a1b50: 0x8c86007c  lw          $a2, 0x7C($a0)
    ctx->pc = 0x2a1b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1b54: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x2a1b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x2a1b58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a1b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a1b5c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x2a1b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1b60: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2a1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a1b64: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a1b68: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x2a1b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a1b6c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2a1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a1b70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a1b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a1b74: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B74u;
        // 0x2a1b78: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1B7Cu;
}

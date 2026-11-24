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

// Function: sub_002A1B20
// Address: 0x2a1b20 - 0x2a1b48
void sub_002A1B20_0x2a1b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1B20_0x2a1b20");
#endif

    ctx->pc = 0x2a1b20u;

    // 0x2a1b20: 0x8c86007c  lw          $a2, 0x7C($a0)
    ctx->pc = 0x2a1b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1b24: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2a1b28: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x2a1b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1b2c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2a1b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a1b30: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2a1b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2a1b34: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x2a1b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a1b38: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2a1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a1b3c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2a1b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a1b40: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B40u;
        // 0x2a1b44: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1B48u;
}

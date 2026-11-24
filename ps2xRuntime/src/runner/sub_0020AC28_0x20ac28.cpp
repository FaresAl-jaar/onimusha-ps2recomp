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

// Function: sub_0020AC28
// Address: 0x20ac28 - 0x20ac5c
void sub_0020AC28_0x20ac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AC28_0x20ac28");
#endif

    ctx->pc = 0x20ac28u;

    // 0x20ac28: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x20ac2c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x20ac30: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x20ac30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x20ac34: 0x3442952c  ori         $v0, $v0, 0x952C
    ctx->pc = 0x20ac34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38188);
    // 0x20ac38: 0x34633c68  ori         $v1, $v1, 0x3C68
    ctx->pc = 0x20ac38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15464);
    // 0x20ac3c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20ac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20ac40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x20ac44: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x20ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x20ac48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ac4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20ac50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ac54: 0x3e00008  jr          $ra
    ctx->pc = 0x20AC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC54u;
        // 0x20ac58: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AC5Cu;
}

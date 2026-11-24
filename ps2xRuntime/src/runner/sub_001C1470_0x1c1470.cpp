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

// Function: sub_001C1470
// Address: 0x1c1470 - 0x1c1490
void sub_001C1470_0x1c1470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1470_0x1c1470");
#endif

    ctx->pc = 0x1c1470u;

    // 0x1c1470: 0x8c8378b4  lw          $v1, 0x78B4($a0)
    ctx->pc = 0x1c1470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30900)));
    // 0x1c1474: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1c1474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1c1478: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c1478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1c147c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c1480: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1c1480u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1484: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c1488: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1488u;
        // 0x1c148c: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1490u;
}

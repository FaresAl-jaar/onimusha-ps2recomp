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

// Function: sub_0035E460
// Address: 0x35e460 - 0x35e480
void sub_0035E460_0x35e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E460_0x35e460");
#endif

    ctx->pc = 0x35e460u;

    // 0x35e460: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35e460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35e464: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x35e464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x35e468: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x35e468u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35e46c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35e46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35e470: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35e470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35e474: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35e474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35e478: 0x3e00008  jr          $ra
    ctx->pc = 0x35E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E478u;
        // 0x35e47c: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E480u;
}

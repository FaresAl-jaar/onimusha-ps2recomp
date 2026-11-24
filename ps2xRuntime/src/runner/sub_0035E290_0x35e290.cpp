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

// Function: sub_0035E290
// Address: 0x35e290 - 0x35e2b4
void sub_0035E290_0x35e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E290_0x35e290");
#endif

    ctx->pc = 0x35e290u;

    // 0x35e290: 0x8c8506ac  lw          $a1, 0x6AC($a0)
    ctx->pc = 0x35e290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x35e294: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x35e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x35e298: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x35e298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x35e29c: 0xac8506ac  sw          $a1, 0x6AC($a0)
    ctx->pc = 0x35e29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 5));
    // 0x35e2a0: 0x8c8506b4  lw          $a1, 0x6B4($a0)
    ctx->pc = 0x35e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x35e2a4: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x35e2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x35e2a8: 0xac8506b4  sw          $a1, 0x6B4($a0)
    ctx->pc = 0x35e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 5));
    // 0x35e2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x35E2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2ACu;
        // 0x35e2b0: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E2B4u;
}

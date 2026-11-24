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

// Function: sub_003BD290
// Address: 0x3bd290 - 0x3bd2b0
void sub_003BD290_0x3bd290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD290_0x3bd290");
#endif

    ctx->pc = 0x3bd290u;

    // 0x3bd290: 0x90832b91  lbu         $v1, 0x2B91($a0)
    ctx->pc = 0x3bd290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11153)));
    // 0x3bd294: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3bd294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3bd298: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x3bd298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3bd29c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BD29Cu;
    {
        const bool branch_taken_0x3bd29c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd29c) {
            ctx->pc = 0x3BD2A8u;
            goto label_3bd2a8;
        }
    }
    ctx->pc = 0x3BD2A4u;
    // 0x3bd2a4: 0xa0852b91  sb          $a1, 0x2B91($a0)
    ctx->pc = 0x3bd2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11153), (uint8_t)GPR_U32(ctx, 5));
label_3bd2a8:
    // 0x3bd2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD2B0u;
}

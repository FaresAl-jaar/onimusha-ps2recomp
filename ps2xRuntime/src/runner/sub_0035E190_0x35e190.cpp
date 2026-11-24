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

// Function: sub_0035E190
// Address: 0x35e190 - 0x35e1c4
void sub_0035E190_0x35e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E190_0x35e190");
#endif

    ctx->pc = 0x35e190u;

    // 0x35e190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e194: 0xa0832af0  sb          $v1, 0x2AF0($a0)
    ctx->pc = 0x35e194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10992), (uint8_t)GPR_U32(ctx, 3));
    // 0x35e198: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x35e198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x35e19c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x35e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x35e1a0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x35e1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x35e1a4: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x35e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x35e1a8: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x35e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x35e1ac: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x35e1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x35e1b0: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x35e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x35e1b4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x35e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35e1b8: 0xac8307c0  sw          $v1, 0x7C0($a0)
    ctx->pc = 0x35e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1984), GPR_U32(ctx, 3));
    // 0x35e1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x35E1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1BCu;
        // 0x35e1c0: 0xac8307c8  sw          $v1, 0x7C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1992), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E1C4u;
}

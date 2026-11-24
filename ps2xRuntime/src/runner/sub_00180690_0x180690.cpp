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

// Function: sub_00180690
// Address: 0x180690 - 0x1806cc
void sub_00180690_0x180690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180690_0x180690");
#endif

    ctx->pc = 0x180690u;

    // 0x180690: 0xa0a00024  sb          $zero, 0x24($a1)
    ctx->pc = 0x180690u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x180694: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x180694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x180698: 0xa0a40026  sb          $a0, 0x26($a1)
    ctx->pc = 0x180698u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x18069c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18069cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1806a0: 0xa0a40025  sb          $a0, 0x25($a1)
    ctx->pc = 0x1806a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x1806a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1806a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1806a8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1806a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1806ac: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1806acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1806b0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1806b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1806b4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1806b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1806b8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1806b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x1806bc: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1806bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1806c0: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x1806c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1806c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1806C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806C4u;
        // 0x1806c8: 0xaca00020  sw          $zero, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1806C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1806CCu;
}

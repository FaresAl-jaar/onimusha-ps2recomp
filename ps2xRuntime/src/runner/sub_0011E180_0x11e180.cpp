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

// Function: sub_0011E180
// Address: 0x11e180 - 0x11e1b4
void sub_0011E180_0x11e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E180_0x11e180");
#endif

    ctx->pc = 0x11e180u;

    // 0x11e180: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11e180u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11e184: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x11e184u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11e188: 0x5603f  dsra32      $t4, $a1, 0
    ctx->pc = 0x11e188u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11e18c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11e18cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11e190: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x11e190u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
    // 0x11e194: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x11e194u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x11e198: 0x18d6024  and         $t4, $t4, $t5
    ctx->pc = 0x11e198u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 13));
    // 0x11e19c: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x11e19cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11e1a0: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x11e1a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x11e1a4: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11e1a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11e1a8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11e1a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11e1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1ACu;
        // 0x11e1b0: 0x1cf1025  or          $v0, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E1B4u;
}

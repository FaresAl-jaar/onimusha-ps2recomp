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

// Function: sub_0011E4E0
// Address: 0x11e4e0 - 0x11e518
void sub_0011E4E0_0x11e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E4E0_0x11e4e0");
#endif

    ctx->pc = 0x11e4e0u;

    // 0x11e4e0: 0x4783c  dsll32      $t7, $a0, 0
    ctx->pc = 0x11e4e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11e4e4: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11e4e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11e4e8: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x11e4e8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x11e4ec: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11e4ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11e4f0: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x11e4f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x11e4f4: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x11e4f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11e4f8: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x11e4f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x11e4fc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x11e4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x11e500: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11e500u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11e504: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x11e504u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x11e508: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x11e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x11e50c: 0x1c21023  subu        $v0, $t6, $v0
    ctx->pc = 0x11e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x11e510: 0x3e00008  jr          $ra
    ctx->pc = 0x11E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E510u;
        // 0x11e514: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E518u;
}

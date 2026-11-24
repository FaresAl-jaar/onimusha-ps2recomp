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

// Function: sub_0011E498
// Address: 0x11e498 - 0x11e4e0
void sub_0011E498_0x11e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E498_0x11e498");
#endif

    ctx->pc = 0x11e498u;

    // 0x11e498: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x11e498u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11e49c: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11e49cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11e4a0: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x11e4a0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x11e4a4: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11e4a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11e4a8: 0xe6023  negu        $t4, $t6
    ctx->pc = 0x11e4a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x11e4ac: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x11e4acu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11e4b0: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x11e4b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x11e4b4: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11e4b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11e4b8: 0xe77c2  srl         $t6, $t6, 31
    ctx->pc = 0x11e4b8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x11e4bc: 0x3c0d7ff0  lui         $t5, 0x7FF0
    ctx->pc = 0x11e4bcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32752 << 16));
    // 0x11e4c0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x11e4c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11e4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e4c8: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x11e4c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11e4cc: 0xf7023  negu        $t6, $t7
    ctx->pc = 0x11e4ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x11e4d0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x11e4d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11e4d4: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11e4d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11e4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4D8u;
        // 0x11e4dc: 0x4f1023  subu        $v0, $v0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E4E0u;
}

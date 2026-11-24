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

// Function: sub_003388B0
// Address: 0x3388b0 - 0x3388d8
void sub_003388B0_0x3388b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003388B0_0x3388b0");
#endif

    ctx->pc = 0x3388b0u;

    // 0x3388b0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x3388b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3388b4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3388b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3388b8: 0x90640ee6  lbu         $a0, 0xEE6($v1)
    ctx->pc = 0x3388b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3814)));
    // 0x3388bc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3388bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3388c0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3388c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3388c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3388c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3388c8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3388c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3388cc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3388ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3388d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3388D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3388D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388D0u;
        // 0x3388d4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3388D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3388D8u;
}

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

// Function: sub_00363480
// Address: 0x363480 - 0x3634ac
void sub_00363480_0x363480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363480_0x363480");
#endif

    ctx->pc = 0x363480u;

    // 0x363480: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x363480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x363484: 0x8c22c0f0  lw          $v0, -0x3F10($at)
    ctx->pc = 0x363484u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x91C0F0u));
    // 0x363488: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x363488u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x36348c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x36348cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x363490: 0x41902  srl         $v1, $a0, 4
    ctx->pc = 0x363490u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x363494: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x363494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x363498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36349c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3634a0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3634a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3634a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3634A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3634A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3634A4u;
        // 0x3634a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3634A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3634ACu;
}

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

// Function: sub_00291A30
// Address: 0x291a30 - 0x291a78
void sub_00291A30_0x291a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291A30_0x291a30");
#endif

    ctx->pc = 0x291a30u;

    // 0x291a30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291a34: 0x3c070ff0  lui         $a3, 0xFF0
    ctx->pc = 0x291a34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4080 << 16));
    // 0x291a38: 0x8c26cec8  lw          $a2, -0x3138($at)
    ctx->pc = 0x291a38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x291a3c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x291a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x291a40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291a44: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x291a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x291a48: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x291a48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x291a4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291a50: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x291a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x291a54: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x291a54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x291a58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291a5c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x291a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x291a60: 0xac26cec8  sw          $a2, -0x3138($at)
    ctx->pc = 0x291a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC8u, _value); } while (0);
    // 0x291a64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291a68: 0xac25cec0  sw          $a1, -0x3140($at)
    ctx->pc = 0x291a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x291a6c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291a70: 0x3e00008  jr          $ra
    ctx->pc = 0x291A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A70u;
        // 0x291a74: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291A78u;
}

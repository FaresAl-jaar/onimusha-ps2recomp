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

// Function: sub_002D8C70
// Address: 0x2d8c70 - 0x2d8cf4
void sub_002D8C70_0x2d8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8C70_0x2d8c70");
#endif

    switch (ctx->pc) {
        case 0x2d8cacu: goto label_2d8cac;
        case 0x2d8cb8u: goto label_2d8cb8;
        default: break;
    }

    ctx->pc = 0x2d8c70u;

    // 0x2d8c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8c74: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d8c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8c7c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8c80: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8c84: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2d8c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2d8c88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2d8c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2d8c8c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8c90: 0xac226ccc  sw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8c90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d8c94: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8c98: 0x8c226ccc  lw          $v0, 0x6CCC($at)
    ctx->pc = 0x2d8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8c9c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2d8c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2d8ca0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8ca4: 0xc0b45a0  jal         func_2D1680
    ctx->pc = 0x2D8CA4u;
    SET_GPR_U32(ctx, 31, 0x2D8CACu);
    ctx->pc = 0x2D8CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8CA4u;
    // 0x2d8ca8: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1680u, 0x2D8CA4u, 0x2D8CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CACu;
label_2d8cac:
    // 0x2d8cac: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d8cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d8cb0: 0xc0b5c48  jal         func_2D7120
    ctx->pc = 0x2D8CB0u;
    SET_GPR_U32(ctx, 31, 0x2D8CB8u);
    ctx->pc = 0x2D8CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8CB0u;
    // 0x2d8cb4: 0x24846cc0  addiu       $a0, $a0, 0x6CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7120u, 0x2D8CB0u, 0x2D8CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8CB8u;
label_2d8cb8:
    // 0x2d8cb8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8cbc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2d8cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d8cc0: 0x8c256ccc  lw          $a1, 0x6CCC($at)
    ctx->pc = 0x2d8cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8cc4: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2d8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2d8cc8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2d8cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2d8ccc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8cd0: 0xac246ccc  sw          $a0, 0x6CCC($at)
    ctx->pc = 0x2d8cd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d8cd4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8cd8: 0x8c246ccc  lw          $a0, 0x6CCC($at)
    ctx->pc = 0x2d8cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6CCCu));
    // 0x2d8cdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d8cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d8ce0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d8ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d8ce4: 0xac236ccc  sw          $v1, 0x6CCC($at)
    ctx->pc = 0x2d8ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x2d8ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8cec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CECu;
        // 0x2d8cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8CF4u;
}

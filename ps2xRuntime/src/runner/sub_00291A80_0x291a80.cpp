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

// Function: sub_00291A80
// Address: 0x291a80 - 0x291b08
void sub_00291A80_0x291a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291A80_0x291a80");
#endif

    ctx->pc = 0x291a80u;

    // 0x291a80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291a84: 0x3c03f00f  lui         $v1, 0xF00F
    ctx->pc = 0x291a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61455 << 16));
    // 0x291a88: 0x8c29cec8  lw          $t1, -0x3138($at)
    ctx->pc = 0x291a88u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x291a8c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x291a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x291a90: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x291a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x291a94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x291a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x291a98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291a9c: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x291a9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x291aa0: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x291aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x291aa4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291aa8: 0x8c28cecc  lw          $t0, -0x3134($at)
    ctx->pc = 0x291aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CECCu));
    // 0x291aac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291ab0: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x291ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x291ab4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291ab8: 0x8c26ced8  lw          $a2, -0x3128($at)
    ctx->pc = 0x291ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED8u));
    // 0x291abc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291ac0: 0x8c25cedc  lw          $a1, -0x3124($at)
    ctx->pc = 0x291ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x291ac4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291ac8: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x291ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x291acc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291ad0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x291ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x291ad4: 0xac29cec8  sw          $t1, -0x3138($at)
    ctx->pc = 0x291ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954696), GPR_U32(ctx, 9));
    // 0x291ad8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291adc: 0x8c29cec8  lw          $t1, -0x3138($at)
    ctx->pc = 0x291adcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x291ae0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291ae4: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x291ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x291ae8: 0x1491825  or          $v1, $t2, $t1
    ctx->pc = 0x291ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x291aec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x291aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x291af0: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x291af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x291af4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x291af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x291af8: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x291af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x291afc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x291afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x291b00: 0x3e00008  jr          $ra
    ctx->pc = 0x291B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B00u;
        // 0x291b04: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291B08u;
}

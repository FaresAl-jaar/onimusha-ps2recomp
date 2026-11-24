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

// Function: sub_0033EB00
// Address: 0x33eb00 - 0x33eb38
void sub_0033EB00_0x33eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EB00_0x33eb00");
#endif

    ctx->pc = 0x33eb00u;

    // 0x33eb00: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x33eb00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33eb04: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x33eb04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x33eb08: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x33eb08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x33eb0c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x33eb0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33eb10: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x33eb10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x33eb14: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x33eb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x33eb18: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x33eb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x33eb1c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x33eb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x33eb20: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x33eb20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x33eb24: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x33eb24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33eb28: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x33eb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x33eb2c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x33eb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x33eb30: 0x3e00008  jr          $ra
    ctx->pc = 0x33EB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB30u;
        // 0x33eb34: 0xa0830003  sb          $v1, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EB38u;
}

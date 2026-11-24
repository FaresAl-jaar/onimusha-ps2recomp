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

// Function: sub_00100980
// Address: 0x100980 - 0x1009cc
void sub_00100980_0x100980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100980_0x100980");
#endif

    ctx->pc = 0x100980u;

    // 0x100980: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x100980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100984: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x100984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x100988: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x100988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10098c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x10098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x100990: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x100990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x100994: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x100994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x100998: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x100998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10099c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1009a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1009a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1009a4: 0x1072826  xor         $a1, $t0, $a3
    ctx->pc = 0x1009a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x1009a8: 0xc42026  xor         $a0, $a2, $a0
    ctx->pc = 0x1009a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x1009ac: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1009acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1009b0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1009b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1009b4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1009b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1009b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1009b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1009bc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1009bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1009c0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1009c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1009c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1009C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1009C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009C4u;
        // 0x1009c8: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1009C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1009CCu;
}

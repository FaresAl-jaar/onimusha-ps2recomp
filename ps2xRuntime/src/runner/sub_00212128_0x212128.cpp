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

// Function: sub_00212128
// Address: 0x212128 - 0x21214c
void sub_00212128_0x212128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212128_0x212128");
#endif

    ctx->pc = 0x212128u;

    // 0x212128: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x212128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x21212c: 0x248400d4  addiu       $a0, $a0, 0xD4
    ctx->pc = 0x21212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 212));
    // 0x212130: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x212130u;
    {
        const bool branch_taken_0x212130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212130u;
        // 0x212134: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212130) {
            ctx->pc = 0x212144u;
            goto label_212144;
        }
    }
    ctx->pc = 0x212138u;
    // 0x212138: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x212138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x21213c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21213Cu;
    {
        const bool branch_taken_0x21213c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21213c) {
            ctx->pc = 0x212140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21213Cu;
            // 0x212140: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212144u;
            goto label_212144;
        }
    }
    ctx->pc = 0x212144u;
label_212144:
    // 0x212144: 0x3e00008  jr          $ra
    ctx->pc = 0x212144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21214Cu;
}

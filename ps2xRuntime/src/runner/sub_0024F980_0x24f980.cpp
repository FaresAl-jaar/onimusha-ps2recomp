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

// Function: sub_0024F980
// Address: 0x24f980 - 0x24f9b0
void sub_0024F980_0x24f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F980_0x24f980");
#endif

    ctx->pc = 0x24f980u;

    // 0x24f980: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f988: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f988u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f98c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F98Cu;
    {
        const bool branch_taken_0x24f98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F98Cu;
        // 0x24f990: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f98c) {
            ctx->pc = 0x24F9A4u;
            goto label_24f9a4;
        }
    }
    ctx->pc = 0x24F994u;
    // 0x24f994: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24f994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24f998: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24f998u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f99c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24F99Cu;
    {
        const bool branch_taken_0x24f99c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F99Cu;
        // 0x24f9a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f99c) {
            ctx->pc = 0x24F9A8u;
            goto label_24f9a8;
        }
    }
    ctx->pc = 0x24F9A4u;
label_24f9a4:
    // 0x24f9a4: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x24f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_24f9a8:
    // 0x24f9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24F9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F9B0u;
}

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

// Function: sub_0024F1F8
// Address: 0x24f1f8 - 0x24f224
void sub_0024F1F8_0x24f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F1F8_0x24f1f8");
#endif

    ctx->pc = 0x24f1f8u;

    // 0x24f1f8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f1fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f200: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f204: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F204u;
    {
        const bool branch_taken_0x24f204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x24f204) {
            ctx->pc = 0x24F208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F204u;
            // 0x24f208: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F21Cu;
            goto label_24f21c;
        }
    }
    ctx->pc = 0x24F20Cu;
    // 0x24f20c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f210: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f214: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F214u;
    {
        const bool branch_taken_0x24f214 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x24f214) {
            ctx->pc = 0x24F218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F214u;
            // 0x24f218: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F21Cu;
            goto label_24f21c;
        }
    }
    ctx->pc = 0x24F21Cu;
label_24f21c:
    // 0x24f21c: 0x3e00008  jr          $ra
    ctx->pc = 0x24F21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F224u;
}

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

// Function: sub_0024F2E0
// Address: 0x24f2e0 - 0x24f30c
void sub_0024F2E0_0x24f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F2E0_0x24f2e0");
#endif

    ctx->pc = 0x24f2e0u;

    // 0x24f2e0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f2e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f2e8: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f2ec: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F2ECu;
    {
        const bool branch_taken_0x24f2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x24f2ec) {
            ctx->pc = 0x24F2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F2ECu;
            // 0x24f2f0: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F304u;
            goto label_24f304;
        }
    }
    ctx->pc = 0x24F2F4u;
    // 0x24f2f4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f2f8: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f2fc: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F2FCu;
    {
        const bool branch_taken_0x24f2fc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x24f2fc) {
            ctx->pc = 0x24F300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F2FCu;
            // 0x24f300: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F304u;
            goto label_24f304;
        }
    }
    ctx->pc = 0x24F304u;
label_24f304:
    // 0x24f304: 0x3e00008  jr          $ra
    ctx->pc = 0x24F304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F30Cu;
}

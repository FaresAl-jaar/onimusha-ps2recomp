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

// Function: sub_0024E8A8
// Address: 0x24e8a8 - 0x24e8dc
void sub_0024E8A8_0x24e8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E8A8_0x24e8a8");
#endif

    ctx->pc = 0x24e8a8u;

    // 0x24e8a8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e8ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24e8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e8b0: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e8b4: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E8B4u;
    {
        const bool branch_taken_0x24e8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x24e8b4) {
            ctx->pc = 0x24E8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E8B4u;
            // 0x24e8b8: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E8D0u;
            goto label_24e8d0;
        }
    }
    ctx->pc = 0x24E8BCu;
    // 0x24e8bc: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e8c0: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e8c4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E8C4u;
    {
        const bool branch_taken_0x24e8c4 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24e8c4) {
            ctx->pc = 0x24E8D4u;
            goto label_24e8d4;
        }
    }
    ctx->pc = 0x24E8CCu;
    // 0x24e8cc: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x24e8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_24e8d0:
    // 0x24e8d0: 0xa0820056  sb          $v0, 0x56($a0)
    ctx->pc = 0x24e8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 2));
label_24e8d4:
    // 0x24e8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x24E8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E8DCu;
}

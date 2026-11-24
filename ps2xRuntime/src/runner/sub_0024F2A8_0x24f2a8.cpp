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

// Function: sub_0024F2A8
// Address: 0x24f2a8 - 0x24f2dc
void sub_0024F2A8_0x24f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F2A8_0x24f2a8");
#endif

    ctx->pc = 0x24f2a8u;

    // 0x24f2a8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f2ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f2b0: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f2b4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24F2B4u;
    {
        const bool branch_taken_0x24f2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2B4u;
        // 0x24f2b8: 0x3c03004d  lui         $v1, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2b4) {
            ctx->pc = 0x24F2D0u;
            goto label_24f2d0;
        }
    }
    ctx->pc = 0x24F2BCu;
    // 0x24f2bc: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24f2c0: 0x8c8374d0  lw          $v1, 0x74D0($a0)
    ctx->pc = 0x24f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f2c4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F2C4u;
    {
        const bool branch_taken_0x24f2c4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2C4u;
        // 0x24f2c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2c4) {
            ctx->pc = 0x24F2D4u;
            goto label_24f2d4;
        }
    }
    ctx->pc = 0x24F2CCu;
    // 0x24f2cc: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
label_24f2d0:
    // 0x24f2d0: 0x8c627504  lw          $v0, 0x7504($v1)
    ctx->pc = 0x24f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29956)));
label_24f2d4:
    // 0x24f2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x24F2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F2DCu;
}

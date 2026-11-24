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

// Function: sub_0024E808
// Address: 0x24e808 - 0x24e854
void sub_0024E808_0x24e808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E808_0x24e808");
#endif

    ctx->pc = 0x24e808u;

    // 0x24e808: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e80c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e810: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24e810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e814: 0x54660006  bnel        $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E814u;
    {
        const bool branch_taken_0x24e814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x24e814) {
            ctx->pc = 0x24E818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E814u;
            // 0x24e818: 0x80820054  lb          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E830u;
            goto label_24e830;
        }
    }
    ctx->pc = 0x24E81Cu;
    // 0x24e81c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e820: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e820u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e824: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E824u;
    {
        const bool branch_taken_0x24e824 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24e824) {
            ctx->pc = 0x24E84Cu;
            goto label_24e84c;
        }
    }
    ctx->pc = 0x24E82Cu;
    // 0x24e82c: 0x80820054  lb          $v0, 0x54($a0)
    ctx->pc = 0x24e82cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
label_24e830:
    // 0x24e830: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E830u;
    {
        const bool branch_taken_0x24e830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x24E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E830u;
        // 0x24e834: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e830) {
            ctx->pc = 0x24E84Cu;
            goto label_24e84c;
        }
    }
    ctx->pc = 0x24E838u;
    // 0x24e838: 0x8c437500  lw          $v1, 0x7500($v0)
    ctx->pc = 0x24e838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29952)));
    // 0x24e83c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E83Cu;
    {
        const bool branch_taken_0x24e83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e83c) {
            ctx->pc = 0x24E840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E83Cu;
            // 0x24e840: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E84Cu;
            goto label_24e84c;
        }
    }
    ctx->pc = 0x24E844u;
    // 0x24e844: 0x54a60001  bnel        $a1, $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x24E844u;
    {
        const bool branch_taken_0x24e844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x24e844) {
            ctx->pc = 0x24E848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E844u;
            // 0x24e848: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E84Cu;
            goto label_24e84c;
        }
    }
    ctx->pc = 0x24E84Cu;
label_24e84c:
    // 0x24e84c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E854u;
}

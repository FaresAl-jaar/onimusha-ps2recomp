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

// Function: sub_00320160
// Address: 0x320160 - 0x320198
void sub_00320160_0x320160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320160_0x320160");
#endif

    ctx->pc = 0x320160u;

    // 0x320160: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x320160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x320164: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x320164u;
    {
        const bool branch_taken_0x320164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320164u;
        // 0x320168: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320164) {
            ctx->pc = 0x320170u;
            goto label_320170;
        }
    }
    ctx->pc = 0x32016Cu;
    // 0x32016c: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x32016cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_320170:
    // 0x320170: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x320170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x320174: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x320174u;
    {
        const bool branch_taken_0x320174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320174u;
        // 0x320178: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320174) {
            ctx->pc = 0x320180u;
            goto label_320180;
        }
    }
    ctx->pc = 0x32017Cu;
    // 0x32017c: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x32017cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_320180:
    // 0x320180: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x320180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x320184: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x320184u;
    {
        const bool branch_taken_0x320184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320184u;
        // 0x320188: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320184) {
            ctx->pc = 0x320190u;
            goto label_320190;
        }
    }
    ctx->pc = 0x32018Cu;
    // 0x32018c: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x32018cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
label_320190:
    // 0x320190: 0x3e00008  jr          $ra
    ctx->pc = 0x320190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320198u;
}

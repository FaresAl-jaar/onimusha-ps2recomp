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

// Function: sub_00269460
// Address: 0x269460 - 0x2694b0
void sub_00269460_0x269460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269460_0x269460");
#endif

    switch (ctx->pc) {
        case 0x269478u: goto label_269478;
        default: break;
    }

    ctx->pc = 0x269460u;

    // 0x269460: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x269460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x269464: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x269464u;
    {
        const bool branch_taken_0x269464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269464) {
            ctx->pc = 0x2694A0u;
            goto label_2694a0;
        }
    }
    ctx->pc = 0x26946Cu;
    // 0x26946c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x26946cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x269470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x269470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269474: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x269474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
label_269478:
    // 0x269478: 0x9082040c  lbu         $v0, 0x40C($a0)
    ctx->pc = 0x269478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1036)));
    // 0x26947c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26947Cu;
    {
        const bool branch_taken_0x26947c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x269480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26947Cu;
        // 0x269480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26947c) {
            ctx->pc = 0x269490u;
            goto label_269490;
        }
    }
    ctx->pc = 0x269484u;
    // 0x269484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269484u;
    {
        const bool branch_taken_0x269484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269484) {
            ctx->pc = 0x2694A8u;
            goto label_2694a8;
        }
    }
    ctx->pc = 0x26948Cu;
    // 0x26948c: 0x0  nop
    ctx->pc = 0x26948cu;
    // NOP
label_269490:
    // 0x269490: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x269490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x269494: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x269494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x269498: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x269498u;
    {
        const bool branch_taken_0x269498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269498u;
        // 0x26949c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269498) {
            ctx->pc = 0x269478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269478;
        }
    }
    ctx->pc = 0x2694A0u;
label_2694a0:
    // 0x2694a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2694a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694a4: 0x0  nop
    ctx->pc = 0x2694a4u;
    // NOP
label_2694a8:
    // 0x2694a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2694A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2694A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2694B0u;
}

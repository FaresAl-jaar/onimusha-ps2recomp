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

// Function: sub_0023F840
// Address: 0x23f840 - 0x23f888
void sub_0023F840_0x23f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F840_0x23f840");
#endif

    ctx->pc = 0x23f840u;

    // 0x23f840: 0x2402ffd3  addiu       $v0, $zero, -0x2D
    ctx->pc = 0x23f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
    // 0x23f844: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x23f844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x23f848: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x23f848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x23f84c: 0x808201a5  lb          $v0, 0x1A5($a0)
    ctx->pc = 0x23f84cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 421)));
    // 0x23f850: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F850u;
    {
        const bool branch_taken_0x23f850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f850) {
            ctx->pc = 0x23F880u;
            goto label_23f880;
        }
    }
    ctx->pc = 0x23F858u;
    // 0x23f858: 0x80820206  lb          $v0, 0x206($a0)
    ctx->pc = 0x23f858u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 518)));
    // 0x23f85c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F85Cu;
    {
        const bool branch_taken_0x23f85c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x23f85c) {
            ctx->pc = 0x23F860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F85Cu;
            // 0x23f860: 0x80820208  lb          $v0, 0x208($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F870u;
            goto label_23f870;
        }
    }
    ctx->pc = 0x23F864u;
    // 0x23f864: 0x80820207  lb          $v0, 0x207($a0)
    ctx->pc = 0x23f864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 519)));
    // 0x23f868: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x23f868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x23f86c: 0x80820208  lb          $v0, 0x208($a0)
    ctx->pc = 0x23f86cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
label_23f870:
    // 0x23f870: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F870u;
    {
        const bool branch_taken_0x23f870 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x23f870) {
            ctx->pc = 0x23F880u;
            goto label_23f880;
        }
    }
    ctx->pc = 0x23F878u;
    // 0x23f878: 0x80820209  lb          $v0, 0x209($a0)
    ctx->pc = 0x23f878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 521)));
    // 0x23f87c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x23f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_23f880:
    // 0x23f880: 0x3e00008  jr          $ra
    ctx->pc = 0x23F880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F888u;
}

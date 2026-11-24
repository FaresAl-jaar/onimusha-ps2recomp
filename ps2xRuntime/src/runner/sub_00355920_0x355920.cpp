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

// Function: sub_00355920
// Address: 0x355920 - 0x355990
void sub_00355920_0x355920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355920_0x355920");
#endif

    ctx->pc = 0x355920u;

    // 0x355920: 0x8c8505b4  lw          $a1, 0x5B4($a0)
    ctx->pc = 0x355920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
    // 0x355924: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x355924u;
    {
        const bool branch_taken_0x355924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x355924) {
            ctx->pc = 0x355938u;
            goto label_355938;
        }
    }
    ctx->pc = 0x35592Cu;
    // 0x35592c: 0x8c8305b8  lw          $v1, 0x5B8($a0)
    ctx->pc = 0x35592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x355930: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x355930u;
    {
        const bool branch_taken_0x355930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355930u;
        // 0x355934: 0xaca305b8  sw          $v1, 0x5B8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355930) {
            ctx->pc = 0x355950u;
            goto label_355950;
        }
    }
    ctx->pc = 0x355938u;
label_355938:
    // 0x355938: 0x8c8305b8  lw          $v1, 0x5B8($a0)
    ctx->pc = 0x355938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x35593c: 0xaf838bac  sw          $v1, -0x7454($gp)
    ctx->pc = 0x35593cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937516), GPR_U32(ctx, 3));
    // 0x355940: 0x8f838bac  lw          $v1, -0x7454($gp)
    ctx->pc = 0x355940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x355944: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x355944u;
    {
        const bool branch_taken_0x355944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355944) {
            ctx->pc = 0x355950u;
            goto label_355950;
        }
    }
    ctx->pc = 0x35594Cu;
    // 0x35594c: 0xac6005b4  sw          $zero, 0x5B4($v1)
    ctx->pc = 0x35594cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1460), GPR_U32(ctx, 0));
label_355950:
    // 0x355950: 0x8c8505b8  lw          $a1, 0x5B8($a0)
    ctx->pc = 0x355950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x355954: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x355954u;
    {
        const bool branch_taken_0x355954 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x355954) {
            ctx->pc = 0x355968u;
            goto label_355968;
        }
    }
    ctx->pc = 0x35595Cu;
    // 0x35595c: 0x8c8305b4  lw          $v1, 0x5B4($a0)
    ctx->pc = 0x35595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
    // 0x355960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x355960u;
    {
        const bool branch_taken_0x355960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355960u;
        // 0x355964: 0xaca305b4  sw          $v1, 0x5B4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355960) {
            ctx->pc = 0x355980u;
            goto label_355980;
        }
    }
    ctx->pc = 0x355968u;
label_355968:
    // 0x355968: 0x8c8305b4  lw          $v1, 0x5B4($a0)
    ctx->pc = 0x355968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
    // 0x35596c: 0xaf838bb0  sw          $v1, -0x7450($gp)
    ctx->pc = 0x35596cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937520), GPR_U32(ctx, 3));
    // 0x355970: 0x8f838bb0  lw          $v1, -0x7450($gp)
    ctx->pc = 0x355970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937520)));
    // 0x355974: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x355974u;
    {
        const bool branch_taken_0x355974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355974) {
            ctx->pc = 0x355980u;
            goto label_355980;
        }
    }
    ctx->pc = 0x35597Cu;
    // 0x35597c: 0xac6005b8  sw          $zero, 0x5B8($v1)
    ctx->pc = 0x35597cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 0));
label_355980:
    // 0x355980: 0x8f838bb4  lw          $v1, -0x744C($gp)
    ctx->pc = 0x355980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937524)));
    // 0x355984: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x355984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x355988: 0x3e00008  jr          $ra
    ctx->pc = 0x355988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355988u;
        // 0x35598c: 0xaf838bb4  sw          $v1, -0x744C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355990u;
}

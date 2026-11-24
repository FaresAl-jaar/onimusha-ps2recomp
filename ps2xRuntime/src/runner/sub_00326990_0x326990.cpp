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

// Function: sub_00326990
// Address: 0x326990 - 0x3269c4
void sub_00326990_0x326990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326990_0x326990");
#endif

    ctx->pc = 0x326990u;

    // 0x326990: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x326990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x326994: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x326994u;
    {
        const bool branch_taken_0x326994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326994) {
            ctx->pc = 0x3269A0u;
            goto label_3269a0;
        }
    }
    ctx->pc = 0x32699Cu;
    // 0x32699c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x32699cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
label_3269a0:
    // 0x3269a0: 0x3c030091  lui         $v1, 0x91
    ctx->pc = 0x3269a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)145 << 16));
    // 0x3269a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3269a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3269a8: 0x24630d30  addiu       $v1, $v1, 0xD30
    ctx->pc = 0x3269a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x3269ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3269acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3269b0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3269b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3269b4: 0x8f838b60  lw          $v1, -0x74A0($gp)
    ctx->pc = 0x3269b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937440)));
    // 0x3269b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3269b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3269bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3269BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3269C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269BCu;
        // 0x3269c0: 0xaf838b60  sw          $v1, -0x74A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3269BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3269C4u;
}

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

// Function: sub_0029A720
// Address: 0x29a720 - 0x29a764
void sub_0029A720_0x29a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A720_0x29a720");
#endif

    ctx->pc = 0x29a720u;

    // 0x29a720: 0x908308e8  lbu         $v1, 0x8E8($a0)
    ctx->pc = 0x29a720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2280)));
    // 0x29a724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a728: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A728u;
    {
        const bool branch_taken_0x29a728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A728u;
        // 0x29a72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a728) {
            ctx->pc = 0x29A738u;
            goto label_29a738;
        }
    }
    ctx->pc = 0x29A730u;
    // 0x29a730: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29A730u;
    {
        const bool branch_taken_0x29a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a730) {
            ctx->pc = 0x29A75Cu;
            goto label_29a75c;
        }
    }
    ctx->pc = 0x29A738u;
label_29a738:
    // 0x29a738: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x29a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x29a73c: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x29a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x29a740: 0x24421760  addiu       $v0, $v0, 0x1760
    ctx->pc = 0x29a740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5984));
    // 0x29a744: 0x9063005f  lbu         $v1, 0x5F($v1)
    ctx->pc = 0x29a744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 95)));
    // 0x29a748: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x29a748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x29a74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a750: 0x8c4201d4  lw          $v0, 0x1D4($v0)
    ctx->pc = 0x29a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
    // 0x29a754: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29a754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29a758: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29a758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29a75c:
    // 0x29a75c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A764u;
}

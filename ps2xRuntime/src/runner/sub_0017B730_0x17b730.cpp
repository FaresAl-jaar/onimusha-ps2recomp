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

// Function: sub_0017B730
// Address: 0x17b730 - 0x17b768
void sub_0017B730_0x17b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B730_0x17b730");
#endif

    ctx->pc = 0x17b730u;

    // 0x17b730: 0x27828648  addiu       $v0, $gp, -0x79B8
    ctx->pc = 0x17b730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936136));
    // 0x17b734: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x17b734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17b738: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x17b738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b73c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b740: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x17b740u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17b744: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17b748: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17b748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b74c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17b750: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x17b750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x17b754: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17B754u;
    {
        const bool branch_taken_0x17b754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B754u;
        // 0x17b758: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b754) {
            ctx->pc = 0x17B760u;
            goto label_17b760;
        }
    }
    ctx->pc = 0x17B75Cu;
    // 0x17b75c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x17b75cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_17b760:
    // 0x17b760: 0x3e00008  jr          $ra
    ctx->pc = 0x17B760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B768u;
}

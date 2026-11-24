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

// Function: sub_00190480
// Address: 0x190480 - 0x1904a8
void sub_00190480_0x190480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190480_0x190480");
#endif

    ctx->pc = 0x190480u;

    // 0x190480: 0x8f858724  lw          $a1, -0x78DC($gp)
    ctx->pc = 0x190480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x190484: 0x9784873c  lhu         $a0, -0x78C4($gp)
    ctx->pc = 0x190484u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936380)));
    // 0x190488: 0x9383872c  lbu         $v1, -0x78D4($gp)
    ctx->pc = 0x190488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x19048c: 0xaf858728  sw          $a1, -0x78D8($gp)
    ctx->pc = 0x19048cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 5));
    // 0x190490: 0xa7848740  sh          $a0, -0x78C0($gp)
    ctx->pc = 0x190490u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936384), (uint16_t)GPR_U32(ctx, 4));
    // 0x190494: 0xa3838730  sb          $v1, -0x78D0($gp)
    ctx->pc = 0x190494u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936368), (uint8_t)GPR_U32(ctx, 3));
    // 0x190498: 0xaf808724  sw          $zero, -0x78DC($gp)
    ctx->pc = 0x190498u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 0));
    // 0x19049c: 0xa780873c  sh          $zero, -0x78C4($gp)
    ctx->pc = 0x19049cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936380), (uint16_t)GPR_U32(ctx, 0));
    // 0x1904a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1904A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1904A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904A0u;
        // 0x1904a4: 0xa380872c  sb          $zero, -0x78D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936364), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1904A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1904A8u;
}

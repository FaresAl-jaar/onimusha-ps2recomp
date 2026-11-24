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

// Function: sub_002BD7F0
// Address: 0x2bd7f0 - 0x2bd818
void sub_002BD7F0_0x2bd7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD7F0_0x2bd7f0");
#endif

    ctx->pc = 0x2bd7f0u;

    // 0x2bd7f0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2bd7f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bd7f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd7f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD7F8u;
    {
        const bool branch_taken_0x2bd7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bd7f8) {
            ctx->pc = 0x2BD810u;
            goto label_2bd810;
        }
    }
    ctx->pc = 0x2BD800u;
    // 0x2bd800: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2bd800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd804: 0xa0a02ab6  sb          $zero, 0x2AB6($a1)
    ctx->pc = 0x2bd804u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10934), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bd808: 0xa4a22ab4  sh          $v0, 0x2AB4($a1)
    ctx->pc = 0x2bd808u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10932), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bd80c: 0x0  nop
    ctx->pc = 0x2bd80cu;
    // NOP
label_2bd810:
    // 0x2bd810: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD810u;
        // 0x2bd814: 0x24c20002  addiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD818u;
}

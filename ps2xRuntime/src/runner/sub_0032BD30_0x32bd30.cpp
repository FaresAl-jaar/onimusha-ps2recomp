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

// Function: sub_0032BD30
// Address: 0x32bd30 - 0x32bd80
void sub_0032BD30_0x32bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BD30_0x32bd30");
#endif

    switch (ctx->pc) {
        case 0x32bd58u: goto label_32bd58;
        default: break;
    }

    ctx->pc = 0x32bd30u;

    // 0x32bd30: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x32bd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x32bd34: 0x3c070091  lui         $a3, 0x91
    ctx->pc = 0x32bd34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)145 << 16));
    // 0x32bd38: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x32bd38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x32bd3c: 0x24e70ed0  addiu       $a3, $a3, 0xED0
    ctx->pc = 0x32bd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3792));
    // 0x32bd40: 0xa7838b7c  sh          $v1, -0x7484($gp)
    ctx->pc = 0x32bd40u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937468), (uint16_t)GPR_U32(ctx, 3));
    // 0x32bd44: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x32bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32bd48: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x32bd48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32bd4c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x32BD4Cu;
    {
        const bool branch_taken_0x32bd4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD4Cu;
        // 0x32bd50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bd4c) {
            ctx->pc = 0x32BD78u;
            goto label_32bd78;
        }
    }
    ctx->pc = 0x32BD54u;
    // 0x32bd54: 0x0  nop
    ctx->pc = 0x32bd54u;
    // NOP
label_32bd58:
    // 0x32bd58: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x32bd58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32bd5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32bd60: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x32bd60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32bd64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32bd68: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x32bd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32bd6c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x32bd6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32bd70: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32BD70u;
    {
        const bool branch_taken_0x32bd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD70u;
        // 0x32bd74: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bd70) {
            ctx->pc = 0x32BD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32bd58;
        }
    }
    ctx->pc = 0x32BD78u;
label_32bd78:
    // 0x32bd78: 0x3e00008  jr          $ra
    ctx->pc = 0x32BD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BD80u;
}

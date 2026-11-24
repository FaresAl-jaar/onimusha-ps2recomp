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

// Function: sub_00223C18
// Address: 0x223c18 - 0x223c60
void sub_00223C18_0x223c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223C18_0x223c18");
#endif

    switch (ctx->pc) {
        case 0x223c30u: goto label_223c30;
        default: break;
    }

    ctx->pc = 0x223c18u;

    // 0x223c18: 0x24830180  addiu       $v1, $a0, 0x180
    ctx->pc = 0x223c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x223c1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x223c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c20: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x223c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x223c24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x223C24u;
    {
        const bool branch_taken_0x223c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C24u;
        // 0x223c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c24) {
            ctx->pc = 0x223C48u;
            goto label_223c48;
        }
    }
    ctx->pc = 0x223C2Cu;
    // 0x223c2c: 0x0  nop
    ctx->pc = 0x223c2cu;
    // NOP
label_223c30:
    // 0x223c30: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x223c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x223c34: 0x28c3001a  slti        $v1, $a2, 0x1A
    ctx->pc = 0x223c34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x223c38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x223C38u;
    {
        const bool branch_taken_0x223c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C38u;
        // 0x223c3c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c38) {
            ctx->pc = 0x223C58u;
            goto label_223c58;
        }
    }
    ctx->pc = 0x223C40u;
    // 0x223c40: 0x24430180  addiu       $v1, $v0, 0x180
    ctx->pc = 0x223c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x223c44: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x223c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_223c48:
    // 0x223c48: 0x0  nop
    ctx->pc = 0x223c48u;
    // NOP
    // 0x223c4c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x223C4Cu;
    {
        const bool branch_taken_0x223c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x223c4c) {
            ctx->pc = 0x223C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223C4Cu;
            // 0x223c50: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223c30;
        }
    }
    ctx->pc = 0x223C54u;
    // 0x223c54: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x223c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_223c58:
    // 0x223c58: 0x3e00008  jr          $ra
    ctx->pc = 0x223C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C58u;
        // 0x223c5c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223C60u;
}

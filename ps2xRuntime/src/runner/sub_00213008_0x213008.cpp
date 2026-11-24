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

// Function: sub_00213008
// Address: 0x213008 - 0x213048
void sub_00213008_0x213008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213008_0x213008");
#endif

    switch (ctx->pc) {
        case 0x213018u: goto label_213018;
        default: break;
    }

    ctx->pc = 0x213008u;

    // 0x213008: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x213008u;
    {
        const bool branch_taken_0x213008 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x21300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213008u;
        // 0x21300c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213008) {
            ctx->pc = 0x21303Cu;
            goto label_21303c;
        }
    }
    ctx->pc = 0x213010u;
    // 0x213010: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x213010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213014: 0x0  nop
    ctx->pc = 0x213014u;
    // NOP
label_213018:
    // 0x213018: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x213018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21301c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21301Cu;
    {
        const bool branch_taken_0x21301c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21301Cu;
        // 0x213020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21301c) {
            ctx->pc = 0x213040u;
            goto label_213040;
        }
    }
    ctx->pc = 0x213024u;
    // 0x213024: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x213024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x213028: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x213028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21302c: 0x0  nop
    ctx->pc = 0x21302cu;
    // NOP
    // 0x213030: 0x0  nop
    ctx->pc = 0x213030u;
    // NOP
    // 0x213034: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x213034u;
    {
        const bool branch_taken_0x213034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213034) {
            ctx->pc = 0x213038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213034u;
            // 0x213038: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213018;
        }
    }
    ctx->pc = 0x21303Cu;
label_21303c:
    // 0x21303c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213040:
    // 0x213040: 0x3e00008  jr          $ra
    ctx->pc = 0x213040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213048u;
}

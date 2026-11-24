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

// Function: sub_00153BB0
// Address: 0x153bb0 - 0x153c28
void sub_00153BB0_0x153bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153BB0_0x153bb0");
#endif

    switch (ctx->pc) {
        case 0x153be0u: goto label_153be0;
        default: break;
    }

    ctx->pc = 0x153bb0u;

    // 0x153bb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x153bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x153bb4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x153bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x153bb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153BB8u;
    {
        const bool branch_taken_0x153bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BB8u;
        // 0x153bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bb8) {
            ctx->pc = 0x153BC8u;
            goto label_153bc8;
        }
    }
    ctx->pc = 0x153BC0u;
    // 0x153bc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x153BC0u;
    {
        const bool branch_taken_0x153bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153bc0) {
            ctx->pc = 0x153C20u;
            goto label_153c20;
        }
    }
    ctx->pc = 0x153BC8u;
label_153bc8:
    // 0x153bc8: 0x8f8385c0  lw          $v1, -0x7A40($gp)
    ctx->pc = 0x153bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x153bcc: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x153bccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x153bd0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x153BD0u;
    {
        const bool branch_taken_0x153bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BD0u;
        // 0x153bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bd0) {
            ctx->pc = 0x153C18u;
            goto label_153c18;
        }
    }
    ctx->pc = 0x153BD8u;
    // 0x153bd8: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x153bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x153bdc: 0x24a5eeb0  addiu       $a1, $a1, -0x1150
    ctx->pc = 0x153bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962864));
label_153be0:
    // 0x153be0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153be4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x153BE4u;
    {
        const bool branch_taken_0x153be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x153be4) {
            ctx->pc = 0x153C08u;
            goto label_153c08;
        }
    }
    ctx->pc = 0x153BECu;
    // 0x153bec: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x153becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x153bf0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x153bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x153bf4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x153bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x153bf8: 0x2442eeb0  addiu       $v0, $v0, -0x1150
    ctx->pc = 0x153bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962864));
    // 0x153bfc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x153bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x153c00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153C00u;
    {
        const bool branch_taken_0x153c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C00u;
        // 0x153c04: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c00) {
            ctx->pc = 0x153C20u;
            goto label_153c20;
        }
    }
    ctx->pc = 0x153C08u;
label_153c08:
    // 0x153c08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x153c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x153c0c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x153c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x153c10: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x153C10u;
    {
        const bool branch_taken_0x153c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C10u;
        // 0x153c14: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c10) {
            ctx->pc = 0x153BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153be0;
        }
    }
    ctx->pc = 0x153C18u;
label_153c18:
    // 0x153c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c1c: 0x0  nop
    ctx->pc = 0x153c1cu;
    // NOP
label_153c20:
    // 0x153c20: 0x3e00008  jr          $ra
    ctx->pc = 0x153C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153C28u;
}

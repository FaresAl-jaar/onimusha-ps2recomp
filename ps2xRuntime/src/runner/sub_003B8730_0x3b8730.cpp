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

// Function: sub_003B8730
// Address: 0x3b8730 - 0x3b8778
void sub_003B8730_0x3b8730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8730_0x3b8730");
#endif

    ctx->pc = 0x3b8730u;

    // 0x3b8730: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3b8730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3b8734: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x3b8734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x3b8738: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B8738u;
    {
        const bool branch_taken_0x3b8738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8738u;
        // 0x3b873c: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8738) {
            ctx->pc = 0x3B8760u;
            goto label_3b8760;
        }
    }
    ctx->pc = 0x3B8740u;
    // 0x3b8740: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8740u;
    {
        const bool branch_taken_0x3b8740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b8740) {
            ctx->pc = 0x3B8760u;
            goto label_3b8760;
        }
    }
    ctx->pc = 0x3B8748u;
    // 0x3b8748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b874c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B874Cu;
    {
        const bool branch_taken_0x3b874c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b874c) {
            ctx->pc = 0x3B8760u;
            goto label_3b8760;
        }
    }
    ctx->pc = 0x3B8754u;
    // 0x3b8754: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8754u;
    {
        const bool branch_taken_0x3b8754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8754) {
            ctx->pc = 0x3B8768u;
            goto label_3b8768;
        }
    }
    ctx->pc = 0x3B875Cu;
    // 0x3b875c: 0x0  nop
    ctx->pc = 0x3b875cu;
    // NOP
label_3b8760:
    // 0x3b8760: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8760u;
    {
        const bool branch_taken_0x3b8760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8760u;
        // 0x3b8764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8760) {
            ctx->pc = 0x3B8770u;
            goto label_3b8770;
        }
    }
    ctx->pc = 0x3B8768u;
label_3b8768:
    // 0x3b8768: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b8768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b876c: 0x0  nop
    ctx->pc = 0x3b876cu;
    // NOP
label_3b8770:
    // 0x3b8770: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8778u;
}

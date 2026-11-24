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

// Function: sub_00117918
// Address: 0x117918 - 0x117950
void sub_00117918_0x117918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117918_0x117918");
#endif

    switch (ctx->pc) {
        case 0x117928u: goto label_117928;
        default: break;
    }

    ctx->pc = 0x117918u;

    // 0x117918: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x117918u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x11791c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x11791Cu;
    {
        const bool branch_taken_0x11791c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x117920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11791Cu;
        // 0x117920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11791c) {
            ctx->pc = 0x117948u;
            goto label_117948;
        }
    }
    ctx->pc = 0x117924u;
    // 0x117924: 0x0  nop
    ctx->pc = 0x117924u;
    // NOP
label_117928:
    // 0x117928: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x117928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11792c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11792cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x117930: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x117930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x117934: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x117934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x117938: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x117938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x11793c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x117940: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x117940u;
    {
        const bool branch_taken_0x117940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117940) {
            ctx->pc = 0x117928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117928;
        }
    }
    ctx->pc = 0x117948u;
label_117948:
    // 0x117948: 0x3e00008  jr          $ra
    ctx->pc = 0x117948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117948u;
        // 0x11794c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117950u;
}

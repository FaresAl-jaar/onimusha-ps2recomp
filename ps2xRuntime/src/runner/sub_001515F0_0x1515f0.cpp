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

// Function: sub_001515F0
// Address: 0x1515f0 - 0x151638
void sub_001515F0_0x1515f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001515F0_0x1515f0");
#endif

    switch (ctx->pc) {
        case 0x151600u: goto label_151600;
        default: break;
    }

    ctx->pc = 0x1515f0u;

    // 0x1515f0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1515f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1515f4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1515f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1515f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1515f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515fc: 0x24844bd0  addiu       $a0, $a0, 0x4BD0
    ctx->pc = 0x1515fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19408));
label_151600:
    // 0x151600: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x151600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151604: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151604u;
    {
        const bool branch_taken_0x151604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x151608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151604u;
        // 0x151608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151604) {
            ctx->pc = 0x151618u;
            goto label_151618;
        }
    }
    ctx->pc = 0x15160Cu;
    // 0x15160c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15160Cu;
    {
        const bool branch_taken_0x15160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15160c) {
            ctx->pc = 0x151630u;
            goto label_151630;
        }
    }
    ctx->pc = 0x151614u;
    // 0x151614: 0x0  nop
    ctx->pc = 0x151614u;
    // NOP
label_151618:
    // 0x151618: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x151618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15161c: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x15161cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x151620: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x151620u;
    {
        const bool branch_taken_0x151620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151620u;
        // 0x151624: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151620) {
            ctx->pc = 0x151600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151600;
        }
    }
    ctx->pc = 0x151628u;
    // 0x151628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15162c: 0x0  nop
    ctx->pc = 0x15162cu;
    // NOP
label_151630:
    // 0x151630: 0x3e00008  jr          $ra
    ctx->pc = 0x151630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151638u;
}

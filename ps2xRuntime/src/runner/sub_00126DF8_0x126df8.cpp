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

// Function: sub_00126DF8
// Address: 0x126df8 - 0x126e28
void sub_00126DF8_0x126df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126DF8_0x126df8");
#endif

    ctx->pc = 0x126df8u;

    // 0x126df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126dfc: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x126dfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x126e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126e04: 0x948e000c  lhu         $t6, 0xC($a0)
    ctx->pc = 0x126e04u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x126e08: 0x31ce0009  andi        $t6, $t6, 0x9
    ctx->pc = 0x126e08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)9);
    // 0x126e0c: 0x15cf0003  bne         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126E0Cu;
    {
        const bool branch_taken_0x126e0c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x126E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E0Cu;
        // 0x126e10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e0c) {
            ctx->pc = 0x126E1Cu;
            goto label_126e1c;
        }
    }
    ctx->pc = 0x126E14u;
    // 0x126e14: 0x8048e58  j           func_123960
    ctx->pc = 0x126E14u;
    ctx->pc = 0x126E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E14u;
    // 0x126e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123960u;
    sub_00123960_0x123960(rdram, ctx, runtime); return;
    ctx->pc = 0x126E1Cu;
label_126e1c:
    // 0x126e1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e20: 0x3e00008  jr          $ra
    ctx->pc = 0x126E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E20u;
        // 0x126e24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126E28u;
}

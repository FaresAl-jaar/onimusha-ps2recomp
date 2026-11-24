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

// Function: sub_00350E20
// Address: 0x350e20 - 0x350e60
void sub_00350E20_0x350e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350E20_0x350e20");
#endif

    switch (ctx->pc) {
        case 0x350e30u: goto label_350e30;
        default: break;
    }

    ctx->pc = 0x350e20u;

    // 0x350e20: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x350e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x350e24: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x350e24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x350e28: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x350E28u;
    {
        const bool branch_taken_0x350e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x350E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E28u;
        // 0x350e2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e28) {
            ctx->pc = 0x350E58u;
            goto label_350e58;
        }
    }
    ctx->pc = 0x350E30u;
label_350e30:
    // 0x350e30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350E30u;
    {
        const bool branch_taken_0x350e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350e30) {
            ctx->pc = 0x350E40u;
            goto label_350e40;
        }
    }
    ctx->pc = 0x350E38u;
    // 0x350e38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x350e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350e3c: 0x0  nop
    ctx->pc = 0x350e3cu;
    // NOP
label_350e40:
    // 0x350e40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x350e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x350e44: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x350e44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x350e48: 0x0  nop
    ctx->pc = 0x350e48u;
    // NOP
    // 0x350e4c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x350E4Cu;
    {
        const bool branch_taken_0x350e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x350e4c) {
            ctx->pc = 0x350E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350e30;
        }
    }
    ctx->pc = 0x350E54u;
    // 0x350e54: 0x0  nop
    ctx->pc = 0x350e54u;
    // NOP
label_350e58:
    // 0x350e58: 0x3e00008  jr          $ra
    ctx->pc = 0x350E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350E60u;
}

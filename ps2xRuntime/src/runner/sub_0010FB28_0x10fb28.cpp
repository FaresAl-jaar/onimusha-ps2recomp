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

// Function: sub_0010FB28
// Address: 0x10fb28 - 0x10fb5c
void sub_0010FB28_0x10fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FB28_0x10fb28");
#endif

    switch (ctx->pc) {
        case 0x10fb40u: goto label_10fb40;
        default: break;
    }

    ctx->pc = 0x10fb28u;

    // 0x10fb28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fb2c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10fb30: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10FB30u;
    {
        const bool branch_taken_0x10fb30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB30u;
        // 0x10fb34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb30) {
            ctx->pc = 0x10FB50u;
            goto label_10fb50;
        }
    }
    ctx->pc = 0x10FB38u;
    // 0x10fb38: 0xc043e90  jal         func_10FA40
    ctx->pc = 0x10FB38u;
    SET_GPR_U32(ctx, 31, 0x10FB40u);
    ctx->pc = 0x10FB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB38u;
    // 0x10fb3c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA40u, 0x10FB38u, 0x10FB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB40u;
label_10fb40:
    // 0x10fb40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fb44: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x10fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10fb48: 0x8043e90  j           func_10FA40
    ctx->pc = 0x10FB48u;
    ctx->pc = 0x10FB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB48u;
    // 0x10fb4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA40u;
    sub_0010FA40_0x10fa40(rdram, ctx, runtime); return;
    ctx->pc = 0x10FB50u;
label_10fb50:
    // 0x10fb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fb54: 0x8043e90  j           func_10FA40
    ctx->pc = 0x10FB54u;
    ctx->pc = 0x10FB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB54u;
    // 0x10fb58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA40u;
    sub_0010FA40_0x10fa40(rdram, ctx, runtime); return;
    ctx->pc = 0x10FB5Cu;
}

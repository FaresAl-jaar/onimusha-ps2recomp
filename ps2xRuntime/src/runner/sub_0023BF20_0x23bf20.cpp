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

// Function: sub_0023BF20
// Address: 0x23bf20 - 0x23bf58
void sub_0023BF20_0x23bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BF20_0x23bf20");
#endif

    switch (ctx->pc) {
        case 0x23bf34u: goto label_23bf34;
        case 0x23bf3cu: goto label_23bf3c;
        case 0x23bf44u: goto label_23bf44;
        default: break;
    }

    ctx->pc = 0x23bf20u;

    // 0x23bf20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bf24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bf28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23bf2c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BF2Cu;
    SET_GPR_U32(ctx, 31, 0x23BF34u);
    ctx->pc = 0x23BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF2Cu;
    // 0x23bf30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BF2Cu, 0x23BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF34u;
label_23bf34:
    // 0x23bf34: 0xc08efd6  jal         func_23BF58
    ctx->pc = 0x23BF34u;
    SET_GPR_U32(ctx, 31, 0x23BF3Cu);
    ctx->pc = 0x23BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF34u;
    // 0x23bf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BF58u, 0x23BF34u, 0x23BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF3Cu;
label_23bf3c:
    // 0x23bf3c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23BF3Cu;
    SET_GPR_U32(ctx, 31, 0x23BF44u);
    ctx->pc = 0x23BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF3Cu;
    // 0x23bf40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23BF3Cu, 0x23BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF44u;
label_23bf44:
    // 0x23bf44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bf48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23bf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bf4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x23BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF50u;
        // 0x23bf54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BF58u;
}

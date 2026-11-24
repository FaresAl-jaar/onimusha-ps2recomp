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

// Function: sub_0038BF10
// Address: 0x38bf10 - 0x38bf54
void sub_0038BF10_0x38bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BF10_0x38bf10");
#endif

    switch (ctx->pc) {
        case 0x38bf34u: goto label_38bf34;
        case 0x38bf44u: goto label_38bf44;
        default: break;
    }

    ctx->pc = 0x38bf10u;

    // 0x38bf10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38bf14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38bf18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38bf1c: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x38bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x38bf20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38bf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bf24: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x38bf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x38bf28: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38bf2c: 0xc0c8b74  jal         func_322DD0
    ctx->pc = 0x38BF2Cu;
    SET_GPR_U32(ctx, 31, 0x38BF34u);
    ctx->pc = 0x38BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF2Cu;
    // 0x38bf30: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322DD0u, 0x38BF2Cu, 0x38BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF34u;
label_38bf34:
    // 0x38bf34: 0x96052acc  lhu         $a1, 0x2ACC($s0)
    ctx->pc = 0x38bf34u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
    // 0x38bf38: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x38bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x38bf3c: 0xc056e04  jal         func_15B810
    ctx->pc = 0x38BF3Cu;
    SET_GPR_U32(ctx, 31, 0x38BF44u);
    ctx->pc = 0x38BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF3Cu;
    // 0x38bf40: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x38BF3Cu, 0x38BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF44u;
label_38bf44:
    // 0x38bf44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38bf48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38bf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38bf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x38BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF4Cu;
        // 0x38bf50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BF54u;
}

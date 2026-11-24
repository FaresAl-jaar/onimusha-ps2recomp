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

// Function: sub_0038BF60
// Address: 0x38bf60 - 0x38bfb4
void sub_0038BF60_0x38bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BF60_0x38bf60");
#endif

    switch (ctx->pc) {
        case 0x38bf84u: goto label_38bf84;
        case 0x38bf94u: goto label_38bf94;
        case 0x38bfa4u: goto label_38bfa4;
        default: break;
    }

    ctx->pc = 0x38bf60u;

    // 0x38bf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38bf64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38bf68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38bf6c: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x38bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x38bf70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38bf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bf74: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x38bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x38bf78: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38bf7c: 0xc0c8b74  jal         func_322DD0
    ctx->pc = 0x38BF7Cu;
    SET_GPR_U32(ctx, 31, 0x38BF84u);
    ctx->pc = 0x38BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF7Cu;
    // 0x38bf80: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322DD0u, 0x38BF7Cu, 0x38BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF84u;
label_38bf84:
    // 0x38bf84: 0x96052acc  lhu         $a1, 0x2ACC($s0)
    ctx->pc = 0x38bf84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
    // 0x38bf88: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x38bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x38bf8c: 0xc056e04  jal         func_15B810
    ctx->pc = 0x38BF8Cu;
    SET_GPR_U32(ctx, 31, 0x38BF94u);
    ctx->pc = 0x38BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF8Cu;
    // 0x38bf90: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x38BF8Cu, 0x38BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF94u;
label_38bf94:
    // 0x38bf94: 0x96052ad4  lhu         $a1, 0x2AD4($s0)
    ctx->pc = 0x38bf94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10964)));
    // 0x38bf98: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x38bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x38bf9c: 0xc056e04  jal         func_15B810
    ctx->pc = 0x38BF9Cu;
    SET_GPR_U32(ctx, 31, 0x38BFA4u);
    ctx->pc = 0x38BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF9Cu;
    // 0x38bfa0: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x38BF9Cu, 0x38BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BFA4u;
label_38bfa4:
    // 0x38bfa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38bfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38bfa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38bfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38bfac: 0x3e00008  jr          $ra
    ctx->pc = 0x38BFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFACu;
        // 0x38bfb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BFB4u;
}

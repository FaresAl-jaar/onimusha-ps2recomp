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

// Function: sub_003CCC70
// Address: 0x3ccc70 - 0x3cccec
void sub_003CCC70_0x3ccc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCC70_0x3ccc70");
#endif

    switch (ctx->pc) {
        case 0x3cccbcu: goto label_3cccbc;
        case 0x3cccd8u: goto label_3cccd8;
        default: break;
    }

    ctx->pc = 0x3ccc70u;

    // 0x3ccc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ccc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ccc74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ccc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ccc78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ccc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ccc7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ccc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ccc80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ccc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ccc84: 0x8083032e  lb          $v1, 0x32E($a0)
    ctx->pc = 0x3ccc84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 814)));
    // 0x3ccc88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ccc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ccc8c: 0x80820333  lb          $v0, 0x333($a0)
    ctx->pc = 0x3ccc8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 819)));
    // 0x3ccc90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ccc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ccc94: 0x906301bd  lbu         $v1, 0x1BD($v1)
    ctx->pc = 0x3ccc94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 445)));
    // 0x3ccc98: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x3ccc98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x3ccc9c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3ccc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ccca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ccca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ccca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ccca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ccca8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3ccca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3cccac: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cccacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cccb0: 0x245101c4  addiu       $s1, $v0, 0x1C4
    ctx->pc = 0x3cccb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 452));
    // 0x3cccb4: 0xc0ceb84  jal         func_33AE10
    ctx->pc = 0x3CCCB4u;
    SET_GPR_U32(ctx, 31, 0x3CCCBCu);
    ctx->pc = 0x3CCCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCCB4u;
    // 0x3cccb8: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE10u, 0x3CCCB4u, 0x3CCCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCCBCu;
label_3cccbc:
    // 0x3cccbc: 0x82020333  lb          $v0, 0x333($s0)
    ctx->pc = 0x3cccbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 819)));
    // 0x3cccc0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3cccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3cccc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3cccc8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3cccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3ccccc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3cccccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3cccd0: 0xc0cebb4  jal         func_33AED0
    ctx->pc = 0x3CCCD0u;
    SET_GPR_U32(ctx, 31, 0x3CCCD8u);
    ctx->pc = 0x3CCCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CCCD0u;
    // 0x3cccd4: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x3CCCD0u, 0x3CCCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CCCD8u;
label_3cccd8:
    // 0x3cccd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cccd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cccdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cccdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ccce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ccce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ccce4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CCCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCCE4u;
        // 0x3ccce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CCCECu;
}

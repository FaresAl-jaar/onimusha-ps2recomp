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

// Function: sub_00371A20
// Address: 0x371a20 - 0x371ad0
void sub_00371A20_0x371a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371A20_0x371a20");
#endif

    switch (ctx->pc) {
        case 0x371a90u: goto label_371a90;
        case 0x371ab4u: goto label_371ab4;
        default: break;
    }

    ctx->pc = 0x371a20u;

    // 0x371a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x371a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x371a24: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371a28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x371a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x371a2c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x371a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x371a30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x371a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x371a34: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x371a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x371a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x371a3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x371a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x371a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371a44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x371a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371a4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x371a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a50: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x371a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a54: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x371a54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x371a58: 0x8c27ceb0  lw          $a3, -0x3150($at)
    ctx->pc = 0x371a58u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEB0u));
    // 0x371a5c: 0x2463aca0  addiu       $v1, $v1, -0x5360
    ctx->pc = 0x371a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945952));
    // 0x371a60: 0x24846a78  addiu       $a0, $a0, 0x6A78
    ctx->pc = 0x371a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27256));
    // 0x371a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x371a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371a6c: 0x71082  srl         $v0, $a3, 2
    ctx->pc = 0x371a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x371a70: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x371a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x371a74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x371a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x371a78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x371a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x371a7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x371a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x371a80: 0x1029821  addu        $s3, $t0, $v0
    ctx->pc = 0x371a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x371a84: 0x2333823  subu        $a3, $s1, $s3
    ctx->pc = 0x371a84u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x371a88: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x371A88u;
    SET_GPR_U32(ctx, 31, 0x371A90u);
    ctx->pc = 0x371A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371A88u;
    // 0x371a8c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x371A88u, 0x371A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A90u;
label_371a90:
    // 0x371a90: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x371a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x371a94: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371a98: 0x2333821  addu        $a3, $s1, $s3
    ctx->pc = 0x371a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x371a9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x371a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371aa0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x371aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371aa4: 0x24846a84  addiu       $a0, $a0, 0x6A84
    ctx->pc = 0x371aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27268));
    // 0x371aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371aac: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x371AACu;
    SET_GPR_U32(ctx, 31, 0x371AB4u);
    ctx->pc = 0x371AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371AACu;
    // 0x371ab0: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x371AACu, 0x371AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AB4u;
label_371ab4:
    // 0x371ab4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x371ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371ab8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371abc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x371AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371AC8u;
        // 0x371acc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371AD0u;
}

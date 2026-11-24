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

// Function: sub_003F6C20
// Address: 0x3f6c20 - 0x3f6cc4
void sub_003F6C20_0x3f6c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6C20_0x3f6c20");
#endif

    switch (ctx->pc) {
        case 0x3f6c48u: goto label_3f6c48;
        case 0x3f6c60u: goto label_3f6c60;
        case 0x3f6c70u: goto label_3f6c70;
        case 0x3f6c84u: goto label_3f6c84;
        default: break;
    }

    ctx->pc = 0x3f6c20u;

    // 0x3f6c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f6c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3f6c24: 0x24050d00  addiu       $a1, $zero, 0xD00
    ctx->pc = 0x3f6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
    // 0x3f6c28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f6c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3f6c2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f6c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f6c30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f6c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f6c34: 0x64130d00  daddiu      $s3, $zero, 0xD00
    ctx->pc = 0x3f6c34u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3328);
    // 0x3f6c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f6c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f6c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f6c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f6c40: 0xc0bce70  jal         func_2F39C0
    ctx->pc = 0x3F6C40u;
    SET_GPR_U32(ctx, 31, 0x3F6C48u);
    ctx->pc = 0x3F6C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C40u;
    // 0x3f6c44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39C0u, 0x3F6C40u, 0x3F6C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C48u;
label_3f6c48:
    // 0x3f6c48: 0x3c01004f  lui         $at, 0x4F
    ctx->pc = 0x3f6c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)79 << 16));
    // 0x3f6c4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f6c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c50: 0x94239066  lhu         $v1, -0x6F9A($at)
    ctx->pc = 0x3f6c50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x4E9066u));
    // 0x3f6c54: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f6c54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f6c58: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F6C58u;
    {
        const bool branch_taken_0x3f6c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C58u;
        // 0x3f6c5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6c58) {
            ctx->pc = 0x3F6CA8u;
            goto label_3f6ca8;
        }
    }
    ctx->pc = 0x3F6C60u;
label_3f6c60:
    // 0x3f6c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f6c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c68: 0xc0bcbdc  jal         func_2F2F70
    ctx->pc = 0x3F6C68u;
    SET_GPR_U32(ctx, 31, 0x3F6C70u);
    ctx->pc = 0x3F6C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C68u;
    // 0x3f6c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x3F6C68u, 0x3F6C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C70u;
label_3f6c70:
    // 0x3f6c70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F6C70u;
    {
        const bool branch_taken_0x3f6c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C70u;
        // 0x3f6c74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6c70) {
            ctx->pc = 0x3F6C88u;
            goto label_3f6c88;
        }
    }
    ctx->pc = 0x3F6C78u;
    // 0x3f6c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f6c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c7c: 0xc049590  jal         func_125640
    ctx->pc = 0x3F6C7Cu;
    SET_GPR_U32(ctx, 31, 0x3F6C84u);
    ctx->pc = 0x3F6C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C7Cu;
    // 0x3f6c80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3F6C7Cu, 0x3F6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C84u;
label_3f6c84:
    // 0x3f6c84: 0x0  nop
    ctx->pc = 0x3f6c84u;
    // NOP
label_3f6c88:
    // 0x3f6c88: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x3f6c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3f6c8c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x3f6c8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3f6c90: 0x3c01004f  lui         $at, 0x4F
    ctx->pc = 0x3f6c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)79 << 16));
    // 0x3f6c94: 0x94239066  lhu         $v1, -0x6F9A($at)
    ctx->pc = 0x3f6c94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x4E9066u));
    // 0x3f6c98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f6c98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f6c9c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f6c9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f6ca0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3F6CA0u;
    {
        const bool branch_taken_0x3f6ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CA0u;
        // 0x3f6ca4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ca0) {
            ctx->pc = 0x3F6C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6c60;
        }
    }
    ctx->pc = 0x3F6CA8u;
label_3f6ca8:
    // 0x3f6ca8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f6ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f6cac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f6cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f6cb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f6cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f6cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f6cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f6cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CBCu;
        // 0x3f6cc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6CC4u;
}

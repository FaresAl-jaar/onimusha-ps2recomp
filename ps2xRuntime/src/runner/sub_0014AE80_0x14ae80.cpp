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

// Function: sub_0014AE80
// Address: 0x14ae80 - 0x14af34
void sub_0014AE80_0x14ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AE80_0x14ae80");
#endif

    switch (ctx->pc) {
        case 0x14aed8u: goto label_14aed8;
        case 0x14aee4u: goto label_14aee4;
        default: break;
    }

    ctx->pc = 0x14ae80u;

    // 0x14ae80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14ae84: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x14ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14ae88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14ae8c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x14ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14ae90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14ae90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14ae94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ae98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14ae9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14aea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14aea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14aea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14aea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14aeac: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x14aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14aeb0: 0x8c82027c  lw          $v0, 0x27C($a0)
    ctx->pc = 0x14aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x14aeb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14aeb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aeb8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14aeb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14aebc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x14AEBCu;
    {
        const bool branch_taken_0x14aebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEBCu;
        // 0x14aec0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aebc) {
            ctx->pc = 0x14AF10u;
            goto label_14af10;
        }
    }
    ctx->pc = 0x14AEC4u;
    // 0x14aec4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14aec8: 0x51ac0  sll         $v1, $a1, 11
    ctx->pc = 0x14aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x14aecc: 0x24428f40  addiu       $v0, $v0, -0x70C0
    ctx->pc = 0x14aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
    // 0x14aed0: 0x2492027c  addiu       $s2, $a0, 0x27C
    ctx->pc = 0x14aed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 636));
    // 0x14aed4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x14aed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14aed8:
    // 0x14aed8: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x14aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x14aedc: 0xc049da8  jal         func_1276A0
    ctx->pc = 0x14AEDCu;
    SET_GPR_U32(ctx, 31, 0x14AEE4u);
    ctx->pc = 0x14AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AEDCu;
    // 0x14aee0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1276A0u, 0x14AEDCu, 0x14AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AEE4u;
label_14aee4:
    // 0x14aee4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AEE4u;
    {
        const bool branch_taken_0x14aee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aee4) {
            ctx->pc = 0x14AEF8u;
            goto label_14aef8;
        }
    }
    ctx->pc = 0x14AEECu;
    // 0x14aeec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14AEECu;
    {
        const bool branch_taken_0x14aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AEECu;
        // 0x14aef0: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aeec) {
            ctx->pc = 0x14AF18u;
            goto label_14af18;
        }
    }
    ctx->pc = 0x14AEF4u;
    // 0x14aef4: 0x0  nop
    ctx->pc = 0x14aef4u;
    // NOP
label_14aef8:
    // 0x14aef8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14aefc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14aefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14af00: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14af00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14af04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14AF04u;
    {
        const bool branch_taken_0x14af04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF04u;
        // 0x14af08: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af04) {
            ctx->pc = 0x14AED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14aed8;
        }
    }
    ctx->pc = 0x14AF0Cu;
    // 0x14af0c: 0x0  nop
    ctx->pc = 0x14af0cu;
    // NOP
label_14af10:
    // 0x14af10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14af10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af14: 0x0  nop
    ctx->pc = 0x14af14u;
    // NOP
label_14af18:
    // 0x14af18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14af18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14af1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14af1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14af20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14af20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14af24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14af24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14af28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14af28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14af2c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF2Cu;
        // 0x14af30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AF34u;
}

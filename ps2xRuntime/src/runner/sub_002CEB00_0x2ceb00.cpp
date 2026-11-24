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

// Function: sub_002CEB00
// Address: 0x2ceb00 - 0x2ceb9c
void sub_002CEB00_0x2ceb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEB00_0x2ceb00");
#endif

    switch (ctx->pc) {
        case 0x2ceb30u: goto label_2ceb30;
        case 0x2ceb50u: goto label_2ceb50;
        default: break;
    }

    ctx->pc = 0x2ceb00u;

    // 0x2ceb00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ceb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ceb04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ceb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ceb08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ceb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ceb0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ceb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ceb10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ceb10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ceb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ceb18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ceb18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ceb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ceb20: 0x3c110091  lui         $s1, 0x91
    ctx->pc = 0x2ceb20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)145 << 16));
    // 0x2ceb24: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x2ceb24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x2ceb28: 0x26313fb0  addiu       $s1, $s1, 0x3FB0
    ctx->pc = 0x2ceb28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16304));
    // 0x2ceb2c: 0x261078d0  addiu       $s0, $s0, 0x78D0
    ctx->pc = 0x2ceb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30928));
label_2ceb30:
    // 0x2ceb30: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ceb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ceb34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CEB34u;
    {
        const bool branch_taken_0x2ceb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb34) {
            ctx->pc = 0x2CEB68u;
            goto label_2ceb68;
        }
    }
    ctx->pc = 0x2CEB3Cu;
    // 0x2ceb3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ceb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ceb40: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CEB40u;
    {
        const bool branch_taken_0x2ceb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb40) {
            ctx->pc = 0x2CEB68u;
            goto label_2ceb68;
        }
    }
    ctx->pc = 0x2CEB48u;
    // 0x2ceb48: 0xc08ec0a  jal         func_23B028
    ctx->pc = 0x2CEB48u;
    SET_GPR_U32(ctx, 31, 0x2CEB50u);
    ctx->pc = 0x23B028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B028u, 0x2CEB48u, 0x2CEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB50u;
label_2ceb50:
    // 0x2ceb50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ceb54: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2ceb54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ceb58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEB58u;
    {
        const bool branch_taken_0x2ceb58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb58) {
            ctx->pc = 0x2CEB68u;
            goto label_2ceb68;
        }
    }
    ctx->pc = 0x2CEB60u;
    // 0x2ceb60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ceb60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ceb64: 0x0  nop
    ctx->pc = 0x2ceb64u;
    // NOP
label_2ceb68:
    // 0x2ceb68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ceb68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ceb6c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2ceb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ceb70: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2ceb70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2ceb74: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CEB74u;
    {
        const bool branch_taken_0x2ceb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB74u;
        // 0x2ceb78: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb74) {
            ctx->pc = 0x2CEB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ceb30;
        }
    }
    ctx->pc = 0x2CEB7Cu;
    // 0x2ceb7c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ceb7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ceb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ceb84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ceb84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ceb88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ceb88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ceb8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ceb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ceb90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ceb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ceb94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB94u;
        // 0x2ceb98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEB9Cu;
}

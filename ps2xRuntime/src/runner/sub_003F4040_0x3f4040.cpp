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

// Function: sub_003F4040
// Address: 0x3f4040 - 0x3f40ec
void sub_003F4040_0x3f4040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4040_0x3f4040");
#endif

    switch (ctx->pc) {
        case 0x3f4058u: goto label_3f4058;
        case 0x3f4084u: goto label_3f4084;
        case 0x3f4098u: goto label_3f4098;
        case 0x3f40b4u: goto label_3f40b4;
        default: break;
    }

    ctx->pc = 0x3f4040u;

    // 0x3f4040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f4040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f4044: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x3f4044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x3f4048: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f4048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f404c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f4050: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3F4050u;
    SET_GPR_U32(ctx, 31, 0x3F4058u);
    ctx->pc = 0x3F4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4050u;
    // 0x3f4054: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3F4050u, 0x3F4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4058u;
label_3f4058:
    // 0x3f4058: 0xaf828d44  sw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f4058u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937924), GPR_U32(ctx, 2));
    // 0x3f405c: 0x8f838d44  lw          $v1, -0x72BC($gp)
    ctx->pc = 0x3f405cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f4060: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F4060u;
    {
        const bool branch_taken_0x3f4060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4060u;
        // 0x3f4064: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4060) {
            ctx->pc = 0x3F40D8u;
            goto label_3f40d8;
        }
    }
    ctx->pc = 0x3F4068u;
    // 0x3f4068: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f4068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f406c: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3f406cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x3f4070: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3f4070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3f4074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f4074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f4078: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f4078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f407c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3F407Cu;
    SET_GPR_U32(ctx, 31, 0x3F4084u);
    ctx->pc = 0x3F4080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F407Cu;
    // 0x3f4080: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3F407Cu, 0x3F4084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4084u;
label_3f4084:
    // 0x3f4084: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f4084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f4088: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f4088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f408c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F408Cu;
    {
        const bool branch_taken_0x3f408c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F408Cu;
        // 0x3f4090: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f408c) {
            ctx->pc = 0x3F40D0u;
            goto label_3f40d0;
        }
    }
    ctx->pc = 0x3F4094u;
    // 0x3f4094: 0x0  nop
    ctx->pc = 0x3f4094u;
    // NOP
label_3f4098:
    // 0x3f4098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f409c: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F409Cu;
    {
        const bool branch_taken_0x3f409c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F409Cu;
        // 0x3f40a0: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f409c) {
            ctx->pc = 0x3F40B8u;
            goto label_3f40b8;
        }
    }
    ctx->pc = 0x3F40A4u;
    // 0x3f40a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f40a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f40a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f40a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f40ac: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F40ACu;
    SET_GPR_U32(ctx, 31, 0x3F40B4u);
    ctx->pc = 0x3F40B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F40ACu;
    // 0x3f40b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F40ACu, 0x3F40B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F40B4u;
label_3f40b4:
    // 0x3f40b4: 0x0  nop
    ctx->pc = 0x3f40b4u;
    // NOP
label_3f40b8:
    // 0x3f40b8: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f40b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f40bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f40bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f40c0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f40c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f40c4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F40C4u;
    {
        const bool branch_taken_0x3f40c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f40c4) {
            ctx->pc = 0x3F4098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f4098;
        }
    }
    ctx->pc = 0x3F40CCu;
    // 0x3f40cc: 0x0  nop
    ctx->pc = 0x3f40ccu;
    // NOP
label_3f40d0:
    // 0x3f40d0: 0x8f838d44  lw          $v1, -0x72BC($gp)
    ctx->pc = 0x3f40d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f40d4: 0xa06001d0  sb          $zero, 0x1D0($v1)
    ctx->pc = 0x3f40d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 464), (uint8_t)GPR_U32(ctx, 0));
label_3f40d8:
    // 0x3f40d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f40d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f40dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f40dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f40e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f40e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f40e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F40E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40E4u;
        // 0x3f40e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F40E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F40ECu;
}

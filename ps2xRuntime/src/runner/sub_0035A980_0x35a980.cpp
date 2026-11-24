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

// Function: sub_0035A980
// Address: 0x35a980 - 0x35aa3c
void sub_0035A980_0x35a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A980_0x35a980");
#endif

    switch (ctx->pc) {
        case 0x35a9c8u: goto label_35a9c8;
        case 0x35a9d4u: goto label_35a9d4;
        case 0x35aa00u: goto label_35aa00;
        case 0x35aa0cu: goto label_35aa0c;
        default: break;
    }

    ctx->pc = 0x35a980u;

    // 0x35a980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35a984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x35a988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35a98c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35a990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35a994: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35a994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35a99c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35a99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9a0: 0x2e010101  sltiu       $at, $s0, 0x101
    ctx->pc = 0x35a9a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x35a9a4: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x35A9A4u;
    {
        const bool branch_taken_0x35a9a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A9A4u;
        // 0x35a9a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a9a4) {
            ctx->pc = 0x35AA20u;
            goto label_35aa20;
        }
    }
    ctx->pc = 0x35A9ACu;
    // 0x35a9ac: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x35a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x35a9b0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35A9B0u;
    {
        const bool branch_taken_0x35a9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a9b0) {
            ctx->pc = 0x35A9E8u;
            goto label_35a9e8;
        }
    }
    ctx->pc = 0x35A9B8u;
    // 0x35a9b8: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x35a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x35a9bc: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x35a9bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35a9c0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x35A9C0u;
    {
        const bool branch_taken_0x35a9c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A9C0u;
        // 0x35a9c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a9c0) {
            ctx->pc = 0x35A9E8u;
            goto label_35a9e8;
        }
    }
    ctx->pc = 0x35A9C8u;
label_35a9c8:
    // 0x35a9c8: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x35a9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x35a9cc: 0xc0d6b54  jal         func_35AD50
    ctx->pc = 0x35A9CCu;
    SET_GPR_U32(ctx, 31, 0x35A9D4u);
    ctx->pc = 0x35A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A9CCu;
    // 0x35a9d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AD50u, 0x35A9CCu, 0x35A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9D4u;
label_35a9d4:
    // 0x35a9d4: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x35a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x35a9d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35a9d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35a9dc: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x35a9dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35a9e0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35A9E0u;
    {
        const bool branch_taken_0x35a9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a9e0) {
            ctx->pc = 0x35A9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a9c8;
        }
    }
    ctx->pc = 0x35A9E8u;
label_35a9e8:
    // 0x35a9e8: 0xae510150  sw          $s1, 0x150($s2)
    ctx->pc = 0x35a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 17));
    // 0x35a9ec: 0xae500154  sw          $s0, 0x154($s2)
    ctx->pc = 0x35a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 16));
    // 0x35a9f0: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x35a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x35a9f4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x35a9f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35a9f8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x35A9F8u;
    {
        const bool branch_taken_0x35a9f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A9F8u;
        // 0x35a9fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a9f8) {
            ctx->pc = 0x35AA20u;
            goto label_35aa20;
        }
    }
    ctx->pc = 0x35AA00u;
label_35aa00:
    // 0x35aa00: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x35aa00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x35aa04: 0xc0d6b54  jal         func_35AD50
    ctx->pc = 0x35AA04u;
    SET_GPR_U32(ctx, 31, 0x35AA0Cu);
    ctx->pc = 0x35AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AA04u;
    // 0x35aa08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AD50u, 0x35AA04u, 0x35AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AA0Cu;
label_35aa0c:
    // 0x35aa0c: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x35aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x35aa10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35aa10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35aa14: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x35aa14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35aa18: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35AA18u;
    {
        const bool branch_taken_0x35aa18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35aa18) {
            ctx->pc = 0x35AA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35aa00;
        }
    }
    ctx->pc = 0x35AA20u;
label_35aa20:
    // 0x35aa20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35aa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35aa24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35aa24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35aa28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35aa28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35aa2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35aa2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aa30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35aa30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aa34: 0x3e00008  jr          $ra
    ctx->pc = 0x35AA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA34u;
        // 0x35aa38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AA3Cu;
}

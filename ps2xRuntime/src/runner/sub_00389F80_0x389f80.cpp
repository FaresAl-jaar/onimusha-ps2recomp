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

// Function: sub_00389F80
// Address: 0x389f80 - 0x38a02c
void sub_00389F80_0x389f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389F80_0x389f80");
#endif

    switch (ctx->pc) {
        case 0x389fb0u: goto label_389fb0;
        case 0x389fc4u: goto label_389fc4;
        case 0x389fe8u: goto label_389fe8;
        case 0x389ffcu: goto label_389ffc;
        default: break;
    }

    ctx->pc = 0x389f80u;

    // 0x389f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x389f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x389f84: 0x2403d8aa  addiu       $v1, $zero, -0x2756
    ctx->pc = 0x389f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957226));
    // 0x389f88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x389f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x389f8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x389f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x389f90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x389f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x389f94: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x389f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x389f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x389f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x389f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x389fa0: 0x1663000f  bne         $s3, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x389FA0u;
    {
        const bool branch_taken_0x389fa0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x389FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FA0u;
        // 0x389fa4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389fa0) {
            ctx->pc = 0x389FE0u;
            goto label_389fe0;
        }
    }
    ctx->pc = 0x389FA8u;
    // 0x389fa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x389fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389fac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x389facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389fb0:
    // 0x389fb0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x389fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x389fb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x389FB4u;
    {
        const bool branch_taken_0x389fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FB4u;
        // 0x389fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389fb4) {
            ctx->pc = 0x389FC8u;
            goto label_389fc8;
        }
    }
    ctx->pc = 0x389FBCu;
    // 0x389fbc: 0xc0e2744  jal         func_389D10
    ctx->pc = 0x389FBCu;
    SET_GPR_U32(ctx, 31, 0x389FC4u);
    ctx->pc = 0x389FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389FBCu;
    // 0x389fc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x389FBCu, 0x389FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389FC4u;
label_389fc4:
    // 0x389fc4: 0x0  nop
    ctx->pc = 0x389fc4u;
    // NOP
label_389fc8:
    // 0x389fc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x389fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x389fcc: 0x2a430020  slti        $v1, $s2, 0x20
    ctx->pc = 0x389fccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x389fd0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x389FD0u;
    {
        const bool branch_taken_0x389fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FD0u;
        // 0x389fd4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389fd0) {
            ctx->pc = 0x389FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389fb0;
        }
    }
    ctx->pc = 0x389FD8u;
    // 0x389fd8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x389FD8u;
    {
        const bool branch_taken_0x389fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389fd8) {
            ctx->pc = 0x38A010u;
            goto label_38a010;
        }
    }
    ctx->pc = 0x389FE0u;
label_389fe0:
    // 0x389fe0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x389fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389fe4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x389fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389fe8:
    // 0x389fe8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x389fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x389fec: 0x16630004  bne         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x389FECu;
    {
        const bool branch_taken_0x389fec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x389FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FECu;
        // 0x389ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389fec) {
            ctx->pc = 0x38A000u;
            goto label_38a000;
        }
    }
    ctx->pc = 0x389FF4u;
    // 0x389ff4: 0xc0e2744  jal         func_389D10
    ctx->pc = 0x389FF4u;
    SET_GPR_U32(ctx, 31, 0x389FFCu);
    ctx->pc = 0x389FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389FF4u;
    // 0x389ff8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x389FF4u, 0x389FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389FFCu;
label_389ffc:
    // 0x389ffc: 0x0  nop
    ctx->pc = 0x389ffcu;
    // NOP
label_38a000:
    // 0x38a000: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38a000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x38a004: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x38a004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x38a008: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x38A008u;
    {
        const bool branch_taken_0x38a008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A008u;
        // 0x38a00c: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a008) {
            ctx->pc = 0x389FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389fe8;
        }
    }
    ctx->pc = 0x38A010u;
label_38a010:
    // 0x38a010: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38a010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38a014: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38a014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a018: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38a018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a01c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38a01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a024: 0x3e00008  jr          $ra
    ctx->pc = 0x38A024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A024u;
        // 0x38a028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A02Cu;
}

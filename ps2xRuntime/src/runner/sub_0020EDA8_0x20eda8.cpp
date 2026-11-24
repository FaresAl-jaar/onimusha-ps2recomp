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

// Function: sub_0020EDA8
// Address: 0x20eda8 - 0x20ee64
void sub_0020EDA8_0x20eda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EDA8_0x20eda8");
#endif

    switch (ctx->pc) {
        case 0x20ee18u: goto label_20ee18;
        case 0x20ee34u: goto label_20ee34;
        case 0x20ee44u: goto label_20ee44;
        default: break;
    }

    ctx->pc = 0x20eda8u;

    // 0x20eda8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x20eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20edac: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20edacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20edb0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x20edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20edb4: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x20edb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x20edb8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20edb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20edbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20edc0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20edc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20edc4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x20edc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x20edc8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20edc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20edcc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20edccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20edd0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x20edd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x20edd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20edd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20edd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20eddc: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x20eddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20ede0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x20ede0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ede4: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x20ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x20ede8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20edec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20edecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edf0: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x20edf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x20edf4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20EDF4u;
    {
        const bool branch_taken_0x20edf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EDF4u;
        // 0x20edf8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edf4) {
            ctx->pc = 0x20EE08u;
            goto label_20ee08;
        }
    }
    ctx->pc = 0x20EDFCu;
    // 0x20edfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20edfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20EE00u;
    {
        const bool branch_taken_0x20ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE00u;
        // 0x20ee04: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee00) {
            ctx->pc = 0x20EE34u;
            goto label_20ee34;
        }
    }
    ctx->pc = 0x20EE08u;
label_20ee08:
    // 0x20ee08: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20ee0c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20ee0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ee10: 0xc083b9a  jal         func_20EE68
    ctx->pc = 0x20EE10u;
    SET_GPR_U32(ctx, 31, 0x20EE18u);
    ctx->pc = 0x20EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE10u;
    // 0x20ee14: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE68u, 0x20EE10u, 0x20EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE18u;
label_20ee18:
    // 0x20ee18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20ee18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20ee20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20EE24u;
    {
        const bool branch_taken_0x20ee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE24u;
        // 0x20ee28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee24) {
            ctx->pc = 0x20EE48u;
            goto label_20ee48;
        }
    }
    ctx->pc = 0x20EE2Cu;
    // 0x20ee2c: 0xc083ce2  jal         func_20F388
    ctx->pc = 0x20EE2Cu;
    SET_GPR_U32(ctx, 31, 0x20EE34u);
    ctx->pc = 0x20F388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F388u, 0x20EE2Cu, 0x20EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE34u;
label_20ee34:
    // 0x20ee34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20ee38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee3c: 0xc083c76  jal         func_20F1D8
    ctx->pc = 0x20EE3Cu;
    SET_GPR_U32(ctx, 31, 0x20EE44u);
    ctx->pc = 0x20EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE3Cu;
    // 0x20ee40: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1D8u, 0x20EE3Cu, 0x20EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE44u;
label_20ee44:
    // 0x20ee44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ee44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ee48:
    // 0x20ee48: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20ee48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ee4c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20ee4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20ee50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20ee50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ee54: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x20ee54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ee58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20ee58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x20EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE5Cu;
        // 0x20ee60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EE64u;
}

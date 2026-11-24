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

// Function: sub_0013ED70
// Address: 0x13ed70 - 0x13ee84
void sub_0013ED70_0x13ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013ED70_0x13ed70");
#endif

    switch (ctx->pc) {
        case 0x13ed90u: goto label_13ed90;
        case 0x13eda4u: goto label_13eda4;
        case 0x13edb0u: goto label_13edb0;
        case 0x13edc4u: goto label_13edc4;
        default: break;
    }

    ctx->pc = 0x13ed70u;

    // 0x13ed70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13ed74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13ed78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13ed7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ed80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13ed80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ed88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ed8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13ed8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ed90:
    // 0x13ed90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x13ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x13ed94: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x13ed94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x13ed98: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x13ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x13ed9c: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x13ED9Cu;
    SET_GPR_U32(ctx, 31, 0x13EDA4u);
    ctx->pc = 0x13EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED9Cu;
    // 0x13eda0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x13ED9Cu, 0x13EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDA4u;
label_13eda4:
    // 0x13eda4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13eda4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eda8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13eda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edac: 0x0  nop
    ctx->pc = 0x13edacu;
    // NOP
label_13edb0:
    // 0x13edb0: 0x12710025  beq         $s3, $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x13EDB0u;
    {
        const bool branch_taken_0x13edb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x13EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDB0u;
        // 0x13edb4: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edb0) {
            ctx->pc = 0x13EE48u;
            goto label_13ee48;
        }
    }
    ctx->pc = 0x13EDB8u;
    // 0x13edb8: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x13edb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x13edbc: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x13EDBCu;
    SET_GPR_U32(ctx, 31, 0x13EDC4u);
    ctx->pc = 0x13EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDBCu;
    // 0x13edc0: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x13EDBCu, 0x13EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDC4u;
label_13edc4:
    // 0x13edc4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13edc8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x13edc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13edcc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x13edccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13edd0: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x13edd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13edd4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EDD4u;
    {
        const bool branch_taken_0x13edd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDD4u;
        // 0x13edd8: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edd4) {
            ctx->pc = 0x13EDE8u;
            goto label_13ede8;
        }
    }
    ctx->pc = 0x13EDDCu;
    // 0x13eddc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13EDDCu;
    {
        const bool branch_taken_0x13eddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDDCu;
        // 0x13ede0: 0x85182b  sltu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eddc) {
            ctx->pc = 0x13EE28u;
            goto label_13ee28;
        }
    }
    ctx->pc = 0x13EDE4u;
    // 0x13ede4: 0x0  nop
    ctx->pc = 0x13ede4u;
    // NOP
label_13ede8:
    // 0x13ede8: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x13ede8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13edec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EDECu;
    {
        const bool branch_taken_0x13edec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13edec) {
            ctx->pc = 0x13EE00u;
            goto label_13ee00;
        }
    }
    ctx->pc = 0x13EDF4u;
    // 0x13edf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13EDF4u;
    {
        const bool branch_taken_0x13edf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDF4u;
        // 0x13edf8: 0xc3182b  sltu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edf4) {
            ctx->pc = 0x13EE28u;
            goto label_13ee28;
        }
    }
    ctx->pc = 0x13EDFCu;
    // 0x13edfc: 0x0  nop
    ctx->pc = 0x13edfcu;
    // NOP
label_13ee00:
    // 0x13ee00: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x13ee00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13ee04: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EE04u;
    {
        const bool branch_taken_0x13ee04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE04u;
        // 0x13ee08: 0x83082b  sltu        $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee04) {
            ctx->pc = 0x13EE20u;
            goto label_13ee20;
        }
    }
    ctx->pc = 0x13EE0Cu;
    // 0x13ee0c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13EE0Cu;
    {
        const bool branch_taken_0x13ee0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE0Cu;
        // 0x13ee10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee0c) {
            ctx->pc = 0x13EE20u;
            goto label_13ee20;
        }
    }
    ctx->pc = 0x13EE14u;
    // 0x13ee14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13EE14u;
    {
        const bool branch_taken_0x13ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ee14) {
            ctx->pc = 0x13EE28u;
            goto label_13ee28;
        }
    }
    ctx->pc = 0x13EE1Cu;
    // 0x13ee1c: 0x0  nop
    ctx->pc = 0x13ee1cu;
    // NOP
label_13ee20:
    // 0x13ee20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13ee20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee24: 0x0  nop
    ctx->pc = 0x13ee24u;
    // NOP
label_13ee28:
    // 0x13ee28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EE28u;
    {
        const bool branch_taken_0x13ee28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ee28) {
            ctx->pc = 0x13EE48u;
            goto label_13ee48;
        }
    }
    ctx->pc = 0x13EE30u;
    // 0x13ee30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ee34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ee38: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x13ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x13ee3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13ee3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13ee40: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x13ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x13ee44: 0x0  nop
    ctx->pc = 0x13ee44u;
    // NOP
label_13ee48:
    // 0x13ee48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13ee48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13ee4c: 0x2e230015  sltiu       $v1, $s1, 0x15
    ctx->pc = 0x13ee4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x13ee50: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x13EE50u;
    {
        const bool branch_taken_0x13ee50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ee50) {
            ctx->pc = 0x13EDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13edb0;
        }
    }
    ctx->pc = 0x13EE58u;
    // 0x13ee58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13ee58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13ee5c: 0x2e630014  sltiu       $v1, $s3, 0x14
    ctx->pc = 0x13ee5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x13ee60: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x13EE60u;
    {
        const bool branch_taken_0x13ee60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE60u;
        // 0x13ee64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee60) {
            ctx->pc = 0x13ED90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ed90;
        }
    }
    ctx->pc = 0x13EE68u;
    // 0x13ee68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13ee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ee6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13ee6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ee70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ee70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ee74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ee74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ee78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ee78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ee7c: 0x3e00008  jr          $ra
    ctx->pc = 0x13EE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE7Cu;
        // 0x13ee80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EE84u;
}

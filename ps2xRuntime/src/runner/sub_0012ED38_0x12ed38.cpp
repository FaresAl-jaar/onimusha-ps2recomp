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

// Function: sub_0012ED38
// Address: 0x12ed38 - 0x12ee34
void sub_0012ED38_0x12ed38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ED38_0x12ed38");
#endif

    switch (ctx->pc) {
        case 0x12edbcu: goto label_12edbc;
        case 0x12edc0u: goto label_12edc0;
        case 0x12edd4u: goto label_12edd4;
        default: break;
    }

    ctx->pc = 0x12ed38u;

    // 0x12ed38: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12ed38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12ed3c: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x12ed3cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ed40: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ED40u;
    {
        const bool branch_taken_0x12ed40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ed40) {
            ctx->pc = 0x12ED58u;
            goto label_12ed58;
        }
    }
    ctx->pc = 0x12ED48u;
    // 0x12ed48: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x12ed48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ed4c: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x12ed4cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ed50: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ED50u;
    {
        const bool branch_taken_0x12ed50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED50u;
        // 0x12ed54: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed50) {
            ctx->pc = 0x12ED60u;
            goto label_12ed60;
        }
    }
    ctx->pc = 0x12ED58u;
label_12ed58:
    // 0x12ed58: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED58u;
        // 0x12ed5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ED60u;
label_12ed60:
    // 0x12ed60: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12ED60u;
    {
        const bool branch_taken_0x12ed60 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED60u;
        // 0x12ed64: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed60) {
            ctx->pc = 0x12ED84u;
            goto label_12ed84;
        }
    }
    ctx->pc = 0x12ED68u;
    // 0x12ed68: 0x39af0004  xori        $t7, $t5, 0x4
    ctx->pc = 0x12ed68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
    // 0x12ed6c: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ED6Cu;
    {
        const bool branch_taken_0x12ed6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED6Cu;
        // 0x12ed70: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed6c) {
            ctx->pc = 0x12ED84u;
            goto label_12ed84;
        }
    }
    ctx->pc = 0x12ED74u;
    // 0x12ed74: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x12ed74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12ed78: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x12ed78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12ed7c: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED7Cu;
        // 0x12ed80: 0x1cf1023  subu        $v0, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ED84u;
label_12ed84:
    // 0x12ed84: 0x51e00012  beql        $t7, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x12ED84u;
    {
        const bool branch_taken_0x12ed84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ed84) {
            ctx->pc = 0x12ED88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ED84u;
            // 0x12ed88: 0x8c8e0004  lw          $t6, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EDD0u;
            goto label_12edd0;
        }
    }
    ctx->pc = 0x12ED8Cu;
    // 0x12ed8c: 0x39af0004  xori        $t7, $t5, 0x4
    ctx->pc = 0x12ed8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
    // 0x12ed90: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12ED90u;
    {
        const bool branch_taken_0x12ed90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED90u;
        // 0x12ed94: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed90) {
            ctx->pc = 0x12EDB4u;
            goto label_12edb4;
        }
    }
    ctx->pc = 0x12ED98u;
    // 0x12ed98: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12ED98u;
    {
        const bool branch_taken_0x12ed98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED98u;
        // 0x12ed9c: 0x39af0002  xori        $t7, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed98) {
            ctx->pc = 0x12EDC8u;
            goto label_12edc8;
        }
    }
    ctx->pc = 0x12EDA0u;
    // 0x12eda0: 0x11e00022  beqz        $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x12EDA0u;
    {
        const bool branch_taken_0x12eda0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDA0u;
        // 0x12eda4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eda0) {
            ctx->pc = 0x12EE2Cu;
            goto label_12ee2c;
        }
    }
    ctx->pc = 0x12EDA8u;
    // 0x12eda8: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x12eda8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x12edac: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EDACu;
    {
        const bool branch_taken_0x12edac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDACu;
        // 0x12edb0: 0x39af0002  xori        $t7, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edac) {
            ctx->pc = 0x12EDC8u;
            goto label_12edc8;
        }
    }
    ctx->pc = 0x12EDB4u;
label_12edb4:
    // 0x12edb4: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x12edb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12edb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12edbc:
    // 0x12edbc: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12edbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12edc0:
    // 0x12edc0: 0x3e00008  jr          $ra
    ctx->pc = 0x12EDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDC0u;
        // 0x12edc4: 0x1ee100a  movz        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EDC8u;
label_12edc8:
    // 0x12edc8: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EDC8u;
    {
        const bool branch_taken_0x12edc8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDC8u;
        // 0x12edcc: 0x8c8e0004  lw          $t6, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edc8) {
            ctx->pc = 0x12EDDCu;
            goto label_12eddc;
        }
    }
    ctx->pc = 0x12EDD0u;
label_12edd0:
    // 0x12edd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12edd4:
    // 0x12edd4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x12EDD4u;
    {
        const bool branch_taken_0x12edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDD4u;
        // 0x12edd8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edd4) {
            ctx->pc = 0x12EDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12edc0;
        }
    }
    ctx->pc = 0x12EDDCu;
label_12eddc:
    // 0x12eddc: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x12eddcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12ede0: 0x15cffffc  bne         $t6, $t7, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12EDE0u;
    {
        const bool branch_taken_0x12ede0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDE0u;
        // 0x12ede4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ede0) {
            ctx->pc = 0x12EDD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12edd4;
        }
    }
    ctx->pc = 0x12EDE8u;
    // 0x12ede8: 0x8c8c0008  lw          $t4, 0x8($a0)
    ctx->pc = 0x12ede8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12edec: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x12edecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12edf0: 0x1ac782a  slt         $t7, $t5, $t4
    ctx->pc = 0x12edf0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x12edf4: 0x15e0fff2  bnez        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x12EDF4u;
    {
        const bool branch_taken_0x12edf4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDF4u;
        // 0x12edf8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edf4) {
            ctx->pc = 0x12EDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12edc0;
        }
    }
    ctx->pc = 0x12EDFCu;
    // 0x12edfc: 0x18d782a  slt         $t7, $t4, $t5
    ctx->pc = 0x12edfcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x12ee00: 0x55e0ffee  bnel        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12EE00u;
    {
        const bool branch_taken_0x12ee00 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ee00) {
            ctx->pc = 0x12EE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EE00u;
            // 0x12ee04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EDBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12edbc;
        }
    }
    ctx->pc = 0x12EE08u;
    // 0x12ee08: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x12ee08u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12ee0c: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x12ee0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12ee10: 0x8d782b  sltu        $t7, $a0, $t5
    ctx->pc = 0x12ee10u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12ee14: 0x15e0ffea  bnez        $t7, . + 4 + (-0x16 << 2)
    ctx->pc = 0x12EE14u;
    {
        const bool branch_taken_0x12ee14 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE14u;
        // 0x12ee18: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee14) {
            ctx->pc = 0x12EDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12edc0;
        }
    }
    ctx->pc = 0x12EE1Cu;
    // 0x12ee1c: 0x1a4782b  sltu        $t7, $t5, $a0
    ctx->pc = 0x12ee1cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12ee20: 0x55e0ffe6  bnel        $t7, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x12EE20u;
    {
        const bool branch_taken_0x12ee20 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ee20) {
            ctx->pc = 0x12EE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EE20u;
            // 0x12ee24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EDBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12edbc;
        }
    }
    ctx->pc = 0x12EE28u;
    // 0x12ee28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12ee28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ee2c:
    // 0x12ee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x12EE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EE34u;
}

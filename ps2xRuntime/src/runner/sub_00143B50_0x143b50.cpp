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

// Function: sub_00143B50
// Address: 0x143b50 - 0x143bf8
void sub_00143B50_0x143b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143B50_0x143b50");
#endif

    switch (ctx->pc) {
        case 0x143b70u: goto label_143b70;
        default: break;
    }

    ctx->pc = 0x143b50u;

    // 0x143b50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x143b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143b54: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x143B54u;
    {
        const bool branch_taken_0x143b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B54u;
        // 0x143b58: 0x30aa00ff  andi        $t2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b54) {
            ctx->pc = 0x143BE8u;
            goto label_143be8;
        }
    }
    ctx->pc = 0x143B5Cu;
    // 0x143b5c: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x143b5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x143b60: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x143b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x143b64: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x143b64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x143b68: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x143b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x143b6c: 0x0  nop
    ctx->pc = 0x143b6cu;
    // NOP
label_143b70:
    // 0x143b70: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x143b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x143b74: 0x146a0018  bne         $v1, $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x143B74u;
    {
        const bool branch_taken_0x143b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x143b74) {
            ctx->pc = 0x143BD8u;
            goto label_143bd8;
        }
    }
    ctx->pc = 0x143B7Cu;
    // 0x143b7c: 0x90430021  lbu         $v1, 0x21($v0)
    ctx->pc = 0x143b7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x143b80: 0x10690005  beq         $v1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x143B80u;
    {
        const bool branch_taken_0x143b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x143b80) {
            ctx->pc = 0x143B98u;
            goto label_143b98;
        }
    }
    ctx->pc = 0x143B88u;
    // 0x143b88: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143B88u;
    {
        const bool branch_taken_0x143b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x143b88) {
            ctx->pc = 0x143B98u;
            goto label_143b98;
        }
    }
    ctx->pc = 0x143B90u;
    // 0x143b90: 0x15240011  bne         $t1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x143B90u;
    {
        const bool branch_taken_0x143b90 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        if (branch_taken_0x143b90) {
            ctx->pc = 0x143BD8u;
            goto label_143bd8;
        }
    }
    ctx->pc = 0x143B98u;
label_143b98:
    // 0x143b98: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x143b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x143b9c: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x143B9Cu;
    {
        const bool branch_taken_0x143b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x143b9c) {
            ctx->pc = 0x143BB8u;
            goto label_143bb8;
        }
    }
    ctx->pc = 0x143BA4u;
    // 0x143ba4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143BA4u;
    {
        const bool branch_taken_0x143ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x143ba4) {
            ctx->pc = 0x143BB8u;
            goto label_143bb8;
        }
    }
    ctx->pc = 0x143BACu;
    // 0x143bac: 0x14c4000a  bne         $a2, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x143BACu;
    {
        const bool branch_taken_0x143bac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x143bac) {
            ctx->pc = 0x143BD8u;
            goto label_143bd8;
        }
    }
    ctx->pc = 0x143BB4u;
    // 0x143bb4: 0x0  nop
    ctx->pc = 0x143bb4u;
    // NOP
label_143bb8:
    // 0x143bb8: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x143bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x143bbc: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143BBCu;
    {
        const bool branch_taken_0x143bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x143bbc) {
            ctx->pc = 0x143BD0u;
            goto label_143bd0;
        }
    }
    ctx->pc = 0x143BC4u;
    // 0x143bc4: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143BC4u;
    {
        const bool branch_taken_0x143bc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x143bc4) {
            ctx->pc = 0x143BD8u;
            goto label_143bd8;
        }
    }
    ctx->pc = 0x143BCCu;
    // 0x143bcc: 0x0  nop
    ctx->pc = 0x143bccu;
    // NOP
label_143bd0:
    // 0x143bd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x143BD0u;
    {
        const bool branch_taken_0x143bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143bd0) {
            ctx->pc = 0x143BF0u;
            goto label_143bf0;
        }
    }
    ctx->pc = 0x143BD8u;
label_143bd8:
    // 0x143bd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143bdc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x143BDCu;
    {
        const bool branch_taken_0x143bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143bdc) {
            ctx->pc = 0x143B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143b70;
        }
    }
    ctx->pc = 0x143BE4u;
    // 0x143be4: 0x0  nop
    ctx->pc = 0x143be4u;
    // NOP
label_143be8:
    // 0x143be8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x143be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bec: 0x0  nop
    ctx->pc = 0x143becu;
    // NOP
label_143bf0:
    // 0x143bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x143BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143BF8u;
}

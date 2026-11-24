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

// Function: sub_00225B10
// Address: 0x225b10 - 0x225c4c
void sub_00225B10_0x225b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225B10_0x225b10");
#endif

    ctx->pc = 0x225b10u;

    // 0x225b10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x225b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x225b14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225b18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225b1c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x225B1Cu;
    {
        const bool branch_taken_0x225b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B1Cu;
        // 0x225b20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b1c) {
            ctx->pc = 0x225B80u;
            goto label_225b80;
        }
    }
    ctx->pc = 0x225B24u;
    // 0x225b24: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x225b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x225b28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225B28u;
    {
        const bool branch_taken_0x225b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B28u;
        // 0x225b2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b28) {
            ctx->pc = 0x225B48u;
            goto label_225b48;
        }
    }
    ctx->pc = 0x225B30u;
    // 0x225b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225b34: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x225B34u;
    {
        const bool branch_taken_0x225b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x225b34) {
            ctx->pc = 0x225B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225B34u;
            // 0x225b38: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B58u;
            goto label_225b58;
        }
    }
    ctx->pc = 0x225B3Cu;
    // 0x225b3c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x225B3Cu;
    {
        const bool branch_taken_0x225b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B3Cu;
        // 0x225b40: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b3c) {
            ctx->pc = 0x225C30u;
            goto label_225c30;
        }
    }
    ctx->pc = 0x225B44u;
    // 0x225b44: 0x0  nop
    ctx->pc = 0x225b44u;
    // NOP
label_225b48:
    // 0x225b48: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x225B48u;
    {
        const bool branch_taken_0x225b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x225b48) {
            ctx->pc = 0x225B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225B48u;
            // 0x225b4c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225BB0u;
            goto label_225bb0;
        }
    }
    ctx->pc = 0x225B50u;
    // 0x225b50: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x225B50u;
    {
        const bool branch_taken_0x225b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B50u;
        // 0x225b54: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b50) {
            ctx->pc = 0x225C30u;
            goto label_225c30;
        }
    }
    ctx->pc = 0x225B58u;
label_225b58:
    // 0x225b58: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x225b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x225b5c: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x225b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x225b60: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x225b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x225b64: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x225b64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x225b68: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x225b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x225b6c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x225b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x225b70: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x225b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x225b74: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x225B74u;
    {
        const bool branch_taken_0x225b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B74u;
        // 0x225b78: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b74) {
            ctx->pc = 0x225C40u;
            goto label_225c40;
        }
    }
    ctx->pc = 0x225B7Cu;
    // 0x225b7c: 0x0  nop
    ctx->pc = 0x225b7cu;
    // NOP
label_225b80:
    // 0x225b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225b84: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x225b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x225b88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x225b88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x225b8c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x225b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x225b90: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x225b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x225b94: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x225b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x225b98: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x225b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x225b9c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x225b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x225ba0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x225ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x225ba4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x225BA4u;
    {
        const bool branch_taken_0x225ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BA4u;
        // 0x225ba8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ba4) {
            ctx->pc = 0x225C40u;
            goto label_225c40;
        }
    }
    ctx->pc = 0x225BACu;
    // 0x225bac: 0x0  nop
    ctx->pc = 0x225bacu;
    // NOP
label_225bb0:
    // 0x225bb0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x225bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x225bb4: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x225bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x225bb8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x225bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x225bbc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x225bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x225bc0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x225bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x225bc4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x225bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x225bc8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x225bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x225bcc: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x225bccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x225bd0: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x225bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x225bd4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x225bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x225bd8: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x225bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
    // 0x225bdc: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x225bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x225be0: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x225be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x225be4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x225be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x225be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225bec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x225becu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x225bf0: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x225bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x225bf4: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x225bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x225bf8: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x225bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x225bfc: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x225bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x225c00: 0xacc40020  sw          $a0, 0x20($a2)
    ctx->pc = 0x225c00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
    // 0x225c04: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x225c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x225c08: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x225c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x225c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225c10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x225c14: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x225c14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x225c18: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x225c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x225c1c: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x225c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x225c20: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x225c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x225c24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x225C24u;
    {
        const bool branch_taken_0x225c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C24u;
        // 0x225c28: 0xacc20030  sw          $v0, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c24) {
            ctx->pc = 0x225C40u;
            goto label_225c40;
        }
    }
    ctx->pc = 0x225C2Cu;
    // 0x225c2c: 0x0  nop
    ctx->pc = 0x225c2cu;
    // NOP
label_225c30:
    // 0x225c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225c34: 0x24c69270  addiu       $a2, $a2, -0x6D90
    ctx->pc = 0x225c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939248));
    // 0x225c38: 0x80898b2  j           func_2262C8
    ctx->pc = 0x225C38u;
    ctx->pc = 0x225C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C38u;
    // 0x225c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    sub_002262C8_0x2262c8(rdram, ctx, runtime); return;
    ctx->pc = 0x225C40u;
label_225c40:
    // 0x225c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225c44: 0x3e00008  jr          $ra
    ctx->pc = 0x225C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C44u;
        // 0x225c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225C4Cu;
}

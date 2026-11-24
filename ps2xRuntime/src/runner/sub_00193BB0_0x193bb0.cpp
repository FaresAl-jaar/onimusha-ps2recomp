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

// Function: sub_00193BB0
// Address: 0x193bb0 - 0x193cdc
void sub_00193BB0_0x193bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193BB0_0x193bb0");
#endif

    switch (ctx->pc) {
        case 0x193bd0u: goto label_193bd0;
        case 0x193bf0u: goto label_193bf0;
        default: break;
    }

    ctx->pc = 0x193bb0u;

    // 0x193bb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x193bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193bb4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x193bb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x193bb8: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x193BB8u;
    {
        const bool branch_taken_0x193bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BB8u;
        // 0x193bbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bb8) {
            ctx->pc = 0x193CC8u;
            goto label_193cc8;
        }
    }
    ctx->pc = 0x193BC0u;
    // 0x193bc0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x193bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bc4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x193bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x193bc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x193bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193bcc: 0x24635800  addiu       $v1, $v1, 0x5800
    ctx->pc = 0x193bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22528));
label_193bd0:
    // 0x193bd0: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x193bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x193bd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193bd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bd8: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x193bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x193bdc: 0xacea0008  sw          $t2, 0x8($a3)
    ctx->pc = 0x193bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 10));
    // 0x193be0: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x193be0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x193be4: 0xc082b  sltu        $at, $zero, $t4
    ctx->pc = 0x193be4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x193be8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x193BE8u;
    {
        const bool branch_taken_0x193be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BE8u;
        // 0x193bec: 0x254b0010  addiu       $t3, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193be8) {
            ctx->pc = 0x193CB0u;
            goto label_193cb0;
        }
    }
    ctx->pc = 0x193BF0u;
label_193bf0:
    // 0x193bf0: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x193bf0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x193bf4: 0x8c6021  addu        $t4, $a0, $t4
    ctx->pc = 0x193bf4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x193bf8: 0xad6c0004  sw          $t4, 0x4($t3)
    ctx->pc = 0x193bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 12));
    // 0x193bfc: 0xa1660001  sb          $a2, 0x1($t3)
    ctx->pc = 0x193bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x193c00: 0x916c0000  lbu         $t4, 0x0($t3)
    ctx->pc = 0x193c00u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x193c04: 0x2d810006  sltiu       $at, $t4, 0x6
    ctx->pc = 0x193c04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x193c08: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x193C08u;
    {
        const bool branch_taken_0x193c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c08) {
            ctx->pc = 0x193C98u;
            goto label_193c98;
        }
    }
    ctx->pc = 0x193C10u;
    // 0x193c10: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x193c10u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x193c14: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x193c14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x193c18: 0x8d8c0000  lw          $t4, 0x0($t4)
    ctx->pc = 0x193c18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x193c1c: 0x1800008  jr          $t4
    ctx->pc = 0x193C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193C28u: goto label_193c28;
            case 0x193C40u: goto label_193c40;
            case 0x193C58u: goto label_193c58;
            case 0x193C70u: goto label_193c70;
            case 0x193C88u: goto label_193c88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193C1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x193C24u;
    // 0x193c24: 0x0  nop
    ctx->pc = 0x193c24u;
    // NOP
label_193c28:
    // 0x193c28: 0x8d6d0004  lw          $t5, 0x4($t3)
    ctx->pc = 0x193c28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x193c2c: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x193c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x193c30: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x193c30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x193c34: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x193C34u;
    {
        const bool branch_taken_0x193c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C34u;
        // 0x193c38: 0xadac0000  sw          $t4, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c34) {
            ctx->pc = 0x193C98u;
            goto label_193c98;
        }
    }
    ctx->pc = 0x193C3Cu;
    // 0x193c3c: 0x0  nop
    ctx->pc = 0x193c3cu;
    // NOP
label_193c40:
    // 0x193c40: 0x8d6d0004  lw          $t5, 0x4($t3)
    ctx->pc = 0x193c40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x193c44: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x193c44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x193c48: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x193c48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x193c4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x193C4Cu;
    {
        const bool branch_taken_0x193c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C4Cu;
        // 0x193c50: 0xadac0000  sw          $t4, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c4c) {
            ctx->pc = 0x193C98u;
            goto label_193c98;
        }
    }
    ctx->pc = 0x193C54u;
    // 0x193c54: 0x0  nop
    ctx->pc = 0x193c54u;
    // NOP
label_193c58:
    // 0x193c58: 0x8d6d0004  lw          $t5, 0x4($t3)
    ctx->pc = 0x193c58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x193c5c: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x193c5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x193c60: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x193c60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x193c64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x193C64u;
    {
        const bool branch_taken_0x193c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C64u;
        // 0x193c68: 0xadac0000  sw          $t4, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c64) {
            ctx->pc = 0x193C98u;
            goto label_193c98;
        }
    }
    ctx->pc = 0x193C6Cu;
    // 0x193c6c: 0x0  nop
    ctx->pc = 0x193c6cu;
    // NOP
label_193c70:
    // 0x193c70: 0x8d6d0004  lw          $t5, 0x4($t3)
    ctx->pc = 0x193c70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x193c74: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x193c74u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x193c78: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x193c78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x193c7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x193C7Cu;
    {
        const bool branch_taken_0x193c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C7Cu;
        // 0x193c80: 0xadac0000  sw          $t4, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c7c) {
            ctx->pc = 0x193C98u;
            goto label_193c98;
        }
    }
    ctx->pc = 0x193C84u;
    // 0x193c84: 0x0  nop
    ctx->pc = 0x193c84u;
    // NOP
label_193c88:
    // 0x193c88: 0x8d6d0004  lw          $t5, 0x4($t3)
    ctx->pc = 0x193c88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x193c8c: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x193c8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x193c90: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x193c90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x193c94: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x193c94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
label_193c98:
    // 0x193c98: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x193c98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x193c9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x193c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x193ca0: 0x12c602b  sltu        $t4, $t1, $t4
    ctx->pc = 0x193ca0u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x193ca4: 0x1580ffd2  bnez        $t4, . + 4 + (-0x2E << 2)
    ctx->pc = 0x193CA4u;
    {
        const bool branch_taken_0x193ca4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x193CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CA4u;
        // 0x193ca8: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ca4) {
            ctx->pc = 0x193BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193bf0;
        }
    }
    ctx->pc = 0x193CACu;
    // 0x193cac: 0x0  nop
    ctx->pc = 0x193cacu;
    // NOP
label_193cb0:
    // 0x193cb0: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193cb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193cb8: 0x109482b  sltu        $t1, $t0, $t1
    ctx->pc = 0x193cb8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x193cbc: 0x1520ffc4  bnez        $t1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x193CBCu;
    {
        const bool branch_taken_0x193cbc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x193CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CBCu;
        // 0x193cc0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cbc) {
            ctx->pc = 0x193BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193bd0;
        }
    }
    ctx->pc = 0x193CC4u;
    // 0x193cc4: 0x0  nop
    ctx->pc = 0x193cc4u;
    // NOP
label_193cc8:
    // 0x193cc8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x193ccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193cd0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x193cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x193cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x193CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CD4u;
        // 0x193cd8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193CDCu;
}

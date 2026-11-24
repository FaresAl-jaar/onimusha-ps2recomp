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

// Function: sub_00212AA8
// Address: 0x212aa8 - 0x212b68
void sub_00212AA8_0x212aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212AA8_0x212aa8");
#endif

    switch (ctx->pc) {
        case 0x212aa8u: goto label_212aa8;
        case 0x212aacu: goto label_212aac;
        case 0x212ab0u: goto label_212ab0;
        case 0x212ab4u: goto label_212ab4;
        case 0x212ab8u: goto label_212ab8;
        case 0x212abcu: goto label_212abc;
        case 0x212ac0u: goto label_212ac0;
        case 0x212ac4u: goto label_212ac4;
        case 0x212ac8u: goto label_212ac8;
        case 0x212accu: goto label_212acc;
        case 0x212ad0u: goto label_212ad0;
        case 0x212ad4u: goto label_212ad4;
        case 0x212ad8u: goto label_212ad8;
        case 0x212adcu: goto label_212adc;
        case 0x212ae0u: goto label_212ae0;
        case 0x212ae4u: goto label_212ae4;
        case 0x212ae8u: goto label_212ae8;
        case 0x212aecu: goto label_212aec;
        case 0x212af0u: goto label_212af0;
        case 0x212af4u: goto label_212af4;
        case 0x212af8u: goto label_212af8;
        case 0x212afcu: goto label_212afc;
        case 0x212b00u: goto label_212b00;
        case 0x212b04u: goto label_212b04;
        case 0x212b08u: goto label_212b08;
        case 0x212b0cu: goto label_212b0c;
        case 0x212b10u: goto label_212b10;
        case 0x212b14u: goto label_212b14;
        case 0x212b18u: goto label_212b18;
        case 0x212b1cu: goto label_212b1c;
        case 0x212b20u: goto label_212b20;
        case 0x212b24u: goto label_212b24;
        case 0x212b28u: goto label_212b28;
        case 0x212b2cu: goto label_212b2c;
        case 0x212b30u: goto label_212b30;
        case 0x212b34u: goto label_212b34;
        case 0x212b38u: goto label_212b38;
        case 0x212b3cu: goto label_212b3c;
        case 0x212b40u: goto label_212b40;
        case 0x212b44u: goto label_212b44;
        case 0x212b48u: goto label_212b48;
        case 0x212b4cu: goto label_212b4c;
        case 0x212b50u: goto label_212b50;
        case 0x212b54u: goto label_212b54;
        case 0x212b58u: goto label_212b58;
        case 0x212b5cu: goto label_212b5c;
        case 0x212b60u: goto label_212b60;
        case 0x212b64u: goto label_212b64;
        default: break;
    }

    ctx->pc = 0x212aa8u;

label_212aa8:
    // 0x212aa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x212aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_212aac:
    // 0x212aac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x212aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_212ab0:
    // 0x212ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212ab4:
    // 0x212ab4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x212ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_212ab8:
    // 0x212ab8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x212ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_212abc:
    // 0x212abc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x212abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_212ac0:
    // 0x212ac0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x212ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_212ac4:
    // 0x212ac4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x212ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_212ac8:
    // 0x212ac8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x212ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_212acc:
    // 0x212acc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x212accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_212ad0:
    // 0x212ad0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x212ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_212ad4:
    // 0x212ad4: 0xc083d42  jal         func_20F508
label_212ad8:
    if (ctx->pc == 0x212AD8u) {
        ctx->pc = 0x212AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AD4u;
        // 0x212ad8: 0x8e051f84  lw          $a1, 0x1F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212ADCu;
        goto label_212adc;
    }
    ctx->pc = 0x212AD4u;
    SET_GPR_U32(ctx, 31, 0x212ADCu);
    ctx->pc = 0x212AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AD4u;
    // 0x212ad8: 0x8e051f84  lw          $a1, 0x1F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F508u, 0x212AD4u, 0x212ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212ADCu;
label_212adc:
    // 0x212adc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_212ae0:
    if (ctx->pc == 0x212AE0u) {
        ctx->pc = 0x212AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212ADCu;
        // 0x212ae0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AE4u;
        goto label_212ae4;
    }
    ctx->pc = 0x212ADCu;
    {
        const bool branch_taken_0x212adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212adc) {
            ctx->pc = 0x212AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212ADCu;
            // 0x212ae0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212B50u;
            goto label_212b50;
        }
    }
    ctx->pc = 0x212AE4u;
label_212ae4:
    // 0x212ae4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x212ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_212ae8:
    // 0x212ae8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x212ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_212aec:
    // 0x212aec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x212aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_212af0:
    // 0x212af0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212af4:
    // 0x212af4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x212af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_212af8:
    // 0x212af8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x212af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_212afc:
    // 0x212afc: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x212afcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_212b00:
    // 0x212b00: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x212b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_212b04:
    // 0x212b04: 0x28c20800  slti        $v0, $a2, 0x800
    ctx->pc = 0x212b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2048) ? 1 : 0);
label_212b08:
    // 0x212b08: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_212b0c:
    if (ctx->pc == 0x212B0Cu) {
        ctx->pc = 0x212B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B08u;
        // 0x212b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B10u;
        goto label_212b10;
    }
    ctx->pc = 0x212B08u;
    {
        const bool branch_taken_0x212b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B08u;
        // 0x212b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b08) {
            ctx->pc = 0x212B4Cu;
            goto label_212b4c;
        }
    }
    ctx->pc = 0x212B10u;
label_212b10:
    // 0x212b10: 0x8e0237ac  lw          $v0, 0x37AC($s0)
    ctx->pc = 0x212b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14252)));
label_212b14:
    // 0x212b14: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_212b18:
    if (ctx->pc == 0x212B18u) {
        ctx->pc = 0x212B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B14u;
        // 0x212b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B1Cu;
        goto label_212b1c;
    }
    ctx->pc = 0x212B14u;
    {
        const bool branch_taken_0x212b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x212B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B14u;
        // 0x212b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b14) {
            ctx->pc = 0x212B4Cu;
            goto label_212b4c;
        }
    }
    ctx->pc = 0x212B1Cu;
label_212b1c:
    // 0x212b1c: 0x8e0237a8  lw          $v0, 0x37A8($s0)
    ctx->pc = 0x212b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14248)));
label_212b20:
    // 0x212b20: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x212b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_212b24:
    // 0x212b24: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_212b28:
    if (ctx->pc == 0x212B28u) {
        ctx->pc = 0x212B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B24u;
        // 0x212b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B2Cu;
        goto label_212b2c;
    }
    ctx->pc = 0x212B24u;
    {
        const bool branch_taken_0x212b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B24u;
        // 0x212b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b24) {
            ctx->pc = 0x212B4Cu;
            goto label_212b4c;
        }
    }
    ctx->pc = 0x212B2Cu;
label_212b2c:
    // 0x212b2c: 0x8e0237a0  lw          $v0, 0x37A0($s0)
    ctx->pc = 0x212b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14240)));
label_212b30:
    // 0x212b30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_212b34:
    if (ctx->pc == 0x212B34u) {
        ctx->pc = 0x212B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B30u;
        // 0x212b34: 0x8e0437a4  lw          $a0, 0x37A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B38u;
        goto label_212b38;
    }
    ctx->pc = 0x212B30u;
    {
        const bool branch_taken_0x212b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B30u;
        // 0x212b34: 0x8e0437a4  lw          $a0, 0x37A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b30) {
            ctx->pc = 0x212B40u;
            goto label_212b40;
        }
    }
    ctx->pc = 0x212B38u;
label_212b38:
    // 0x212b38: 0x40f809  jalr        $v0
label_212b3c:
    if (ctx->pc == 0x212B3Cu) {
        ctx->pc = 0x212B40u;
        goto label_212b40;
    }
    ctx->pc = 0x212B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212B40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212B38u, 0x212B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212B40u;
label_212b40:
    // 0x212b40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x212b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_212b44:
    // 0x212b44: 0xae0237ac  sw          $v0, 0x37AC($s0)
    ctx->pc = 0x212b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14252), GPR_U32(ctx, 2));
label_212b48:
    // 0x212b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x212b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212b4c:
    // 0x212b4c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x212b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212b50:
    // 0x212b50: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x212b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_212b54:
    // 0x212b54: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x212b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_212b58:
    // 0x212b58: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x212b58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_212b5c:
    // 0x212b5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x212b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_212b60:
    // 0x212b60: 0x3e00008  jr          $ra
label_212b64:
    if (ctx->pc == 0x212B64u) {
        ctx->pc = 0x212B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B60u;
        // 0x212b64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B68u;
        goto label_fallthrough_0x212b60;
    }
    ctx->pc = 0x212B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B60u;
        // 0x212b64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212b60:
    ctx->pc = 0x212B68u;
}

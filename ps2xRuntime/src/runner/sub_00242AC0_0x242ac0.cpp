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

// Function: sub_00242AC0
// Address: 0x242ac0 - 0x242bb0
void sub_00242AC0_0x242ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242AC0_0x242ac0");
#endif

    switch (ctx->pc) {
        case 0x242ac0u: goto label_242ac0;
        case 0x242ac4u: goto label_242ac4;
        case 0x242ac8u: goto label_242ac8;
        case 0x242accu: goto label_242acc;
        case 0x242ad0u: goto label_242ad0;
        case 0x242ad4u: goto label_242ad4;
        case 0x242ad8u: goto label_242ad8;
        case 0x242adcu: goto label_242adc;
        case 0x242ae0u: goto label_242ae0;
        case 0x242ae4u: goto label_242ae4;
        case 0x242ae8u: goto label_242ae8;
        case 0x242aecu: goto label_242aec;
        case 0x242af0u: goto label_242af0;
        case 0x242af4u: goto label_242af4;
        case 0x242af8u: goto label_242af8;
        case 0x242afcu: goto label_242afc;
        case 0x242b00u: goto label_242b00;
        case 0x242b04u: goto label_242b04;
        case 0x242b08u: goto label_242b08;
        case 0x242b0cu: goto label_242b0c;
        case 0x242b10u: goto label_242b10;
        case 0x242b14u: goto label_242b14;
        case 0x242b18u: goto label_242b18;
        case 0x242b1cu: goto label_242b1c;
        case 0x242b20u: goto label_242b20;
        case 0x242b24u: goto label_242b24;
        case 0x242b28u: goto label_242b28;
        case 0x242b2cu: goto label_242b2c;
        case 0x242b30u: goto label_242b30;
        case 0x242b34u: goto label_242b34;
        case 0x242b38u: goto label_242b38;
        case 0x242b3cu: goto label_242b3c;
        case 0x242b40u: goto label_242b40;
        case 0x242b44u: goto label_242b44;
        case 0x242b48u: goto label_242b48;
        case 0x242b4cu: goto label_242b4c;
        case 0x242b50u: goto label_242b50;
        case 0x242b54u: goto label_242b54;
        case 0x242b58u: goto label_242b58;
        case 0x242b5cu: goto label_242b5c;
        case 0x242b60u: goto label_242b60;
        case 0x242b64u: goto label_242b64;
        case 0x242b68u: goto label_242b68;
        case 0x242b6cu: goto label_242b6c;
        case 0x242b70u: goto label_242b70;
        case 0x242b74u: goto label_242b74;
        case 0x242b78u: goto label_242b78;
        case 0x242b7cu: goto label_242b7c;
        case 0x242b80u: goto label_242b80;
        case 0x242b84u: goto label_242b84;
        case 0x242b88u: goto label_242b88;
        case 0x242b8cu: goto label_242b8c;
        case 0x242b90u: goto label_242b90;
        case 0x242b94u: goto label_242b94;
        case 0x242b98u: goto label_242b98;
        case 0x242b9cu: goto label_242b9c;
        case 0x242ba0u: goto label_242ba0;
        case 0x242ba4u: goto label_242ba4;
        case 0x242ba8u: goto label_242ba8;
        case 0x242bacu: goto label_242bac;
        default: break;
    }

    ctx->pc = 0x242ac0u;

label_242ac0:
    // 0x242ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_242ac4:
    // 0x242ac4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x242ac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242ac8:
    // 0x242ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_242acc:
    // 0x242acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242ad0:
    // 0x242ad0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_242ad4:
    // 0x242ad4: 0x68ac0  sll         $s1, $a2, 11
    ctx->pc = 0x242ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
label_242ad8:
    // 0x242ad8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x242ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_242adc:
    // 0x242adc: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x242adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_242ae0:
    // 0x242ae0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x242ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_242ae4:
    // 0x242ae4: 0x69880  sll         $s3, $a2, 2
    ctx->pc = 0x242ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_242ae8:
    // 0x242ae8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x242ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_242aec:
    // 0x242aec: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x242aecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_242af0:
    // 0x242af0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x242af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_242af4:
    // 0x242af4: 0x2534021  addu        $t0, $s2, $s3
    ctx->pc = 0x242af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_242af8:
    // 0x242af8: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x242af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_242afc:
    // 0x242afc: 0x3125001f  andi        $a1, $t1, 0x1F
    ctx->pc = 0x242afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
label_242b00:
    // 0x242b00: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x242b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_242b04:
    // 0x242b04: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x242b04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_242b08:
    // 0x242b08: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x242b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_242b0c:
    // 0x242b0c: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x242b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
label_242b10:
    // 0x242b10: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x242b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_242b14:
    // 0x242b14: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x242b14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_242b18:
    // 0x242b18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x242b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_242b1c:
    // 0x242b1c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_242b20:
    if (ctx->pc == 0x242B20u) {
        ctx->pc = 0x242B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B1Cu;
        // 0x242b20: 0x24860014  addiu       $a2, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B24u;
        goto label_242b24;
    }
    ctx->pc = 0x242B1Cu;
    {
        const bool branch_taken_0x242b1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x242B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B1Cu;
        // 0x242b20: 0x24860014  addiu       $a2, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b1c) {
            ctx->pc = 0x242B30u;
            goto label_242b30;
        }
    }
    ctx->pc = 0x242B24u;
label_242b24:
    // 0x242b24: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x242b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_242b28:
    // 0x242b28: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_242b2c:
    if (ctx->pc == 0x242B2Cu) {
        ctx->pc = 0x242B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B28u;
        // 0x242b2c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B30u;
        goto label_242b30;
    }
    ctx->pc = 0x242B28u;
    {
        const bool branch_taken_0x242b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242b28) {
            ctx->pc = 0x242B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242B28u;
            // 0x242b2c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242B50u;
            goto label_242b50;
        }
    }
    ctx->pc = 0x242B30u;
label_242b30:
    // 0x242b30: 0x0  nop
    ctx->pc = 0x242b30u;
    // NOP
label_242b34:
    // 0x242b34: 0x0  nop
    ctx->pc = 0x242b34u;
    // NOP
label_242b38:
    // 0x242b38: 0x0  nop
    ctx->pc = 0x242b38u;
    // NOP
label_242b3c:
    // 0x242b3c: 0x0  nop
    ctx->pc = 0x242b3cu;
    // NOP
label_242b40:
    // 0x242b40: 0x0  nop
    ctx->pc = 0x242b40u;
    // NOP
label_242b44:
    // 0x242b44: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_242b48:
    if (ctx->pc == 0x242B48u) {
        ctx->pc = 0x242B4Cu;
        goto label_242b4c;
    }
    ctx->pc = 0x242B44u;
    {
        const bool branch_taken_0x242b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242b44) {
            ctx->pc = 0x242B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242b30;
        }
    }
    ctx->pc = 0x242B4Cu;
label_242b4c:
    // 0x242b4c: 0x0  nop
    ctx->pc = 0x242b4cu;
    // NOP
label_242b50:
    // 0x242b50: 0xc090226  jal         func_240898
label_242b54:
    if (ctx->pc == 0x242B54u) {
        ctx->pc = 0x242B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B50u;
        // 0x242b54: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B58u;
        goto label_242b58;
    }
    ctx->pc = 0x242B50u;
    SET_GPR_U32(ctx, 31, 0x242B58u);
    ctx->pc = 0x242B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B50u;
    // 0x242b54: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240898u, 0x242B50u, 0x242B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B58u;
label_242b58:
    // 0x242b58: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x242b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_242b5c:
    // 0x242b5c: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x242b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_242b60:
    // 0x242b60: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x242b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_242b64:
    // 0x242b64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x242b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242b68:
    // 0x242b68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x242b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_242b6c:
    // 0x242b6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x242b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_242b70:
    // 0x242b70: 0x41183  sra         $v0, $a0, 6
    ctx->pc = 0x242b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 6));
label_242b74:
    // 0x242b74: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x242b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_242b78:
    // 0x242b78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_242b7c:
    // 0x242b7c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x242b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
label_242b80:
    // 0x242b80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_242b84:
    // 0x242b84: 0x8c63d708  lw          $v1, -0x28F8($v1)
    ctx->pc = 0x242b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956808)));
label_242b88:
    // 0x242b88: 0x60f809  jalr        $v1
label_242b8c:
    if (ctx->pc == 0x242B8Cu) {
        ctx->pc = 0x242B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B88u;
        // 0x242b8c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B90u;
        goto label_242b90;
    }
    ctx->pc = 0x242B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x242B90u);
        ctx->pc = 0x242B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B88u;
        // 0x242b8c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242B88u, 0x242B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242B90u;
label_242b90:
    // 0x242b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242b94:
    // 0x242b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x242b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_242b98:
    // 0x242b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x242b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242b9c:
    // 0x242b9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x242b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_242ba0:
    // 0x242ba0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x242ba0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_242ba4:
    // 0x242ba4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x242ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_242ba8:
    // 0x242ba8: 0x3e00008  jr          $ra
label_242bac:
    if (ctx->pc == 0x242BACu) {
        ctx->pc = 0x242BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BA8u;
        // 0x242bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BB0u;
        goto label_fallthrough_0x242ba8;
    }
    ctx->pc = 0x242BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BA8u;
        // 0x242bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x242ba8:
    ctx->pc = 0x242BB0u;
}

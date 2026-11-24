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

// Function: sub_0022ABF8
// Address: 0x22abf8 - 0x22ad90
void sub_0022ABF8_0x22abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ABF8_0x22abf8");
#endif

    switch (ctx->pc) {
        case 0x22abf8u: goto label_22abf8;
        case 0x22abfcu: goto label_22abfc;
        case 0x22ac00u: goto label_22ac00;
        case 0x22ac04u: goto label_22ac04;
        case 0x22ac08u: goto label_22ac08;
        case 0x22ac0cu: goto label_22ac0c;
        case 0x22ac10u: goto label_22ac10;
        case 0x22ac14u: goto label_22ac14;
        case 0x22ac18u: goto label_22ac18;
        case 0x22ac1cu: goto label_22ac1c;
        case 0x22ac20u: goto label_22ac20;
        case 0x22ac24u: goto label_22ac24;
        case 0x22ac28u: goto label_22ac28;
        case 0x22ac2cu: goto label_22ac2c;
        case 0x22ac30u: goto label_22ac30;
        case 0x22ac34u: goto label_22ac34;
        case 0x22ac38u: goto label_22ac38;
        case 0x22ac3cu: goto label_22ac3c;
        case 0x22ac40u: goto label_22ac40;
        case 0x22ac44u: goto label_22ac44;
        case 0x22ac48u: goto label_22ac48;
        case 0x22ac4cu: goto label_22ac4c;
        case 0x22ac50u: goto label_22ac50;
        case 0x22ac54u: goto label_22ac54;
        case 0x22ac58u: goto label_22ac58;
        case 0x22ac5cu: goto label_22ac5c;
        case 0x22ac60u: goto label_22ac60;
        case 0x22ac64u: goto label_22ac64;
        case 0x22ac68u: goto label_22ac68;
        case 0x22ac6cu: goto label_22ac6c;
        case 0x22ac70u: goto label_22ac70;
        case 0x22ac74u: goto label_22ac74;
        case 0x22ac78u: goto label_22ac78;
        case 0x22ac7cu: goto label_22ac7c;
        case 0x22ac80u: goto label_22ac80;
        case 0x22ac84u: goto label_22ac84;
        case 0x22ac88u: goto label_22ac88;
        case 0x22ac8cu: goto label_22ac8c;
        case 0x22ac90u: goto label_22ac90;
        case 0x22ac94u: goto label_22ac94;
        case 0x22ac98u: goto label_22ac98;
        case 0x22ac9cu: goto label_22ac9c;
        case 0x22aca0u: goto label_22aca0;
        case 0x22aca4u: goto label_22aca4;
        case 0x22aca8u: goto label_22aca8;
        case 0x22acacu: goto label_22acac;
        case 0x22acb0u: goto label_22acb0;
        case 0x22acb4u: goto label_22acb4;
        case 0x22acb8u: goto label_22acb8;
        case 0x22acbcu: goto label_22acbc;
        case 0x22acc0u: goto label_22acc0;
        case 0x22acc4u: goto label_22acc4;
        case 0x22acc8u: goto label_22acc8;
        case 0x22acccu: goto label_22accc;
        case 0x22acd0u: goto label_22acd0;
        case 0x22acd4u: goto label_22acd4;
        case 0x22acd8u: goto label_22acd8;
        case 0x22acdcu: goto label_22acdc;
        case 0x22ace0u: goto label_22ace0;
        case 0x22ace4u: goto label_22ace4;
        case 0x22ace8u: goto label_22ace8;
        case 0x22acecu: goto label_22acec;
        case 0x22acf0u: goto label_22acf0;
        case 0x22acf4u: goto label_22acf4;
        case 0x22acf8u: goto label_22acf8;
        case 0x22acfcu: goto label_22acfc;
        case 0x22ad00u: goto label_22ad00;
        case 0x22ad04u: goto label_22ad04;
        case 0x22ad08u: goto label_22ad08;
        case 0x22ad0cu: goto label_22ad0c;
        case 0x22ad10u: goto label_22ad10;
        case 0x22ad14u: goto label_22ad14;
        case 0x22ad18u: goto label_22ad18;
        case 0x22ad1cu: goto label_22ad1c;
        case 0x22ad20u: goto label_22ad20;
        case 0x22ad24u: goto label_22ad24;
        case 0x22ad28u: goto label_22ad28;
        case 0x22ad2cu: goto label_22ad2c;
        case 0x22ad30u: goto label_22ad30;
        case 0x22ad34u: goto label_22ad34;
        case 0x22ad38u: goto label_22ad38;
        case 0x22ad3cu: goto label_22ad3c;
        case 0x22ad40u: goto label_22ad40;
        case 0x22ad44u: goto label_22ad44;
        case 0x22ad48u: goto label_22ad48;
        case 0x22ad4cu: goto label_22ad4c;
        case 0x22ad50u: goto label_22ad50;
        case 0x22ad54u: goto label_22ad54;
        case 0x22ad58u: goto label_22ad58;
        case 0x22ad5cu: goto label_22ad5c;
        case 0x22ad60u: goto label_22ad60;
        case 0x22ad64u: goto label_22ad64;
        case 0x22ad68u: goto label_22ad68;
        case 0x22ad6cu: goto label_22ad6c;
        case 0x22ad70u: goto label_22ad70;
        case 0x22ad74u: goto label_22ad74;
        case 0x22ad78u: goto label_22ad78;
        case 0x22ad7cu: goto label_22ad7c;
        case 0x22ad80u: goto label_22ad80;
        case 0x22ad84u: goto label_22ad84;
        case 0x22ad88u: goto label_22ad88;
        case 0x22ad8cu: goto label_22ad8c;
        default: break;
    }

    ctx->pc = 0x22abf8u;

label_22abf8:
    // 0x22abf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22abfc:
    // 0x22abfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ac00:
    // 0x22ac00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22ac04:
    // 0x22ac04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ac04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ac08:
    // 0x22ac08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22ac0c:
    // 0x22ac0c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x22ac0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22ac10:
    // 0x22ac10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22ac14:
    // 0x22ac14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_22ac18:
    // 0x22ac18: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22ac1c:
    // 0x22ac1c: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_22ac20:
    if (ctx->pc == 0x22AC20u) {
        ctx->pc = 0x22AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC1Cu;
        // 0x22ac20: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC24u;
        goto label_22ac24;
    }
    ctx->pc = 0x22AC1Cu;
    {
        const bool branch_taken_0x22ac1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC1Cu;
        // 0x22ac20: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac1c) {
            ctx->pc = 0x22AD50u;
            goto label_22ad50;
        }
    }
    ctx->pc = 0x22AC24u;
label_22ac24:
    // 0x22ac24: 0xc08f924  jal         func_23E490
label_22ac28:
    if (ctx->pc == 0x22AC28u) {
        ctx->pc = 0x22AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC24u;
        // 0x22ac28: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC2Cu;
        goto label_22ac2c;
    }
    ctx->pc = 0x22AC24u;
    SET_GPR_U32(ctx, 31, 0x22AC2Cu);
    ctx->pc = 0x22AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC24u;
    // 0x22ac28: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22AC24u, 0x22AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC2Cu;
label_22ac2c:
    // 0x22ac2c: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_22ac30:
    if (ctx->pc == 0x22AC30u) {
        ctx->pc = 0x22AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC2Cu;
        // 0x22ac30: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC34u;
        goto label_22ac34;
    }
    ctx->pc = 0x22AC2Cu;
    {
        const bool branch_taken_0x22ac2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ac2c) {
            ctx->pc = 0x22AC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AC2Cu;
            // 0x22ac30: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AD50u;
            goto label_22ad50;
        }
    }
    ctx->pc = 0x22AC34u;
label_22ac34:
    // 0x22ac34: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22ac38:
    // 0x22ac38: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22ac3c:
    // 0x22ac3c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22ac40:
    // 0x22ac40: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22ac40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22ac44:
    // 0x22ac44: 0x40f809  jalr        $v0
label_22ac48:
    if (ctx->pc == 0x22AC48u) {
        ctx->pc = 0x22AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC44u;
        // 0x22ac48: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC4Cu;
        goto label_22ac4c;
    }
    ctx->pc = 0x22AC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AC4Cu);
        ctx->pc = 0x22AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC44u;
        // 0x22ac48: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AC44u, 0x22AC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AC4Cu;
label_22ac4c:
    // 0x22ac4c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x22ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22ac50:
    // 0x22ac50: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x22ac50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22ac54:
    // 0x22ac54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22ac54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ac58:
    // 0x22ac58: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x22ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22ac5c:
    // 0x22ac5c: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x22ac5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_22ac60:
    // 0x22ac60: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x22ac60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22ac64:
    // 0x22ac64: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x22ac64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22ac68:
    // 0x22ac68: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x22ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22ac6c:
    // 0x22ac6c: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x22ac6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_22ac70:
    // 0x22ac70: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x22ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22ac74:
    // 0x22ac74: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x22ac74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22ac78:
    // 0x22ac78: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x22ac78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22ac7c:
    // 0x22ac7c: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x22ac7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_22ac80:
    // 0x22ac80: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x22ac80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_22ac84:
    // 0x22ac84: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_22ac88:
    if (ctx->pc == 0x22AC88u) {
        ctx->pc = 0x22AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC84u;
        // 0x22ac88: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC8Cu;
        goto label_22ac8c;
    }
    ctx->pc = 0x22AC84u;
    {
        const bool branch_taken_0x22ac84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x22AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC84u;
        // 0x22ac88: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac84) {
            ctx->pc = 0x22ACF8u;
            goto label_22acf8;
        }
    }
    ctx->pc = 0x22AC8Cu;
label_22ac8c:
    // 0x22ac8c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22ac90:
    // 0x22ac90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22ac90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ac94:
    // 0x22ac94: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22ac98:
    // 0x22ac98: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22ac9c:
    // 0x22ac9c: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_22aca0:
    if (ctx->pc == 0x22ACA0u) {
        ctx->pc = 0x22ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC9Cu;
        // 0x22aca0: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ACA4u;
        goto label_22aca4;
    }
    ctx->pc = 0x22AC9Cu;
    {
        const bool branch_taken_0x22ac9c = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC9Cu;
        // 0x22aca0: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac9c) {
            ctx->pc = 0x22AD30u;
            goto label_22ad30;
        }
    }
    ctx->pc = 0x22ACA4u;
label_22aca4:
    // 0x22aca4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22aca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22aca8:
    // 0x22aca8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x22aca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_22acac:
    // 0x22acac: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x22acacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_22acb0:
    // 0x22acb0: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x22acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_22acb4:
    // 0x22acb4: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x22acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_22acb8:
    // 0x22acb8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x22acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22acbc:
    // 0x22acbc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x22acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_22acc0:
    // 0x22acc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22acc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22acc4:
    // 0x22acc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22acc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22acc8:
    // 0x22acc8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x22acc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_22accc:
    // 0x22accc: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x22acccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22acd0:
    // 0x22acd0: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x22acd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_22acd4:
    // 0x22acd4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x22acd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_22acd8:
    // 0x22acd8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x22acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22acdc:
    // 0x22acdc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x22acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_22ace0:
    // 0x22ace0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22ace4:
    // 0x22ace4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_22ace8:
    if (ctx->pc == 0x22ACE8u) {
        ctx->pc = 0x22ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACE4u;
        // 0x22ace8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ACECu;
        goto label_22acec;
    }
    ctx->pc = 0x22ACE4u;
    {
        const bool branch_taken_0x22ace4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACE4u;
        // 0x22ace8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ace4) {
            ctx->pc = 0x22ACA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22aca8;
        }
    }
    ctx->pc = 0x22ACECu;
label_22acec:
    // 0x22acec: 0x10000010  b           . + 4 + (0x10 << 2)
label_22acf0:
    if (ctx->pc == 0x22ACF0u) {
        ctx->pc = 0x22ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACECu;
        // 0x22acf0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ACF4u;
        goto label_22acf4;
    }
    ctx->pc = 0x22ACECu;
    {
        const bool branch_taken_0x22acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACECu;
        // 0x22acf0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acec) {
            ctx->pc = 0x22AD30u;
            goto label_22ad30;
        }
    }
    ctx->pc = 0x22ACF4u;
label_22acf4:
    // 0x22acf4: 0x0  nop
    ctx->pc = 0x22acf4u;
    // NOP
label_22acf8:
    // 0x22acf8: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_22acfc:
    if (ctx->pc == 0x22ACFCu) {
        ctx->pc = 0x22ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACF8u;
        // 0x22acfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD00u;
        goto label_22ad00;
    }
    ctx->pc = 0x22ACF8u;
    {
        const bool branch_taken_0x22acf8 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACF8u;
        // 0x22acfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acf8) {
            ctx->pc = 0x22AD30u;
            goto label_22ad30;
        }
    }
    ctx->pc = 0x22AD00u;
label_22ad00:
    // 0x22ad00: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x22ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_22ad04:
    // 0x22ad04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22ad04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22ad08:
    // 0x22ad08: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x22ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_22ad0c:
    // 0x22ad0c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x22ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_22ad10:
    // 0x22ad10: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x22ad10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22ad14:
    // 0x22ad14: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x22ad14u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22ad18:
    // 0x22ad18: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x22ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22ad1c:
    // 0x22ad1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x22ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_22ad20:
    // 0x22ad20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ad20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22ad24:
    // 0x22ad24: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_22ad28:
    if (ctx->pc == 0x22AD28u) {
        ctx->pc = 0x22AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD24u;
        // 0x22ad28: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD2Cu;
        goto label_22ad2c;
    }
    ctx->pc = 0x22AD24u;
    {
        const bool branch_taken_0x22ad24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD24u;
        // 0x22ad28: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad24) {
            ctx->pc = 0x22AD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ad00;
        }
    }
    ctx->pc = 0x22AD2Cu;
label_22ad2c:
    // 0x22ad2c: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x22ad2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22ad30:
    // 0x22ad30: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_22ad34:
    // 0x22ad34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ad38:
    // 0x22ad38: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22ad38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22ad3c:
    // 0x22ad3c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_22ad40:
    // 0x22ad40: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x22ad40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22ad44:
    // 0x22ad44: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x22ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_22ad48:
    // 0x22ad48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22ad4c:
    // 0x22ad4c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x22ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_22ad50:
    // 0x22ad50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ad54:
    // 0x22ad54: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_22ad58:
    if (ctx->pc == 0x22AD58u) {
        ctx->pc = 0x22AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD54u;
        // 0x22ad58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD5Cu;
        goto label_22ad5c;
    }
    ctx->pc = 0x22AD54u;
    {
        const bool branch_taken_0x22ad54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ad54) {
            ctx->pc = 0x22AD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AD54u;
            // 0x22ad58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AD7Cu;
            goto label_22ad7c;
        }
    }
    ctx->pc = 0x22AD5Cu;
label_22ad5c:
    // 0x22ad5c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22ad60:
    // 0x22ad60: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22ad64:
    // 0x22ad64: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22ad64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22ad68:
    // 0x22ad68: 0x60f809  jalr        $v1
label_22ad6c:
    if (ctx->pc == 0x22AD6Cu) {
        ctx->pc = 0x22AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD68u;
        // 0x22ad6c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD70u;
        goto label_22ad70;
    }
    ctx->pc = 0x22AD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22AD70u);
        ctx->pc = 0x22AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD68u;
        // 0x22ad6c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AD68u, 0x22AD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AD70u;
label_22ad70:
    // 0x22ad70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22ad74:
    // 0x22ad74: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22ad74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22ad78:
    // 0x22ad78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ad78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22ad7c:
    // 0x22ad7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ad7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22ad80:
    // 0x22ad80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22ad80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22ad84:
    // 0x22ad84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22ad88:
    // 0x22ad88: 0x3e00008  jr          $ra
label_22ad8c:
    if (ctx->pc == 0x22AD8Cu) {
        ctx->pc = 0x22AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD88u;
        // 0x22ad8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD90u;
        goto label_fallthrough_0x22ad88;
    }
    ctx->pc = 0x22AD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD88u;
        // 0x22ad8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22ad88:
    ctx->pc = 0x22AD90u;
}

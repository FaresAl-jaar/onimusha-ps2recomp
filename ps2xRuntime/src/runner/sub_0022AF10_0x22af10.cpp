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

// Function: sub_0022AF10
// Address: 0x22af10 - 0x22b0b8
void sub_0022AF10_0x22af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AF10_0x22af10");
#endif

    switch (ctx->pc) {
        case 0x22af10u: goto label_22af10;
        case 0x22af14u: goto label_22af14;
        case 0x22af18u: goto label_22af18;
        case 0x22af1cu: goto label_22af1c;
        case 0x22af20u: goto label_22af20;
        case 0x22af24u: goto label_22af24;
        case 0x22af28u: goto label_22af28;
        case 0x22af2cu: goto label_22af2c;
        case 0x22af30u: goto label_22af30;
        case 0x22af34u: goto label_22af34;
        case 0x22af38u: goto label_22af38;
        case 0x22af3cu: goto label_22af3c;
        case 0x22af40u: goto label_22af40;
        case 0x22af44u: goto label_22af44;
        case 0x22af48u: goto label_22af48;
        case 0x22af4cu: goto label_22af4c;
        case 0x22af50u: goto label_22af50;
        case 0x22af54u: goto label_22af54;
        case 0x22af58u: goto label_22af58;
        case 0x22af5cu: goto label_22af5c;
        case 0x22af60u: goto label_22af60;
        case 0x22af64u: goto label_22af64;
        case 0x22af68u: goto label_22af68;
        case 0x22af6cu: goto label_22af6c;
        case 0x22af70u: goto label_22af70;
        case 0x22af74u: goto label_22af74;
        case 0x22af78u: goto label_22af78;
        case 0x22af7cu: goto label_22af7c;
        case 0x22af80u: goto label_22af80;
        case 0x22af84u: goto label_22af84;
        case 0x22af88u: goto label_22af88;
        case 0x22af8cu: goto label_22af8c;
        case 0x22af90u: goto label_22af90;
        case 0x22af94u: goto label_22af94;
        case 0x22af98u: goto label_22af98;
        case 0x22af9cu: goto label_22af9c;
        case 0x22afa0u: goto label_22afa0;
        case 0x22afa4u: goto label_22afa4;
        case 0x22afa8u: goto label_22afa8;
        case 0x22afacu: goto label_22afac;
        case 0x22afb0u: goto label_22afb0;
        case 0x22afb4u: goto label_22afb4;
        case 0x22afb8u: goto label_22afb8;
        case 0x22afbcu: goto label_22afbc;
        case 0x22afc0u: goto label_22afc0;
        case 0x22afc4u: goto label_22afc4;
        case 0x22afc8u: goto label_22afc8;
        case 0x22afccu: goto label_22afcc;
        case 0x22afd0u: goto label_22afd0;
        case 0x22afd4u: goto label_22afd4;
        case 0x22afd8u: goto label_22afd8;
        case 0x22afdcu: goto label_22afdc;
        case 0x22afe0u: goto label_22afe0;
        case 0x22afe4u: goto label_22afe4;
        case 0x22afe8u: goto label_22afe8;
        case 0x22afecu: goto label_22afec;
        case 0x22aff0u: goto label_22aff0;
        case 0x22aff4u: goto label_22aff4;
        case 0x22aff8u: goto label_22aff8;
        case 0x22affcu: goto label_22affc;
        case 0x22b000u: goto label_22b000;
        case 0x22b004u: goto label_22b004;
        case 0x22b008u: goto label_22b008;
        case 0x22b00cu: goto label_22b00c;
        case 0x22b010u: goto label_22b010;
        case 0x22b014u: goto label_22b014;
        case 0x22b018u: goto label_22b018;
        case 0x22b01cu: goto label_22b01c;
        case 0x22b020u: goto label_22b020;
        case 0x22b024u: goto label_22b024;
        case 0x22b028u: goto label_22b028;
        case 0x22b02cu: goto label_22b02c;
        case 0x22b030u: goto label_22b030;
        case 0x22b034u: goto label_22b034;
        case 0x22b038u: goto label_22b038;
        case 0x22b03cu: goto label_22b03c;
        case 0x22b040u: goto label_22b040;
        case 0x22b044u: goto label_22b044;
        case 0x22b048u: goto label_22b048;
        case 0x22b04cu: goto label_22b04c;
        case 0x22b050u: goto label_22b050;
        case 0x22b054u: goto label_22b054;
        case 0x22b058u: goto label_22b058;
        case 0x22b05cu: goto label_22b05c;
        case 0x22b060u: goto label_22b060;
        case 0x22b064u: goto label_22b064;
        case 0x22b068u: goto label_22b068;
        case 0x22b06cu: goto label_22b06c;
        case 0x22b070u: goto label_22b070;
        case 0x22b074u: goto label_22b074;
        case 0x22b078u: goto label_22b078;
        case 0x22b07cu: goto label_22b07c;
        case 0x22b080u: goto label_22b080;
        case 0x22b084u: goto label_22b084;
        case 0x22b088u: goto label_22b088;
        case 0x22b08cu: goto label_22b08c;
        case 0x22b090u: goto label_22b090;
        case 0x22b094u: goto label_22b094;
        case 0x22b098u: goto label_22b098;
        case 0x22b09cu: goto label_22b09c;
        case 0x22b0a0u: goto label_22b0a0;
        case 0x22b0a4u: goto label_22b0a4;
        case 0x22b0a8u: goto label_22b0a8;
        case 0x22b0acu: goto label_22b0ac;
        case 0x22b0b0u: goto label_22b0b0;
        case 0x22b0b4u: goto label_22b0b4;
        default: break;
    }

    ctx->pc = 0x22af10u;

label_22af10:
    // 0x22af10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22af14:
    // 0x22af14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22af18:
    // 0x22af18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22af1c:
    // 0x22af1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22af1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22af20:
    // 0x22af20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22af24:
    // 0x22af24: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x22af24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22af28:
    // 0x22af28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22af2c:
    // 0x22af2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22af2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_22af30:
    // 0x22af30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22af30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22af34:
    // 0x22af34: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_22af38:
    if (ctx->pc == 0x22AF38u) {
        ctx->pc = 0x22AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF34u;
        // 0x22af38: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF3Cu;
        goto label_22af3c;
    }
    ctx->pc = 0x22AF34u;
    {
        const bool branch_taken_0x22af34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF34u;
        // 0x22af38: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af34) {
            ctx->pc = 0x22B078u;
            goto label_22b078;
        }
    }
    ctx->pc = 0x22AF3Cu;
label_22af3c:
    // 0x22af3c: 0xc08f924  jal         func_23E490
label_22af40:
    if (ctx->pc == 0x22AF40u) {
        ctx->pc = 0x22AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF3Cu;
        // 0x22af40: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF44u;
        goto label_22af44;
    }
    ctx->pc = 0x22AF3Cu;
    SET_GPR_U32(ctx, 31, 0x22AF44u);
    ctx->pc = 0x22AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF3Cu;
    // 0x22af40: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22AF3Cu, 0x22AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF44u;
label_22af44:
    // 0x22af44: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
label_22af48:
    if (ctx->pc == 0x22AF48u) {
        ctx->pc = 0x22AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF44u;
        // 0x22af48: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF4Cu;
        goto label_22af4c;
    }
    ctx->pc = 0x22AF44u;
    {
        const bool branch_taken_0x22af44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22af44) {
            ctx->pc = 0x22AF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AF44u;
            // 0x22af48: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B078u;
            goto label_22b078;
        }
    }
    ctx->pc = 0x22AF4Cu;
label_22af4c:
    // 0x22af4c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22af50:
    // 0x22af50: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22af50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22af54:
    // 0x22af54: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22af54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22af58:
    // 0x22af58: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22af58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22af5c:
    // 0x22af5c: 0x40f809  jalr        $v0
label_22af60:
    if (ctx->pc == 0x22AF60u) {
        ctx->pc = 0x22AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF5Cu;
        // 0x22af60: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF64u;
        goto label_22af64;
    }
    ctx->pc = 0x22AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AF64u);
        ctx->pc = 0x22AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF5Cu;
        // 0x22af60: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AF5Cu, 0x22AF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AF64u;
label_22af64:
    // 0x22af64: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x22af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22af68:
    // 0x22af68: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x22af68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22af6c:
    // 0x22af6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22af6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22af70:
    // 0x22af70: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x22af70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22af74:
    // 0x22af74: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x22af74u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_22af78:
    // 0x22af78: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x22af78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22af7c:
    // 0x22af7c: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x22af7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22af80:
    // 0x22af80: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x22af80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22af84:
    // 0x22af84: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x22af84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_22af88:
    // 0x22af88: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x22af88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22af8c:
    // 0x22af8c: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x22af8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22af90:
    // 0x22af90: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x22af90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22af94:
    // 0x22af94: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x22af94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_22af98:
    // 0x22af98: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x22af98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_22af9c:
    // 0x22af9c: 0x1486001e  bne         $a0, $a2, . + 4 + (0x1E << 2)
label_22afa0:
    if (ctx->pc == 0x22AFA0u) {
        ctx->pc = 0x22AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF9Cu;
        // 0x22afa0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AFA4u;
        goto label_22afa4;
    }
    ctx->pc = 0x22AF9Cu;
    {
        const bool branch_taken_0x22af9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x22AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF9Cu;
        // 0x22afa0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af9c) {
            ctx->pc = 0x22B018u;
            goto label_22b018;
        }
    }
    ctx->pc = 0x22AFA4u;
label_22afa4:
    // 0x22afa4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22afa8:
    // 0x22afa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22afa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22afac:
    // 0x22afac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22afb0:
    // 0x22afb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22afb4:
    // 0x22afb4: 0x19200029  blez        $t1, . + 4 + (0x29 << 2)
label_22afb8:
    if (ctx->pc == 0x22AFB8u) {
        ctx->pc = 0x22AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFB4u;
        // 0x22afb8: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AFBCu;
        goto label_22afbc;
    }
    ctx->pc = 0x22AFB4u;
    {
        const bool branch_taken_0x22afb4 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFB4u;
        // 0x22afb8: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afb4) {
            ctx->pc = 0x22B05Cu;
            goto label_22b05c;
        }
    }
    ctx->pc = 0x22AFBCu;
label_22afbc:
    // 0x22afbc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_22afc0:
    // 0x22afc0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22afc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22afc4:
    // 0x22afc4: 0x244ab0e0  addiu       $t2, $v0, -0x4F20
    ctx->pc = 0x22afc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
label_22afc8:
    // 0x22afc8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x22afc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_22afcc:
    // 0x22afcc: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x22afccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_22afd0:
    // 0x22afd0: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x22afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_22afd4:
    // 0x22afd4: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x22afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_22afd8:
    // 0x22afd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22afdc:
    // 0x22afdc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22afdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22afe0:
    // 0x22afe0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x22afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_22afe4:
    // 0x22afe4: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x22afe4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22afe8:
    // 0x22afe8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x22afe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22afec:
    // 0x22afec: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x22afecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_22aff0:
    // 0x22aff0: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x22aff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_22aff4:
    // 0x22aff4: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x22aff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_22aff8:
    // 0x22aff8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22affc:
    // 0x22affc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x22affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_22b000:
    // 0x22b000: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x22b000u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22b004:
    // 0x22b004: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_22b008:
    if (ctx->pc == 0x22B008u) {
        ctx->pc = 0x22B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B004u;
        // 0x22b008: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B00Cu;
        goto label_22b00c;
    }
    ctx->pc = 0x22B004u;
    {
        const bool branch_taken_0x22b004 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B004u;
        // 0x22b008: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b004) {
            ctx->pc = 0x22AFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22afc8;
        }
    }
    ctx->pc = 0x22B00Cu;
label_22b00c:
    // 0x22b00c: 0x10000013  b           . + 4 + (0x13 << 2)
label_22b010:
    if (ctx->pc == 0x22B010u) {
        ctx->pc = 0x22B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B00Cu;
        // 0x22b010: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B014u;
        goto label_22b014;
    }
    ctx->pc = 0x22B00Cu;
    {
        const bool branch_taken_0x22b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B00Cu;
        // 0x22b010: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b00c) {
            ctx->pc = 0x22B05Cu;
            goto label_22b05c;
        }
    }
    ctx->pc = 0x22B014u;
label_22b014:
    // 0x22b014: 0x0  nop
    ctx->pc = 0x22b014u;
    // NOP
label_22b018:
    // 0x22b018: 0x19200010  blez        $t1, . + 4 + (0x10 << 2)
label_22b01c:
    if (ctx->pc == 0x22B01Cu) {
        ctx->pc = 0x22B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B018u;
        // 0x22b01c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B020u;
        goto label_22b020;
    }
    ctx->pc = 0x22B018u;
    {
        const bool branch_taken_0x22b018 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B018u;
        // 0x22b01c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b018) {
            ctx->pc = 0x22B05Cu;
            goto label_22b05c;
        }
    }
    ctx->pc = 0x22B020u;
label_22b020:
    // 0x22b020: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_22b024:
    // 0x22b024: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x22b024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_22b028:
    // 0x22b028: 0x2446b0e0  addiu       $a2, $v0, -0x4F20
    ctx->pc = 0x22b028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
label_22b02c:
    // 0x22b02c: 0x0  nop
    ctx->pc = 0x22b02cu;
    // NOP
label_22b030:
    // 0x22b030: 0x2481821  addu        $v1, $s2, $t0
    ctx->pc = 0x22b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_22b034:
    // 0x22b034: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22b034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22b038:
    // 0x22b038: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x22b038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22b03c:
    // 0x22b03c: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x22b03cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22b040:
    // 0x22b040: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22b040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22b044:
    // 0x22b044: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22b044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22b048:
    // 0x22b048: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x22b048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22b04c:
    // 0x22b04c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x22b04cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_22b050:
    // 0x22b050: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_22b054:
    if (ctx->pc == 0x22B054u) {
        ctx->pc = 0x22B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B050u;
        // 0x22b054: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B058u;
        goto label_22b058;
    }
    ctx->pc = 0x22B050u;
    {
        const bool branch_taken_0x22b050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B050u;
        // 0x22b054: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b050) {
            ctx->pc = 0x22B030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b030;
        }
    }
    ctx->pc = 0x22B058u;
label_22b058:
    // 0x22b058: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x22b058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22b05c:
    // 0x22b05c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_22b060:
    // 0x22b060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b064:
    // 0x22b064: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22b064u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22b068:
    // 0x22b068: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22b068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_22b06c:
    // 0x22b06c: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x22b06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22b070:
    // 0x22b070: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x22b070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_22b074:
    // 0x22b074: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x22b074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_22b078:
    // 0x22b078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b07c:
    // 0x22b07c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_22b080:
    if (ctx->pc == 0x22B080u) {
        ctx->pc = 0x22B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B07Cu;
        // 0x22b080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B084u;
        goto label_22b084;
    }
    ctx->pc = 0x22B07Cu;
    {
        const bool branch_taken_0x22b07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b07c) {
            ctx->pc = 0x22B080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B07Cu;
            // 0x22b080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B0A4u;
            goto label_22b0a4;
        }
    }
    ctx->pc = 0x22B084u;
label_22b084:
    // 0x22b084: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22b084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22b088:
    // 0x22b088: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22b08c:
    // 0x22b08c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22b090:
    // 0x22b090: 0x60f809  jalr        $v1
label_22b094:
    if (ctx->pc == 0x22B094u) {
        ctx->pc = 0x22B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B090u;
        // 0x22b094: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B098u;
        goto label_22b098;
    }
    ctx->pc = 0x22B090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22B098u);
        ctx->pc = 0x22B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B090u;
        // 0x22b094: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B090u, 0x22B098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B098u;
label_22b098:
    // 0x22b098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22b098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22b09c:
    // 0x22b09c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22b0a0:
    // 0x22b0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b0a4:
    // 0x22b0a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b0a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22b0a8:
    // 0x22b0a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22b0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22b0ac:
    // 0x22b0ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22b0b0:
    // 0x22b0b0: 0x3e00008  jr          $ra
label_22b0b4:
    if (ctx->pc == 0x22B0B4u) {
        ctx->pc = 0x22B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B0u;
        // 0x22b0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B0B8u;
        goto label_fallthrough_0x22b0b0;
    }
    ctx->pc = 0x22B0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B0u;
        // 0x22b0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22b0b0:
    ctx->pc = 0x22B0B8u;
}

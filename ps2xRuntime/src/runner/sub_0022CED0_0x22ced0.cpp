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

// Function: sub_0022CED0
// Address: 0x22ced0 - 0x22d044
void sub_0022CED0_0x22ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CED0_0x22ced0");
#endif

    switch (ctx->pc) {
        case 0x22ced0u: goto label_22ced0;
        case 0x22ced4u: goto label_22ced4;
        case 0x22ced8u: goto label_22ced8;
        case 0x22cedcu: goto label_22cedc;
        case 0x22cee0u: goto label_22cee0;
        case 0x22cee4u: goto label_22cee4;
        case 0x22cee8u: goto label_22cee8;
        case 0x22ceecu: goto label_22ceec;
        case 0x22cef0u: goto label_22cef0;
        case 0x22cef4u: goto label_22cef4;
        case 0x22cef8u: goto label_22cef8;
        case 0x22cefcu: goto label_22cefc;
        case 0x22cf00u: goto label_22cf00;
        case 0x22cf04u: goto label_22cf04;
        case 0x22cf08u: goto label_22cf08;
        case 0x22cf0cu: goto label_22cf0c;
        case 0x22cf10u: goto label_22cf10;
        case 0x22cf14u: goto label_22cf14;
        case 0x22cf18u: goto label_22cf18;
        case 0x22cf1cu: goto label_22cf1c;
        case 0x22cf20u: goto label_22cf20;
        case 0x22cf24u: goto label_22cf24;
        case 0x22cf28u: goto label_22cf28;
        case 0x22cf2cu: goto label_22cf2c;
        case 0x22cf30u: goto label_22cf30;
        case 0x22cf34u: goto label_22cf34;
        case 0x22cf38u: goto label_22cf38;
        case 0x22cf3cu: goto label_22cf3c;
        case 0x22cf40u: goto label_22cf40;
        case 0x22cf44u: goto label_22cf44;
        case 0x22cf48u: goto label_22cf48;
        case 0x22cf4cu: goto label_22cf4c;
        case 0x22cf50u: goto label_22cf50;
        case 0x22cf54u: goto label_22cf54;
        case 0x22cf58u: goto label_22cf58;
        case 0x22cf5cu: goto label_22cf5c;
        case 0x22cf60u: goto label_22cf60;
        case 0x22cf64u: goto label_22cf64;
        case 0x22cf68u: goto label_22cf68;
        case 0x22cf6cu: goto label_22cf6c;
        case 0x22cf70u: goto label_22cf70;
        case 0x22cf74u: goto label_22cf74;
        case 0x22cf78u: goto label_22cf78;
        case 0x22cf7cu: goto label_22cf7c;
        case 0x22cf80u: goto label_22cf80;
        case 0x22cf84u: goto label_22cf84;
        case 0x22cf88u: goto label_22cf88;
        case 0x22cf8cu: goto label_22cf8c;
        case 0x22cf90u: goto label_22cf90;
        case 0x22cf94u: goto label_22cf94;
        case 0x22cf98u: goto label_22cf98;
        case 0x22cf9cu: goto label_22cf9c;
        case 0x22cfa0u: goto label_22cfa0;
        case 0x22cfa4u: goto label_22cfa4;
        case 0x22cfa8u: goto label_22cfa8;
        case 0x22cfacu: goto label_22cfac;
        case 0x22cfb0u: goto label_22cfb0;
        case 0x22cfb4u: goto label_22cfb4;
        case 0x22cfb8u: goto label_22cfb8;
        case 0x22cfbcu: goto label_22cfbc;
        case 0x22cfc0u: goto label_22cfc0;
        case 0x22cfc4u: goto label_22cfc4;
        case 0x22cfc8u: goto label_22cfc8;
        case 0x22cfccu: goto label_22cfcc;
        case 0x22cfd0u: goto label_22cfd0;
        case 0x22cfd4u: goto label_22cfd4;
        case 0x22cfd8u: goto label_22cfd8;
        case 0x22cfdcu: goto label_22cfdc;
        case 0x22cfe0u: goto label_22cfe0;
        case 0x22cfe4u: goto label_22cfe4;
        case 0x22cfe8u: goto label_22cfe8;
        case 0x22cfecu: goto label_22cfec;
        case 0x22cff0u: goto label_22cff0;
        case 0x22cff4u: goto label_22cff4;
        case 0x22cff8u: goto label_22cff8;
        case 0x22cffcu: goto label_22cffc;
        case 0x22d000u: goto label_22d000;
        case 0x22d004u: goto label_22d004;
        case 0x22d008u: goto label_22d008;
        case 0x22d00cu: goto label_22d00c;
        case 0x22d010u: goto label_22d010;
        case 0x22d014u: goto label_22d014;
        case 0x22d018u: goto label_22d018;
        case 0x22d01cu: goto label_22d01c;
        case 0x22d020u: goto label_22d020;
        case 0x22d024u: goto label_22d024;
        case 0x22d028u: goto label_22d028;
        case 0x22d02cu: goto label_22d02c;
        case 0x22d030u: goto label_22d030;
        case 0x22d034u: goto label_22d034;
        case 0x22d038u: goto label_22d038;
        case 0x22d03cu: goto label_22d03c;
        case 0x22d040u: goto label_22d040;
        default: break;
    }

    ctx->pc = 0x22ced0u;

label_22ced0:
    // 0x22ced0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22ced4:
    // 0x22ced4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ced8:
    // 0x22ced8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22cedc:
    // 0x22cedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22cedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22cee0:
    // 0x22cee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22cee4:
    // 0x22cee4: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x22cee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22cee8:
    // 0x22cee8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22ceec:
    // 0x22ceec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_22cef0:
    // 0x22cef0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22cef4:
    // 0x22cef4: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_22cef8:
    if (ctx->pc == 0x22CEF8u) {
        ctx->pc = 0x22CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEF4u;
        // 0x22cef8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CEFCu;
        goto label_22cefc;
    }
    ctx->pc = 0x22CEF4u;
    {
        const bool branch_taken_0x22cef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEF4u;
        // 0x22cef8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cef4) {
            ctx->pc = 0x22D004u;
            goto label_22d004;
        }
    }
    ctx->pc = 0x22CEFCu;
label_22cefc:
    // 0x22cefc: 0xc08f924  jal         func_23E490
label_22cf00:
    if (ctx->pc == 0x22CF00u) {
        ctx->pc = 0x22CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEFCu;
        // 0x22cf00: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF04u;
        goto label_22cf04;
    }
    ctx->pc = 0x22CEFCu;
    SET_GPR_U32(ctx, 31, 0x22CF04u);
    ctx->pc = 0x22CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CEFCu;
    // 0x22cf00: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22CEFCu, 0x22CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF04u;
label_22cf04:
    // 0x22cf04: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_22cf08:
    if (ctx->pc == 0x22CF08u) {
        ctx->pc = 0x22CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF04u;
        // 0x22cf08: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF0Cu;
        goto label_22cf0c;
    }
    ctx->pc = 0x22CF04u;
    {
        const bool branch_taken_0x22cf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cf04) {
            ctx->pc = 0x22CF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CF04u;
            // 0x22cf08: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D004u;
            goto label_22d004;
        }
    }
    ctx->pc = 0x22CF0Cu;
label_22cf0c:
    // 0x22cf0c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22cf10:
    // 0x22cf10: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22cf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22cf14:
    // 0x22cf14: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22cf18:
    // 0x22cf18: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22cf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22cf1c:
    // 0x22cf1c: 0x40f809  jalr        $v0
label_22cf20:
    if (ctx->pc == 0x22CF20u) {
        ctx->pc = 0x22CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF1Cu;
        // 0x22cf20: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF24u;
        goto label_22cf24;
    }
    ctx->pc = 0x22CF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CF24u);
        ctx->pc = 0x22CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF1Cu;
        // 0x22cf20: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CF1Cu, 0x22CF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CF24u;
label_22cf24:
    // 0x22cf24: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x22cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22cf28:
    // 0x22cf28: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x22cf28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22cf2c:
    // 0x22cf2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22cf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22cf30:
    // 0x22cf30: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x22cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22cf34:
    // 0x22cf34: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x22cf34u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_22cf38:
    // 0x22cf38: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x22cf38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22cf3c:
    // 0x22cf3c: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x22cf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22cf40:
    // 0x22cf40: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x22cf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22cf44:
    // 0x22cf44: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x22cf44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_22cf48:
    // 0x22cf48: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x22cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22cf4c:
    // 0x22cf4c: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x22cf4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22cf50:
    // 0x22cf50: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x22cf50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22cf54:
    // 0x22cf54: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x22cf54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_22cf58:
    // 0x22cf58: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x22cf58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_22cf5c:
    // 0x22cf5c: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_22cf60:
    if (ctx->pc == 0x22CF60u) {
        ctx->pc = 0x22CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF5Cu;
        // 0x22cf60: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF64u;
        goto label_22cf64;
    }
    ctx->pc = 0x22CF5Cu;
    {
        const bool branch_taken_0x22cf5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x22CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF5Cu;
        // 0x22cf60: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf5c) {
            ctx->pc = 0x22CFB8u;
            goto label_22cfb8;
        }
    }
    ctx->pc = 0x22CF64u;
label_22cf64:
    // 0x22cf64: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22cf68:
    // 0x22cf68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22cf68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cf6c:
    // 0x22cf6c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22cf70:
    // 0x22cf70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22cf74:
    // 0x22cf74: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_22cf78:
    if (ctx->pc == 0x22CF78u) {
        ctx->pc = 0x22CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF74u;
        // 0x22cf78: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF7Cu;
        goto label_22cf7c;
    }
    ctx->pc = 0x22CF74u;
    {
        const bool branch_taken_0x22cf74 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF74u;
        // 0x22cf78: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf74) {
            ctx->pc = 0x22CFE4u;
            goto label_22cfe4;
        }
    }
    ctx->pc = 0x22CF7Cu;
label_22cf7c:
    // 0x22cf7c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22cf7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22cf80:
    // 0x22cf80: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x22cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_22cf84:
    // 0x22cf84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22cf84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22cf88:
    // 0x22cf88: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x22cf88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_22cf8c:
    // 0x22cf8c: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x22cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_22cf90:
    // 0x22cf90: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x22cf90u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22cf94:
    // 0x22cf94: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x22cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_22cf98:
    // 0x22cf98: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x22cf98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_22cf9c:
    // 0x22cf9c: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x22cf9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_22cfa0:
    // 0x22cfa0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x22cfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_22cfa4:
    // 0x22cfa4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_22cfa8:
    if (ctx->pc == 0x22CFA8u) {
        ctx->pc = 0x22CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFA4u;
        // 0x22cfa8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFACu;
        goto label_22cfac;
    }
    ctx->pc = 0x22CFA4u;
    {
        const bool branch_taken_0x22cfa4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFA4u;
        // 0x22cfa8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfa4) {
            ctx->pc = 0x22CF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cf80;
        }
    }
    ctx->pc = 0x22CFACu;
label_22cfac:
    // 0x22cfac: 0x1000000d  b           . + 4 + (0xD << 2)
label_22cfb0:
    if (ctx->pc == 0x22CFB0u) {
        ctx->pc = 0x22CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFACu;
        // 0x22cfb0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFB4u;
        goto label_22cfb4;
    }
    ctx->pc = 0x22CFACu;
    {
        const bool branch_taken_0x22cfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFACu;
        // 0x22cfb0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfac) {
            ctx->pc = 0x22CFE4u;
            goto label_22cfe4;
        }
    }
    ctx->pc = 0x22CFB4u;
label_22cfb4:
    // 0x22cfb4: 0x0  nop
    ctx->pc = 0x22cfb4u;
    // NOP
label_22cfb8:
    // 0x22cfb8: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_22cfbc:
    if (ctx->pc == 0x22CFBCu) {
        ctx->pc = 0x22CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFB8u;
        // 0x22cfbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFC0u;
        goto label_22cfc0;
    }
    ctx->pc = 0x22CFB8u;
    {
        const bool branch_taken_0x22cfb8 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFB8u;
        // 0x22cfbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfb8) {
            ctx->pc = 0x22CFE4u;
            goto label_22cfe4;
        }
    }
    ctx->pc = 0x22CFC0u;
label_22cfc0:
    // 0x22cfc0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x22cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_22cfc4:
    // 0x22cfc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22cfc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22cfc8:
    // 0x22cfc8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x22cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_22cfcc:
    // 0x22cfcc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x22cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_22cfd0:
    // 0x22cfd0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x22cfd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_22cfd4:
    // 0x22cfd4: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x22cfd4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22cfd8:
    // 0x22cfd8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_22cfdc:
    if (ctx->pc == 0x22CFDCu) {
        ctx->pc = 0x22CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFD8u;
        // 0x22cfdc: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFE0u;
        goto label_22cfe0;
    }
    ctx->pc = 0x22CFD8u;
    {
        const bool branch_taken_0x22cfd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFD8u;
        // 0x22cfdc: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cfd8) {
            ctx->pc = 0x22CFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cfc0;
        }
    }
    ctx->pc = 0x22CFE0u;
label_22cfe0:
    // 0x22cfe0: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x22cfe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22cfe4:
    // 0x22cfe4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_22cfe8:
    // 0x22cfe8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22cfec:
    // 0x22cfec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22cfecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22cff0:
    // 0x22cff0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_22cff4:
    // 0x22cff4: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x22cff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22cff8:
    // 0x22cff8: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x22cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_22cffc:
    // 0x22cffc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22d000:
    // 0x22d000: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x22d000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_22d004:
    // 0x22d004: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d008:
    // 0x22d008: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_22d00c:
    if (ctx->pc == 0x22D00Cu) {
        ctx->pc = 0x22D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D008u;
        // 0x22d00c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D010u;
        goto label_22d010;
    }
    ctx->pc = 0x22D008u;
    {
        const bool branch_taken_0x22d008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d008) {
            ctx->pc = 0x22D00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D008u;
            // 0x22d00c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D030u;
            goto label_22d030;
        }
    }
    ctx->pc = 0x22D010u;
label_22d010:
    // 0x22d010: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22d014:
    // 0x22d014: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22d014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22d018:
    // 0x22d018: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22d018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22d01c:
    // 0x22d01c: 0x60f809  jalr        $v1
label_22d020:
    if (ctx->pc == 0x22D020u) {
        ctx->pc = 0x22D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D01Cu;
        // 0x22d020: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D024u;
        goto label_22d024;
    }
    ctx->pc = 0x22D01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22D024u);
        ctx->pc = 0x22D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D01Cu;
        // 0x22d020: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D01Cu, 0x22D024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D024u;
label_22d024:
    // 0x22d024: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d028:
    // 0x22d028: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22d028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22d02c:
    // 0x22d02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d030:
    // 0x22d030: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22d030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22d034:
    // 0x22d034: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22d034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22d038:
    // 0x22d038: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22d038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22d03c:
    // 0x22d03c: 0x3e00008  jr          $ra
label_22d040:
    if (ctx->pc == 0x22D040u) {
        ctx->pc = 0x22D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D03Cu;
        // 0x22d040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D044u;
        goto label_fallthrough_0x22d03c;
    }
    ctx->pc = 0x22D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D03Cu;
        // 0x22d040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22d03c:
    ctx->pc = 0x22D044u;
}

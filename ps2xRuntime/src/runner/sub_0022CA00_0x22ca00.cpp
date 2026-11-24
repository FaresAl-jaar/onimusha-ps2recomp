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

// Function: sub_0022CA00
// Address: 0x22ca00 - 0x22cb74
void sub_0022CA00_0x22ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CA00_0x22ca00");
#endif

    switch (ctx->pc) {
        case 0x22ca00u: goto label_22ca00;
        case 0x22ca04u: goto label_22ca04;
        case 0x22ca08u: goto label_22ca08;
        case 0x22ca0cu: goto label_22ca0c;
        case 0x22ca10u: goto label_22ca10;
        case 0x22ca14u: goto label_22ca14;
        case 0x22ca18u: goto label_22ca18;
        case 0x22ca1cu: goto label_22ca1c;
        case 0x22ca20u: goto label_22ca20;
        case 0x22ca24u: goto label_22ca24;
        case 0x22ca28u: goto label_22ca28;
        case 0x22ca2cu: goto label_22ca2c;
        case 0x22ca30u: goto label_22ca30;
        case 0x22ca34u: goto label_22ca34;
        case 0x22ca38u: goto label_22ca38;
        case 0x22ca3cu: goto label_22ca3c;
        case 0x22ca40u: goto label_22ca40;
        case 0x22ca44u: goto label_22ca44;
        case 0x22ca48u: goto label_22ca48;
        case 0x22ca4cu: goto label_22ca4c;
        case 0x22ca50u: goto label_22ca50;
        case 0x22ca54u: goto label_22ca54;
        case 0x22ca58u: goto label_22ca58;
        case 0x22ca5cu: goto label_22ca5c;
        case 0x22ca60u: goto label_22ca60;
        case 0x22ca64u: goto label_22ca64;
        case 0x22ca68u: goto label_22ca68;
        case 0x22ca6cu: goto label_22ca6c;
        case 0x22ca70u: goto label_22ca70;
        case 0x22ca74u: goto label_22ca74;
        case 0x22ca78u: goto label_22ca78;
        case 0x22ca7cu: goto label_22ca7c;
        case 0x22ca80u: goto label_22ca80;
        case 0x22ca84u: goto label_22ca84;
        case 0x22ca88u: goto label_22ca88;
        case 0x22ca8cu: goto label_22ca8c;
        case 0x22ca90u: goto label_22ca90;
        case 0x22ca94u: goto label_22ca94;
        case 0x22ca98u: goto label_22ca98;
        case 0x22ca9cu: goto label_22ca9c;
        case 0x22caa0u: goto label_22caa0;
        case 0x22caa4u: goto label_22caa4;
        case 0x22caa8u: goto label_22caa8;
        case 0x22caacu: goto label_22caac;
        case 0x22cab0u: goto label_22cab0;
        case 0x22cab4u: goto label_22cab4;
        case 0x22cab8u: goto label_22cab8;
        case 0x22cabcu: goto label_22cabc;
        case 0x22cac0u: goto label_22cac0;
        case 0x22cac4u: goto label_22cac4;
        case 0x22cac8u: goto label_22cac8;
        case 0x22caccu: goto label_22cacc;
        case 0x22cad0u: goto label_22cad0;
        case 0x22cad4u: goto label_22cad4;
        case 0x22cad8u: goto label_22cad8;
        case 0x22cadcu: goto label_22cadc;
        case 0x22cae0u: goto label_22cae0;
        case 0x22cae4u: goto label_22cae4;
        case 0x22cae8u: goto label_22cae8;
        case 0x22caecu: goto label_22caec;
        case 0x22caf0u: goto label_22caf0;
        case 0x22caf4u: goto label_22caf4;
        case 0x22caf8u: goto label_22caf8;
        case 0x22cafcu: goto label_22cafc;
        case 0x22cb00u: goto label_22cb00;
        case 0x22cb04u: goto label_22cb04;
        case 0x22cb08u: goto label_22cb08;
        case 0x22cb0cu: goto label_22cb0c;
        case 0x22cb10u: goto label_22cb10;
        case 0x22cb14u: goto label_22cb14;
        case 0x22cb18u: goto label_22cb18;
        case 0x22cb1cu: goto label_22cb1c;
        case 0x22cb20u: goto label_22cb20;
        case 0x22cb24u: goto label_22cb24;
        case 0x22cb28u: goto label_22cb28;
        case 0x22cb2cu: goto label_22cb2c;
        case 0x22cb30u: goto label_22cb30;
        case 0x22cb34u: goto label_22cb34;
        case 0x22cb38u: goto label_22cb38;
        case 0x22cb3cu: goto label_22cb3c;
        case 0x22cb40u: goto label_22cb40;
        case 0x22cb44u: goto label_22cb44;
        case 0x22cb48u: goto label_22cb48;
        case 0x22cb4cu: goto label_22cb4c;
        case 0x22cb50u: goto label_22cb50;
        case 0x22cb54u: goto label_22cb54;
        case 0x22cb58u: goto label_22cb58;
        case 0x22cb5cu: goto label_22cb5c;
        case 0x22cb60u: goto label_22cb60;
        case 0x22cb64u: goto label_22cb64;
        case 0x22cb68u: goto label_22cb68;
        case 0x22cb6cu: goto label_22cb6c;
        case 0x22cb70u: goto label_22cb70;
        default: break;
    }

    ctx->pc = 0x22ca00u;

label_22ca00:
    // 0x22ca00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22ca04:
    // 0x22ca04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ca08:
    // 0x22ca08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22ca0c:
    // 0x22ca0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ca0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ca10:
    // 0x22ca10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ca10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22ca14:
    // 0x22ca14: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x22ca14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22ca18:
    // 0x22ca18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22ca1c:
    // 0x22ca1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_22ca20:
    // 0x22ca20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22ca24:
    // 0x22ca24: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_22ca28:
    if (ctx->pc == 0x22CA28u) {
        ctx->pc = 0x22CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA24u;
        // 0x22ca28: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA2Cu;
        goto label_22ca2c;
    }
    ctx->pc = 0x22CA24u;
    {
        const bool branch_taken_0x22ca24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA24u;
        // 0x22ca28: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca24) {
            ctx->pc = 0x22CB34u;
            goto label_22cb34;
        }
    }
    ctx->pc = 0x22CA2Cu;
label_22ca2c:
    // 0x22ca2c: 0xc08f924  jal         func_23E490
label_22ca30:
    if (ctx->pc == 0x22CA30u) {
        ctx->pc = 0x22CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA2Cu;
        // 0x22ca30: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA34u;
        goto label_22ca34;
    }
    ctx->pc = 0x22CA2Cu;
    SET_GPR_U32(ctx, 31, 0x22CA34u);
    ctx->pc = 0x22CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA2Cu;
    // 0x22ca30: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22CA2Cu, 0x22CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA34u;
label_22ca34:
    // 0x22ca34: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_22ca38:
    if (ctx->pc == 0x22CA38u) {
        ctx->pc = 0x22CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA34u;
        // 0x22ca38: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA3Cu;
        goto label_22ca3c;
    }
    ctx->pc = 0x22CA34u;
    {
        const bool branch_taken_0x22ca34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ca34) {
            ctx->pc = 0x22CA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CA34u;
            // 0x22ca38: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB34u;
            goto label_22cb34;
        }
    }
    ctx->pc = 0x22CA3Cu;
label_22ca3c:
    // 0x22ca3c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22ca40:
    // 0x22ca40: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22ca44:
    // 0x22ca44: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22ca48:
    // 0x22ca48: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22ca48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22ca4c:
    // 0x22ca4c: 0x40f809  jalr        $v0
label_22ca50:
    if (ctx->pc == 0x22CA50u) {
        ctx->pc = 0x22CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA4Cu;
        // 0x22ca50: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA54u;
        goto label_22ca54;
    }
    ctx->pc = 0x22CA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22CA54u);
        ctx->pc = 0x22CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA4Cu;
        // 0x22ca50: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CA4Cu, 0x22CA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CA54u;
label_22ca54:
    // 0x22ca54: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x22ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22ca58:
    // 0x22ca58: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x22ca58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22ca5c:
    // 0x22ca5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22ca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ca60:
    // 0x22ca60: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x22ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22ca64:
    // 0x22ca64: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x22ca64u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_22ca68:
    // 0x22ca68: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x22ca68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22ca6c:
    // 0x22ca6c: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x22ca6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22ca70:
    // 0x22ca70: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x22ca70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22ca74:
    // 0x22ca74: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x22ca74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_22ca78:
    // 0x22ca78: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x22ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22ca7c:
    // 0x22ca7c: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x22ca7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22ca80:
    // 0x22ca80: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x22ca80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22ca84:
    // 0x22ca84: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x22ca84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_22ca88:
    // 0x22ca88: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x22ca88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_22ca8c:
    // 0x22ca8c: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_22ca90:
    if (ctx->pc == 0x22CA90u) {
        ctx->pc = 0x22CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA8Cu;
        // 0x22ca90: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA94u;
        goto label_22ca94;
    }
    ctx->pc = 0x22CA8Cu;
    {
        const bool branch_taken_0x22ca8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x22CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA8Cu;
        // 0x22ca90: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca8c) {
            ctx->pc = 0x22CAE8u;
            goto label_22cae8;
        }
    }
    ctx->pc = 0x22CA94u;
label_22ca94:
    // 0x22ca94: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22ca98:
    // 0x22ca98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22ca98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ca9c:
    // 0x22ca9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22caa0:
    // 0x22caa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22caa4:
    // 0x22caa4: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_22caa8:
    if (ctx->pc == 0x22CAA8u) {
        ctx->pc = 0x22CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAA4u;
        // 0x22caa8: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CAACu;
        goto label_22caac;
    }
    ctx->pc = 0x22CAA4u;
    {
        const bool branch_taken_0x22caa4 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAA4u;
        // 0x22caa8: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22caa4) {
            ctx->pc = 0x22CB14u;
            goto label_22cb14;
        }
    }
    ctx->pc = 0x22CAACu;
label_22caac:
    // 0x22caac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22caacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22cab0:
    // 0x22cab0: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x22cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_22cab4:
    // 0x22cab4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22cab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22cab8:
    // 0x22cab8: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x22cab8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_22cabc:
    // 0x22cabc: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x22cabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_22cac0:
    // 0x22cac0: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x22cac0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22cac4:
    // 0x22cac4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x22cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_22cac8:
    // 0x22cac8: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x22cac8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_22cacc:
    // 0x22cacc: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x22caccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_22cad0:
    // 0x22cad0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x22cad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_22cad4:
    // 0x22cad4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_22cad8:
    if (ctx->pc == 0x22CAD8u) {
        ctx->pc = 0x22CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAD4u;
        // 0x22cad8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CADCu;
        goto label_22cadc;
    }
    ctx->pc = 0x22CAD4u;
    {
        const bool branch_taken_0x22cad4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAD4u;
        // 0x22cad8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cad4) {
            ctx->pc = 0x22CAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cab0;
        }
    }
    ctx->pc = 0x22CADCu;
label_22cadc:
    // 0x22cadc: 0x1000000d  b           . + 4 + (0xD << 2)
label_22cae0:
    if (ctx->pc == 0x22CAE0u) {
        ctx->pc = 0x22CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CADCu;
        // 0x22cae0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CAE4u;
        goto label_22cae4;
    }
    ctx->pc = 0x22CADCu;
    {
        const bool branch_taken_0x22cadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CADCu;
        // 0x22cae0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cadc) {
            ctx->pc = 0x22CB14u;
            goto label_22cb14;
        }
    }
    ctx->pc = 0x22CAE4u;
label_22cae4:
    // 0x22cae4: 0x0  nop
    ctx->pc = 0x22cae4u;
    // NOP
label_22cae8:
    // 0x22cae8: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_22caec:
    if (ctx->pc == 0x22CAECu) {
        ctx->pc = 0x22CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAE8u;
        // 0x22caec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CAF0u;
        goto label_22caf0;
    }
    ctx->pc = 0x22CAE8u;
    {
        const bool branch_taken_0x22cae8 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAE8u;
        // 0x22caec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cae8) {
            ctx->pc = 0x22CB14u;
            goto label_22cb14;
        }
    }
    ctx->pc = 0x22CAF0u;
label_22caf0:
    // 0x22caf0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x22caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_22caf4:
    // 0x22caf4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22caf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22caf8:
    // 0x22caf8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x22caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_22cafc:
    // 0x22cafc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x22cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_22cb00:
    // 0x22cb00: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x22cb00u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_22cb04:
    // 0x22cb04: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x22cb04u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22cb08:
    // 0x22cb08: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_22cb0c:
    if (ctx->pc == 0x22CB0Cu) {
        ctx->pc = 0x22CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB08u;
        // 0x22cb0c: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB10u;
        goto label_22cb10;
    }
    ctx->pc = 0x22CB08u;
    {
        const bool branch_taken_0x22cb08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB08u;
        // 0x22cb0c: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb08) {
            ctx->pc = 0x22CAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22caf0;
        }
    }
    ctx->pc = 0x22CB10u;
label_22cb10:
    // 0x22cb10: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x22cb10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22cb14:
    // 0x22cb14: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_22cb18:
    // 0x22cb18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22cb1c:
    // 0x22cb1c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22cb1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22cb20:
    // 0x22cb20: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_22cb24:
    // 0x22cb24: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x22cb24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22cb28:
    // 0x22cb28: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x22cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_22cb2c:
    // 0x22cb2c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22cb30:
    // 0x22cb30: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x22cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_22cb34:
    // 0x22cb34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22cb38:
    // 0x22cb38: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_22cb3c:
    if (ctx->pc == 0x22CB3Cu) {
        ctx->pc = 0x22CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB38u;
        // 0x22cb3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB40u;
        goto label_22cb40;
    }
    ctx->pc = 0x22CB38u;
    {
        const bool branch_taken_0x22cb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22cb38) {
            ctx->pc = 0x22CB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CB38u;
            // 0x22cb3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CB60u;
            goto label_22cb60;
        }
    }
    ctx->pc = 0x22CB40u;
label_22cb40:
    // 0x22cb40: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22cb44:
    // 0x22cb44: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22cb48:
    // 0x22cb48: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22cb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22cb4c:
    // 0x22cb4c: 0x60f809  jalr        $v1
label_22cb50:
    if (ctx->pc == 0x22CB50u) {
        ctx->pc = 0x22CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB4Cu;
        // 0x22cb50: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB54u;
        goto label_22cb54;
    }
    ctx->pc = 0x22CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22CB54u);
        ctx->pc = 0x22CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB4Cu;
        // 0x22cb50: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CB4Cu, 0x22CB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22CB54u;
label_22cb54:
    // 0x22cb54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22cb58:
    // 0x22cb58: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22cb5c:
    // 0x22cb5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22cb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22cb60:
    // 0x22cb60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22cb60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22cb64:
    // 0x22cb64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22cb64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22cb68:
    // 0x22cb68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22cb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22cb6c:
    // 0x22cb6c: 0x3e00008  jr          $ra
label_22cb70:
    if (ctx->pc == 0x22CB70u) {
        ctx->pc = 0x22CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB6Cu;
        // 0x22cb70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB74u;
        goto label_fallthrough_0x22cb6c;
    }
    ctx->pc = 0x22CB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB6Cu;
        // 0x22cb70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22cb6c:
    ctx->pc = 0x22CB74u;
}

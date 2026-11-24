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

// Function: sub_00198AF0
// Address: 0x198af0 - 0x199a78
void sub_00198AF0_0x198af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198AF0_0x198af0");
#endif

    switch (ctx->pc) {
        case 0x198bdcu: goto label_198bdc;
        case 0x198becu: goto label_198bec;
        case 0x198c00u: goto label_198c00;
        case 0x198c70u: goto label_198c70;
        case 0x198c80u: goto label_198c80;
        case 0x198d3cu: goto label_198d3c;
        case 0x198da4u: goto label_198da4;
        case 0x198e60u: goto label_198e60;
        case 0x198ef8u: goto label_198ef8;
        case 0x198fa8u: goto label_198fa8;
        case 0x199050u: goto label_199050;
        case 0x199100u: goto label_199100;
        case 0x199188u: goto label_199188;
        case 0x1991bcu: goto label_1991bc;
        case 0x1992c0u: goto label_1992c0;
        case 0x199328u: goto label_199328;
        case 0x199390u: goto label_199390;
        case 0x1993f8u: goto label_1993f8;
        case 0x1994a8u: goto label_1994a8;
        case 0x1994b8u: goto label_1994b8;
        case 0x199540u: goto label_199540;
        case 0x199574u: goto label_199574;
        case 0x1995c4u: goto label_1995c4;
        case 0x199614u: goto label_199614;
        case 0x19965cu: goto label_19965c;
        case 0x199674u: goto label_199674;
        case 0x1996d8u: goto label_1996d8;
        case 0x199708u: goto label_199708;
        case 0x19993cu: goto label_19993c;
        case 0x199970u: goto label_199970;
        case 0x1999bcu: goto label_1999bc;
        case 0x1999ecu: goto label_1999ec;
        case 0x199a48u: goto label_199a48;
        default: break;
    }

    ctx->pc = 0x198af0u;

    // 0x198af0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x198af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x198af4: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x198af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x198af8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x198af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x198afc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x198afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x198b00: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x198b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x198b04: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x198b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x198b08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x198b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x198b0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x198b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x198b10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x198b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x198b14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x198b18: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x198b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x198b1c: 0x8c31ea24  lw          $s1, -0x15DC($at)
    ctx->pc = 0x198b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x198b20: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x198b20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x198b24: 0x102002de  beqz        $at, . + 4 + (0x2DE << 2)
    ctx->pc = 0x198B24u;
    {
        const bool branch_taken_0x198b24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B24u;
        // 0x198b28: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b24) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198B2Cu;
    // 0x198b2c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x198b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x198b30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198b34: 0x24635860  addiu       $v1, $v1, 0x5860
    ctx->pc = 0x198b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22624));
    // 0x198b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198b3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x198b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198b40: 0x400008  jr          $v0
    ctx->pc = 0x198B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198B48u: goto label_198b48;
            case 0x198CC0u: goto label_198cc0;
            case 0x1991C8u: goto label_1991c8;
            case 0x1995D0u: goto label_1995d0;
            case 0x199620u: goto label_199620;
            case 0x199668u: goto label_199668;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x198B48u;
label_198b48:
    // 0x198b48: 0x928d0005  lbu         $t5, 0x5($s4)
    ctx->pc = 0x198b48u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x198b4c: 0x8e900044  lw          $s0, 0x44($s4)
    ctx->pc = 0x198b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x198b50: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x198b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x198b54: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x198b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x198b58: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x198b58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198b5c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x198b60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198b64: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x198b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x198b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b74: 0xd1100  sll         $v0, $t5, 4
    ctx->pc = 0x198b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x198b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x198b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b7c: 0xa28c0001  sb          $t4, 0x1($s4)
    ctx->pc = 0x198b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 12));
    // 0x198b80: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x198b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x198b84: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x198b84u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198b8c: 0xa2800003  sb          $zero, 0x3($s4)
    ctx->pc = 0x198b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b90: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x198b94: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x198b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198b98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198b98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x198b9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ba0: 0xa2820049  sb          $v0, 0x49($s4)
    ctx->pc = 0x198ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 73), (uint8_t)GPR_U32(ctx, 2));
    // 0x198ba4: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x198ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x198ba8: 0xa282004a  sb          $v0, 0x4A($s4)
    ctx->pc = 0x198ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x198bac: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x198bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x198bb0: 0xa282004b  sb          $v0, 0x4B($s4)
    ctx->pc = 0x198bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 75), (uint8_t)GPR_U32(ctx, 2));
    // 0x198bb4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x198bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x198bb8: 0xa2820048  sb          $v0, 0x48($s4)
    ctx->pc = 0x198bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x198bbc: 0xae80009c  sw          $zero, 0x9C($s4)
    ctx->pc = 0x198bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 0));
    // 0x198bc0: 0xa680000c  sh          $zero, 0xC($s4)
    ctx->pc = 0x198bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x198bc4: 0xa6800090  sh          $zero, 0x90($s4)
    ctx->pc = 0x198bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x198bc8: 0xa6800092  sh          $zero, 0x92($s4)
    ctx->pc = 0x198bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x198bcc: 0xa6800094  sh          $zero, 0x94($s4)
    ctx->pc = 0x198bccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x198bd0: 0xa6800096  sh          $zero, 0x96($s4)
    ctx->pc = 0x198bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x198bd4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x198BD4u;
    SET_GPR_U32(ctx, 31, 0x198BDCu);
    ctx->pc = 0x198BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198BD4u;
    // 0x198bd8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x198BD4u, 0x198BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BDCu;
label_198bdc:
    // 0x198bdc: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x198bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x198be0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x198be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198be4: 0xc056e04  jal         func_15B810
    ctx->pc = 0x198BE4u;
    SET_GPR_U32(ctx, 31, 0x198BECu);
    ctx->pc = 0x198BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198BE4u;
    // 0x198be8: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x198BE4u, 0x198BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198BECu;
label_198bec:
    // 0x198bec: 0x82850049  lb          $a1, 0x49($s4)
    ctx->pc = 0x198becu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
    // 0x198bf0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x198bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x198bf4: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x198bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x198bf8: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x198BF8u;
    SET_GPR_U32(ctx, 31, 0x198C00u);
    ctx->pc = 0x198BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198BF8u;
    // 0x198bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x198BF8u, 0x198C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C00u;
label_198c00:
    // 0x198c00: 0x82820049  lb          $v0, 0x49($s4)
    ctx->pc = 0x198c00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
    // 0x198c04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x198C04u;
    {
        const bool branch_taken_0x198c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C04u;
        // 0x198c08: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c04) {
            ctx->pc = 0x198C30u;
            goto label_198c30;
        }
    }
    ctx->pc = 0x198C0Cu;
    // 0x198c0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x198c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198c10: 0xa282004c  sb          $v0, 0x4C($s4)
    ctx->pc = 0x198c10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x198c14: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x198c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x198c18: 0xa282004d  sb          $v0, 0x4D($s4)
    ctx->pc = 0x198c18u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x198c1c: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x198c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x198c20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x198c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198c24: 0xa683000e  sh          $v1, 0xE($s4)
    ctx->pc = 0x198c24u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x198c28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x198C28u;
    {
        const bool branch_taken_0x198c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C28u;
        // 0x198c2c: 0xa6820010  sh          $v0, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c28) {
            ctx->pc = 0x198C58u;
            goto label_198c58;
        }
    }
    ctx->pc = 0x198C30u;
label_198c30:
    // 0x198c30: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x198c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x198c34: 0xa283004c  sb          $v1, 0x4C($s4)
    ctx->pc = 0x198c34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x198c38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x198c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198c3c: 0xa283004d  sb          $v1, 0x4D($s4)
    ctx->pc = 0x198c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 77), (uint8_t)GPR_U32(ctx, 3));
    // 0x198c40: 0xa282004e  sb          $v0, 0x4E($s4)
    ctx->pc = 0x198c40u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x198c44: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x198c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198c48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x198c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198c4c: 0xa683000e  sh          $v1, 0xE($s4)
    ctx->pc = 0x198c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x198c50: 0xa6820010  sh          $v0, 0x10($s4)
    ctx->pc = 0x198c50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x198c54: 0x0  nop
    ctx->pc = 0x198c54u;
    // NOP
label_198c58:
    // 0x198c58: 0x8282004d  lb          $v0, 0x4D($s4)
    ctx->pc = 0x198c58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 77)));
    // 0x198c5c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x198c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x198c60: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x198c60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198c64: 0x1020028e  beqz        $at, . + 4 + (0x28E << 2)
    ctx->pc = 0x198C64u;
    {
        const bool branch_taken_0x198c64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C64u;
        // 0x198c68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c64) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198C6Cu;
    // 0x198c6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198c70:
    // 0x198c70: 0x8282004c  lb          $v0, 0x4C($s4)
    ctx->pc = 0x198c70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x198c74: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x198c74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198c78: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x198C78u;
    {
        const bool branch_taken_0x198c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C78u;
        // 0x198c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c78) {
            ctx->pc = 0x198CA0u;
            goto label_198ca0;
        }
    }
    ctx->pc = 0x198C80u;
label_198c80:
    // 0x198c80: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x198c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198c84: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x198c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x198c88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x198c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x198c8c: 0xa043004f  sb          $v1, 0x4F($v0)
    ctx->pc = 0x198c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x198c90: 0x8282004c  lb          $v0, 0x4C($s4)
    ctx->pc = 0x198c90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x198c94: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x198c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198c98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x198C98u;
    {
        const bool branch_taken_0x198c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C98u;
        // 0x198c9c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c98) {
            ctx->pc = 0x198C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198c80;
        }
    }
    ctx->pc = 0x198CA0u;
label_198ca0:
    // 0x198ca0: 0x8282004d  lb          $v0, 0x4D($s4)
    ctx->pc = 0x198ca0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 77)));
    // 0x198ca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x198ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x198ca8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x198ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198cac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x198CACu;
    {
        const bool branch_taken_0x198cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CACu;
        // 0x198cb0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cac) {
            ctx->pc = 0x198C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198c70;
        }
    }
    ctx->pc = 0x198CB4u;
    // 0x198cb4: 0x1000027a  b           . + 4 + (0x27A << 2)
    ctx->pc = 0x198CB4u;
    {
        const bool branch_taken_0x198cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198cb4) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198CBCu;
    // 0x198cbc: 0x0  nop
    ctx->pc = 0x198cbcu;
    // NOP
label_198cc0:
    // 0x198cc0: 0x82850049  lb          $a1, 0x49($s4)
    ctx->pc = 0x198cc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
    // 0x198cc4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x198cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x198cc8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x198cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x198ccc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x198cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x198cd0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x198cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x198cd4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x198cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x198cd8: 0x65200a  movz        $a0, $v1, $a1
    ctx->pc = 0x198cd8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x198cdc: 0x4863c  dsll32      $s0, $a0, 24
    ctx->pc = 0x198cdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 24));
    // 0x198ce0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198CE0u;
    {
        const bool branch_taken_0x198ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CE0u;
        // 0x198ce4: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ce0) {
            ctx->pc = 0x198D00u;
            goto label_198d00;
        }
    }
    ctx->pc = 0x198CE8u;
    // 0x198ce8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x198cec: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x198cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x198cf0: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x198cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x198cf4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x198CF4u;
    {
        const bool branch_taken_0x198cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198cf4) {
            ctx->pc = 0x198D40u;
            goto label_198d40;
        }
    }
    ctx->pc = 0x198CFCu;
    // 0x198cfc: 0x0  nop
    ctx->pc = 0x198cfcu;
    // NOP
label_198d00:
    // 0x198d00: 0x8283004e  lb          $v1, 0x4E($s4)
    ctx->pc = 0x198d00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 78)));
    // 0x198d04: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x198d08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198d0c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x198d10: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x198d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x198d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x198d20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198d24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d28: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x198d28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198d30: 0xa283004e  sb          $v1, 0x4E($s4)
    ctx->pc = 0x198d30u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x198d34: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x198D34u;
    SET_GPR_U32(ctx, 31, 0x198D3Cu);
    ctx->pc = 0x198D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D34u;
    // 0x198d38: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x198D34u, 0x198D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D3Cu;
label_198d3c:
    // 0x198d3c: 0x0  nop
    ctx->pc = 0x198d3cu;
    // NOP
label_198d40:
    // 0x198d40: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x198d44: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x198d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x198d48: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x198d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x198d4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198D4Cu;
    {
        const bool branch_taken_0x198d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D4Cu;
        // 0x198d50: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d4c) {
            ctx->pc = 0x198D68u;
            goto label_198d68;
        }
    }
    ctx->pc = 0x198D54u;
    // 0x198d54: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x198d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x198d58: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x198d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x198d5c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x198D5Cu;
    {
        const bool branch_taken_0x198d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198d5c) {
            ctx->pc = 0x198DA8u;
            goto label_198da8;
        }
    }
    ctx->pc = 0x198D64u;
    // 0x198d64: 0x0  nop
    ctx->pc = 0x198d64u;
    // NOP
label_198d68:
    // 0x198d68: 0x8283004e  lb          $v1, 0x4E($s4)
    ctx->pc = 0x198d68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 78)));
    // 0x198d6c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x198d70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198d74: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x198d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x198d78: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x198d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x198d88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198d8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d90: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x198d90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x198d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x198d98: 0xa283004e  sb          $v1, 0x4E($s4)
    ctx->pc = 0x198d98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x198d9c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x198D9Cu;
    SET_GPR_U32(ctx, 31, 0x198DA4u);
    ctx->pc = 0x198DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D9Cu;
    // 0x198da0: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x198D9Cu, 0x198DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198DA4u;
label_198da4:
    // 0x198da4: 0x0  nop
    ctx->pc = 0x198da4u;
    // NOP
label_198da8:
    // 0x198da8: 0x8283004e  lb          $v1, 0x4E($s4)
    ctx->pc = 0x198da8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 78)));
    // 0x198dac: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x198dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x198db0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x198db0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x198db4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x198db4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198db8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x198DB8u;
    {
        const bool branch_taken_0x198db8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198db8) {
            ctx->pc = 0x198DC8u;
            goto label_198dc8;
        }
    }
    ctx->pc = 0x198DC0u;
    // 0x198dc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x198DC0u;
    {
        const bool branch_taken_0x198dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DC0u;
        // 0x198dc4: 0xa280004e  sb          $zero, 0x4E($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198dc0) {
            ctx->pc = 0x198DD8u;
            goto label_198dd8;
        }
    }
    ctx->pc = 0x198DC8u;
label_198dc8:
    // 0x198dc8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x198DC8u;
    {
        const bool branch_taken_0x198dc8 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x198dc8) {
            ctx->pc = 0x198DD8u;
            goto label_198dd8;
        }
    }
    ctx->pc = 0x198DD0u;
    // 0x198dd0: 0xa290004e  sb          $s0, 0x4E($s4)
    ctx->pc = 0x198dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 16));
    // 0x198dd4: 0x0  nop
    ctx->pc = 0x198dd4u;
    // NOP
label_198dd8:
    // 0x198dd8: 0x82840049  lb          $a0, 0x49($s4)
    ctx->pc = 0x198dd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
    // 0x198ddc: 0x8283004e  lb          $v1, 0x4E($s4)
    ctx->pc = 0x198ddcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 78)));
    // 0x198de0: 0x278680b8  addiu       $a2, $gp, -0x7F48
    ctx->pc = 0x198de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934712));
    // 0x198de4: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x198de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
    // 0x198de8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198dec: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x198decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x198df0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x198df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x198df4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x198df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x198df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x198df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198dfc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x198dfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198e00: 0xa283004a  sb          $v1, 0x4A($s4)
    ctx->pc = 0x198e00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x198e04: 0x82840049  lb          $a0, 0x49($s4)
    ctx->pc = 0x198e04u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
    // 0x198e08: 0x8283004e  lb          $v1, 0x4E($s4)
    ctx->pc = 0x198e08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 78)));
    // 0x198e0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x198e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198e10: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x198e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x198e14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x198e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x198e18: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x198e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198e1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x198e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198e20: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x198e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x198e24: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x198E24u;
    {
        const bool branch_taken_0x198e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E24u;
        // 0x198e28: 0xa283004b  sb          $v1, 0x4B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 75), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e24) {
            ctx->pc = 0x199158u;
            goto label_199158;
        }
    }
    ctx->pc = 0x198E2Cu;
    // 0x198e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198e30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x198e34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x198e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x198e38: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x198e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x198e3c: 0x3c023406  lui         $v0, 0x3406
    ctx->pc = 0x198e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13318 << 16));
    // 0x198e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e44: 0x3445090f  ori         $a1, $v0, 0x90F
    ctx->pc = 0x198e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2319);
    // 0x198e48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x198e50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e58: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x198E58u;
    SET_GPR_U32(ctx, 31, 0x198E60u);
    ctx->pc = 0x198E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E58u;
    // 0x198e5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x198E58u, 0x198E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E60u;
label_198e60:
    // 0x198e60: 0x8283004b  lb          $v1, 0x4B($s4)
    ctx->pc = 0x198e60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 75)));
    // 0x198e64: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x198e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x198e68: 0x8284004a  lb          $a0, 0x4A($s4)
    ctx->pc = 0x198e68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 74)));
    // 0x198e6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x198e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x198e70: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x198e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x198e74: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x198e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x198e78: 0x9083004f  lbu         $v1, 0x4F($a0)
    ctx->pc = 0x198e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x198e7c: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x198E7Cu;
    {
        const bool branch_taken_0x198e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E7Cu;
        // 0x198e80: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e7c) {
            ctx->pc = 0x1990A8u;
            goto label_1990a8;
        }
    }
    ctx->pc = 0x198E84u;
    // 0x198e84: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x198E84u;
    {
        const bool branch_taken_0x198e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198e84) {
            ctx->pc = 0x199000u;
            goto label_199000;
        }
    }
    ctx->pc = 0x198E8Cu;
    // 0x198e8c: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x198e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x198e90: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x198E90u;
    {
        const bool branch_taken_0x198e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E90u;
        // 0x198e94: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e90) {
            ctx->pc = 0x198F50u;
            goto label_198f50;
        }
    }
    ctx->pc = 0x198E98u;
    // 0x198e98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198E98u;
    {
        const bool branch_taken_0x198e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x198e98) {
            ctx->pc = 0x198EA8u;
            goto label_198ea8;
        }
    }
    ctx->pc = 0x198EA0u;
    // 0x198ea0: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x198EA0u;
    {
        const bool branch_taken_0x198ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198ea0) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198EA8u;
label_198ea8:
    // 0x198ea8: 0x90820050  lbu         $v0, 0x50($a0)
    ctx->pc = 0x198ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x198eac: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x198eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x198eb0: 0x102001fb  beqz        $at, . + 4 + (0x1FB << 2)
    ctx->pc = 0x198EB0u;
    {
        const bool branch_taken_0x198eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198eb0) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198EB8u;
    // 0x198eb8: 0x44001f9  bltz        $v0, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x198EB8u;
    {
        const bool branch_taken_0x198eb8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x198eb8) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198EC0u;
    // 0x198ec0: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x198ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x198ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198ec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198ecc: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x198eccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x198ed0: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x198ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x198ed4: 0x8282004a  lb          $v0, 0x4A($s4)
    ctx->pc = 0x198ed4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 74)));
    // 0x198ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198edc: 0xa6820090  sh          $v0, 0x90($s4)
    ctx->pc = 0x198edcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x198ee0: 0x8282004b  lb          $v0, 0x4B($s4)
    ctx->pc = 0x198ee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 75)));
    // 0x198ee4: 0xa6820092  sh          $v0, 0x92($s4)
    ctx->pc = 0x198ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x198ee8: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x198ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x198eec: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x198eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198ef0: 0x102001eb  beqz        $at, . + 4 + (0x1EB << 2)
    ctx->pc = 0x198EF0u;
    {
        const bool branch_taken_0x198ef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EF0u;
        // 0x198ef4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ef0) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198EF8u;
label_198ef8:
    // 0x198ef8: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x198ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x198efc: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x198efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x198f00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x198f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x198f04: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x198f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x198f08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x198f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198f0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x198f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x198f10: 0x2443004f  addiu       $v1, $v0, 0x4F
    ctx->pc = 0x198f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
    // 0x198f14: 0x9042004f  lbu         $v0, 0x4F($v0)
    ctx->pc = 0x198f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x198f18: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x198f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x198f1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x198F1Cu;
    {
        const bool branch_taken_0x198f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f1c) {
            ctx->pc = 0x198F30u;
            goto label_198f30;
        }
    }
    ctx->pc = 0x198F24u;
    // 0x198f24: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x198f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x198f28: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x198f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198f2c: 0x0  nop
    ctx->pc = 0x198f2cu;
    // NOP
label_198f30:
    // 0x198f30: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x198f30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x198f34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x198f38: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x198f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198f3c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x198F3Cu;
    {
        const bool branch_taken_0x198f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198f3c) {
            ctx->pc = 0x198EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198ef8;
        }
    }
    ctx->pc = 0x198F44u;
    // 0x198f44: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x198F44u;
    {
        const bool branch_taken_0x198f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f44) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198F4Cu;
    // 0x198f4c: 0x0  nop
    ctx->pc = 0x198f4cu;
    // NOP
label_198f50:
    // 0x198f50: 0x9082004e  lbu         $v0, 0x4E($a0)
    ctx->pc = 0x198f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x198f54: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x198f54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x198f58: 0x102001d1  beqz        $at, . + 4 + (0x1D1 << 2)
    ctx->pc = 0x198F58u;
    {
        const bool branch_taken_0x198f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f58) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198F60u;
    // 0x198f60: 0x44001cf  bltz        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x198F60u;
    {
        const bool branch_taken_0x198f60 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x198f60) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198F68u;
    // 0x198f68: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x198f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x198f6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198f70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198f74: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x198f74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x198f78: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x198f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x198f7c: 0x8282004a  lb          $v0, 0x4A($s4)
    ctx->pc = 0x198f7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 74)));
    // 0x198f80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198f84: 0xa6820090  sh          $v0, 0x90($s4)
    ctx->pc = 0x198f84u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x198f88: 0x8282004b  lb          $v0, 0x4B($s4)
    ctx->pc = 0x198f88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 75)));
    // 0x198f8c: 0xa6820092  sh          $v0, 0x92($s4)
    ctx->pc = 0x198f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x198f90: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x198f94: 0x21023  negu        $v0, $v0
    ctx->pc = 0x198f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x198f98: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x198f98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x198f9c: 0x102001c0  beqz        $at, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x198F9Cu;
    {
        const bool branch_taken_0x198f9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F9Cu;
        // 0x198fa0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f9c) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x198FA4u;
    // 0x198fa4: 0x0  nop
    ctx->pc = 0x198fa4u;
    // NOP
label_198fa8:
    // 0x198fa8: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x198fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x198fac: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x198facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x198fb0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x198fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x198fb4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x198fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x198fb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x198fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198fbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x198fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x198fc0: 0x2443004f  addiu       $v1, $v0, 0x4F
    ctx->pc = 0x198fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
    // 0x198fc4: 0x9042004f  lbu         $v0, 0x4F($v0)
    ctx->pc = 0x198fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x198fc8: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x198fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x198fcc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x198FCCu;
    {
        const bool branch_taken_0x198fcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x198fcc) {
            ctx->pc = 0x198FE0u;
            goto label_198fe0;
        }
    }
    ctx->pc = 0x198FD4u;
    // 0x198fd4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x198fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x198fd8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x198fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198fdc: 0x0  nop
    ctx->pc = 0x198fdcu;
    // NOP
label_198fe0:
    // 0x198fe0: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x198fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x198fe4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x198fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x198fe8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x198fec: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x198fecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x198ff0: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x198FF0u;
    {
        const bool branch_taken_0x198ff0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x198ff0) {
            ctx->pc = 0x198FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198fa8;
        }
    }
    ctx->pc = 0x198FF8u;
    // 0x198ff8: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x198FF8u;
    {
        const bool branch_taken_0x198ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198ff8) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199000u;
label_199000:
    // 0x199000: 0x90820057  lbu         $v0, 0x57($a0)
    ctx->pc = 0x199000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 87)));
    // 0x199004: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x199004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x199008: 0x102001a5  beqz        $at, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x199008u;
    {
        const bool branch_taken_0x199008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199008) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199010u;
    // 0x199010: 0x44001a3  bltz        $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x199010u;
    {
        const bool branch_taken_0x199010 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x199010) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199018u;
    // 0x199018: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x199018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x19901c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199024: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x199024u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x199028: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x199028u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x19902c: 0x8282004a  lb          $v0, 0x4A($s4)
    ctx->pc = 0x19902cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 74)));
    // 0x199030: 0xa6820090  sh          $v0, 0x90($s4)
    ctx->pc = 0x199030u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x199034: 0x8282004b  lb          $v0, 0x4B($s4)
    ctx->pc = 0x199034u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 75)));
    // 0x199038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19903c: 0xa6820092  sh          $v0, 0x92($s4)
    ctx->pc = 0x19903cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x199040: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x199040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x199044: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x199044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199048: 0x10200195  beqz        $at, . + 4 + (0x195 << 2)
    ctx->pc = 0x199048u;
    {
        const bool branch_taken_0x199048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199048u;
        // 0x19904c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199048) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199050u;
label_199050:
    // 0x199050: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x199050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x199054: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x199054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x199058: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19905c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19905cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x199060: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x199060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x199064: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x199064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199068: 0x2443004f  addiu       $v1, $v0, 0x4F
    ctx->pc = 0x199068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
    // 0x19906c: 0x9042004f  lbu         $v0, 0x4F($v0)
    ctx->pc = 0x19906cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x199070: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x199070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x199074: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x199074u;
    {
        const bool branch_taken_0x199074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199074) {
            ctx->pc = 0x199088u;
            goto label_199088;
        }
    }
    ctx->pc = 0x19907Cu;
    // 0x19907c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x19907cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x199080: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x199080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x199084: 0x0  nop
    ctx->pc = 0x199084u;
    // NOP
label_199088:
    // 0x199088: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x199088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x19908c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19908cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x199090: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x199090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199094: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x199094u;
    {
        const bool branch_taken_0x199094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199094) {
            ctx->pc = 0x199050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199050;
        }
    }
    ctx->pc = 0x19909Cu;
    // 0x19909c: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x19909Cu;
    {
        const bool branch_taken_0x19909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19909c) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x1990A4u;
    // 0x1990a4: 0x0  nop
    ctx->pc = 0x1990a4u;
    // NOP
label_1990a8:
    // 0x1990a8: 0x90820047  lbu         $v0, 0x47($a0)
    ctx->pc = 0x1990a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 71)));
    // 0x1990ac: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x1990acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1990b0: 0x1020017b  beqz        $at, . + 4 + (0x17B << 2)
    ctx->pc = 0x1990B0u;
    {
        const bool branch_taken_0x1990b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1990b0) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x1990B8u;
    // 0x1990b8: 0x4400179  bltz        $v0, . + 4 + (0x179 << 2)
    ctx->pc = 0x1990B8u;
    {
        const bool branch_taken_0x1990b8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1990b8) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x1990C0u;
    // 0x1990c0: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x1990c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x1990c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1990c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1990c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1990c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1990cc: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x1990ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1990d0: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x1990d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x1990d4: 0x8282004a  lb          $v0, 0x4A($s4)
    ctx->pc = 0x1990d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 74)));
    // 0x1990d8: 0xa6820090  sh          $v0, 0x90($s4)
    ctx->pc = 0x1990d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x1990dc: 0x8282004b  lb          $v0, 0x4B($s4)
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 75)));
    // 0x1990e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1990e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1990e4: 0xa6820092  sh          $v0, 0x92($s4)
    ctx->pc = 0x1990e4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x1990e8: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1990ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1990ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1990f0: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x1990f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1990f4: 0x1020016a  beqz        $at, . + 4 + (0x16A << 2)
    ctx->pc = 0x1990F4u;
    {
        const bool branch_taken_0x1990f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990F4u;
        // 0x1990f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990f4) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x1990FCu;
    // 0x1990fc: 0x0  nop
    ctx->pc = 0x1990fcu;
    // NOP
label_199100:
    // 0x199100: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x199100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x199104: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x199104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x199108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19910c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19910cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x199110: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x199110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x199114: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x199114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199118: 0x2443004f  addiu       $v1, $v0, 0x4F
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
    // 0x19911c: 0x9042004f  lbu         $v0, 0x4F($v0)
    ctx->pc = 0x19911cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x199120: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x199120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x199124: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x199124u;
    {
        const bool branch_taken_0x199124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199124) {
            ctx->pc = 0x199138u;
            goto label_199138;
        }
    }
    ctx->pc = 0x19912Cu;
    // 0x19912c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x19912cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x199130: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x199130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x199134: 0x0  nop
    ctx->pc = 0x199134u;
    // NOP
label_199138:
    // 0x199138: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x199138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x19913c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19913cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x199140: 0x21023  negu        $v0, $v0
    ctx->pc = 0x199140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x199144: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x199144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x199148: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x199148u;
    {
        const bool branch_taken_0x199148 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x199148) {
            ctx->pc = 0x199100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199100;
        }
    }
    ctx->pc = 0x199150u;
    // 0x199150: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x199150u;
    {
        const bool branch_taken_0x199150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199150) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199158u;
label_199158:
    // 0x199158: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x199158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x19915c: 0x10400150  beqz        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x19915Cu;
    {
        const bool branch_taken_0x19915c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19915Cu;
        // 0x199160: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19915c) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199164u;
    // 0x199164: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x199168: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x199168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x19916c: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x19916cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x199170: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x199170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x199174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19917c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19917cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199180: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x199180u;
    SET_GPR_U32(ctx, 31, 0x199188u);
    ctx->pc = 0x199184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199180u;
    // 0x199184: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x199180u, 0x199188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199188u;
label_199188:
    // 0x199188: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19918c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19918cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x199190: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x199190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x199194: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x199194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x199198: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x199198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x19919c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19919cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991a0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x1991a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x1991a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1991a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1991a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1991acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1991b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991b4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x1991B4u;
    SET_GPR_U32(ctx, 31, 0x1991BCu);
    ctx->pc = 0x1991B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991B4u;
    // 0x1991b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x1991B4u, 0x1991BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991BCu;
label_1991bc:
    // 0x1991bc: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1991BCu;
    {
        const bool branch_taken_0x1991bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1991bc) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x1991C4u;
    // 0x1991c4: 0x0  nop
    ctx->pc = 0x1991c4u;
    // NOP
label_1991c8:
    // 0x1991c8: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x1991c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1991cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1991ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1991d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1991D0u;
    {
        const bool branch_taken_0x1991d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1991d0) {
            ctx->pc = 0x1991E8u;
            goto label_1991e8;
        }
    }
    ctx->pc = 0x1991D8u;
    // 0x1991d8: 0x86820094  lh          $v0, 0x94($s4)
    ctx->pc = 0x1991d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1991dc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1991dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1991e0: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x1991e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x1991e4: 0x0  nop
    ctx->pc = 0x1991e4u;
    // NOP
label_1991e8:
    // 0x1991e8: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x1991e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1991ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1991ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1991f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1991F0u;
    {
        const bool branch_taken_0x1991f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1991f0) {
            ctx->pc = 0x199208u;
            goto label_199208;
        }
    }
    ctx->pc = 0x1991F8u;
    // 0x1991f8: 0x86820094  lh          $v0, 0x94($s4)
    ctx->pc = 0x1991f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1991fc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1991fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x199200: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x199200u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x199204: 0x0  nop
    ctx->pc = 0x199204u;
    // NOP
label_199208:
    // 0x199208: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x199208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x19920c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199210: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199210u;
    {
        const bool branch_taken_0x199210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199210) {
            ctx->pc = 0x199228u;
            goto label_199228;
        }
    }
    ctx->pc = 0x199218u;
    // 0x199218: 0x86820096  lh          $v0, 0x96($s4)
    ctx->pc = 0x199218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 150)));
    // 0x19921c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x199220: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x199220u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x199224: 0x0  nop
    ctx->pc = 0x199224u;
    // NOP
label_199228:
    // 0x199228: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x199228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x19922c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199230: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199230u;
    {
        const bool branch_taken_0x199230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199230) {
            ctx->pc = 0x199248u;
            goto label_199248;
        }
    }
    ctx->pc = 0x199238u;
    // 0x199238: 0x86820096  lh          $v0, 0x96($s4)
    ctx->pc = 0x199238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 150)));
    // 0x19923c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x19923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x199240: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x199240u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x199244: 0x0  nop
    ctx->pc = 0x199244u;
    // NOP
label_199248:
    // 0x199248: 0x8683000c  lh          $v1, 0xC($s4)
    ctx->pc = 0x199248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x19924c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199250: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x199250u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x199254: 0x8682000e  lh          $v0, 0xE($s4)
    ctx->pc = 0x199254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x199258: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19925c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x19925cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199260: 0x1020010f  beqz        $at, . + 4 + (0x10F << 2)
    ctx->pc = 0x199260u;
    {
        const bool branch_taken_0x199260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199260) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199268u;
    // 0x199268: 0x82830048  lb          $v1, 0x48($s4)
    ctx->pc = 0x199268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x19926c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199270: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x199270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x199274: 0xa2830048  sb          $v1, 0x48($s4)
    ctx->pc = 0x199274u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x199278: 0xa6800094  sh          $zero, 0x94($s4)
    ctx->pc = 0x199278u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x19927c: 0xa6800096  sh          $zero, 0x96($s4)
    ctx->pc = 0x19927cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x199280: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x199280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x199284: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x199284u;
    {
        const bool branch_taken_0x199284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x199288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199284u;
        // 0x199288: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199284) {
            ctx->pc = 0x1993E8u;
            goto label_1993e8;
        }
    }
    ctx->pc = 0x19928Cu;
    // 0x19928c: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x19928Cu;
    {
        const bool branch_taken_0x19928c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19928c) {
            ctx->pc = 0x199380u;
            goto label_199380;
        }
    }
    ctx->pc = 0x199294u;
    // 0x199294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199298: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x199298u;
    {
        const bool branch_taken_0x199298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199298u;
        // 0x19929c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199298) {
            ctx->pc = 0x199318u;
            goto label_199318;
        }
    }
    ctx->pc = 0x1992A0u;
    // 0x1992a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1992A0u;
    {
        const bool branch_taken_0x1992a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1992a0) {
            ctx->pc = 0x1992B0u;
            goto label_1992b0;
        }
    }
    ctx->pc = 0x1992A8u;
    // 0x1992a8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1992A8u;
    {
        const bool branch_taken_0x1992a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1992a8) {
            ctx->pc = 0x199448u;
            goto label_199448;
        }
    }
    ctx->pc = 0x1992B0u;
label_1992b0:
    // 0x1992b0: 0x86840010  lh          $a0, 0x10($s4)
    ctx->pc = 0x1992b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1992b4: 0x18800064  blez        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1992B4u;
    {
        const bool branch_taken_0x1992b4 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x1992b4) {
            ctx->pc = 0x199448u;
            goto label_199448;
        }
    }
    ctx->pc = 0x1992BCu;
    // 0x1992bc: 0x0  nop
    ctx->pc = 0x1992bcu;
    // NOP
label_1992c0:
    // 0x1992c0: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x1992c4: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x1992c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1992c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1992c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1992cc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1992d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1992d4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1992d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1992d8: 0x9062004e  lbu         $v0, 0x4E($v1)
    ctx->pc = 0x1992d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 78)));
    // 0x1992dc: 0xa062004f  sb          $v0, 0x4F($v1)
    ctx->pc = 0x1992dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x1992e0: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x1992e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x1992e4: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1992e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1992e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1992ec: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1992ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1992f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1992f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1992f4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1992f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1992f8: 0x9062004f  lbu         $v0, 0x4F($v1)
    ctx->pc = 0x1992f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x1992fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1992fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x199300: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x199300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x199304: 0x1c80ffee  bgtz        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x199304u;
    {
        const bool branch_taken_0x199304 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x199308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199304u;
        // 0x199308: 0xa062004f  sb          $v0, 0x4F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199304) {
            ctx->pc = 0x1992C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1992c0;
        }
    }
    ctx->pc = 0x19930Cu;
    // 0x19930c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x19930Cu;
    {
        const bool branch_taken_0x19930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19930c) {
            ctx->pc = 0x199448u;
            goto label_199448;
        }
    }
    ctx->pc = 0x199314u;
    // 0x199314: 0x0  nop
    ctx->pc = 0x199314u;
    // NOP
label_199318:
    // 0x199318: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x199318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x19931c: 0x22023  negu        $a0, $v0
    ctx->pc = 0x19931cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x199320: 0x4810049  bgez        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x199320u;
    {
        const bool branch_taken_0x199320 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x199320) {
            ctx->pc = 0x199448u;
            goto label_199448;
        }
    }
    ctx->pc = 0x199328u;
label_199328:
    // 0x199328: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x199328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x19932c: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x199330: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x199330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x199334: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x199334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x199338: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19933c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x19933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x199340: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x199340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x199344: 0xa062004f  sb          $v0, 0x4F($v1)
    ctx->pc = 0x199344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x199348: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x199348u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x19934c: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x19934cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x199350: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x199354: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x199354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x199358: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x199358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19935c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x19935cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x199360: 0x9062004f  lbu         $v0, 0x4F($v1)
    ctx->pc = 0x199360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x199364: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x199368: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x199368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x19936c: 0x480ffee  bltz        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19936Cu;
    {
        const bool branch_taken_0x19936c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x199370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19936Cu;
        // 0x199370: 0xa062004f  sb          $v0, 0x4F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19936c) {
            ctx->pc = 0x199328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199328;
        }
    }
    ctx->pc = 0x199374u;
    // 0x199374: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x199374u;
    {
        const bool branch_taken_0x199374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199374) {
            ctx->pc = 0x199448u;
            goto label_199448;
        }
    }
    ctx->pc = 0x19937Cu;
    // 0x19937c: 0x0  nop
    ctx->pc = 0x19937cu;
    // NOP
label_199380:
    // 0x199380: 0x86840010  lh          $a0, 0x10($s4)
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x199384: 0x18800030  blez        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x199384u;
    {
        const bool branch_taken_0x199384 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x199384) {
            ctx->pc = 0x199448u;
            goto label_199448;
        }
    }
    ctx->pc = 0x19938Cu;
    // 0x19938c: 0x0  nop
    ctx->pc = 0x19938cu;
    // NOP
label_199390:
    // 0x199390: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x199390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x199394: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x199394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x199398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19939c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19939cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1993a0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1993a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1993a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1993a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1993a8: 0x90620047  lbu         $v0, 0x47($v1)
    ctx->pc = 0x1993a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 71)));
    // 0x1993ac: 0xa062004f  sb          $v0, 0x4F($v1)
    ctx->pc = 0x1993acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x1993b0: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x1993b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x1993b4: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x1993b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1993b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1993bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1993bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1993c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1993c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1993c4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1993c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1993c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1993c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1993cc: 0x9062004f  lbu         $v0, 0x4F($v1)
    ctx->pc = 0x1993ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x1993d0: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x1993d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x1993d4: 0x1c80ffee  bgtz        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1993D4u;
    {
        const bool branch_taken_0x1993d4 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x1993D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993D4u;
        // 0x1993d8: 0xa062004f  sb          $v0, 0x4F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1993d4) {
            ctx->pc = 0x199390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199390;
        }
    }
    ctx->pc = 0x1993DCu;
    // 0x1993dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1993DCu;
    {
        const bool branch_taken_0x1993dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993dc) {
            ctx->pc = 0x199448u;
            goto label_199448;
        }
    }
    ctx->pc = 0x1993E4u;
    // 0x1993e4: 0x0  nop
    ctx->pc = 0x1993e4u;
    // NOP
label_1993e8:
    // 0x1993e8: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x1993e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1993ec: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1993ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1993f0: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1993F0u;
    {
        const bool branch_taken_0x1993f0 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x1993f0) {
            ctx->pc = 0x199448u;
            goto label_199448;
        }
    }
    ctx->pc = 0x1993F8u;
label_1993f8:
    // 0x1993f8: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x1993f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x1993fc: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x1993fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x199400: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199404: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x199404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x199408: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x199408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x19940c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199410: 0x90620057  lbu         $v0, 0x57($v1)
    ctx->pc = 0x199410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 87)));
    // 0x199414: 0xa062004f  sb          $v0, 0x4F($v1)
    ctx->pc = 0x199414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x199418: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x19941c: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x19941cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x199420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x199424: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x199424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x199428: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x199428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19942c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x19942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x199430: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x199430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199434: 0x9062004f  lbu         $v0, 0x4F($v1)
    ctx->pc = 0x199434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x199438: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x199438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x19943c: 0x480ffee  bltz        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19943Cu;
    {
        const bool branch_taken_0x19943c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x199440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19943Cu;
        // 0x199440: 0xa062004f  sb          $v0, 0x4F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19943c) {
            ctx->pc = 0x1993F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1993f8;
        }
    }
    ctx->pc = 0x199444u;
    // 0x199444: 0x0  nop
    ctx->pc = 0x199444u;
    // NOP
label_199448:
    // 0x199448: 0xa680000c  sh          $zero, 0xC($s4)
    ctx->pc = 0x199448u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x19944c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199450: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x199450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x199454: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x199454u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x199458: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x199458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x19945c: 0x86820090  lh          $v0, 0x90($s4)
    ctx->pc = 0x19945cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x199460: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x199460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x199464: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x199464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x199468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19946c: 0xa044004f  sb          $a0, 0x4F($v0)
    ctx->pc = 0x19946cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x199470: 0x82820049  lb          $v0, 0x49($s4)
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
    // 0x199474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199474u;
    {
        const bool branch_taken_0x199474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199474u;
        // 0x199478: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199474) {
            ctx->pc = 0x199488u;
            goto label_199488;
        }
    }
    ctx->pc = 0x19947Cu;
    // 0x19947c: 0x64080009  daddiu      $t0, $zero, 0x9
    ctx->pc = 0x19947cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
    // 0x199480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199480u;
    {
        const bool branch_taken_0x199480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199480u;
        // 0x199484: 0x64020005  daddiu      $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199480) {
            ctx->pc = 0x199490u;
            goto label_199490;
        }
    }
    ctx->pc = 0x199488u;
label_199488:
    // 0x199488: 0x64080004  daddiu      $t0, $zero, 0x4
    ctx->pc = 0x199488u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x19948c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x19948cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_199490:
    // 0x199490: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x199490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199494: 0x28c10003  slti        $at, $a2, 0x3
    ctx->pc = 0x199494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x199498: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x199498u;
    {
        const bool branch_taken_0x199498 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199498u;
        // 0x19949c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199498) {
            ctx->pc = 0x1994F8u;
            goto label_1994f8;
        }
    }
    ctx->pc = 0x1994A0u;
    // 0x1994a0: 0x26870010  addiu       $a3, $s4, 0x10
    ctx->pc = 0x1994a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1994a4: 0x0  nop
    ctx->pc = 0x1994a4u;
    // NOP
label_1994a8:
    // 0x1994a8: 0x28c10003  slti        $at, $a2, 0x3
    ctx->pc = 0x1994a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1994ac: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1994ACu;
    {
        const bool branch_taken_0x1994ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1994B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994ACu;
        // 0x1994b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994ac) {
            ctx->pc = 0x1994E8u;
            goto label_1994e8;
        }
    }
    ctx->pc = 0x1994B4u;
    // 0x1994b4: 0x0  nop
    ctx->pc = 0x1994b4u;
    // NOP
label_1994b8:
    // 0x1994b8: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x1994b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1994bc: 0x9043004f  lbu         $v1, 0x4F($v0)
    ctx->pc = 0x1994bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x1994c0: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x1994c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1994c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1994c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1994C8u;
    {
        const bool branch_taken_0x1994c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1994CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994C8u;
        // 0x1994cc: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994c8) {
            ctx->pc = 0x1994D8u;
            goto label_1994d8;
        }
    }
    ctx->pc = 0x1994D0u;
    // 0x1994d0: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x1994d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1994d4: 0x0  nop
    ctx->pc = 0x1994d4u;
    // NOP
label_1994d8:
    // 0x1994d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1994d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1994dc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1994dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1994e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1994E0u;
    {
        const bool branch_taken_0x1994e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1994e0) {
            ctx->pc = 0x1994B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1994b8;
        }
    }
    ctx->pc = 0x1994E8u;
label_1994e8:
    // 0x1994e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1994e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1994ec: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1994ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1994f0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1994F0u;
    {
        const bool branch_taken_0x1994f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1994F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994F0u;
        // 0x1994f4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994f0) {
            ctx->pc = 0x1994A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1994a8;
        }
    }
    ctx->pc = 0x1994F8u;
label_1994f8:
    // 0x1994f8: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x1994f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1994fc: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x1994fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x199500: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x199500u;
    {
        const bool branch_taken_0x199500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199500u;
        // 0x199504: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199500) {
            ctx->pc = 0x199580u;
            goto label_199580;
        }
    }
    ctx->pc = 0x199508u;
    // 0x199508: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19950c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199510: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x199510u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x199514: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x199514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x199518: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x199518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x19951c: 0x3c022306  lui         $v0, 0x2306
    ctx->pc = 0x19951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8966 << 16));
    // 0x199520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199524: 0x3445090f  ori         $a1, $v0, 0x90F
    ctx->pc = 0x199524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2319);
    // 0x199528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19952c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19952cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199534: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199538: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x199538u;
    SET_GPR_U32(ctx, 31, 0x199540u);
    ctx->pc = 0x19953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199538u;
    // 0x19953c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x199538u, 0x199540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199540u;
label_199540:
    // 0x199540: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199544: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x199548: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x199548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19954c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19954cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x199550: 0x3c023506  lui         $v0, 0x3506
    ctx->pc = 0x199550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13574 << 16));
    // 0x199554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199558: 0x3445090f  ori         $a1, $v0, 0x90F
    ctx->pc = 0x199558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2319);
    // 0x19955c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19955cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199560: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199564: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199568: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19956c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19956Cu;
    SET_GPR_U32(ctx, 31, 0x199574u);
    ctx->pc = 0x199570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19956Cu;
    // 0x199570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19956Cu, 0x199574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199574u;
label_199574:
    // 0x199574: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x199574u;
    {
        const bool branch_taken_0x199574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199574) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x19957Cu;
    // 0x19957c: 0x0  nop
    ctx->pc = 0x19957cu;
    // NOP
label_199580:
    // 0x199580: 0x82820048  lb          $v0, 0x48($s4)
    ctx->pc = 0x199580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x199584: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x199584u;
    {
        const bool branch_taken_0x199584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199584u;
        // 0x199588: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199584) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x19958Cu;
    // 0x19958c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19958cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x199590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199594: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x199594u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x199598: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x199598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19959c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19959cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x1995a0: 0x3c022706  lui         $v0, 0x2706
    ctx->pc = 0x1995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9990 << 16));
    // 0x1995a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1995a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995a8: 0x3445090f  ori         $a1, $v0, 0x90F
    ctx->pc = 0x1995a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2319);
    // 0x1995ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1995acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1995b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1995b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1995b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1995bc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x1995BCu;
    SET_GPR_U32(ctx, 31, 0x1995C4u);
    ctx->pc = 0x1995C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995BCu;
    // 0x1995c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x1995BCu, 0x1995C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995C4u;
label_1995c4:
    // 0x1995c4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1995C4u;
    {
        const bool branch_taken_0x1995c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1995c4) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x1995CCu;
    // 0x1995cc: 0x0  nop
    ctx->pc = 0x1995ccu;
    // NOP
label_1995d0:
    // 0x1995d0: 0x8683000c  lh          $v1, 0xC($s4)
    ctx->pc = 0x1995d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1995d4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1995d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1995d8: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1995d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1995dc: 0x14200030  bnez        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1995DCu;
    {
        const bool branch_taken_0x1995dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1995E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995DCu;
        // 0x1995e0: 0xa682000c  sh          $v0, 0xC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995dc) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x1995E4u;
    // 0x1995e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1995e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1995e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1995e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1995ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1995f0: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x1995f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
    // 0x1995f4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1995f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x1995f8: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x1995f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1995fc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1995fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x199600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199608: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19960c: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x19960Cu;
    SET_GPR_U32(ctx, 31, 0x199614u);
    ctx->pc = 0x199610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19960Cu;
    // 0x199610: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x19960Cu, 0x199614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199614u;
label_199614:
    // 0x199614: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x199614u;
    {
        const bool branch_taken_0x199614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199614) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x19961Cu;
    // 0x19961c: 0x0  nop
    ctx->pc = 0x19961cu;
    // NOP
label_199620:
    // 0x199620: 0x8683000c  lh          $v1, 0xC($s4)
    ctx->pc = 0x199620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x199624: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x199624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199628: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x199628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x19962c: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x19962Cu;
    {
        const bool branch_taken_0x19962c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x199630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19962Cu;
        // 0x199630: 0xa682000c  sh          $v0, 0xC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19962c) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199634u;
    // 0x199634: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x199634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x199638: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19963c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x19963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x199640: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x199640u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x199644: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x199644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x199648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19964c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19964cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199650: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199654: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x199654u;
    SET_GPR_U32(ctx, 31, 0x19965Cu);
    ctx->pc = 0x199658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199654u;
    // 0x199658: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x199654u, 0x19965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19965Cu;
label_19965c:
    // 0x19965c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19965Cu;
    {
        const bool branch_taken_0x19965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19965c) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x199664u;
    // 0x199664: 0x0  nop
    ctx->pc = 0x199664u;
    // NOP
label_199668:
    // 0x199668: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19966c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x19966Cu;
    SET_GPR_U32(ctx, 31, 0x199674u);
    ctx->pc = 0x199670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19966Cu;
    // 0x199670: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x19966Cu, 0x199674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199674u;
label_199674:
    // 0x199674: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x199674u;
    {
        const bool branch_taken_0x199674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199674u;
        // 0x199678: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199674) {
            ctx->pc = 0x1996A0u;
            goto label_1996a0;
        }
    }
    ctx->pc = 0x19967Cu;
    // 0x19967c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x19967cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x199680: 0x8c240fe0  lw          $a0, 0xFE0($at)
    ctx->pc = 0x199680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x199684: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x199684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19968c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19968cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x199690: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x199690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x199694: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x199694u;
    {
        const bool branch_taken_0x199694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199694u;
        // 0x199698: 0xac230fe0  sw          $v1, 0xFE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199694) {
            ctx->pc = 0x199A50u;
            goto label_199a50;
        }
    }
    ctx->pc = 0x19969Cu;
    // 0x19969c: 0x0  nop
    ctx->pc = 0x19969cu;
    // NOP
label_1996a0:
    // 0x1996a0: 0x82820049  lb          $v0, 0x49($s4)
    ctx->pc = 0x1996a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
    // 0x1996a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1996A4u;
    {
        const bool branch_taken_0x1996a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996A4u;
        // 0x1996a8: 0x24120038  addiu       $s2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1996a4) {
            ctx->pc = 0x1996B8u;
            goto label_1996b8;
        }
    }
    ctx->pc = 0x1996ACu;
    // 0x1996ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1996ACu;
    {
        const bool branch_taken_0x1996ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1996B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996ACu;
        // 0x1996b0: 0x24110030  addiu       $s1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1996ac) {
            ctx->pc = 0x1996C0u;
            goto label_1996c0;
        }
    }
    ctx->pc = 0x1996B4u;
    // 0x1996b4: 0x0  nop
    ctx->pc = 0x1996b4u;
    // NOP
label_1996b8:
    // 0x1996b8: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x1996b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1996bc: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x1996bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1996c0:
    // 0x1996c0: 0x8282004d  lb          $v0, 0x4D($s4)
    ctx->pc = 0x1996c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 77)));
    // 0x1996c4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1996c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1996c8: 0x102000d5  beqz        $at, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1996C8u;
    {
        const bool branch_taken_0x1996c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1996CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996C8u;
        // 0x1996cc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1996c8) {
            ctx->pc = 0x199A20u;
            goto label_199a20;
        }
    }
    ctx->pc = 0x1996D0u;
    // 0x1996d0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1996d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996d4: 0x0  nop
    ctx->pc = 0x1996d4u;
    // NOP
label_1996d8:
    // 0x1996d8: 0x82820049  lb          $v0, 0x49($s4)
    ctx->pc = 0x1996d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
    // 0x1996dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1996DCu;
    {
        const bool branch_taken_0x1996dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996DCu;
        // 0x1996e0: 0x24130058  addiu       $s3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1996dc) {
            ctx->pc = 0x1996F0u;
            goto label_1996f0;
        }
    }
    ctx->pc = 0x1996E4u;
    // 0x1996e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1996E4u;
    {
        const bool branch_taken_0x1996e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1996e4) {
            ctx->pc = 0x1996F8u;
            goto label_1996f8;
        }
    }
    ctx->pc = 0x1996ECu;
    // 0x1996ec: 0x0  nop
    ctx->pc = 0x1996ecu;
    // NOP
label_1996f0:
    // 0x1996f0: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x1996f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1996f4: 0x0  nop
    ctx->pc = 0x1996f4u;
    // NOP
label_1996f8:
    // 0x1996f8: 0x8282004c  lb          $v0, 0x4C($s4)
    ctx->pc = 0x1996f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1996fc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1996fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199700: 0x102000c1  beqz        $at, . + 4 + (0xC1 << 2)
    ctx->pc = 0x199700u;
    {
        const bool branch_taken_0x199700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199700u;
        // 0x199704: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199700) {
            ctx->pc = 0x199A08u;
            goto label_199a08;
        }
    }
    ctx->pc = 0x199708u;
label_199708:
    // 0x199708: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x199708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x19970c: 0x9046004f  lbu         $a2, 0x4F($v0)
    ctx->pc = 0x19970cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x199710: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x199710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x199714: 0x10c200b6  beq         $a2, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x199714u;
    {
        const bool branch_taken_0x199714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x199714) {
            ctx->pc = 0x1999F0u;
            goto label_1999f0;
        }
    }
    ctx->pc = 0x19971Cu;
    // 0x19971c: 0x82820049  lb          $v0, 0x49($s4)
    ctx->pc = 0x19971cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 73)));
    // 0x199720: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199724: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x199724u;
    {
        const bool branch_taken_0x199724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199724u;
        // 0x199728: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199724) {
            ctx->pc = 0x199840u;
            goto label_199840;
        }
    }
    ctx->pc = 0x19972Cu;
    // 0x19972c: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x19972Cu;
    {
        const bool branch_taken_0x19972c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x199730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19972Cu;
        // 0x199730: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19972c) {
            ctx->pc = 0x199740u;
            goto label_199740;
        }
    }
    ctx->pc = 0x199734u;
    // 0x199734: 0x16c30002  bne         $s6, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x199734u;
    {
        const bool branch_taken_0x199734 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x199734) {
            ctx->pc = 0x199740u;
            goto label_199740;
        }
    }
    ctx->pc = 0x19973Cu;
    // 0x19973c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19973cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_199740:
    // 0x199740: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x199740u;
    {
        const bool branch_taken_0x199740 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x199744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199740u;
        // 0x199744: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199740) {
            ctx->pc = 0x199758u;
            goto label_199758;
        }
    }
    ctx->pc = 0x199748u;
    // 0x199748: 0x16c30003  bne         $s6, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199748u;
    {
        const bool branch_taken_0x199748 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x199748) {
            ctx->pc = 0x199758u;
            goto label_199758;
        }
    }
    ctx->pc = 0x199750u;
    // 0x199750: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x199750u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x199754: 0x0  nop
    ctx->pc = 0x199754u;
    // NOP
label_199758:
    // 0x199758: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x199758u;
    {
        const bool branch_taken_0x199758 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x19975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199758u;
        // 0x19975c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199758) {
            ctx->pc = 0x199770u;
            goto label_199770;
        }
    }
    ctx->pc = 0x199760u;
    // 0x199760: 0x16c30003  bne         $s6, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199760u;
    {
        const bool branch_taken_0x199760 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x199760) {
            ctx->pc = 0x199770u;
            goto label_199770;
        }
    }
    ctx->pc = 0x199768u;
    // 0x199768: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19976c: 0x0  nop
    ctx->pc = 0x19976cu;
    // NOP
label_199770:
    // 0x199770: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x199770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x199774: 0x16a30004  bne         $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199774u;
    {
        const bool branch_taken_0x199774 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x199778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199774u;
        // 0x199778: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199774) {
            ctx->pc = 0x199788u;
            goto label_199788;
        }
    }
    ctx->pc = 0x19977Cu;
    // 0x19977c: 0x16c30002  bne         $s6, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19977Cu;
    {
        const bool branch_taken_0x19977c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x19977c) {
            ctx->pc = 0x199788u;
            goto label_199788;
        }
    }
    ctx->pc = 0x199784u;
    // 0x199784: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x199784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_199788:
    // 0x199788: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x199788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19978c: 0x16a30004  bne         $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19978Cu;
    {
        const bool branch_taken_0x19978c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x199790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19978Cu;
        // 0x199790: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19978c) {
            ctx->pc = 0x1997A0u;
            goto label_1997a0;
        }
    }
    ctx->pc = 0x199794u;
    // 0x199794: 0x16c30002  bne         $s6, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x199794u;
    {
        const bool branch_taken_0x199794 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x199794) {
            ctx->pc = 0x1997A0u;
            goto label_1997a0;
        }
    }
    ctx->pc = 0x19979Cu;
    // 0x19979c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19979cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1997a0:
    // 0x1997a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1997a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1997a4: 0x16a30004  bne         $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1997A4u;
    {
        const bool branch_taken_0x1997a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x1997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997A4u;
        // 0x1997a8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997a4) {
            ctx->pc = 0x1997B8u;
            goto label_1997b8;
        }
    }
    ctx->pc = 0x1997ACu;
    // 0x1997ac: 0x16c30002  bne         $s6, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1997ACu;
    {
        const bool branch_taken_0x1997ac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1997ac) {
            ctx->pc = 0x1997B8u;
            goto label_1997b8;
        }
    }
    ctx->pc = 0x1997B4u;
    // 0x1997b4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1997b8:
    // 0x1997b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1997b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1997bc: 0x16c3000e  bne         $s6, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1997BCu;
    {
        const bool branch_taken_0x1997bc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x1997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997BCu;
        // 0x1997c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997bc) {
            ctx->pc = 0x1997F8u;
            goto label_1997f8;
        }
    }
    ctx->pc = 0x1997C4u;
    // 0x1997c4: 0x16a30002  bne         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1997C4u;
    {
        const bool branch_taken_0x1997c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x1997c4) {
            ctx->pc = 0x1997D0u;
            goto label_1997d0;
        }
    }
    ctx->pc = 0x1997CCu;
    // 0x1997cc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1997ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1997d0:
    // 0x1997d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1997d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1997d4: 0x16a30002  bne         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1997D4u;
    {
        const bool branch_taken_0x1997d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x1997d4) {
            ctx->pc = 0x1997E0u;
            goto label_1997e0;
        }
    }
    ctx->pc = 0x1997DCu;
    // 0x1997dc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1997dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1997e0:
    // 0x1997e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1997e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1997e4: 0x16a30010  bne         $s5, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1997E4u;
    {
        const bool branch_taken_0x1997e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x1997e4) {
            ctx->pc = 0x199828u;
            goto label_199828;
        }
    }
    ctx->pc = 0x1997ECu;
    // 0x1997ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1997ECu;
    {
        const bool branch_taken_0x1997ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997ECu;
        // 0x1997f0: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997ec) {
            ctx->pc = 0x199828u;
            goto label_199828;
        }
    }
    ctx->pc = 0x1997F4u;
    // 0x1997f4: 0x0  nop
    ctx->pc = 0x1997f4u;
    // NOP
label_1997f8:
    // 0x1997f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1997f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1997fc: 0x16a30002  bne         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1997FCu;
    {
        const bool branch_taken_0x1997fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x1997fc) {
            ctx->pc = 0x199808u;
            goto label_199808;
        }
    }
    ctx->pc = 0x199804u;
    // 0x199804: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x199804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_199808:
    // 0x199808: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19980c: 0x16a30002  bne         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19980Cu;
    {
        const bool branch_taken_0x19980c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x19980c) {
            ctx->pc = 0x199818u;
            goto label_199818;
        }
    }
    ctx->pc = 0x199814u;
    // 0x199814: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x199814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_199818:
    // 0x199818: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x199818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19981c: 0x16a30002  bne         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19981Cu;
    {
        const bool branch_taken_0x19981c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x19981c) {
            ctx->pc = 0x199828u;
            goto label_199828;
        }
    }
    ctx->pc = 0x199824u;
    // 0x199824: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x199824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_199828:
    // 0x199828: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x199828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19982c: 0x16a30034  bne         $s5, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x19982Cu;
    {
        const bool branch_taken_0x19982c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x19982c) {
            ctx->pc = 0x199900u;
            goto label_199900;
        }
    }
    ctx->pc = 0x199834u;
    // 0x199834: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x199834u;
    {
        const bool branch_taken_0x199834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199834u;
        // 0x199838: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199834) {
            ctx->pc = 0x199900u;
            goto label_199900;
        }
    }
    ctx->pc = 0x19983Cu;
    // 0x19983c: 0x0  nop
    ctx->pc = 0x19983cu;
    // NOP
label_199840:
    // 0x199840: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x199840u;
    {
        const bool branch_taken_0x199840 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x199844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199840u;
        // 0x199844: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199840) {
            ctx->pc = 0x199858u;
            goto label_199858;
        }
    }
    ctx->pc = 0x199848u;
    // 0x199848: 0x16c30003  bne         $s6, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199848u;
    {
        const bool branch_taken_0x199848 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x199848) {
            ctx->pc = 0x199858u;
            goto label_199858;
        }
    }
    ctx->pc = 0x199850u;
    // 0x199850: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x199850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x199854: 0x0  nop
    ctx->pc = 0x199854u;
    // NOP
label_199858:
    // 0x199858: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x199858u;
    {
        const bool branch_taken_0x199858 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x19985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199858u;
        // 0x19985c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199858) {
            ctx->pc = 0x199870u;
            goto label_199870;
        }
    }
    ctx->pc = 0x199860u;
    // 0x199860: 0x16c30003  bne         $s6, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199860u;
    {
        const bool branch_taken_0x199860 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x199860) {
            ctx->pc = 0x199870u;
            goto label_199870;
        }
    }
    ctx->pc = 0x199868u;
    // 0x199868: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x199868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19986c: 0x0  nop
    ctx->pc = 0x19986cu;
    // NOP
label_199870:
    // 0x199870: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x199870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x199874: 0x16a30004  bne         $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199874u;
    {
        const bool branch_taken_0x199874 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x199878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199874u;
        // 0x199878: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199874) {
            ctx->pc = 0x199888u;
            goto label_199888;
        }
    }
    ctx->pc = 0x19987Cu;
    // 0x19987c: 0x16c30002  bne         $s6, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19987Cu;
    {
        const bool branch_taken_0x19987c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x19987c) {
            ctx->pc = 0x199888u;
            goto label_199888;
        }
    }
    ctx->pc = 0x199884u;
    // 0x199884: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x199884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_199888:
    // 0x199888: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x199888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19988c: 0x16a30004  bne         $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19988Cu;
    {
        const bool branch_taken_0x19988c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x199890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19988Cu;
        // 0x199890: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19988c) {
            ctx->pc = 0x1998A0u;
            goto label_1998a0;
        }
    }
    ctx->pc = 0x199894u;
    // 0x199894: 0x16c30002  bne         $s6, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x199894u;
    {
        const bool branch_taken_0x199894 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x199894) {
            ctx->pc = 0x1998A0u;
            goto label_1998a0;
        }
    }
    ctx->pc = 0x19989Cu;
    // 0x19989c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19989cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1998a0:
    // 0x1998a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1998a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1998a4: 0x16c3000a  bne         $s6, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1998A4u;
    {
        const bool branch_taken_0x1998a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x1998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998A4u;
        // 0x1998a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998a4) {
            ctx->pc = 0x1998D0u;
            goto label_1998d0;
        }
    }
    ctx->pc = 0x1998ACu;
    // 0x1998ac: 0x16a30002  bne         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1998ACu;
    {
        const bool branch_taken_0x1998ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x1998B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998ACu;
        // 0x1998b0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998ac) {
            ctx->pc = 0x1998B8u;
            goto label_1998b8;
        }
    }
    ctx->pc = 0x1998B4u;
    // 0x1998b4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1998b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1998b8:
    // 0x1998b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1998b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1998bc: 0x16a3000c  bne         $s5, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1998BCu;
    {
        const bool branch_taken_0x1998bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x1998bc) {
            ctx->pc = 0x1998F0u;
            goto label_1998f0;
        }
    }
    ctx->pc = 0x1998C4u;
    // 0x1998c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1998C4u;
    {
        const bool branch_taken_0x1998c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1998C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998C4u;
        // 0x1998c8: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998c4) {
            ctx->pc = 0x1998F0u;
            goto label_1998f0;
        }
    }
    ctx->pc = 0x1998CCu;
    // 0x1998cc: 0x0  nop
    ctx->pc = 0x1998ccu;
    // NOP
label_1998d0:
    // 0x1998d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1998d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1998d4: 0x16a30002  bne         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1998D4u;
    {
        const bool branch_taken_0x1998d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x1998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998D4u;
        // 0x1998d8: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998d4) {
            ctx->pc = 0x1998E0u;
            goto label_1998e0;
        }
    }
    ctx->pc = 0x1998DCu;
    // 0x1998dc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1998dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1998e0:
    // 0x1998e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1998e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1998e4: 0x16a30002  bne         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1998E4u;
    {
        const bool branch_taken_0x1998e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x1998e4) {
            ctx->pc = 0x1998F0u;
            goto label_1998f0;
        }
    }
    ctx->pc = 0x1998ECu;
    // 0x1998ec: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1998ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1998f0:
    // 0x1998f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1998f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1998f4: 0x16a30002  bne         $s5, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1998F4u;
    {
        const bool branch_taken_0x1998f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x1998f4) {
            ctx->pc = 0x199900u;
            goto label_199900;
        }
    }
    ctx->pc = 0x1998FCu;
    // 0x1998fc: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1998fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_199900:
    // 0x199900: 0x8283004a  lb          $v1, 0x4A($s4)
    ctx->pc = 0x199900u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 74)));
    // 0x199904: 0x16a30010  bne         $s5, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x199904u;
    {
        const bool branch_taken_0x199904 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x199904) {
            ctx->pc = 0x199948u;
            goto label_199948;
        }
    }
    ctx->pc = 0x19990Cu;
    // 0x19990c: 0x8283004b  lb          $v1, 0x4B($s4)
    ctx->pc = 0x19990cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 75)));
    // 0x199910: 0x16c3000d  bne         $s6, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x199910u;
    {
        const bool branch_taken_0x199910 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x199910) {
            ctx->pc = 0x199948u;
            goto label_199948;
        }
    }
    ctx->pc = 0x199918u;
    // 0x199918: 0x30c2007f  andi        $v0, $a2, 0x7F
    ctx->pc = 0x199918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x19991c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x19991cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x199920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199924: 0x2446fffc  addiu       $a2, $v0, -0x4
    ctx->pc = 0x199924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x199928: 0x24a5df70  addiu       $a1, $a1, -0x2090
    ctx->pc = 0x199928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958960));
    // 0x19992c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19992cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199930: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x199930u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199934: 0xc067148  jal         func_19C520
    ctx->pc = 0x199934u;
    SET_GPR_U32(ctx, 31, 0x19993Cu);
    ctx->pc = 0x199938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199934u;
    // 0x199938: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C520u, 0x199934u, 0x19993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19993Cu;
label_19993c:
    // 0x19993c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x19993Cu;
    {
        const bool branch_taken_0x19993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19993c) {
            ctx->pc = 0x1999F0u;
            goto label_1999f0;
        }
    }
    ctx->pc = 0x199944u;
    // 0x199944: 0x0  nop
    ctx->pc = 0x199944u;
    // NOP
label_199948:
    // 0x199948: 0x2cc10081  sltiu       $at, $a2, 0x81
    ctx->pc = 0x199948u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x19994c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19994Cu;
    {
        const bool branch_taken_0x19994c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x199950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19994Cu;
        // 0x199950: 0x3c050041  lui         $a1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19994c) {
            ctx->pc = 0x199978u;
            goto label_199978;
        }
    }
    ctx->pc = 0x199954u;
    // 0x199954: 0x30c6007f  andi        $a2, $a2, 0x7F
    ctx->pc = 0x199954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
    // 0x199958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19995c: 0x24a5df70  addiu       $a1, $a1, -0x2090
    ctx->pc = 0x19995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958960));
    // 0x199960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199964: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x199964u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199968: 0xc067148  jal         func_19C520
    ctx->pc = 0x199968u;
    SET_GPR_U32(ctx, 31, 0x199970u);
    ctx->pc = 0x19996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199968u;
    // 0x19996c: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C520u, 0x199968u, 0x199970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199970u;
label_199970:
    // 0x199970: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x199970u;
    {
        const bool branch_taken_0x199970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199970) {
            ctx->pc = 0x1999F0u;
            goto label_1999f0;
        }
    }
    ctx->pc = 0x199978u;
label_199978:
    // 0x199978: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199978u;
    {
        const bool branch_taken_0x199978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199978) {
            ctx->pc = 0x199988u;
            goto label_199988;
        }
    }
    ctx->pc = 0x199980u;
    // 0x199980: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x199984: 0x0  nop
    ctx->pc = 0x199984u;
    // NOP
label_199988:
    // 0x199988: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x199988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x19998c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19998Cu;
    {
        const bool branch_taken_0x19998c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19998c) {
            ctx->pc = 0x1999C8u;
            goto label_1999c8;
        }
    }
    ctx->pc = 0x199994u;
    // 0x199994: 0x86880094  lh          $t0, 0x94($s4)
    ctx->pc = 0x199994u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x199998: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x199998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x19999c: 0x86890096  lh          $t1, 0x96($s4)
    ctx->pc = 0x19999cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 150)));
    // 0x1999a0: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x1999a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1999a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1999a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999a8: 0x24a5de00  addiu       $a1, $a1, -0x2200
    ctx->pc = 0x1999a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958592));
    // 0x1999ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1999acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999b0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1999b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999b4: 0xc067148  jal         func_19C520
    ctx->pc = 0x1999B4u;
    SET_GPR_U32(ctx, 31, 0x1999BCu);
    ctx->pc = 0x1999B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999B4u;
    // 0x1999b8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C520u, 0x1999B4u, 0x1999BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999BCu;
label_1999bc:
    // 0x1999bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1999BCu;
    {
        const bool branch_taken_0x1999bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1999bc) {
            ctx->pc = 0x1999F0u;
            goto label_1999f0;
        }
    }
    ctx->pc = 0x1999C4u;
    // 0x1999c4: 0x0  nop
    ctx->pc = 0x1999c4u;
    // NOP
label_1999c8:
    // 0x1999c8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1999c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1999cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1999ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999d0: 0x24a5de00  addiu       $a1, $a1, -0x2200
    ctx->pc = 0x1999d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958592));
    // 0x1999d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1999d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1999d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1999dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999e0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1999e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999e4: 0xc067148  jal         func_19C520
    ctx->pc = 0x1999E4u;
    SET_GPR_U32(ctx, 31, 0x1999ECu);
    ctx->pc = 0x1999E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1999E4u;
    // 0x1999e8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C520u, 0x1999E4u, 0x1999ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999ECu;
label_1999ec:
    // 0x1999ec: 0x0  nop
    ctx->pc = 0x1999ecu;
    // NOP
label_1999f0:
    // 0x1999f0: 0x8282004c  lb          $v0, 0x4C($s4)
    ctx->pc = 0x1999f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1999f4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1999f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1999f8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1999f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1999fc: 0x1440ff42  bnez        $v0, . + 4 + (-0xBE << 2)
    ctx->pc = 0x1999FCu;
    {
        const bool branch_taken_0x1999fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999FCu;
        // 0x199a00: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999fc) {
            ctx->pc = 0x199708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199708;
        }
    }
    ctx->pc = 0x199A04u;
    // 0x199a04: 0x0  nop
    ctx->pc = 0x199a04u;
    // NOP
label_199a08:
    // 0x199a08: 0x8282004d  lb          $v0, 0x4D($s4)
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 77)));
    // 0x199a0c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x199a0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x199a10: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x199a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x199a14: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x199a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199a18: 0x1440ff2f  bnez        $v0, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x199A18u;
    {
        const bool branch_taken_0x199a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A18u;
        // 0x199a1c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a18) {
            ctx->pc = 0x1996D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1996d8;
        }
    }
    ctx->pc = 0x199A20u;
label_199a20:
    // 0x199a20: 0x82860048  lb          $a2, 0x48($s4)
    ctx->pc = 0x199a20u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x199a24: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x199a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x199a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a2c: 0x24a5e030  addiu       $a1, $a1, -0x1FD0
    ctx->pc = 0x199a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959152));
    // 0x199a30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199a34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199a38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a3c: 0x240a01b8  addiu       $t2, $zero, 0x1B8
    ctx->pc = 0x199a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x199a40: 0xc067148  jal         func_19C520
    ctx->pc = 0x199A40u;
    SET_GPR_U32(ctx, 31, 0x199A48u);
    ctx->pc = 0x199A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A40u;
    // 0x199a44: 0x240b001e  addiu       $t3, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C520u, 0x199A40u, 0x199A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A48u;
label_199a48:
    // 0x199a48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x199a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a4c: 0x0  nop
    ctx->pc = 0x199a4cu;
    // NOP
label_199a50:
    // 0x199a50: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x199a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199a54: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x199a54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199a58: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x199a58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199a5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x199a5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199a60: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x199a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199a64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x199a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199a68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x199a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199a6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199a70: 0x3e00008  jr          $ra
    ctx->pc = 0x199A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A70u;
        // 0x199a74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199A78u;
}

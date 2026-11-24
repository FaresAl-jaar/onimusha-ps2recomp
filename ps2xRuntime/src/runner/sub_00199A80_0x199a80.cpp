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

// Function: sub_00199A80
// Address: 0x199a80 - 0x19bb10
void sub_00199A80_0x199a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199A80_0x199a80");
#endif

    switch (ctx->pc) {
        case 0x199b68u: goto label_199b68;
        case 0x199b78u: goto label_199b78;
        case 0x199b94u: goto label_199b94;
        case 0x199c58u: goto label_199c58;
        case 0x199c98u: goto label_199c98;
        case 0x199ca8u: goto label_199ca8;
        case 0x199da0u: goto label_199da0;
        case 0x199e04u: goto label_199e04;
        case 0x199e64u: goto label_199e64;
        case 0x199eccu: goto label_199ecc;
        case 0x199f40u: goto label_199f40;
        case 0x199f78u: goto label_199f78;
        case 0x199fe8u: goto label_199fe8;
        case 0x19a058u: goto label_19a058;
        case 0x19a150u: goto label_19a150;
        case 0x19a1b0u: goto label_19a1b0;
        case 0x19a21cu: goto label_19a21c;
        case 0x19a330u: goto label_19a330;
        case 0x19a378u: goto label_19a378;
        case 0x19a40cu: goto label_19a40c;
        case 0x19a42cu: goto label_19a42c;
        case 0x19a44cu: goto label_19a44c;
        case 0x19a49cu: goto label_19a49c;
        case 0x19a4d0u: goto label_19a4d0;
        case 0x19a518u: goto label_19a518;
        case 0x19a558u: goto label_19a558;
        case 0x19a640u: goto label_19a640;
        case 0x19a788u: goto label_19a788;
        case 0x19ac40u: goto label_19ac40;
        case 0x19ac70u: goto label_19ac70;
        case 0x19ac88u: goto label_19ac88;
        case 0x19ad10u: goto label_19ad10;
        case 0x19ad68u: goto label_19ad68;
        case 0x19adc0u: goto label_19adc0;
        case 0x19ae18u: goto label_19ae18;
        case 0x19ae70u: goto label_19ae70;
        case 0x19aee4u: goto label_19aee4;
        case 0x19aef8u: goto label_19aef8;
        case 0x19af08u: goto label_19af08;
        case 0x19af54u: goto label_19af54;
        case 0x19afd8u: goto label_19afd8;
        case 0x19b00cu: goto label_19b00c;
        case 0x19b0a0u: goto label_19b0a0;
        case 0x19b0e0u: goto label_19b0e0;
        case 0x19b114u: goto label_19b114;
        case 0x19b160u: goto label_19b160;
        case 0x19b194u: goto label_19b194;
        case 0x19b1d8u: goto label_19b1d8;
        case 0x19b20cu: goto label_19b20c;
        case 0x19b240u: goto label_19b240;
        case 0x19b2d4u: goto label_19b2d4;
        case 0x19b324u: goto label_19b324;
        case 0x19b374u: goto label_19b374;
        case 0x19b3c8u: goto label_19b3c8;
        case 0x19b4a0u: goto label_19b4a0;
        case 0x19b4fcu: goto label_19b4fc;
        case 0x19b55cu: goto label_19b55c;
        case 0x19b5c4u: goto label_19b5c4;
        case 0x19b624u: goto label_19b624;
        case 0x19b68cu: goto label_19b68c;
        case 0x19b6f4u: goto label_19b6f4;
        case 0x19b758u: goto label_19b758;
        case 0x19b7b8u: goto label_19b7b8;
        case 0x19b814u: goto label_19b814;
        case 0x19b874u: goto label_19b874;
        case 0x19b8d8u: goto label_19b8d8;
        case 0x19b94cu: goto label_19b94c;
        case 0x19b99cu: goto label_19b99c;
        case 0x19b9ecu: goto label_19b9ec;
        case 0x19ba40u: goto label_19ba40;
        case 0x19ba98u: goto label_19ba98;
        case 0x19badcu: goto label_19badc;
        default: break;
    }

    ctx->pc = 0x199a80u;

    // 0x199a80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x199a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x199a84: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x199a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x199a88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x199a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x199a8c: 0x2442e6b0  addiu       $v0, $v0, -0x1950
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
    // 0x199a90: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x199a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x199a94: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x199a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x199a98: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x199a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x199a9c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x199a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x199aa0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x199aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x199aa4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x199aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x199aa8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x199aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x199aac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x199aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x199ab0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x199ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x199ab4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x199ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x199ab8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ac0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x199ac0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40E6B0u));
    // 0x199ac4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x199ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x199ac8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x199ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x199acc: 0x8c27ea28  lw          $a3, -0x15D8($at)
    ctx->pc = 0x199accu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x199ad0: 0x90850005  lbu         $a1, 0x5($a0)
    ctx->pc = 0x199ad0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x199ad4: 0x8c9e0044  lw          $fp, 0x44($a0)
    ctx->pc = 0x199ad4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x199ad8: 0x90880001  lbu         $t0, 0x1($a0)
    ctx->pc = 0x199ad8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x199adc: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x199adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x199ae0: 0x8c26ea24  lw          $a2, -0x15DC($at)
    ctx->pc = 0x199ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x199ae4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x199ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x199ae8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x199ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x199aec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x199aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x199af0: 0x11020261  beq         $t0, $v0, . + 4 + (0x261 << 2)
    ctx->pc = 0x199AF0u;
    {
        const bool branch_taken_0x199af0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x199AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AF0u;
        // 0x199af4: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199af0) {
            ctx->pc = 0x19A478u;
            goto label_19a478;
        }
    }
    ctx->pc = 0x199AF8u;
    // 0x199af8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x199af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x199afc: 0x11020250  beq         $t0, $v0, . + 4 + (0x250 << 2)
    ctx->pc = 0x199AFCu;
    {
        const bool branch_taken_0x199afc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x199B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AFCu;
        // 0x199b00: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199afc) {
            ctx->pc = 0x19A440u;
            goto label_19a440;
        }
    }
    ctx->pc = 0x199B04u;
    // 0x199b04: 0x11050230  beq         $t0, $a1, . + 4 + (0x230 << 2)
    ctx->pc = 0x199B04u;
    {
        const bool branch_taken_0x199b04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x199B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B04u;
        // 0x199b08: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b04) {
            ctx->pc = 0x19A3C8u;
            goto label_19a3c8;
        }
    }
    ctx->pc = 0x199B0Cu;
    // 0x199b0c: 0x11040220  beq         $t0, $a0, . + 4 + (0x220 << 2)
    ctx->pc = 0x199B0Cu;
    {
        const bool branch_taken_0x199b0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x199B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B0Cu;
        // 0x199b10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b0c) {
            ctx->pc = 0x19A390u;
            goto label_19a390;
        }
    }
    ctx->pc = 0x199B14u;
    // 0x199b14: 0x11030208  beq         $t0, $v1, . + 4 + (0x208 << 2)
    ctx->pc = 0x199B14u;
    {
        const bool branch_taken_0x199b14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x199B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B14u;
        // 0x199b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b14) {
            ctx->pc = 0x19A338u;
            goto label_19a338;
        }
    }
    ctx->pc = 0x199B1Cu;
    // 0x199b1c: 0x11020088  beq         $t0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x199B1Cu;
    {
        const bool branch_taken_0x199b1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x199b1c) {
            ctx->pc = 0x199D40u;
            goto label_199d40;
        }
    }
    ctx->pc = 0x199B24u;
    // 0x199b24: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199B24u;
    {
        const bool branch_taken_0x199b24 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b24) {
            ctx->pc = 0x199B38u;
            goto label_199b38;
        }
    }
    ctx->pc = 0x199B2Cu;
    // 0x199b2c: 0x10000260  b           . + 4 + (0x260 << 2)
    ctx->pc = 0x199B2Cu;
    {
        const bool branch_taken_0x199b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b2c) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199B34u;
    // 0x199b34: 0x0  nop
    ctx->pc = 0x199b34u;
    // NOP
label_199b38:
    // 0x199b38: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x199b3c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x199b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x199b40: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x199b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x199b44: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x199b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x199b48: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x199b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x199b4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199b58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199b5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b60: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x199B60u;
    SET_GPR_U32(ctx, 31, 0x199B68u);
    ctx->pc = 0x199B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B60u;
    // 0x199b64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x199B60u, 0x199B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B68u;
label_199b68:
    // 0x199b68: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x199b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x199b6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199b70: 0xc056e04  jal         func_15B810
    ctx->pc = 0x199B70u;
    SET_GPR_U32(ctx, 31, 0x199B78u);
    ctx->pc = 0x199B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B70u;
    // 0x199b74: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x199B70u, 0x199B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B78u;
label_199b78:
    // 0x199b78: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x199b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x199b7c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x199b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x199b80: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x199b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x199b84: 0xa2220049  sb          $v0, 0x49($s1)
    ctx->pc = 0x199b84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 2));
    // 0x199b88: 0x82250049  lb          $a1, 0x49($s1)
    ctx->pc = 0x199b88u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x199b8c: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x199B8Cu;
    SET_GPR_U32(ctx, 31, 0x199B94u);
    ctx->pc = 0x199B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B8Cu;
    // 0x199b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x199B8Cu, 0x199B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B94u;
label_199b94:
    // 0x199b94: 0xa220004a  sb          $zero, 0x4A($s1)
    ctx->pc = 0x199b94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x199b98: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x199b98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x199b9c: 0xa220004b  sb          $zero, 0x4B($s1)
    ctx->pc = 0x199b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 0));
    // 0x199ba0: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x199ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x199ba4: 0x822a0049  lb          $t2, 0x49($s1)
    ctx->pc = 0x199ba4u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x199ba8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x199ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x199bac: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x199bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x199bb0: 0x2508e6c0  addiu       $t0, $t0, -0x1940
    ctx->pc = 0x199bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960832));
    // 0x199bb4: 0x24e7e6c1  addiu       $a3, $a3, -0x193F
    ctx->pc = 0x199bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960833));
    // 0x199bb8: 0x24c6e6c2  addiu       $a2, $a2, -0x193E
    ctx->pc = 0x199bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960834));
    // 0x199bbc: 0x24a5e6c4  addiu       $a1, $a1, -0x193C
    ctx->pc = 0x199bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960836));
    // 0x199bc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x199bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199bc8: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x199bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x199bcc: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x199bccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x199bd0: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x199bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x199bd4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x199bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x199bd8: 0x81080000  lb          $t0, 0x0($t0)
    ctx->pc = 0x199bd8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x199bdc: 0xa228004c  sb          $t0, 0x4C($s1)
    ctx->pc = 0x199bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 8));
    // 0x199be0: 0x82290049  lb          $t1, 0x49($s1)
    ctx->pc = 0x199be0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x199be4: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x199be4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x199be8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x199be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x199bec: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x199becu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x199bf0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x199bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x199bf4: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x199bf4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x199bf8: 0xa227004d  sb          $a3, 0x4D($s1)
    ctx->pc = 0x199bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 77), (uint8_t)GPR_U32(ctx, 7));
    // 0x199bfc: 0x82280049  lb          $t0, 0x49($s1)
    ctx->pc = 0x199bfcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x199c00: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x199c00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x199c04: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x199c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x199c08: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x199c08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x199c0c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x199c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x199c10: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x199c10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x199c14: 0xa6260090  sh          $a2, 0x90($s1)
    ctx->pc = 0x199c14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x199c18: 0x82270049  lb          $a3, 0x49($s1)
    ctx->pc = 0x199c18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x199c1c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x199c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x199c20: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x199c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x199c24: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x199c24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x199c28: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x199c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x199c2c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x199c2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x199c30: 0xa6250092  sh          $a1, 0x92($s1)
    ctx->pc = 0x199c30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 5));
    // 0x199c34: 0x83c50001  lb          $a1, 0x1($fp)
    ctx->pc = 0x199c34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
    // 0x199c38: 0xa2250048  sb          $a1, 0x48($s1)
    ctx->pc = 0x199c38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x199c3c: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x199c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
    // 0x199c40: 0xa22300c6  sb          $v1, 0xC6($s1)
    ctx->pc = 0x199c40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 198), (uint8_t)GPR_U32(ctx, 3));
    // 0x199c44: 0xa22300c7  sb          $v1, 0xC7($s1)
    ctx->pc = 0x199c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 3));
    // 0x199c48: 0x93c30003  lbu         $v1, 0x3($fp)
    ctx->pc = 0x199c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x199c4c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x199c4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199c50: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x199C50u;
    {
        const bool branch_taken_0x199c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C50u;
        // 0x199c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c50) {
            ctx->pc = 0x199C80u;
            goto label_199c80;
        }
    }
    ctx->pc = 0x199C58u;
label_199c58:
    // 0x199c58: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x199c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x199c5c: 0xa06000e9  sb          $zero, 0xE9($v1)
    ctx->pc = 0x199c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 233), (uint8_t)GPR_U32(ctx, 0));
    // 0x199c60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199c64: 0xa06000ed  sb          $zero, 0xED($v1)
    ctx->pc = 0x199c64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 237), (uint8_t)GPR_U32(ctx, 0));
    // 0x199c68: 0xa06000d9  sb          $zero, 0xD9($v1)
    ctx->pc = 0x199c68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x199c6c: 0x93c30003  lbu         $v1, 0x3($fp)
    ctx->pc = 0x199c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x199c70: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x199c70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199c74: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x199C74u;
    {
        const bool branch_taken_0x199c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199c74) {
            ctx->pc = 0x199C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199c58;
        }
    }
    ctx->pc = 0x199C7Cu;
    // 0x199c7c: 0x0  nop
    ctx->pc = 0x199c7cu;
    // NOP
label_199c80:
    // 0x199c80: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x199c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x199c84: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x199c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199c88: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x199C88u;
    {
        const bool branch_taken_0x199c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C88u;
        // 0x199c8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c88) {
            ctx->pc = 0x199D28u;
            goto label_199d28;
        }
    }
    ctx->pc = 0x199C90u;
    // 0x199c90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x199c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199c94: 0x0  nop
    ctx->pc = 0x199c94u;
    // NOP
label_199c98:
    // 0x199c98: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x199c98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x199c9c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x199c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x199ca0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x199CA0u;
    {
        const bool branch_taken_0x199ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CA0u;
        // 0x199ca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ca0) {
            ctx->pc = 0x199D10u;
            goto label_199d10;
        }
    }
    ctx->pc = 0x199CA8u;
label_199ca8:
    // 0x199ca8: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x199ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x199cac: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x199cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x199cb0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x199cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x199cb4: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x199cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x199cb8: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x199cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x199cbc: 0x80840008  lb          $a0, 0x8($a0)
    ctx->pc = 0x199cbcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x199cc0: 0xa0a4004f  sb          $a0, 0x4F($a1)
    ctx->pc = 0x199cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x199cc4: 0xa0a000a6  sb          $zero, 0xA6($a1)
    ctx->pc = 0x199cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x199cc8: 0xa0a000b6  sb          $zero, 0xB6($a1)
    ctx->pc = 0x199cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 182), (uint8_t)GPR_U32(ctx, 0));
    // 0x199ccc: 0xa0a000d9  sb          $zero, 0xD9($a1)
    ctx->pc = 0x199cccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x199cd0: 0xa0a000c9  sb          $zero, 0xC9($a1)
    ctx->pc = 0x199cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 201), (uint8_t)GPR_U32(ctx, 0));
    // 0x199cd4: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x199cd4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x199cd8: 0x70e42018  mult1       $a0, $a3, $a0
    ctx->pc = 0x199cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x199cdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x199cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x199ce0: 0x8042004f  lb          $v0, 0x4F($v0)
    ctx->pc = 0x199ce0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x199ce4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199CE4u;
    {
        const bool branch_taken_0x199ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199ce4) {
            ctx->pc = 0x199CF8u;
            goto label_199cf8;
        }
    }
    ctx->pc = 0x199CECu;
    // 0x199cec: 0xa6260094  sh          $a2, 0x94($s1)
    ctx->pc = 0x199cecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 6));
    // 0x199cf0: 0xa6270096  sh          $a3, 0x96($s1)
    ctx->pc = 0x199cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 7));
    // 0x199cf4: 0x0  nop
    ctx->pc = 0x199cf4u;
    // NOP
label_199cf8:
    // 0x199cf8: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x199cf8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x199cfc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199d00: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x199d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x199d04: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x199D04u;
    {
        const bool branch_taken_0x199d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199d04) {
            ctx->pc = 0x199CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199ca8;
        }
    }
    ctx->pc = 0x199D0Cu;
    // 0x199d0c: 0x0  nop
    ctx->pc = 0x199d0cu;
    // NOP
label_199d10:
    // 0x199d10: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x199d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x199d14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x199d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x199d18: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x199d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199d1c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x199D1Cu;
    {
        const bool branch_taken_0x199d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199d1c) {
            ctx->pc = 0x199C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199c98;
        }
    }
    ctx->pc = 0x199D24u;
    // 0x199d24: 0x0  nop
    ctx->pc = 0x199d24u;
    // NOP
label_199d28:
    // 0x199d28: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x199d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x199d2c: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x199d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x199d30: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x199d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x199d34: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x199D34u;
    {
        const bool branch_taken_0x199d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D34u;
        // 0x199d38: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d34) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199D3Cu;
    // 0x199d3c: 0x0  nop
    ctx->pc = 0x199d3cu;
    // NOP
label_199d40:
    // 0x199d40: 0x8e28009c  lw          $t0, 0x9C($s1)
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x199d44: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x199d44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x199d48: 0x15000103  bnez        $t0, . + 4 + (0x103 << 2)
    ctx->pc = 0x199D48u;
    {
        const bool branch_taken_0x199d48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D48u;
        // 0x199d4c: 0x3c080008  lui         $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d48) {
            ctx->pc = 0x19A158u;
            goto label_19a158;
        }
    }
    ctx->pc = 0x199D50u;
    // 0x199d50: 0x35080080  ori         $t0, $t0, 0x80
    ctx->pc = 0x199d50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x199d54: 0xe84024  and         $t0, $a3, $t0
    ctx->pc = 0x199d54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x199d58: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x199D58u;
    {
        const bool branch_taken_0x199d58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d58) {
            ctx->pc = 0x199DA8u;
            goto label_199da8;
        }
    }
    ctx->pc = 0x199D60u;
    // 0x199d60: 0x8222004a  lb          $v0, 0x4A($s1)
    ctx->pc = 0x199d60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x199d64: 0x184001d2  blez        $v0, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x199D64u;
    {
        const bool branch_taken_0x199d64 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x199d64) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199D6Cu;
    // 0x199d6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x199d70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x199d74: 0xa222004a  sb          $v0, 0x4A($s1)
    ctx->pc = 0x199d74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x199d78: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x199d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x199d7c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x199d80: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x199d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x199d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199d90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199d94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d98: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x199D98u;
    SET_GPR_U32(ctx, 31, 0x199DA0u);
    ctx->pc = 0x199D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D98u;
    // 0x199d9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x199D98u, 0x199DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199DA0u;
label_199da0:
    // 0x199da0: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x199DA0u;
    {
        const bool branch_taken_0x199da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199da0) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199DA8u;
label_199da8:
    // 0x199da8: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x199dac: 0x35080020  ori         $t0, $t0, 0x20
    ctx->pc = 0x199dacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x199db0: 0xe84024  and         $t0, $a3, $t0
    ctx->pc = 0x199db0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x199db4: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x199DB4u;
    {
        const bool branch_taken_0x199db4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x199db4) {
            ctx->pc = 0x199E10u;
            goto label_199e10;
        }
    }
    ctx->pc = 0x199DBCu;
    // 0x199dbc: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x199dbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x199dc0: 0x8224004a  lb          $a0, 0x4A($s1)
    ctx->pc = 0x199dc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x199dc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x199dc8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x199dc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199dcc: 0x102001b8  beqz        $at, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x199DCCu;
    {
        const bool branch_taken_0x199dcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DCCu;
        // 0x199dd0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dcc) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199DD4u;
    // 0x199dd4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x199dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x199dd8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x199ddc: 0xa222004a  sb          $v0, 0x4A($s1)
    ctx->pc = 0x199ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x199de0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x199de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x199de4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x199de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x199de8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199dec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199df0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199df0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199df4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199df8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199df8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199dfc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x199DFCu;
    SET_GPR_U32(ctx, 31, 0x199E04u);
    ctx->pc = 0x199E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199DFCu;
    // 0x199e00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x199DFCu, 0x199E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E04u;
label_199e04:
    // 0x199e04: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x199E04u;
    {
        const bool branch_taken_0x199e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e04) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199E0Cu;
    // 0x199e0c: 0x0  nop
    ctx->pc = 0x199e0cu;
    // NOP
label_199e10:
    // 0x199e10: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x199e10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x199e14: 0x35080010  ori         $t0, $t0, 0x10
    ctx->pc = 0x199e14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16);
    // 0x199e18: 0xe84024  and         $t0, $a3, $t0
    ctx->pc = 0x199e18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x199e1c: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x199E1Cu;
    {
        const bool branch_taken_0x199e1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e1c) {
            ctx->pc = 0x199E70u;
            goto label_199e70;
        }
    }
    ctx->pc = 0x199E24u;
    // 0x199e24: 0x8222004b  lb          $v0, 0x4B($s1)
    ctx->pc = 0x199e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x199e28: 0x184001a1  blez        $v0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x199E28u;
    {
        const bool branch_taken_0x199e28 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x199e28) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199E30u;
    // 0x199e30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x199e34: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x199e38: 0xa222004b  sb          $v0, 0x4B($s1)
    ctx->pc = 0x199e38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 2));
    // 0x199e3c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x199e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x199e40: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x199e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x199e44: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x199e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x199e48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199e50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199e54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199e58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e5c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x199E5Cu;
    SET_GPR_U32(ctx, 31, 0x199E64u);
    ctx->pc = 0x199E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E5Cu;
    // 0x199e60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x199E5Cu, 0x199E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E64u;
label_199e64:
    // 0x199e64: 0x10000192  b           . + 4 + (0x192 << 2)
    ctx->pc = 0x199E64u;
    {
        const bool branch_taken_0x199e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e64) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199E6Cu;
    // 0x199e6c: 0x0  nop
    ctx->pc = 0x199e6cu;
    // NOP
label_199e70:
    // 0x199e70: 0x3c080004  lui         $t0, 0x4
    ctx->pc = 0x199e70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4 << 16));
    // 0x199e74: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x199e74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x199e78: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x199e78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x199e7c: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x199E7Cu;
    {
        const bool branch_taken_0x199e7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e7c) {
            ctx->pc = 0x199ED8u;
            goto label_199ed8;
        }
    }
    ctx->pc = 0x199E84u;
    // 0x199e84: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x199e84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x199e88: 0x8224004b  lb          $a0, 0x4B($s1)
    ctx->pc = 0x199e88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x199e8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x199e90: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x199e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199e94: 0x10200186  beqz        $at, . + 4 + (0x186 << 2)
    ctx->pc = 0x199E94u;
    {
        const bool branch_taken_0x199e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E94u;
        // 0x199e98: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e94) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199E9Cu;
    // 0x199e9c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x199e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x199ea0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x199ea4: 0xa222004b  sb          $v0, 0x4B($s1)
    ctx->pc = 0x199ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 2));
    // 0x199ea8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x199ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x199eac: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x199eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x199eb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199eb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x199eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199eb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ec0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199ec0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ec4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x199EC4u;
    SET_GPR_U32(ctx, 31, 0x199ECCu);
    ctx->pc = 0x199EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EC4u;
    // 0x199ec8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x199EC4u, 0x199ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199ECCu;
label_199ecc:
    // 0x199ecc: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x199ECCu;
    {
        const bool branch_taken_0x199ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ecc) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199ED4u;
    // 0x199ed4: 0x0  nop
    ctx->pc = 0x199ed4u;
    // NOP
label_199ed8:
    // 0x199ed8: 0x30c74000  andi        $a3, $a2, 0x4000
    ctx->pc = 0x199ed8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x199edc: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x199EDCu;
    {
        const bool branch_taken_0x199edc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x199edc) {
            ctx->pc = 0x199EF0u;
            goto label_199ef0;
        }
    }
    ctx->pc = 0x199EE4u;
    // 0x199ee4: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x199ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x199ee8: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x199EE8u;
    {
        const bool branch_taken_0x199ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EE8u;
        // 0x199eec: 0xa2250001  sb          $a1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ee8) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199EF0u;
label_199ef0:
    // 0x199ef0: 0x30c52000  andi        $a1, $a2, 0x2000
    ctx->pc = 0x199ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x199ef4: 0x10a0016e  beqz        $a1, . + 4 + (0x16E << 2)
    ctx->pc = 0x199EF4u;
    {
        const bool branch_taken_0x199ef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ef4) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x199EFCu;
    // 0x199efc: 0x86250096  lh          $a1, 0x96($s1)
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x199f00: 0x8227004b  lb          $a3, 0x4B($s1)
    ctx->pc = 0x199f00u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x199f04: 0x14e5002e  bne         $a3, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x199F04u;
    {
        const bool branch_taken_0x199f04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x199f04) {
            ctx->pc = 0x199FC0u;
            goto label_199fc0;
        }
    }
    ctx->pc = 0x199F0Cu;
    // 0x199f0c: 0x86260094  lh          $a2, 0x94($s1)
    ctx->pc = 0x199f0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x199f10: 0x8225004a  lb          $a1, 0x4A($s1)
    ctx->pc = 0x199f10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x199f14: 0x10a60074  beq         $a1, $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x199F14u;
    {
        const bool branch_taken_0x199f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x199f14) {
            ctx->pc = 0x19A0E8u;
            goto label_19a0e8;
        }
    }
    ctx->pc = 0x199F1Cu;
    // 0x199f1c: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x199f1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x199f20: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x199f20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x199f24: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x199f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x199f28: 0xc44021  addu        $t0, $a2, $a0
    ctx->pc = 0x199f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x199f2c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x199F2Cu;
    {
        const bool branch_taken_0x199f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F2Cu;
        // 0x199f30: 0xa43821  addu        $a3, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f2c) {
            ctx->pc = 0x199F68u;
            goto label_199f68;
        }
    }
    ctx->pc = 0x199F34u;
    // 0x199f34: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x199f34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x199f38: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x199F38u;
    {
        const bool branch_taken_0x199f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f38) {
            ctx->pc = 0x199F98u;
            goto label_199f98;
        }
    }
    ctx->pc = 0x199F40u;
label_199f40:
    // 0x199f40: 0x2282021  addu        $a0, $s1, $t0
    ctx->pc = 0x199f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x199f44: 0x8083004e  lb          $v1, 0x4E($a0)
    ctx->pc = 0x199f44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x199f48: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x199f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x199f4c: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x199f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x199f50: 0xa083004f  sb          $v1, 0x4F($a0)
    ctx->pc = 0x199f50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x199f54: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199F54u;
    {
        const bool branch_taken_0x199f54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F54u;
        // 0x199f58: 0xa08200c9  sb          $v0, 0xC9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 201), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f54) {
            ctx->pc = 0x199F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199f40;
        }
    }
    ctx->pc = 0x199F5Cu;
    // 0x199f5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x199F5Cu;
    {
        const bool branch_taken_0x199f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f5c) {
            ctx->pc = 0x199F98u;
            goto label_199f98;
        }
    }
    ctx->pc = 0x199F64u;
    // 0x199f64: 0x0  nop
    ctx->pc = 0x199f64u;
    // NOP
label_199f68:
    // 0x199f68: 0x107082a  slt         $at, $t0, $a3
    ctx->pc = 0x199f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x199f6c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x199F6Cu;
    {
        const bool branch_taken_0x199f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199f6c) {
            ctx->pc = 0x199F98u;
            goto label_199f98;
        }
    }
    ctx->pc = 0x199F74u;
    // 0x199f74: 0x0  nop
    ctx->pc = 0x199f74u;
    // NOP
label_199f78:
    // 0x199f78: 0x2282821  addu        $a1, $s1, $t0
    ctx->pc = 0x199f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x199f7c: 0x80a40050  lb          $a0, 0x50($a1)
    ctx->pc = 0x199f7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x199f80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x199f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x199f84: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x199f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x199f88: 0xa0a4004f  sb          $a0, 0x4F($a1)
    ctx->pc = 0x199f88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x199f8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199F8Cu;
    {
        const bool branch_taken_0x199f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F8Cu;
        // 0x199f90: 0xa0a300c9  sb          $v1, 0xC9($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 201), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f8c) {
            ctx->pc = 0x199F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199f78;
        }
    }
    ctx->pc = 0x199F94u;
    // 0x199f94: 0x0  nop
    ctx->pc = 0x199f94u;
    // NOP
label_199f98:
    // 0x199f98: 0x8224004a  lb          $a0, 0x4A($s1)
    ctx->pc = 0x199f98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x199f9c: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x199fa0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x199fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199fa4: 0xa6240094  sh          $a0, 0x94($s1)
    ctx->pc = 0x199fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 4));
    // 0x199fa8: 0xa043004f  sb          $v1, 0x4F($v0)
    ctx->pc = 0x199fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x199fac: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x199facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x199fb0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x199fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x199fb4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x199FB4u;
    {
        const bool branch_taken_0x199fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FB4u;
        // 0x199fb8: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199fb4) {
            ctx->pc = 0x19A0E8u;
            goto label_19a0e8;
        }
    }
    ctx->pc = 0x199FBCu;
    // 0x199fbc: 0x0  nop
    ctx->pc = 0x199fbcu;
    // NOP
label_199fc0:
    // 0x199fc0: 0x8223004a  lb          $v1, 0x4A($s1)
    ctx->pc = 0x199fc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x199fc4: 0x86220094  lh          $v0, 0x94($s1)
    ctx->pc = 0x199fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x199fc8: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x199FC8u;
    {
        const bool branch_taken_0x199fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FC8u;
        // 0x199fcc: 0xe5082a  slt         $at, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199fc8) {
            ctx->pc = 0x19A0E8u;
            goto label_19a0e8;
        }
    }
    ctx->pc = 0x199FD0u;
    // 0x199fd0: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x199FD0u;
    {
        const bool branch_taken_0x199fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199fd0) {
            ctx->pc = 0x19A048u;
            goto label_19a048;
        }
    }
    ctx->pc = 0x199FD8u;
    // 0x199fd8: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x199fd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x199fdc: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x199FDCu;
    {
        const bool branch_taken_0x199fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x199FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199FDCu;
        // 0x199fe0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199fdc) {
            ctx->pc = 0x19A0B0u;
            goto label_19a0b0;
        }
    }
    ctx->pc = 0x199FE4u;
    // 0x199fe4: 0x0  nop
    ctx->pc = 0x199fe4u;
    // NOP
label_199fe8:
    // 0x199fe8: 0x8223004a  lb          $v1, 0x4A($s1)
    ctx->pc = 0x199fe8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x199fec: 0x8226004c  lb          $a2, 0x4C($s1)
    ctx->pc = 0x199fecu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x199ff0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x199ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x199ff4: 0x2233821  addu        $a3, $s1, $v1
    ctx->pc = 0x199ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x199ff8: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x199ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x199ffc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x199ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x19a000: 0x70a61018  mult1       $v0, $a1, $a2
    ctx->pc = 0x19a000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a004: 0x8063004f  lb          $v1, 0x4F($v1)
    ctx->pc = 0x19a004u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19a008: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x19a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x19a00c: 0xa043004f  sb          $v1, 0x4F($v0)
    ctx->pc = 0x19a00cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a010: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19a010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a014: 0x8223004a  lb          $v1, 0x4A($s1)
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x19a018: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x19a018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a01c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19a020: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19a024: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x19a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x19a028: 0xa04400c9  sb          $a0, 0xC9($v0)
    ctx->pc = 0x19a028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 201), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a02c: 0x8227004b  lb          $a3, 0x4B($s1)
    ctx->pc = 0x19a02cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x19a030: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x19a030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x19a034: 0x1420ffec  bnez        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19A034u;
    {
        const bool branch_taken_0x19a034 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a034) {
            ctx->pc = 0x199FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199fe8;
        }
    }
    ctx->pc = 0x19A03Cu;
    // 0x19a03c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19A03Cu;
    {
        const bool branch_taken_0x19a03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a03c) {
            ctx->pc = 0x19A0B0u;
            goto label_19a0b0;
        }
    }
    ctx->pc = 0x19A044u;
    // 0x19a044: 0x0  nop
    ctx->pc = 0x19a044u;
    // NOP
label_19a048:
    // 0x19a048: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x19a048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x19a04c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x19A04Cu;
    {
        const bool branch_taken_0x19a04c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a04c) {
            ctx->pc = 0x19A0B0u;
            goto label_19a0b0;
        }
    }
    ctx->pc = 0x19A054u;
    // 0x19a054: 0x0  nop
    ctx->pc = 0x19a054u;
    // NOP
label_19a058:
    // 0x19a058: 0x8223004a  lb          $v1, 0x4A($s1)
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x19a05c: 0x8226004c  lb          $a2, 0x4C($s1)
    ctx->pc = 0x19a05cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a060: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x19a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19a064: 0x2233821  addu        $a3, $s1, $v1
    ctx->pc = 0x19a064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19a068: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x19a068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19a06c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x19a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x19a070: 0x70a61018  mult1       $v0, $a1, $a2
    ctx->pc = 0x19a070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a074: 0x8063004f  lb          $v1, 0x4F($v1)
    ctx->pc = 0x19a074u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19a078: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x19a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x19a07c: 0xa043004f  sb          $v1, 0x4F($v0)
    ctx->pc = 0x19a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a080: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19a080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a084: 0x8223004a  lb          $v1, 0x4A($s1)
    ctx->pc = 0x19a084u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x19a088: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x19a088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a08c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19a090: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19a090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19a094: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19a098: 0xa04400c9  sb          $a0, 0xC9($v0)
    ctx->pc = 0x19a098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 201), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a09c: 0x8227004b  lb          $a3, 0x4B($s1)
    ctx->pc = 0x19a09cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x19a0a0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x19a0a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x19a0a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19A0A4u;
    {
        const bool branch_taken_0x19a0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a0a4) {
            ctx->pc = 0x19A058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a058;
        }
    }
    ctx->pc = 0x19A0ACu;
    // 0x19a0ac: 0x0  nop
    ctx->pc = 0x19a0acu;
    // NOP
label_19a0b0:
    // 0x19a0b0: 0x7163c  dsll32      $v0, $a3, 24
    ctx->pc = 0x19a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 24));
    // 0x19a0b4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19a0b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19a0b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x19a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a0bc: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x19a0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x19a0c0: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x19a0c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x19a0c4: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19a0c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a0c8: 0x86240094  lh          $a0, 0x94($s1)
    ctx->pc = 0x19a0c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x19a0cc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19a0ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a0d0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x19a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x19a0d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19a0d8: 0xa045004f  sb          $a1, 0x4F($v0)
    ctx->pc = 0x19a0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 5));
    // 0x19a0dc: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x19a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19a0e0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19a0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19a0e4: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x19a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_19a0e8:
    // 0x19a0e8: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x19a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19a0ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a0f0: 0x104000ef  beqz        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x19A0F0u;
    {
        const bool branch_taken_0x19a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0F0u;
        // 0x19a0f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0f0) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A0F8u;
    // 0x19a0f8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19a0fc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x19a0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a100: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x19a100u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19a104: 0x822d0048  lb          $t5, 0x48($s1)
    ctx->pc = 0x19a104u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x19a108: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x19a108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x19a10c: 0x34456424  ori         $a1, $v0, 0x6424
    ctx->pc = 0x19a10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25636);
    // 0x19a110: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a114: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19a114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x19a118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a11c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a11cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a124: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19a124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a128: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19a128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a12c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19a12cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a130: 0x25a2ffff  addiu       $v0, $t5, -0x1
    ctx->pc = 0x19a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x19a134: 0xa2220048  sb          $v0, 0x48($s1)
    ctx->pc = 0x19a134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a138: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x19a138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19a13c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19a140: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x19a140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x19a144: 0xa62c000c  sh          $t4, 0xC($s1)
    ctx->pc = 0x19a144u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 12));
    // 0x19a148: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19A148u;
    SET_GPR_U32(ctx, 31, 0x19A150u);
    ctx->pc = 0x19A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A148u;
    // 0x19a14c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19A148u, 0x19A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A150u;
label_19a150:
    // 0x19a150: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x19A150u;
    {
        const bool branch_taken_0x19a150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a150) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A158u;
label_19a158:
    // 0x19a158: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x19a158u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19a15c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19a160: 0x10c40041  beq         $a2, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x19A160u;
    {
        const bool branch_taken_0x19a160 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x19a160) {
            ctx->pc = 0x19A268u;
            goto label_19a268;
        }
    }
    ctx->pc = 0x19A168u;
    // 0x19a168: 0x10c30031  beq         $a2, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x19A168u;
    {
        const bool branch_taken_0x19a168 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a168) {
            ctx->pc = 0x19A230u;
            goto label_19a230;
        }
    }
    ctx->pc = 0x19A170u;
    // 0x19a170: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A170u;
    {
        const bool branch_taken_0x19a170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x19a170) {
            ctx->pc = 0x19A188u;
            goto label_19a188;
        }
    }
    ctx->pc = 0x19A178u;
    // 0x19a178: 0x10c000cd  beqz        $a2, . + 4 + (0xCD << 2)
    ctx->pc = 0x19A178u;
    {
        const bool branch_taken_0x19a178 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a178) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A180u;
    // 0x19a180: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x19A180u;
    {
        const bool branch_taken_0x19a180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a180) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A188u;
label_19a188:
    // 0x19a188: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x19a188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19a18c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x19a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a190: 0x146000c7  bnez        $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x19A190u;
    {
        const bool branch_taken_0x19a190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A190u;
        // 0x19a194: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a190) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A198u;
    // 0x19a198: 0x8223004d  lb          $v1, 0x4D($s1)
    ctx->pc = 0x19a198u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19a19c: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19a19cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a1a0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19a1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a1a4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19a1a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19a1a8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x19A1A8u;
    {
        const bool branch_taken_0x19a1a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1A8u;
        // 0x19a1ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1a8) {
            ctx->pc = 0x19A1D8u;
            goto label_19a1d8;
        }
    }
    ctx->pc = 0x19A1B0u;
label_19a1b0:
    // 0x19a1b0: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a1b4: 0xa04000c9  sb          $zero, 0xC9($v0)
    ctx->pc = 0x19a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 201), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a1b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a1bc: 0x8223004d  lb          $v1, 0x4D($s1)
    ctx->pc = 0x19a1bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19a1c0: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19a1c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a1c4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19a1c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a1c8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x19a1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19a1cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19A1CCu;
    {
        const bool branch_taken_0x19a1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a1cc) {
            ctx->pc = 0x19A1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a1b0;
        }
    }
    ctx->pc = 0x19A1D4u;
    // 0x19a1d4: 0x0  nop
    ctx->pc = 0x19a1d4u;
    // NOP
label_19a1d8:
    // 0x19a1d8: 0x8e2c009c  lw          $t4, 0x9C($s1)
    ctx->pc = 0x19a1d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19a1dc: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x19a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x19a1e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19a1e4: 0x34456424  ori         $a1, $v0, 0x6424
    ctx->pc = 0x19a1e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25636);
    // 0x19a1e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a1ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x19a1f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a1f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a1fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19a1fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a200: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19a200u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a204: 0x35820002  ori         $v0, $t4, 0x2
    ctx->pc = 0x19a204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x19a208: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19a208u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a20c: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x19a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x19a210: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x19a210u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a214: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19A214u;
    SET_GPR_U32(ctx, 31, 0x19A21Cu);
    ctx->pc = 0x19A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A214u;
    // 0x19a218: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19A214u, 0x19A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A21Cu;
label_19a21c:
    // 0x19a21c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x19a21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19a220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a224: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x19A224u;
    {
        const bool branch_taken_0x19a224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A224u;
        // 0x19a228: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a224) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A22Cu;
    // 0x19a22c: 0x0  nop
    ctx->pc = 0x19a22cu;
    // NOP
label_19a230:
    // 0x19a230: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x19a230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19a234: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19a234u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a238: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A238u;
    {
        const bool branch_taken_0x19a238 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a238) {
            ctx->pc = 0x19A250u;
            goto label_19a250;
        }
    }
    ctx->pc = 0x19A240u;
    // 0x19a240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19a244: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x19A244u;
    {
        const bool branch_taken_0x19a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A244u;
        // 0x19a248: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a244) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A24Cu;
    // 0x19a24c: 0x0  nop
    ctx->pc = 0x19a24cu;
    // NOP
label_19a250:
    // 0x19a250: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x19a250u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a254: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x19a254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19a258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a25c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x19A25Cu;
    {
        const bool branch_taken_0x19a25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A25Cu;
        // 0x19a260: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a25c) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A264u;
    // 0x19a264: 0x0  nop
    ctx->pc = 0x19a264u;
    // NOP
label_19a268:
    // 0x19a268: 0x8624000c  lh          $a0, 0xC($s1)
    ctx->pc = 0x19a268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19a26c: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x19a26cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a270: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A270u;
    {
        const bool branch_taken_0x19a270 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a270) {
            ctx->pc = 0x19A288u;
            goto label_19a288;
        }
    }
    ctx->pc = 0x19A278u;
    // 0x19a278: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x19a278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19a27c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x19A27Cu;
    {
        const bool branch_taken_0x19a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A27Cu;
        // 0x19a280: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a27c) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A284u;
    // 0x19a284: 0x0  nop
    ctx->pc = 0x19a284u;
    // NOP
label_19a288:
    // 0x19a288: 0x922600c7  lbu         $a2, 0xC7($s1)
    ctx->pc = 0x19a288u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19a28c: 0x922400c8  lbu         $a0, 0xC8($s1)
    ctx->pc = 0x19a28cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x19a290: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x19a290u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19a294: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A294u;
    {
        const bool branch_taken_0x19a294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a294) {
            ctx->pc = 0x19A2B8u;
            goto label_19a2b8;
        }
    }
    ctx->pc = 0x19A29Cu;
    // 0x19a29c: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x19a29cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a2a0: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x19a2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a2a4: 0x922200c7  lbu         $v0, 0xC7($s1)
    ctx->pc = 0x19a2a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19a2a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a2ac: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x19A2ACu;
    {
        const bool branch_taken_0x19a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2ACu;
        // 0x19a2b0: 0xa22200c7  sb          $v0, 0xC7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2ac) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A2B4u;
    // 0x19a2b4: 0x0  nop
    ctx->pc = 0x19a2b4u;
    // NOP
label_19a2b8:
    // 0x19a2b8: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x19a2b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x19a2bc: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19A2BCu;
    {
        const bool branch_taken_0x19a2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19a2bc) {
            ctx->pc = 0x19A308u;
            goto label_19a308;
        }
    }
    ctx->pc = 0x19A2C4u;
    // 0x19a2c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A2C4u;
    {
        const bool branch_taken_0x19a2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2c4) {
            ctx->pc = 0x19A2D8u;
            goto label_19a2d8;
        }
    }
    ctx->pc = 0x19A2CCu;
    // 0x19a2cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19A2CCu;
    {
        const bool branch_taken_0x19a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2cc) {
            ctx->pc = 0x19A318u;
            goto label_19a318;
        }
    }
    ctx->pc = 0x19A2D4u;
    // 0x19a2d4: 0x0  nop
    ctx->pc = 0x19a2d4u;
    // NOP
label_19a2d8:
    // 0x19a2d8: 0x82220048  lb          $v0, 0x48($s1)
    ctx->pc = 0x19a2d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x19a2dc: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A2DCu;
    {
        const bool branch_taken_0x19a2dc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x19a2dc) {
            ctx->pc = 0x19A2F0u;
            goto label_19a2f0;
        }
    }
    ctx->pc = 0x19A2E4u;
    // 0x19a2e4: 0xa2250001  sb          $a1, 0x1($s1)
    ctx->pc = 0x19a2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x19a2e8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x19a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19a2ec: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x19a2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_19a2f0:
    // 0x19a2f0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x19a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a2f4: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x19a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19a2f8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19a2fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19a300: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19A300u;
    {
        const bool branch_taken_0x19a300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A300u;
        // 0x19a304: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a300) {
            ctx->pc = 0x19A318u;
            goto label_19a318;
        }
    }
    ctx->pc = 0x19A308u;
label_19a308:
    // 0x19a308: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x19a308u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a30c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x19a30cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a310: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19a310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x19a314: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x19a314u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_19a318:
    // 0x19a318: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19a318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19a31c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x19a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x19a320: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19a320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x19a324: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x19a324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19a328: 0xc05ea18  jal         func_17A860
    ctx->pc = 0x19A328u;
    SET_GPR_U32(ctx, 31, 0x19A330u);
    ctx->pc = 0x19A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A328u;
    // 0x19a32c: 0x34456424  ori         $a1, $v0, 0x6424 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25636);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x19A328u, 0x19A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A330u;
label_19a330:
    // 0x19a330: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x19A330u;
    {
        const bool branch_taken_0x19a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a330) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A338u;
label_19a338:
    // 0x19a338: 0x8624000c  lh          $a0, 0xC($s1)
    ctx->pc = 0x19a338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19a33c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x19a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19a340: 0x1480005b  bnez        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x19A340u;
    {
        const bool branch_taken_0x19a340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A340u;
        // 0x19a344: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a340) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A348u;
    // 0x19a348: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19a348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19a34c: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x19a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
    // 0x19a350: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x19a350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x19a354: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x19a358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a35c: 0x34456424  ori         $a1, $v0, 0x6424
    ctx->pc = 0x19a35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25636);
    // 0x19a360: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a364: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a368: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19a368u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a36c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19a36cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a370: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19A370u;
    SET_GPR_U32(ctx, 31, 0x19A378u);
    ctx->pc = 0x19A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A370u;
    // 0x19a374: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19A370u, 0x19A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A378u;
label_19a378:
    // 0x19a378: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19a378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a37c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x19a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19a380: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x19a380u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a384: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x19A384u;
    {
        const bool branch_taken_0x19a384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A384u;
        // 0x19a388: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a384) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A38Cu;
    // 0x19a38c: 0x0  nop
    ctx->pc = 0x19a38cu;
    // NOP
label_19a390:
    // 0x19a390: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x19a390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19a394: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x19a394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a398: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x19A398u;
    {
        const bool branch_taken_0x19a398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A398u;
        // 0x19a39c: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a398) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A3A0u;
    // 0x19a3a0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x19a3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x19a3a4: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x19a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x19a3a8: 0x8c240fe0  lw          $a0, 0xFE0($at)
    ctx->pc = 0x19a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x810FE0u));
    // 0x19a3ac: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x19a3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19a3b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a3b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19a3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19a3b8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x19a3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x19a3bc: 0xac230fe0  sw          $v1, 0xFE0($at)
    ctx->pc = 0x19a3bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x810FE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x810FE0u, _value); } while (0);
    // 0x19a3c0: 0x100005c7  b           . + 4 + (0x5C7 << 2)
    ctx->pc = 0x19A3C0u;
    {
        const bool branch_taken_0x19a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3C0u;
        // 0x19a3c4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3c0) {
            ctx->pc = 0x19BAE0u;
            goto label_19bae0;
        }
    }
    ctx->pc = 0x19A3C8u;
label_19a3c8:
    // 0x19a3c8: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x19a3c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19a3cc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x19a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19a3d0: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x19A3D0u;
    {
        const bool branch_taken_0x19a3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3D0u;
        // 0x19a3d4: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3d0) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A3D8u;
    // 0x19a3d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a3dc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19a3e0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x19a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19a3e4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x19a3e8: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x19a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x19a3ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3f0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x19a3f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x19a3f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19a3fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a400: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19a400u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a404: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19A404u;
    SET_GPR_U32(ctx, 31, 0x19A40Cu);
    ctx->pc = 0x19A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A404u;
    // 0x19a408: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19A404u, 0x19A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A40Cu;
label_19a40c:
    // 0x19a40c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19a410: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x19a410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x19a414: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x19a414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x19a418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19a418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a41c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a420: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a424: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x19A424u;
    SET_GPR_U32(ctx, 31, 0x19A42Cu);
    ctx->pc = 0x19A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A424u;
    // 0x19a428: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x19A424u, 0x19A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A42Cu;
label_19a42c:
    // 0x19a42c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x19a42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x19a430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a434: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19A434u;
    {
        const bool branch_taken_0x19a434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A434u;
        // 0x19a438: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a434) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A43Cu;
    // 0x19a43c: 0x0  nop
    ctx->pc = 0x19a43cu;
    // NOP
label_19a440:
    // 0x19a440: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19a440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19a444: 0xc063d48  jal         func_18F520
    ctx->pc = 0x19A444u;
    SET_GPR_U32(ctx, 31, 0x19A44Cu);
    ctx->pc = 0x19A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A444u;
    // 0x19a448: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x19A444u, 0x19A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A44Cu;
label_19a44c:
    // 0x19a44c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19A44Cu;
    {
        const bool branch_taken_0x19a44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A44Cu;
        // 0x19a450: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a44c) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A454u;
    // 0x19a454: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x19a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x19a458: 0x8c240fe0  lw          $a0, 0xFE0($at)
    ctx->pc = 0x19a458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x19a45c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x19a45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19a460: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a464: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19a464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19a468: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x19a468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x19a46c: 0x1000059c  b           . + 4 + (0x59C << 2)
    ctx->pc = 0x19A46Cu;
    {
        const bool branch_taken_0x19a46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A46Cu;
        // 0x19a470: 0xac230fe0  sw          $v1, 0xFE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a46c) {
            ctx->pc = 0x19BAE0u;
            goto label_19bae0;
        }
    }
    ctx->pc = 0x19A474u;
    // 0x19a474: 0x0  nop
    ctx->pc = 0x19a474u;
    // NOP
label_19a478:
    // 0x19a478: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x19a478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19a47c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A47Cu;
    {
        const bool branch_taken_0x19a47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a47c) {
            ctx->pc = 0x19A490u;
            goto label_19a490;
        }
    }
    ctx->pc = 0x19A484u;
    // 0x19a484: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19a488: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19A488u;
    {
        const bool branch_taken_0x19a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A488u;
        // 0x19a48c: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a488) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A490u;
label_19a490:
    // 0x19a490: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19a490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19a494: 0xc063d48  jal         func_18F520
    ctx->pc = 0x19A494u;
    SET_GPR_U32(ctx, 31, 0x19A49Cu);
    ctx->pc = 0x19A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A494u;
    // 0x19a498: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x19A494u, 0x19A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A49Cu;
label_19a49c:
    // 0x19a49c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A49Cu;
    {
        const bool branch_taken_0x19a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a49c) {
            ctx->pc = 0x19A4B0u;
            goto label_19a4b0;
        }
    }
    ctx->pc = 0x19A4A4u;
    // 0x19a4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a4a8: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x19a4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a4ac: 0x0  nop
    ctx->pc = 0x19a4acu;
    // NOP
label_19a4b0:
    // 0x19a4b0: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x19a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19a4b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19a4b8: 0x104001e5  beqz        $v0, . + 4 + (0x1E5 << 2)
    ctx->pc = 0x19A4B8u;
    {
        const bool branch_taken_0x19a4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4B8u;
        // 0x19a4bc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4b8) {
            ctx->pc = 0x19AC50u;
            goto label_19ac50;
        }
    }
    ctx->pc = 0x19A4C0u;
    // 0x19a4c0: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x19a4c0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x19a4c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4c8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x19a4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4cc: 0x0  nop
    ctx->pc = 0x19a4ccu;
    // NOP
label_19a4d0:
    // 0x19a4d0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a4d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x19a4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a4d8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x19a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19a4dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19a4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a4e0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x19a4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19a4e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19a4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a4e8: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x19a4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a4ec: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x19a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a4f0: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x19a4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a4f4: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x19a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a4f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19A4F8u;
    {
        const bool branch_taken_0x19a4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4F8u;
        // 0x19a4fc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4f8) {
            ctx->pc = 0x19A4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a4d0;
        }
    }
    ctx->pc = 0x19A500u;
    // 0x19a500: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19a500u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a504: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x19a504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19a508: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19a508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a50c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19a50cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19a510: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x19A510u;
    {
        const bool branch_taken_0x19a510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A510u;
        // 0x19a514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a510) {
            ctx->pc = 0x19A548u;
            goto label_19a548;
        }
    }
    ctx->pc = 0x19A518u;
label_19a518:
    // 0x19a518: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x19a518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a51c: 0x906200a6  lbu         $v0, 0xA6($v1)
    ctx->pc = 0x19a51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 166)));
    // 0x19a520: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a524: 0xa06200b6  sb          $v0, 0xB6($v1)
    ctx->pc = 0x19a524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 182), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a528: 0xa06000a6  sb          $zero, 0xA6($v1)
    ctx->pc = 0x19a528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a52c: 0xa06000d9  sb          $zero, 0xD9($v1)
    ctx->pc = 0x19a52cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a530: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19a530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a534: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x19a534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19a538: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19a538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a53c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x19a53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19a540: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19A540u;
    {
        const bool branch_taken_0x19a540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a540) {
            ctx->pc = 0x19A518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a518;
        }
    }
    ctx->pc = 0x19A548u;
label_19a548:
    // 0x19a548: 0x93c20003  lbu         $v0, 0x3($fp)
    ctx->pc = 0x19a548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x19a54c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19a54cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19a550: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x19A550u;
    {
        const bool branch_taken_0x19a550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A550u;
        // 0x19a554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a550) {
            ctx->pc = 0x19A580u;
            goto label_19a580;
        }
    }
    ctx->pc = 0x19A558u;
label_19a558:
    // 0x19a558: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x19a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a55c: 0x906200e9  lbu         $v0, 0xE9($v1)
    ctx->pc = 0x19a55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 233)));
    // 0x19a560: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a564: 0xa06200ed  sb          $v0, 0xED($v1)
    ctx->pc = 0x19a564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 237), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a568: 0xa06000e9  sb          $zero, 0xE9($v1)
    ctx->pc = 0x19a568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 233), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a56c: 0x93c20003  lbu         $v0, 0x3($fp)
    ctx->pc = 0x19a56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x19a570: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x19a570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19a574: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19A574u;
    {
        const bool branch_taken_0x19a574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a574) {
            ctx->pc = 0x19A558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a558;
        }
    }
    ctx->pc = 0x19A57Cu;
    // 0x19a57c: 0x0  nop
    ctx->pc = 0x19a57cu;
    // NOP
label_19a580:
    // 0x19a580: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19a584: 0xa22200c7  sb          $v0, 0xC7($s1)
    ctx->pc = 0x19a584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a58c: 0xa22400c8  sb          $a0, 0xC8($s1)
    ctx->pc = 0x19a58cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 200), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a590: 0x93c30002  lbu         $v1, 0x2($fp)
    ctx->pc = 0x19a590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x19a594: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19a594u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a598: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19a598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a59c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x19a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19a5a0: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19a5a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19a5a4: 0x18400182  blez        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x19A5A4u;
    {
        const bool branch_taken_0x19a5a4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x19a5a4) {
            ctx->pc = 0x19ABB0u;
            goto label_19abb0;
        }
    }
    ctx->pc = 0x19A5ACu;
    // 0x19a5ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19a5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19a5b0: 0x1040017f  beqz        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x19A5B0u;
    {
        const bool branch_taken_0x19a5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5b0) {
            ctx->pc = 0x19ABB0u;
            goto label_19abb0;
        }
    }
    ctx->pc = 0x19A5B8u;
    // 0x19a5b8: 0x906200c9  lbu         $v0, 0xC9($v1)
    ctx->pc = 0x19a5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 201)));
    // 0x19a5bc: 0x1440017c  bnez        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x19A5BCu;
    {
        const bool branch_taken_0x19a5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a5bc) {
            ctx->pc = 0x19ABB0u;
            goto label_19abb0;
        }
    }
    ctx->pc = 0x19A5C4u;
    // 0x19a5c4: 0x906200b6  lbu         $v0, 0xB6($v1)
    ctx->pc = 0x19a5c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 182)));
    // 0x19a5c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A5C8u;
    {
        const bool branch_taken_0x19a5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a5c8) {
            ctx->pc = 0x19A5F8u;
            goto label_19a5f8;
        }
    }
    ctx->pc = 0x19A5D0u;
    // 0x19a5d0: 0xa22400c7  sb          $a0, 0xC7($s1)
    ctx->pc = 0x19a5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a5d4: 0xa22400c8  sb          $a0, 0xC8($s1)
    ctx->pc = 0x19a5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 200), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a5d8: 0x93c30002  lbu         $v1, 0x2($fp)
    ctx->pc = 0x19a5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x19a5dc: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19a5dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a5e0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19a5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19a5e4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x19a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19a5e8: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19a5e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19a5ec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x19a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x19a5f0: 0xa06200d9  sb          $v0, 0xD9($v1)
    ctx->pc = 0x19a5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 217), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a5f4: 0x0  nop
    ctx->pc = 0x19a5f4u;
    // NOP
label_19a5f8:
    // 0x19a5f8: 0x93c60002  lbu         $a2, 0x2($fp)
    ctx->pc = 0x19a5f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x19a5fc: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19a5fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a600: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x19a600u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x19a604: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x19a604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19a608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a60c: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x19a60cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19a610: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x19a610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x19a614: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x19a614u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a618: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a61c: 0xc41818  mult        $v1, $a2, $a0
    ctx->pc = 0x19a61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19a620: 0xa3a300b0  sb          $v1, 0xB0($sp)
    ctx->pc = 0x19a620u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a624: 0x93c40002  lbu         $a0, 0x2($fp)
    ctx->pc = 0x19a624u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x19a628: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19a628u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a62c: 0x70831818  mult1       $v1, $a0, $v1
    ctx->pc = 0x19a62cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19a630: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19a630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19a634: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x19a634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x19a638: 0x1020015f  beqz        $at, . + 4 + (0x15F << 2)
    ctx->pc = 0x19A638u;
    {
        const bool branch_taken_0x19a638 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A638u;
        // 0x19a63c: 0xa06200a6  sb          $v0, 0xA6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 166), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a638) {
            ctx->pc = 0x19ABB8u;
            goto label_19abb8;
        }
    }
    ctx->pc = 0x19A640u;
label_19a640:
    // 0x19a640: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x19a640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x19a644: 0x15030004  bne         $t0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A644u;
    {
        const bool branch_taken_0x19a644 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A644u;
        // 0x19a648: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a644) {
            ctx->pc = 0x19A658u;
            goto label_19a658;
        }
    }
    ctx->pc = 0x19A64Cu;
    // 0x19a64c: 0x316a00ff  andi        $t2, $t3, 0xFF
    ctx->pc = 0x19a64cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x19a650: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x19a650u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19a654: 0x0  nop
    ctx->pc = 0x19a654u;
    // NOP
label_19a658:
    // 0x19a658: 0x90ac0000  lbu         $t4, 0x0($a1)
    ctx->pc = 0x19a658u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a65c: 0x22c3821  addu        $a3, $s1, $t4
    ctx->pc = 0x19a65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
    // 0x19a660: 0x80e3004f  lb          $v1, 0x4F($a3)
    ctx->pc = 0x19a660u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 79)));
    // 0x19a664: 0x1860014a  blez        $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x19A664u;
    {
        const bool branch_taken_0x19a664 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x19A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A664u;
        // 0x19a668: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a664) {
            ctx->pc = 0x19AB90u;
            goto label_19ab90;
        }
    }
    ctx->pc = 0x19A66Cu;
    // 0x19a66c: 0x10800068  beqz        $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x19A66Cu;
    {
        const bool branch_taken_0x19a66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a66c) {
            ctx->pc = 0x19A810u;
            goto label_19a810;
        }
    }
    ctx->pc = 0x19A674u;
    // 0x19a674: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19a674u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a678: 0x184001a  div         $zero, $t4, $a0
    ctx->pc = 0x19a678u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19a67c: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x19a67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19a680: 0x0  nop
    ctx->pc = 0x19a680u;
    // NOP
    // 0x19a684: 0x2010  mfhi        $a0
    ctx->pc = 0x19a684u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x19a688: 0x10c40039  beq         $a2, $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x19A688u;
    {
        const bool branch_taken_0x19a688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x19a688) {
            ctx->pc = 0x19A770u;
            goto label_19a770;
        }
    }
    ctx->pc = 0x19A690u;
    // 0x19a690: 0x80e60050  lb          $a2, 0x50($a3)
    ctx->pc = 0x19a690u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x19a694: 0x18c0005e  blez        $a2, . + 4 + (0x5E << 2)
    ctx->pc = 0x19A694u;
    {
        const bool branch_taken_0x19a694 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x19a694) {
            ctx->pc = 0x19A810u;
            goto label_19a810;
        }
    }
    ctx->pc = 0x19A69Cu;
    // 0x19a69c: 0x90e400ca  lbu         $a0, 0xCA($a3)
    ctx->pc = 0x19a69cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 202)));
    // 0x19a6a0: 0x1480005b  bnez        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x19A6A0u;
    {
        const bool branch_taken_0x19a6a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6A0u;
        // 0x19a6a4: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6a0) {
            ctx->pc = 0x19A810u;
            goto label_19a810;
        }
    }
    ctx->pc = 0x19A6A8u;
    // 0x19a6a8: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x19a6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x19a6ac: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x19A6ACu;
    {
        const bool branch_taken_0x19a6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a6ac) {
            ctx->pc = 0x19A810u;
            goto label_19a810;
        }
    }
    ctx->pc = 0x19A6B4u;
    // 0x19a6b4: 0x90e400a7  lbu         $a0, 0xA7($a3)
    ctx->pc = 0x19a6b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 167)));
    // 0x19a6b8: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A6B8u;
    {
        const bool branch_taken_0x19a6b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6B8u;
        // 0x19a6bc: 0x316400ff  andi        $a0, $t3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6b8) {
            ctx->pc = 0x19A6E8u;
            goto label_19a6e8;
        }
    }
    ctx->pc = 0x19A6C0u;
    // 0x19a6c0: 0x25860001  addiu       $a2, $t4, 0x1
    ctx->pc = 0x19a6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x19a6c4: 0x9d3821  addu        $a3, $a0, $sp
    ctx->pc = 0x19a6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x19a6c8: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x19a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19a6cc: 0x24e700b0  addiu       $a3, $a3, 0xB0
    ctx->pc = 0x19a6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x19a6d0: 0x308b00ff  andi        $t3, $a0, 0xFF
    ctx->pc = 0x19a6d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19a6d4: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x19a6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a6d8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19a6d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19a6dc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a6e0: 0xa08900a6  sb          $t1, 0xA6($a0)
    ctx->pc = 0x19a6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 166), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a6e4: 0xa22900c6  sb          $t1, 0xC6($s1)
    ctx->pc = 0x19a6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 198), (uint8_t)GPR_U32(ctx, 9));
label_19a6e8:
    // 0x19a6e8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x19a6e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a6ec: 0x2243821  addu        $a3, $s1, $a0
    ctx->pc = 0x19a6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a6f0: 0x90e400b7  lbu         $a0, 0xB7($a3)
    ctx->pc = 0x19a6f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 183)));
    // 0x19a6f4: 0x14800046  bnez        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x19A6F4u;
    {
        const bool branch_taken_0x19a6f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a6f4) {
            ctx->pc = 0x19A810u;
            goto label_19a810;
        }
    }
    ctx->pc = 0x19A6FCu;
    // 0x19a6fc: 0x90e600a7  lbu         $a2, 0xA7($a3)
    ctx->pc = 0x19a6fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 167)));
    // 0x19a700: 0x90e400a6  lbu         $a0, 0xA6($a3)
    ctx->pc = 0x19a700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 166)));
    // 0x19a704: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x19a704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x19a708: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A708u;
    {
        const bool branch_taken_0x19a708 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a708) {
            ctx->pc = 0x19A720u;
            goto label_19a720;
        }
    }
    ctx->pc = 0x19A710u;
    // 0x19a710: 0x90e400b6  lbu         $a0, 0xB6($a3)
    ctx->pc = 0x19a710u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 182)));
    // 0x19a714: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x19A714u;
    {
        const bool branch_taken_0x19a714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a714) {
            ctx->pc = 0x19A810u;
            goto label_19a810;
        }
    }
    ctx->pc = 0x19A71Cu;
    // 0x19a71c: 0x0  nop
    ctx->pc = 0x19a71cu;
    // NOP
label_19a720:
    // 0x19a720: 0x90e400da  lbu         $a0, 0xDA($a3)
    ctx->pc = 0x19a720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 218)));
    // 0x19a724: 0x312600ff  andi        $a2, $t1, 0xFF
    ctx->pc = 0x19a724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x19a728: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x19a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x19a72c: 0xa0e400da  sb          $a0, 0xDA($a3)
    ctx->pc = 0x19a72cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 218), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a730: 0x922400c7  lbu         $a0, 0xC7($s1)
    ctx->pc = 0x19a730u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19a734: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x19a734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19a738: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A738u;
    {
        const bool branch_taken_0x19a738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a738) {
            ctx->pc = 0x19A748u;
            goto label_19a748;
        }
    }
    ctx->pc = 0x19A740u;
    // 0x19a740: 0xa22900c7  sb          $t1, 0xC7($s1)
    ctx->pc = 0x19a740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a744: 0x0  nop
    ctx->pc = 0x19a744u;
    // NOP
label_19a748:
    // 0x19a748: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x19a748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a74c: 0x922600c8  lbu         $a2, 0xC8($s1)
    ctx->pc = 0x19a74cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x19a750: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19a750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a754: 0x908400a7  lbu         $a0, 0xA7($a0)
    ctx->pc = 0x19a754u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 167)));
    // 0x19a758: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x19a758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19a75c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x19A75Cu;
    {
        const bool branch_taken_0x19a75c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a75c) {
            ctx->pc = 0x19A810u;
            goto label_19a810;
        }
    }
    ctx->pc = 0x19A764u;
    // 0x19a764: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x19A764u;
    {
        const bool branch_taken_0x19a764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A764u;
        // 0x19a768: 0xa22900c8  sb          $t1, 0xC8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 200), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a764) {
            ctx->pc = 0x19A810u;
            goto label_19a810;
        }
    }
    ctx->pc = 0x19A76Cu;
    // 0x19a76c: 0x0  nop
    ctx->pc = 0x19a76cu;
    // NOP
label_19a770:
    // 0x19a770: 0x93c40003  lbu         $a0, 0x3($fp)
    ctx->pc = 0x19a770u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x19a774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19a774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a778: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x19a778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19a77c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x19A77Cu;
    {
        const bool branch_taken_0x19a77c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A77Cu;
        // 0x19a780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a77c) {
            ctx->pc = 0x19A810u;
            goto label_19a810;
        }
    }
    ctx->pc = 0x19A784u;
    // 0x19a784: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x19a784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_19a788:
    // 0x19a788: 0x3c66021  addu        $t4, $fp, $a2
    ctx->pc = 0x19a788u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x19a78c: 0x918e0004  lbu         $t6, 0x4($t4)
    ctx->pc = 0x19a78cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x19a790: 0x90ad0000  lbu         $t5, 0x0($a1)
    ctx->pc = 0x19a790u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a794: 0x822c004c  lb          $t4, 0x4C($s1)
    ctx->pc = 0x19a794u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a798: 0x1ac001a  div         $zero, $t5, $t4
    ctx->pc = 0x19a798u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19a79c: 0x0  nop
    ctx->pc = 0x19a79cu;
    // NOP
    // 0x19a7a0: 0x0  nop
    ctx->pc = 0x19a7a0u;
    // NOP
    // 0x19a7a4: 0x6012  mflo        $t4
    ctx->pc = 0x19a7a4u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x19a7a8: 0x15cc0013  bne         $t6, $t4, . + 4 + (0x13 << 2)
    ctx->pc = 0x19A7A8u;
    {
        const bool branch_taken_0x19a7a8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 12));
        ctx->pc = 0x19A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7A8u;
        // 0x19a7ac: 0x2266821  addu        $t5, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7a8) {
            ctx->pc = 0x19A7F8u;
            goto label_19a7f8;
        }
    }
    ctx->pc = 0x19A7B0u;
    // 0x19a7b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19a7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19a7b4: 0xa1a900e9  sb          $t1, 0xE9($t5)
    ctx->pc = 0x19a7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 233), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a7b8: 0x922c00c7  lbu         $t4, 0xC7($s1)
    ctx->pc = 0x19a7b8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19a7bc: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x19a7bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x19a7c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A7C0u;
    {
        const bool branch_taken_0x19a7c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7C0u;
        // 0x19a7c4: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7c0) {
            ctx->pc = 0x19A7D0u;
            goto label_19a7d0;
        }
    }
    ctx->pc = 0x19A7C8u;
    // 0x19a7c8: 0xa22900c7  sb          $t1, 0xC7($s1)
    ctx->pc = 0x19a7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a7cc: 0x0  nop
    ctx->pc = 0x19a7ccu;
    // NOP
label_19a7d0:
    // 0x19a7d0: 0x91ac00ed  lbu         $t4, 0xED($t5)
    ctx->pc = 0x19a7d0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 237)));
    // 0x19a7d4: 0x15800002  bnez        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A7D4u;
    {
        const bool branch_taken_0x19a7d4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a7d4) {
            ctx->pc = 0x19A7E0u;
            goto label_19a7e0;
        }
    }
    ctx->pc = 0x19A7DCu;
    // 0x19a7dc: 0xa22900c8  sb          $t1, 0xC8($s1)
    ctx->pc = 0x19a7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 200), (uint8_t)GPR_U32(ctx, 9));
label_19a7e0:
    // 0x19a7e0: 0x93cc0003  lbu         $t4, 0x3($fp)
    ctx->pc = 0x19a7e0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x19a7e4: 0x30ed00ff  andi        $t5, $a3, 0xFF
    ctx->pc = 0x19a7e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x19a7e8: 0x15ac0003  bne         $t5, $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A7E8u;
    {
        const bool branch_taken_0x19a7e8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 12));
        if (branch_taken_0x19a7e8) {
            ctx->pc = 0x19A7F8u;
            goto label_19a7f8;
        }
    }
    ctx->pc = 0x19A7F0u;
    // 0x19a7f0: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x19a7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a7f4: 0x0  nop
    ctx->pc = 0x19a7f4u;
    // NOP
label_19a7f8:
    // 0x19a7f8: 0x93cc0003  lbu         $t4, 0x3($fp)
    ctx->pc = 0x19a7f8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x19a7fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19a800: 0xcc602a  slt         $t4, $a2, $t4
    ctx->pc = 0x19a800u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x19a804: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x19A804u;
    {
        const bool branch_taken_0x19a804 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a804) {
            ctx->pc = 0x19A788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a788;
        }
    }
    ctx->pc = 0x19A80Cu;
    // 0x19a80c: 0x0  nop
    ctx->pc = 0x19a80cu;
    // NOP
label_19a810:
    // 0x19a810: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x19a810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x19a814: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x19A814u;
    {
        const bool branch_taken_0x19a814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a814) {
            ctx->pc = 0x19A928u;
            goto label_19a928;
        }
    }
    ctx->pc = 0x19A81Cu;
    // 0x19a81c: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x19a81cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a820: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19a820u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a824: 0xe4001a  div         $zero, $a3, $a0
    ctx->pc = 0x19a824u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19a828: 0x0  nop
    ctx->pc = 0x19a828u;
    // NOP
    // 0x19a82c: 0x0  nop
    ctx->pc = 0x19a82cu;
    // NOP
    // 0x19a830: 0x2010  mfhi        $a0
    ctx->pc = 0x19a830u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x19a834: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x19A834u;
    {
        const bool branch_taken_0x19a834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A834u;
        // 0x19a838: 0x2272021  addu        $a0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a834) {
            ctx->pc = 0x19A928u;
            goto label_19a928;
        }
    }
    ctx->pc = 0x19A83Cu;
    // 0x19a83c: 0x8086004e  lb          $a2, 0x4E($a0)
    ctx->pc = 0x19a83cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x19a840: 0x18c00039  blez        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x19A840u;
    {
        const bool branch_taken_0x19a840 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x19a840) {
            ctx->pc = 0x19A928u;
            goto label_19a928;
        }
    }
    ctx->pc = 0x19A848u;
    // 0x19a848: 0x908400c8  lbu         $a0, 0xC8($a0)
    ctx->pc = 0x19a848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x19a84c: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x19A84Cu;
    {
        const bool branch_taken_0x19a84c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a84c) {
            ctx->pc = 0x19A928u;
            goto label_19a928;
        }
    }
    ctx->pc = 0x19A854u;
    // 0x19a854: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x19a854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19a858: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x19a858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x19a85c: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x19A85Cu;
    {
        const bool branch_taken_0x19a85c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a85c) {
            ctx->pc = 0x19A928u;
            goto label_19a928;
        }
    }
    ctx->pc = 0x19A864u;
    // 0x19a864: 0x316600ff  andi        $a2, $t3, 0xFF
    ctx->pc = 0x19a864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x19a868: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x19a868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19a86c: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x19a86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x19a870: 0x24c600b0  addiu       $a2, $a2, 0xB0
    ctx->pc = 0x19a870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x19a874: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x19a874u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a878: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x19a878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a87c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a880: 0x908400a5  lbu         $a0, 0xA5($a0)
    ctx->pc = 0x19a880u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 165)));
    // 0x19a884: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A884u;
    {
        const bool branch_taken_0x19a884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a884) {
            ctx->pc = 0x19A8A8u;
            goto label_19a8a8;
        }
    }
    ctx->pc = 0x19A88Cu;
    // 0x19a88c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x19a88cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a890: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x19a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19a894: 0x308b00ff  andi        $t3, $a0, 0xFF
    ctx->pc = 0x19a894u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19a898: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x19a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19a89c: 0xa08900a6  sb          $t1, 0xA6($a0)
    ctx->pc = 0x19a89cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 166), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a8a0: 0xa22900c6  sb          $t1, 0xC6($s1)
    ctx->pc = 0x19a8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 198), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a8a4: 0x0  nop
    ctx->pc = 0x19a8a4u;
    // NOP
label_19a8a8:
    // 0x19a8a8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x19a8a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a8ac: 0x2243821  addu        $a3, $s1, $a0
    ctx->pc = 0x19a8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a8b0: 0x90e400b5  lbu         $a0, 0xB5($a3)
    ctx->pc = 0x19a8b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 181)));
    // 0x19a8b4: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19A8B4u;
    {
        const bool branch_taken_0x19a8b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a8b4) {
            ctx->pc = 0x19A928u;
            goto label_19a928;
        }
    }
    ctx->pc = 0x19A8BCu;
    // 0x19a8bc: 0x90e600a5  lbu         $a2, 0xA5($a3)
    ctx->pc = 0x19a8bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 165)));
    // 0x19a8c0: 0x90e400a6  lbu         $a0, 0xA6($a3)
    ctx->pc = 0x19a8c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 166)));
    // 0x19a8c4: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x19a8c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x19a8c8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A8C8u;
    {
        const bool branch_taken_0x19a8c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a8c8) {
            ctx->pc = 0x19A8E0u;
            goto label_19a8e0;
        }
    }
    ctx->pc = 0x19A8D0u;
    // 0x19a8d0: 0x90e400b6  lbu         $a0, 0xB6($a3)
    ctx->pc = 0x19a8d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 182)));
    // 0x19a8d4: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19A8D4u;
    {
        const bool branch_taken_0x19a8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a8d4) {
            ctx->pc = 0x19A928u;
            goto label_19a928;
        }
    }
    ctx->pc = 0x19A8DCu;
    // 0x19a8dc: 0x0  nop
    ctx->pc = 0x19a8dcu;
    // NOP
label_19a8e0:
    // 0x19a8e0: 0x90e400d8  lbu         $a0, 0xD8($a3)
    ctx->pc = 0x19a8e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 216)));
    // 0x19a8e4: 0x312600ff  andi        $a2, $t1, 0xFF
    ctx->pc = 0x19a8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x19a8e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19a8ec: 0xa0e400d8  sb          $a0, 0xD8($a3)
    ctx->pc = 0x19a8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 216), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a8f0: 0x922400c7  lbu         $a0, 0xC7($s1)
    ctx->pc = 0x19a8f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19a8f4: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x19a8f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19a8f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A8F8u;
    {
        const bool branch_taken_0x19a8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a8f8) {
            ctx->pc = 0x19A908u;
            goto label_19a908;
        }
    }
    ctx->pc = 0x19A900u;
    // 0x19a900: 0xa22900c7  sb          $t1, 0xC7($s1)
    ctx->pc = 0x19a900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a904: 0x0  nop
    ctx->pc = 0x19a904u;
    // NOP
label_19a908:
    // 0x19a908: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x19a908u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a90c: 0x922600c8  lbu         $a2, 0xC8($s1)
    ctx->pc = 0x19a90cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x19a910: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a914: 0x908400a5  lbu         $a0, 0xA5($a0)
    ctx->pc = 0x19a914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 165)));
    // 0x19a918: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x19a918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19a91c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A91Cu;
    {
        const bool branch_taken_0x19a91c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a91c) {
            ctx->pc = 0x19A928u;
            goto label_19a928;
        }
    }
    ctx->pc = 0x19A924u;
    // 0x19a924: 0xa22900c8  sb          $t1, 0xC8($s1)
    ctx->pc = 0x19a924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 200), (uint8_t)GPR_U32(ctx, 9));
label_19a928:
    // 0x19a928: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x19a928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x19a92c: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x19A92Cu;
    {
        const bool branch_taken_0x19a92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a92c) {
            ctx->pc = 0x19AA58u;
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19A934u;
    // 0x19a934: 0x8227004c  lb          $a3, 0x4C($s1)
    ctx->pc = 0x19a934u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a938: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19a938u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a93c: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x19a93cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19a940: 0x0  nop
    ctx->pc = 0x19a940u;
    // NOP
    // 0x19a944: 0x0  nop
    ctx->pc = 0x19a944u;
    // NOP
    // 0x19a948: 0x2012  mflo        $a0
    ctx->pc = 0x19a948u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x19a94c: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x19A94Cu;
    {
        const bool branch_taken_0x19a94c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a94c) {
            ctx->pc = 0x19AA58u;
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19A954u;
    // 0x19a954: 0xc73823  subu        $a3, $a2, $a3
    ctx->pc = 0x19a954u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19a958: 0x2272021  addu        $a0, $s1, $a3
    ctx->pc = 0x19a958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x19a95c: 0x8086004f  lb          $a2, 0x4F($a0)
    ctx->pc = 0x19a95cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x19a960: 0x18c0003d  blez        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x19A960u;
    {
        const bool branch_taken_0x19a960 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x19a960) {
            ctx->pc = 0x19AA58u;
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19A968u;
    // 0x19a968: 0x908400c9  lbu         $a0, 0xC9($a0)
    ctx->pc = 0x19a968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 201)));
    // 0x19a96c: 0x1480003a  bnez        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x19A96Cu;
    {
        const bool branch_taken_0x19a96c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a96c) {
            ctx->pc = 0x19AA58u;
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19A974u;
    // 0x19a974: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x19a974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19a978: 0x316600ff  andi        $a2, $t3, 0xFF
    ctx->pc = 0x19a978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x19a97c: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x19a97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x19a980: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x19a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x19a984: 0x24cc00b0  addiu       $t4, $a2, 0xB0
    ctx->pc = 0x19a984u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x19a988: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x19A988u;
    {
        const bool branch_taken_0x19a988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A988u;
        // 0x19a98c: 0xa1870000  sb          $a3, 0x0($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a988) {
            ctx->pc = 0x19AA58u;
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19A990u;
    // 0x19a990: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19a990u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a994: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19a994u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a998: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x19a998u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19a99c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a9a0: 0x908400a6  lbu         $a0, 0xA6($a0)
    ctx->pc = 0x19a9a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 166)));
    // 0x19a9a4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A9A4u;
    {
        const bool branch_taken_0x19a9a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a9a4) {
            ctx->pc = 0x19A9C8u;
            goto label_19a9c8;
        }
    }
    ctx->pc = 0x19A9ACu;
    // 0x19a9ac: 0x91860000  lbu         $a2, 0x0($t4)
    ctx->pc = 0x19a9acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x19a9b0: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x19a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19a9b4: 0x308b00ff  andi        $t3, $a0, 0xFF
    ctx->pc = 0x19a9b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19a9b8: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x19a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x19a9bc: 0xa08900a6  sb          $t1, 0xA6($a0)
    ctx->pc = 0x19a9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 166), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a9c0: 0xa22900c6  sb          $t1, 0xC6($s1)
    ctx->pc = 0x19a9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 198), (uint8_t)GPR_U32(ctx, 9));
    // 0x19a9c4: 0x0  nop
    ctx->pc = 0x19a9c4u;
    // NOP
label_19a9c8:
    // 0x19a9c8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19a9c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a9cc: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19a9ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19a9d0: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x19a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19a9d4: 0x2246021  addu        $t4, $s1, $a0
    ctx->pc = 0x19a9d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19a9d8: 0x918400b6  lbu         $a0, 0xB6($t4)
    ctx->pc = 0x19a9d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 182)));
    // 0x19a9dc: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19A9DCu;
    {
        const bool branch_taken_0x19a9dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9DCu;
        // 0x19a9e0: 0x2263821  addu        $a3, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9dc) {
            ctx->pc = 0x19AA58u;
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19A9E4u;
    // 0x19a9e4: 0x918600a6  lbu         $a2, 0xA6($t4)
    ctx->pc = 0x19a9e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 166)));
    // 0x19a9e8: 0x90e400a6  lbu         $a0, 0xA6($a3)
    ctx->pc = 0x19a9e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 166)));
    // 0x19a9ec: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x19a9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x19a9f0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A9F0u;
    {
        const bool branch_taken_0x19a9f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a9f0) {
            ctx->pc = 0x19AA08u;
            goto label_19aa08;
        }
    }
    ctx->pc = 0x19A9F8u;
    // 0x19a9f8: 0x90e400b6  lbu         $a0, 0xB6($a3)
    ctx->pc = 0x19a9f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 182)));
    // 0x19a9fc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19A9FCu;
    {
        const bool branch_taken_0x19a9fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a9fc) {
            ctx->pc = 0x19AA58u;
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19AA04u;
    // 0x19aa04: 0x0  nop
    ctx->pc = 0x19aa04u;
    // NOP
label_19aa08:
    // 0x19aa08: 0x918400d9  lbu         $a0, 0xD9($t4)
    ctx->pc = 0x19aa08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 217)));
    // 0x19aa0c: 0x312600ff  andi        $a2, $t1, 0xFF
    ctx->pc = 0x19aa0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x19aa10: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x19aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19aa14: 0xa18400d9  sb          $a0, 0xD9($t4)
    ctx->pc = 0x19aa14u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 217), (uint8_t)GPR_U32(ctx, 4));
    // 0x19aa18: 0x922400c7  lbu         $a0, 0xC7($s1)
    ctx->pc = 0x19aa18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19aa1c: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x19aa1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19aa20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AA20u;
    {
        const bool branch_taken_0x19aa20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa20) {
            ctx->pc = 0x19AA30u;
            goto label_19aa30;
        }
    }
    ctx->pc = 0x19AA28u;
    // 0x19aa28: 0xa22900c7  sb          $t1, 0xC7($s1)
    ctx->pc = 0x19aa28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 9));
    // 0x19aa2c: 0x0  nop
    ctx->pc = 0x19aa2cu;
    // NOP
label_19aa30:
    // 0x19aa30: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19aa30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19aa34: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19aa34u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19aa38: 0x922700c8  lbu         $a3, 0xC8($s1)
    ctx->pc = 0x19aa38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x19aa3c: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x19aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19aa40: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19aa44: 0x908400a6  lbu         $a0, 0xA6($a0)
    ctx->pc = 0x19aa44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 166)));
    // 0x19aa48: 0xe4082a  slt         $at, $a3, $a0
    ctx->pc = 0x19aa48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19aa4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19AA4Cu;
    {
        const bool branch_taken_0x19aa4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa4c) {
            ctx->pc = 0x19AA58u;
            goto label_19aa58;
        }
    }
    ctx->pc = 0x19AA54u;
    // 0x19aa54: 0xa22900c8  sb          $t1, 0xC8($s1)
    ctx->pc = 0x19aa54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 200), (uint8_t)GPR_U32(ctx, 9));
label_19aa58:
    // 0x19aa58: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x19aa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x19aa5c: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x19AA5Cu;
    {
        const bool branch_taken_0x19aa5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa5c) {
            ctx->pc = 0x19AB90u;
            goto label_19ab90;
        }
    }
    ctx->pc = 0x19AA64u;
    // 0x19aa64: 0x8227004c  lb          $a3, 0x4C($s1)
    ctx->pc = 0x19aa64u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19aa68: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19aa68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19aa6c: 0x8223004d  lb          $v1, 0x4D($s1)
    ctx->pc = 0x19aa6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19aa70: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x19aa70u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19aa74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19aa78: 0x0  nop
    ctx->pc = 0x19aa78u;
    // NOP
    // 0x19aa7c: 0x2012  mflo        $a0
    ctx->pc = 0x19aa7cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x19aa80: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19aa80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19aa84: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x19AA84u;
    {
        const bool branch_taken_0x19aa84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA84u;
        // 0x19aa88: 0x2261821  addu        $v1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa84) {
            ctx->pc = 0x19AB90u;
            goto label_19ab90;
        }
    }
    ctx->pc = 0x19AA8Cu;
    // 0x19aa8c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19aa90: 0x8064004f  lb          $a0, 0x4F($v1)
    ctx->pc = 0x19aa90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19aa94: 0x1880003e  blez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x19AA94u;
    {
        const bool branch_taken_0x19aa94 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x19aa94) {
            ctx->pc = 0x19AB90u;
            goto label_19ab90;
        }
    }
    ctx->pc = 0x19AA9Cu;
    // 0x19aa9c: 0x906300c9  lbu         $v1, 0xC9($v1)
    ctx->pc = 0x19aa9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 201)));
    // 0x19aaa0: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x19AAA0u;
    {
        const bool branch_taken_0x19aaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19aaa0) {
            ctx->pc = 0x19AB90u;
            goto label_19ab90;
        }
    }
    ctx->pc = 0x19AAA8u;
    // 0x19aaa8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x19aaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19aaac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x19aaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x19aab0: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x19AAB0u;
    {
        const bool branch_taken_0x19aab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aab0) {
            ctx->pc = 0x19AB90u;
            goto label_19ab90;
        }
    }
    ctx->pc = 0x19AAB8u;
    // 0x19aab8: 0x316400ff  andi        $a0, $t3, 0xFF
    ctx->pc = 0x19aab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x19aabc: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x19aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19aac0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x19aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x19aac4: 0x248600b0  addiu       $a2, $a0, 0xB0
    ctx->pc = 0x19aac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x19aac8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x19aac8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19aacc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x19aaccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19aad0: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19aad0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19aad4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19aad8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19aadc: 0x906300a6  lbu         $v1, 0xA6($v1)
    ctx->pc = 0x19aadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 166)));
    // 0x19aae0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19AAE0u;
    {
        const bool branch_taken_0x19aae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19aae0) {
            ctx->pc = 0x19AB00u;
            goto label_19ab00;
        }
    }
    ctx->pc = 0x19AAE8u;
    // 0x19aae8: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x19aae8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19aaec: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x19aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19aaf0: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x19aaf0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19aaf4: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x19aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19aaf8: 0xa06900a6  sb          $t1, 0xA6($v1)
    ctx->pc = 0x19aaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 166), (uint8_t)GPR_U32(ctx, 9));
    // 0x19aafc: 0xa22900c6  sb          $t1, 0xC6($s1)
    ctx->pc = 0x19aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 198), (uint8_t)GPR_U32(ctx, 9));
label_19ab00:
    // 0x19ab00: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x19ab00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ab04: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19ab04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19ab08: 0x2243021  addu        $a2, $s1, $a0
    ctx->pc = 0x19ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19ab0c: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x19ab0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19ab10: 0x90e300b6  lbu         $v1, 0xB6($a3)
    ctx->pc = 0x19ab10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 182)));
    // 0x19ab14: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x19AB14u;
    {
        const bool branch_taken_0x19ab14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ab14) {
            ctx->pc = 0x19AB90u;
            goto label_19ab90;
        }
    }
    ctx->pc = 0x19AB1Cu;
    // 0x19ab1c: 0x90e400a6  lbu         $a0, 0xA6($a3)
    ctx->pc = 0x19ab1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 166)));
    // 0x19ab20: 0x90c300a6  lbu         $v1, 0xA6($a2)
    ctx->pc = 0x19ab20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 166)));
    // 0x19ab24: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x19ab24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19ab28: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AB28u;
    {
        const bool branch_taken_0x19ab28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ab28) {
            ctx->pc = 0x19AB40u;
            goto label_19ab40;
        }
    }
    ctx->pc = 0x19AB30u;
    // 0x19ab30: 0x90c300b6  lbu         $v1, 0xB6($a2)
    ctx->pc = 0x19ab30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 182)));
    // 0x19ab34: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x19AB34u;
    {
        const bool branch_taken_0x19ab34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab34) {
            ctx->pc = 0x19AB90u;
            goto label_19ab90;
        }
    }
    ctx->pc = 0x19AB3Cu;
    // 0x19ab3c: 0x0  nop
    ctx->pc = 0x19ab3cu;
    // NOP
label_19ab40:
    // 0x19ab40: 0x90e300d9  lbu         $v1, 0xD9($a3)
    ctx->pc = 0x19ab40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 217)));
    // 0x19ab44: 0x312400ff  andi        $a0, $t1, 0xFF
    ctx->pc = 0x19ab44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x19ab48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x19ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x19ab4c: 0xa0e300d9  sb          $v1, 0xD9($a3)
    ctx->pc = 0x19ab4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 217), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ab50: 0x922300c7  lbu         $v1, 0xC7($s1)
    ctx->pc = 0x19ab50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19ab54: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19ab54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ab58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AB58u;
    {
        const bool branch_taken_0x19ab58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab58) {
            ctx->pc = 0x19AB68u;
            goto label_19ab68;
        }
    }
    ctx->pc = 0x19AB60u;
    // 0x19ab60: 0xa22900c7  sb          $t1, 0xC7($s1)
    ctx->pc = 0x19ab60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 199), (uint8_t)GPR_U32(ctx, 9));
    // 0x19ab64: 0x0  nop
    ctx->pc = 0x19ab64u;
    // NOP
label_19ab68:
    // 0x19ab68: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x19ab68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ab6c: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19ab6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19ab70: 0x922600c8  lbu         $a2, 0xC8($s1)
    ctx->pc = 0x19ab70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x19ab74: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x19ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x19ab78: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19ab7c: 0x906300a6  lbu         $v1, 0xA6($v1)
    ctx->pc = 0x19ab7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 166)));
    // 0x19ab80: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x19ab80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ab84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19AB84u;
    {
        const bool branch_taken_0x19ab84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab84) {
            ctx->pc = 0x19AB90u;
            goto label_19ab90;
        }
    }
    ctx->pc = 0x19AB8Cu;
    // 0x19ab8c: 0xa22900c8  sb          $t1, 0xC8($s1)
    ctx->pc = 0x19ab8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 200), (uint8_t)GPR_U32(ctx, 9));
label_19ab90:
    // 0x19ab90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19ab90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19ab94: 0x316300ff  andi        $v1, $t3, 0xFF
    ctx->pc = 0x19ab94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x19ab98: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x19ab98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ab9c: 0x1460fea8  bnez        $v1, . + 4 + (-0x158 << 2)
    ctx->pc = 0x19AB9Cu;
    {
        const bool branch_taken_0x19ab9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB9Cu;
        // 0x19aba0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab9c) {
            ctx->pc = 0x19A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a640;
        }
    }
    ctx->pc = 0x19ABA4u;
    // 0x19aba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19ABA4u;
    {
        const bool branch_taken_0x19aba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aba4) {
            ctx->pc = 0x19ABB8u;
            goto label_19abb8;
        }
    }
    ctx->pc = 0x19ABACu;
    // 0x19abac: 0x0  nop
    ctx->pc = 0x19abacu;
    // NOP
label_19abb0:
    // 0x19abb0: 0xa22000c8  sb          $zero, 0xC8($s1)
    ctx->pc = 0x19abb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x19abb4: 0x0  nop
    ctx->pc = 0x19abb4u;
    // NOP
label_19abb8:
    // 0x19abb8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x19abb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19abbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19abc0: 0x1444001f  bne         $v0, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19ABC0u;
    {
        const bool branch_taken_0x19abc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x19abc0) {
            ctx->pc = 0x19AC40u;
            goto label_19ac40;
        }
    }
    ctx->pc = 0x19ABC8u;
    // 0x19abc8: 0x922300c8  lbu         $v1, 0xC8($s1)
    ctx->pc = 0x19abc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x19abcc: 0x922200c7  lbu         $v0, 0xC7($s1)
    ctx->pc = 0x19abccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19abd0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19abd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19abd4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x19ABD4u;
    {
        const bool branch_taken_0x19abd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19abd4) {
            ctx->pc = 0x19AC10u;
            goto label_19ac10;
        }
    }
    ctx->pc = 0x19ABDCu;
    // 0x19abdc: 0x82220048  lb          $v0, 0x48($s1)
    ctx->pc = 0x19abdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x19abe0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19ABE0u;
    {
        const bool branch_taken_0x19abe0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x19ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABE0u;
        // 0x19abe4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abe0) {
            ctx->pc = 0x19ABF8u;
            goto label_19abf8;
        }
    }
    ctx->pc = 0x19ABE8u;
    // 0x19abe8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x19abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19abec: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x19abecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19abf0: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x19abf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x19abf4: 0x0  nop
    ctx->pc = 0x19abf4u;
    // NOP
label_19abf8:
    // 0x19abf8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x19abf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19abfc: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19ac00: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19ac04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19ac08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19AC08u;
    {
        const bool branch_taken_0x19ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC08u;
        // 0x19ac0c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac08) {
            ctx->pc = 0x19AC40u;
            goto label_19ac40;
        }
    }
    ctx->pc = 0x19AC10u;
label_19ac10:
    // 0x19ac10: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x19ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x19ac14: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19ac18: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x19ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x19ac1c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x19ac20: 0x34456424  ori         $a1, $v0, 0x6424
    ctx->pc = 0x19ac20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25636);
    // 0x19ac24: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x19ac24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19ac28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ac28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19ac2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19ac30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19ac34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac38: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19AC38u;
    SET_GPR_U32(ctx, 31, 0x19AC40u);
    ctx->pc = 0x19AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC38u;
    // 0x19ac3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19AC38u, 0x19AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC40u;
label_19ac40:
    // 0x19ac40: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x19ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x19ac44: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x19ac48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19ac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19ac4c: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x19ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_19ac50:
    // 0x19ac50: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x19ac50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19ac54: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x19ac54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x19ac58: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19ac58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac5c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19ac5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19ac60: 0x1020008f  beqz        $at, . + 4 + (0x8F << 2)
    ctx->pc = 0x19AC60u;
    {
        const bool branch_taken_0x19ac60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC60u;
        // 0x19ac64: 0x2610e120  addiu       $s0, $s0, -0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac60) {
            ctx->pc = 0x19AEA0u;
            goto label_19aea0;
        }
    }
    ctx->pc = 0x19AC68u;
    // 0x19ac68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19ac68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac6c: 0x0  nop
    ctx->pc = 0x19ac6cu;
    // NOP
label_19ac70:
    // 0x19ac70: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19ac70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19ac74: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x19ac74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19ac78: 0x10200083  beqz        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x19AC78u;
    {
        const bool branch_taken_0x19ac78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC78u;
        // 0x19ac7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac78) {
            ctx->pc = 0x19AE88u;
            goto label_19ae88;
        }
    }
    ctx->pc = 0x19AC80u;
    // 0x19ac80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19ac80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac84: 0x0  nop
    ctx->pc = 0x19ac84u;
    // NOP
label_19ac88:
    // 0x19ac88: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x19ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x19ac8c: 0x2841018  mult        $v0, $s4, $a0
    ctx->pc = 0x19ac8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19ac90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19ac94: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19ac94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19ac98: 0x4400075  bltz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x19AC98u;
    {
        const bool branch_taken_0x19ac98 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x19ac98) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19ACA0u;
    // 0x19aca0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19aca4: 0x906300c9  lbu         $v1, 0xC9($v1)
    ctx->pc = 0x19aca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 201)));
    // 0x19aca8: 0x804400c0  lb          $a0, 0xC0($v0)
    ctx->pc = 0x19aca8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x19acac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19acb0: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x19ACB0u;
    {
        const bool branch_taken_0x19acb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19acb0) {
            ctx->pc = 0x19AE20u;
            goto label_19ae20;
        }
    }
    ctx->pc = 0x19ACB8u;
    // 0x19acb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19acbc: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x19ACBCu;
    {
        const bool branch_taken_0x19acbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACBCu;
        // 0x19acc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acbc) {
            ctx->pc = 0x19ADC8u;
            goto label_19adc8;
        }
    }
    ctx->pc = 0x19ACC4u;
    // 0x19acc4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x19ACC4u;
    {
        const bool branch_taken_0x19acc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19acc4) {
            ctx->pc = 0x19AD70u;
            goto label_19ad70;
        }
    }
    ctx->pc = 0x19ACCCu;
    // 0x19accc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19acd0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19ACD0u;
    {
        const bool branch_taken_0x19acd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19acd0) {
            ctx->pc = 0x19AD18u;
            goto label_19ad18;
        }
    }
    ctx->pc = 0x19ACD8u;
    // 0x19acd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19ACD8u;
    {
        const bool branch_taken_0x19acd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19acd8) {
            ctx->pc = 0x19ACE8u;
            goto label_19ace8;
        }
    }
    ctx->pc = 0x19ACE0u;
    // 0x19ace0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x19ACE0u;
    {
        const bool branch_taken_0x19ace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ace0) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19ACE8u;
label_19ace8:
    // 0x19ace8: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19ace8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19acec: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19acecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19acf0: 0x4363c  dsll32      $a2, $a0, 24
    ctx->pc = 0x19acf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 24));
    // 0x19acf4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x19acf4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x19acf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19acf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19acfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ad00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad04: 0x724021  addu        $t0, $v1, $s2
    ctx->pc = 0x19ad04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19ad08: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19AD08u;
    SET_GPR_U32(ctx, 31, 0x19AD10u);
    ctx->pc = 0x19AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD08u;
    // 0x19ad0c: 0x534821  addu        $t1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19AD08u, 0x19AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD10u;
label_19ad10:
    // 0x19ad10: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x19AD10u;
    {
        const bool branch_taken_0x19ad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad10) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19AD18u;
label_19ad18:
    // 0x19ad18: 0x8629000c  lh          $t1, 0xC($s1)
    ctx->pc = 0x19ad18u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19ad1c: 0x4363c  dsll32      $a2, $a0, 24
    ctx->pc = 0x19ad1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 24));
    // 0x19ad20: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x19ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x19ad24: 0x34486667  ori         $t0, $v0, 0x6667
    ctx->pc = 0x19ad24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x19ad28: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19ad28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19ad2c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19ad2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19ad30: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x19ad30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x19ad34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ad34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ad38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ad3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad40: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x19ad40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x19ad44: 0x1090018  mult        $zero, $t0, $t1
    ctx->pc = 0x19ad44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19ad48: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x19ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19ad4c: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x19ad4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x19ad50: 0x534821  addu        $t1, $v0, $s3
    ctx->pc = 0x19ad50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19ad54: 0x1010  mfhi        $v0
    ctx->pc = 0x19ad54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19ad58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19ad58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x19ad5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19ad60: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19AD60u;
    SET_GPR_U32(ctx, 31, 0x19AD68u);
    ctx->pc = 0x19AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD60u;
    // 0x19ad64: 0x624023  subu        $t0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19AD60u, 0x19AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD68u;
label_19ad68:
    // 0x19ad68: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x19AD68u;
    {
        const bool branch_taken_0x19ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad68) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19AD70u;
label_19ad70:
    // 0x19ad70: 0x8629000c  lh          $t1, 0xC($s1)
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19ad74: 0x4363c  dsll32      $a2, $a0, 24
    ctx->pc = 0x19ad74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 24));
    // 0x19ad78: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x19ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x19ad7c: 0x34486667  ori         $t0, $v0, 0x6667
    ctx->pc = 0x19ad7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x19ad80: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19ad80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19ad84: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19ad84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19ad88: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x19ad88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x19ad8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ad90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ad94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad98: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x19ad98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x19ad9c: 0x1090018  mult        $zero, $t0, $t1
    ctx->pc = 0x19ad9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19ada0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x19ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19ada4: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x19ada4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x19ada8: 0x534821  addu        $t1, $v0, $s3
    ctx->pc = 0x19ada8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19adac: 0x1010  mfhi        $v0
    ctx->pc = 0x19adacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19adb0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19adb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x19adb4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19adb8: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19ADB8u;
    SET_GPR_U32(ctx, 31, 0x19ADC0u);
    ctx->pc = 0x19ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADB8u;
    // 0x19adbc: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19ADB8u, 0x19ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADC0u;
label_19adc0:
    // 0x19adc0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x19ADC0u;
    {
        const bool branch_taken_0x19adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19adc0) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19ADC8u;
label_19adc8:
    // 0x19adc8: 0x8629000c  lh          $t1, 0xC($s1)
    ctx->pc = 0x19adc8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19adcc: 0x4363c  dsll32      $a2, $a0, 24
    ctx->pc = 0x19adccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 24));
    // 0x19add0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x19add0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x19add4: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x19add4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x19add8: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19add8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19addc: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19addcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19ade0: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x19ade0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x19ade4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ade8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ade8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19adecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adf0: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x19adf0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x19adf4: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x19adf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19adf8: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x19adf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x19adfc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x19adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19ae00: 0x1810  mfhi        $v1
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19ae04: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x19ae04u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x19ae08: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x19ae08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x19ae0c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x19ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19ae10: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19AE10u;
    SET_GPR_U32(ctx, 31, 0x19AE18u);
    ctx->pc = 0x19AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE10u;
    // 0x19ae14: 0x434821  addu        $t1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19AE10u, 0x19AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE18u;
label_19ae18:
    // 0x19ae18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19AE18u;
    {
        const bool branch_taken_0x19ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae18) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19AE20u;
label_19ae20:
    // 0x19ae20: 0x8629000c  lh          $t1, 0xC($s1)
    ctx->pc = 0x19ae20u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19ae24: 0x4363c  dsll32      $a2, $a0, 24
    ctx->pc = 0x19ae24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 24));
    // 0x19ae28: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x19ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x19ae2c: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x19ae2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x19ae30: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19ae30u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19ae34: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19ae34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19ae38: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x19ae38u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x19ae3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ae40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ae44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae48: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x19ae48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x19ae4c: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x19ae4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19ae50: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x19ae50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x19ae54: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x19ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19ae58: 0x1810  mfhi        $v1
    ctx->pc = 0x19ae58u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19ae5c: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x19ae5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x19ae60: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x19ae60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x19ae64: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x19ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19ae68: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19AE68u;
    SET_GPR_U32(ctx, 31, 0x19AE70u);
    ctx->pc = 0x19AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE68u;
    // 0x19ae6c: 0x434823  subu        $t1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19AE68u, 0x19AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE70u;
label_19ae70:
    // 0x19ae70: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19ae74: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x19ae78: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x19ae78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19ae7c: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x19AE7Cu;
    {
        const bool branch_taken_0x19ae7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE7Cu;
        // 0x19ae80: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae7c) {
            ctx->pc = 0x19AC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ac88;
        }
    }
    ctx->pc = 0x19AE84u;
    // 0x19ae84: 0x0  nop
    ctx->pc = 0x19ae84u;
    // NOP
label_19ae88:
    // 0x19ae88: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x19ae88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19ae8c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19ae8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x19ae90: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x19ae90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19ae94: 0x1440ff76  bnez        $v0, . + 4 + (-0x8A << 2)
    ctx->pc = 0x19AE94u;
    {
        const bool branch_taken_0x19ae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE94u;
        // 0x19ae98: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae94) {
            ctx->pc = 0x19AC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ac70;
        }
    }
    ctx->pc = 0x19AE9Cu;
    // 0x19ae9c: 0x0  nop
    ctx->pc = 0x19ae9cu;
    // NOP
label_19aea0:
    // 0x19aea0: 0x822a0049  lb          $t2, 0x49($s1)
    ctx->pc = 0x19aea0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x19aea4: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x19aea4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x19aea8: 0x93c20002  lbu         $v0, 0x2($fp)
    ctx->pc = 0x19aea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x19aeac: 0x2508e6c6  addiu       $t0, $t0, -0x193A
    ctx->pc = 0x19aeacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960838));
    // 0x19aeb0: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19aeb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19aeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aeb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19aeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aebc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x19aebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19aec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19aec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aec4: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x19aec4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x19aec8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x19aec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x19aecc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x19aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19aed0: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x19aed0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x19aed4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x19aed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x19aed8: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x19aed8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19aedc: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19AEDCu;
    SET_GPR_U32(ctx, 31, 0x19AEE4u);
    ctx->pc = 0x19AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEDCu;
    // 0x19aee0: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19AEDCu, 0x19AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEE4u;
label_19aee4:
    // 0x19aee4: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x19aee4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19aee8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19aee8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19aeec: 0x102002e0  beqz        $at, . + 4 + (0x2E0 << 2)
    ctx->pc = 0x19AEECu;
    {
        const bool branch_taken_0x19aeec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEECu;
        // 0x19aef0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aeec) {
            ctx->pc = 0x19BA70u;
            goto label_19ba70;
        }
    }
    ctx->pc = 0x19AEF4u;
    // 0x19aef4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19aef4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19aef8:
    // 0x19aef8: 0x93c20003  lbu         $v0, 0x3($fp)
    ctx->pc = 0x19aef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x19aefc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19aefcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19af00: 0x102000c9  beqz        $at, . + 4 + (0xC9 << 2)
    ctx->pc = 0x19AF00u;
    {
        const bool branch_taken_0x19af00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF00u;
        // 0x19af04: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af00) {
            ctx->pc = 0x19B228u;
            goto label_19b228;
        }
    }
    ctx->pc = 0x19AF08u;
label_19af08:
    // 0x19af08: 0x3d31021  addu        $v0, $fp, $s3
    ctx->pc = 0x19af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x19af0c: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x19af0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x19af10: 0x822a0049  lb          $t2, 0x49($s1)
    ctx->pc = 0x19af10u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x19af14: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x19af14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19af18: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x19af18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x19af1c: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x19af1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19af20: 0x2508e6c0  addiu       $t0, $t0, -0x1940
    ctx->pc = 0x19af20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960832));
    // 0x19af24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19af24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19af28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af2c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x19af2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x19af30: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x19af30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x19af34: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x19af34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19af38: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x19af38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x19af3c: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x19af3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19af40: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x19af40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x19af44: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x19af44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x19af48: 0x84480008  lh          $t0, 0x8($v0)
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19af4c: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19AF4Cu;
    SET_GPR_U32(ctx, 31, 0x19AF54u);
    ctx->pc = 0x19AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF4Cu;
    // 0x19af50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19AF4Cu, 0x19AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF54u;
label_19af54:
    // 0x19af54: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x19af54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19af58: 0x16c200ad  bne         $s6, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x19AF58u;
    {
        const bool branch_taken_0x19af58 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF58u;
        // 0x19af5c: 0x2333821  addu        $a3, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af58) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19AF60u;
    // 0x19af60: 0x90e600e9  lbu         $a2, 0xE9($a3)
    ctx->pc = 0x19af60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 233)));
    // 0x19af64: 0x10c000aa  beqz        $a2, . + 4 + (0xAA << 2)
    ctx->pc = 0x19AF64u;
    {
        const bool branch_taken_0x19af64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af64) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19AF6Cu;
    // 0x19af6c: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x19af6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19af70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19af74: 0x10a20028  beq         $a1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x19AF74u;
    {
        const bool branch_taken_0x19af74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x19AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF74u;
        // 0x19af78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af74) {
            ctx->pc = 0x19B018u;
            goto label_19b018;
        }
    }
    ctx->pc = 0x19AF7Cu;
    // 0x19af7c: 0x10a20026  beq         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x19AF7Cu;
    {
        const bool branch_taken_0x19af7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19af7c) {
            ctx->pc = 0x19B018u;
            goto label_19b018;
        }
    }
    ctx->pc = 0x19AF84u;
    // 0x19af84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af88: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AF88u;
    {
        const bool branch_taken_0x19af88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19af88) {
            ctx->pc = 0x19AFA0u;
            goto label_19afa0;
        }
    }
    ctx->pc = 0x19AF90u;
    // 0x19af90: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AF90u;
    {
        const bool branch_taken_0x19af90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af90) {
            ctx->pc = 0x19AFA0u;
            goto label_19afa0;
        }
    }
    ctx->pc = 0x19AF98u;
    // 0x19af98: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x19AF98u;
    {
        const bool branch_taken_0x19af98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af98) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19AFA0u;
label_19afa0:
    // 0x19afa0: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19afa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19afa4: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19afa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19afa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19afa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afac: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19afacu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19afb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19afb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afb4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19afb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19afb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19afb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afbc: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x19afbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x19afc0: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19afc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19afc4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19afc8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19afcc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x19afccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19afd0: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19AFD0u;
    SET_GPR_U32(ctx, 31, 0x19AFD8u);
    ctx->pc = 0x19AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AFD0u;
    // 0x19afd4: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19AFD0u, 0x19AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFD8u;
label_19afd8:
    // 0x19afd8: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19afd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19afdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19afdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afe0: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19afe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19afe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19afe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afe8: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19afe8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19afec: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x19afecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x19aff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19aff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aff4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19aff8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19affc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x19affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19b000: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x19b000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x19b004: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19B004u;
    SET_GPR_U32(ctx, 31, 0x19B00Cu);
    ctx->pc = 0x19B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B004u;
    // 0x19b008: 0x24680026  addiu       $t0, $v1, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19B004u, 0x19B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B00Cu;
label_19b00c:
    // 0x19b00c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x19B00Cu;
    {
        const bool branch_taken_0x19b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b00c) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19B014u;
    // 0x19b014: 0x0  nop
    ctx->pc = 0x19b014u;
    // NOP
label_19b018:
    // 0x19b018: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x19b018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19b01c: 0x1860007c  blez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x19B01Cu;
    {
        const bool branch_taken_0x19b01c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x19B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B01Cu;
        // 0x19b020: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b01c) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19B024u;
    // 0x19b024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b028: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19b028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19b02c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b030: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B030u;
    {
        const bool branch_taken_0x19b030 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x19B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B030u;
        // 0x19b034: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b030) {
            ctx->pc = 0x19B040u;
            goto label_19b040;
        }
    }
    ctx->pc = 0x19B038u;
    // 0x19b038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b03c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x19b03cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_19b040:
    // 0x19b040: 0x90e200ed  lbu         $v0, 0xED($a3)
    ctx->pc = 0x19b040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 237)));
    // 0x19b044: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x19b044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x19b048: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x19B048u;
    {
        const bool branch_taken_0x19b048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B048u;
        // 0x19b04c: 0x645023  subu        $t2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b048) {
            ctx->pc = 0x19B1A0u;
            goto label_19b1a0;
        }
    }
    ctx->pc = 0x19B050u;
    // 0x19b050: 0x922200c7  lbu         $v0, 0xC7($s1)
    ctx->pc = 0x19b050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19b054: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x19b054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19b058: 0x14820031  bne         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x19B058u;
    {
        const bool branch_taken_0x19b058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b058) {
            ctx->pc = 0x19B120u;
            goto label_19b120;
        }
    }
    ctx->pc = 0x19B060u;
    // 0x19b060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b064: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B064u;
    {
        const bool branch_taken_0x19b064 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b064) {
            ctx->pc = 0x19B0A8u;
            goto label_19b0a8;
        }
    }
    ctx->pc = 0x19B06Cu;
    // 0x19b06c: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19b06cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b074: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b07c: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19b07cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b080: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b088: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b088u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b08c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19b090: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b094: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x19b094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19b098: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B098u;
    SET_GPR_U32(ctx, 31, 0x19B0A0u);
    ctx->pc = 0x19B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B098u;
    // 0x19b09c: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B098u, 0x19B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B0A0u;
label_19b0a0:
    // 0x19b0a0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x19B0A0u;
    {
        const bool branch_taken_0x19b0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b0a0) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19B0A8u;
label_19b0a8:
    // 0x19b0a8: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x19b0a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0ac: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19b0acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0b4: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b0b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b0b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0bc: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19b0bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b0c0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b0c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b0c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0c8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b0c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b0cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19b0d0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b0d4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x19b0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19b0d8: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B0D8u;
    SET_GPR_U32(ctx, 31, 0x19B0E0u);
    ctx->pc = 0x19B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B0D8u;
    // 0x19b0dc: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B0D8u, 0x19B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B0E0u;
label_19b0e0:
    // 0x19b0e0: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b0e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0e8: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b0e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b0ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0f0: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19b0f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b0f4: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x19b0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x19b0f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b0f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0fc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19b100: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b104: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x19b104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19b108: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x19b108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x19b10c: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19B10Cu;
    SET_GPR_U32(ctx, 31, 0x19B114u);
    ctx->pc = 0x19B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B10Cu;
    // 0x19b110: 0x24680026  addiu       $t0, $v1, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19B10Cu, 0x19B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B114u;
label_19b114:
    // 0x19b114: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x19B114u;
    {
        const bool branch_taken_0x19b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b114) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19B11Cu;
    // 0x19b11c: 0x0  nop
    ctx->pc = 0x19b11cu;
    // NOP
label_19b120:
    // 0x19b120: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x19b120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b124: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x19B124u;
    {
        const bool branch_taken_0x19b124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B124u;
        // 0x19b128: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b124) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19B12Cu;
    // 0x19b12c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b12cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b130: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19b130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b138: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b13c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b140: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b144: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b148: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b148u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b14c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b150: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19b150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19b154: 0x2449001e  addiu       $t1, $v0, 0x1E
    ctx->pc = 0x19b154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x19b158: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B158u;
    SET_GPR_U32(ctx, 31, 0x19B160u);
    ctx->pc = 0x19B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B158u;
    // 0x19b15c: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B158u, 0x19B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B160u;
label_19b160:
    // 0x19b160: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19b160u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b168: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b16c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b170: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19b170u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b174: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x19b174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x19b178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b17c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19b180: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b184: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x19b184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19b188: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x19b188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x19b18c: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19B18Cu;
    SET_GPR_U32(ctx, 31, 0x19B194u);
    ctx->pc = 0x19B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B18Cu;
    // 0x19b190: 0x24680026  addiu       $t0, $v1, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19B18Cu, 0x19B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B194u;
label_19b194:
    // 0x19b194: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19B194u;
    {
        const bool branch_taken_0x19b194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b194) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19B19Cu;
    // 0x19b19c: 0x0  nop
    ctx->pc = 0x19b19cu;
    // NOP
label_19b1a0:
    // 0x19b1a0: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x19b1a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1a4: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19b1a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b1a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1ac: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b1acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b1b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1b4: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19b1b4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b1b8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b1bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b1bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1c0: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b1c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b1c4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19b1c8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b1cc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x19b1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19b1d0: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B1D0u;
    SET_GPR_U32(ctx, 31, 0x19B1D8u);
    ctx->pc = 0x19B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1D0u;
    // 0x19b1d4: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B1D0u, 0x19B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1D8u;
label_19b1d8:
    // 0x19b1d8: 0x8223004c  lb          $v1, 0x4C($s1)
    ctx->pc = 0x19b1d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1e0: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b1e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b1e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1e8: 0x86280090  lh          $t0, 0x90($s1)
    ctx->pc = 0x19b1e8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b1ec: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x19b1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x19b1f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1f4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19b1f8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b1fc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x19b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19b200: 0x24490014  addiu       $t1, $v0, 0x14
    ctx->pc = 0x19b200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x19b204: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x19B204u;
    SET_GPR_U32(ctx, 31, 0x19B20Cu);
    ctx->pc = 0x19B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B204u;
    // 0x19b208: 0x24680026  addiu       $t0, $v1, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x19B204u, 0x19B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B20Cu;
label_19b20c:
    // 0x19b20c: 0x0  nop
    ctx->pc = 0x19b20cu;
    // NOP
label_19b210:
    // 0x19b210: 0x93c20003  lbu         $v0, 0x3($fp)
    ctx->pc = 0x19b210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 3)));
    // 0x19b214: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19b214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19b218: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x19b218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b21c: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x19B21Cu;
    {
        const bool branch_taken_0x19b21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b21c) {
            ctx->pc = 0x19AF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af08;
        }
    }
    ctx->pc = 0x19B224u;
    // 0x19b224: 0x0  nop
    ctx->pc = 0x19b224u;
    // NOP
label_19b228:
    // 0x19b228: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19b228u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b22c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x19b22cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19b230: 0x10200209  beqz        $at, . + 4 + (0x209 << 2)
    ctx->pc = 0x19B230u;
    {
        const bool branch_taken_0x19b230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B230u;
        // 0x19b234: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b230) {
            ctx->pc = 0x19BA58u;
            goto label_19ba58;
        }
    }
    ctx->pc = 0x19B238u;
    // 0x19b238: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19b238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b23c: 0x0  nop
    ctx->pc = 0x19b23cu;
    // NOP
label_19b240:
    // 0x19b240: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x19b240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19b244: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19b244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b248: 0x10430061  beq         $v0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x19B248u;
    {
        const bool branch_taken_0x19b248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B248u;
        // 0x19b24c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b248) {
            ctx->pc = 0x19B3D0u;
            goto label_19b3d0;
        }
    }
    ctx->pc = 0x19B250u;
    // 0x19b250: 0x1043005f  beq         $v0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x19B250u;
    {
        const bool branch_taken_0x19b250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b250) {
            ctx->pc = 0x19B3D0u;
            goto label_19b3d0;
        }
    }
    ctx->pc = 0x19B258u;
    // 0x19b258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b25c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B25Cu;
    {
        const bool branch_taken_0x19b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b25c) {
            ctx->pc = 0x19B278u;
            goto label_19b278;
        }
    }
    ctx->pc = 0x19B264u;
    // 0x19b264: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B264u;
    {
        const bool branch_taken_0x19b264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b264) {
            ctx->pc = 0x19B278u;
            goto label_19b278;
        }
    }
    ctx->pc = 0x19B26Cu;
    // 0x19b26c: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x19B26Cu;
    {
        const bool branch_taken_0x19b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b26c) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B274u;
    // 0x19b274: 0x0  nop
    ctx->pc = 0x19b274u;
    // NOP
label_19b278:
    // 0x19b278: 0x2379021  addu        $s2, $s1, $s7
    ctx->pc = 0x19b278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x19b27c: 0x2c41018  mult        $v0, $s6, $a0
    ctx->pc = 0x19b27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b280: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b284: 0x906200a6  lbu         $v0, 0xA6($v1)
    ctx->pc = 0x19b284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 166)));
    // 0x19b288: 0x104001ed  beqz        $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x19B288u;
    {
        const bool branch_taken_0x19b288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b288) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B290u;
    // 0x19b290: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b294: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b298: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19B298u;
    {
        const bool branch_taken_0x19b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b298) {
            ctx->pc = 0x19B2D8u;
            goto label_19b2d8;
        }
    }
    ctx->pc = 0x19B2A0u;
    // 0x19b2a0: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2a8: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b2a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b2ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2b0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b2b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b2b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2b8: 0x240a0022  addiu       $t2, $zero, 0x22
    ctx->pc = 0x19b2b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b2bc: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b2bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b2c0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b2c4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b2c8: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b2cc: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B2CCu;
    SET_GPR_U32(ctx, 31, 0x19B2D4u);
    ctx->pc = 0x19B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B2CCu;
    // 0x19b2d0: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B2CCu, 0x19B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2D4u;
label_19b2d4:
    // 0x19b2d4: 0x0  nop
    ctx->pc = 0x19b2d4u;
    // NOP
label_19b2d8:
    // 0x19b2d8: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b2d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b2dc: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b2e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b2e4: 0x8042004f  lb          $v0, 0x4F($v0)
    ctx->pc = 0x19b2e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x19b2e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b2ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B2ECu;
    {
        const bool branch_taken_0x19b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b2ec) {
            ctx->pc = 0x19B328u;
            goto label_19b328;
        }
    }
    ctx->pc = 0x19B2F4u;
    // 0x19b2f4: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b2f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b2fc: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b2fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b304: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b30c: 0x240a0022  addiu       $t2, $zero, 0x22
    ctx->pc = 0x19b30cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b310: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b310u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b314: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b318: 0x734021  addu        $t0, $v1, $s3
    ctx->pc = 0x19b318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b31c: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B31Cu;
    SET_GPR_U32(ctx, 31, 0x19B324u);
    ctx->pc = 0x19B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B31Cu;
    // 0x19b320: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B31Cu, 0x19B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B324u;
label_19b324:
    // 0x19b324: 0x0  nop
    ctx->pc = 0x19b324u;
    // NOP
label_19b328:
    // 0x19b328: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b32c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b32cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b330: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b334: 0x8042004f  lb          $v0, 0x4F($v0)
    ctx->pc = 0x19b334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x19b338: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19b338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19b33c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B33Cu;
    {
        const bool branch_taken_0x19b33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b33c) {
            ctx->pc = 0x19B378u;
            goto label_19b378;
        }
    }
    ctx->pc = 0x19B344u;
    // 0x19b344: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b34c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b34cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b354: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b35c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19b35cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b360: 0x240b0022  addiu       $t3, $zero, 0x22
    ctx->pc = 0x19b360u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b364: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b368: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b36c: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B36Cu;
    SET_GPR_U32(ctx, 31, 0x19B374u);
    ctx->pc = 0x19B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B36Cu;
    // 0x19b370: 0x544821  addu        $t1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B36Cu, 0x19B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B374u;
label_19b374:
    // 0x19b374: 0x0  nop
    ctx->pc = 0x19b374u;
    // NOP
label_19b378:
    // 0x19b378: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b37c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b380: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b384: 0x8042004f  lb          $v0, 0x4F($v0)
    ctx->pc = 0x19b384u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x19b388: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19b388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19b38c: 0x104001ac  beqz        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x19B38Cu;
    {
        const bool branch_taken_0x19b38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b38c) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B394u;
    // 0x19b394: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b39c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b39cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b3a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3a4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b3a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b3ac: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19b3acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b3b0: 0x240b0022  addiu       $t3, $zero, 0x22
    ctx->pc = 0x19b3b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b3b4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b3b8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b3bc: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b3c0: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B3C0u;
    SET_GPR_U32(ctx, 31, 0x19B3C8u);
    ctx->pc = 0x19B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B3C0u;
    // 0x19b3c4: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B3C0u, 0x19B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3C8u;
label_19b3c8:
    // 0x19b3c8: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x19B3C8u;
    {
        const bool branch_taken_0x19b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3c8) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B3D0u;
label_19b3d0:
    // 0x19b3d0: 0x8626000c  lh          $a2, 0xC($s1)
    ctx->pc = 0x19b3d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19b3d4: 0x18c0019a  blez        $a2, . + 4 + (0x19A << 2)
    ctx->pc = 0x19B3D4u;
    {
        const bool branch_taken_0x19b3d4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x19B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B3D4u;
        // 0x19b3d8: 0x2c41818  mult        $v1, $s6, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b3d4) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B3DCu;
    // 0x19b3dc: 0x2379021  addu        $s2, $s1, $s7
    ctx->pc = 0x19b3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x19b3e0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x19b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x19b3e4: 0x906700a6  lbu         $a3, 0xA6($v1)
    ctx->pc = 0x19b3e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 166)));
    // 0x19b3e8: 0x10e0013d  beqz        $a3, . + 4 + (0x13D << 2)
    ctx->pc = 0x19B3E8u;
    {
        const bool branch_taken_0x19b3e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3e8) {
            ctx->pc = 0x19B8E0u;
            goto label_19b8e0;
        }
    }
    ctx->pc = 0x19B3F0u;
    // 0x19b3f0: 0x906400b6  lbu         $a0, 0xB6($v1)
    ctx->pc = 0x19b3f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 182)));
    // 0x19b3f4: 0x1480013a  bnez        $a0, . + 4 + (0x13A << 2)
    ctx->pc = 0x19B3F4u;
    {
        const bool branch_taken_0x19b3f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b3f4) {
            ctx->pc = 0x19B8E0u;
            goto label_19b8e0;
        }
    }
    ctx->pc = 0x19B3FCu;
    // 0x19b3fc: 0x922400c7  lbu         $a0, 0xC7($s1)
    ctx->pc = 0x19b3fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19b400: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x19b400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x19b404: 0x14a40136  bne         $a1, $a0, . + 4 + (0x136 << 2)
    ctx->pc = 0x19B404u;
    {
        const bool branch_taken_0x19b404 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x19B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B404u;
        // 0x19b408: 0x62140  sll         $a0, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b404) {
            ctx->pc = 0x19B8E0u;
            goto label_19b8e0;
        }
    }
    ctx->pc = 0x19B40Cu;
    // 0x19b40c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x19b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19b410: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B410u;
    {
        const bool branch_taken_0x19b410 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x19B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B410u;
        // 0x19b414: 0x43043  sra         $a2, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b410) {
            ctx->pc = 0x19B420u;
            goto label_19b420;
        }
    }
    ctx->pc = 0x19B418u;
    // 0x19b418: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19b41c: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x19b41cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
label_19b420:
    // 0x19b420: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x19b420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b424: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19b424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b428: 0x10440069  beq         $v0, $a0, . + 4 + (0x69 << 2)
    ctx->pc = 0x19B428u;
    {
        const bool branch_taken_0x19b428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x19B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B428u;
        // 0x19b42c: 0xa6a823  subu        $s5, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b428) {
            ctx->pc = 0x19B5D0u;
            goto label_19b5d0;
        }
    }
    ctx->pc = 0x19B430u;
    // 0x19b430: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19b430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b434: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B434u;
    {
        const bool branch_taken_0x19b434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19b434) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19B43Cu;
    // 0x19b43c: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x19B43Cu;
    {
        const bool branch_taken_0x19b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b43c) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B444u;
    // 0x19b444: 0x0  nop
    ctx->pc = 0x19b444u;
    // NOP
label_19b448:
    // 0x19b448: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b44c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b450: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19B450u;
    {
        const bool branch_taken_0x19b450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b450) {
            ctx->pc = 0x19B4A0u;
            goto label_19b4a0;
        }
    }
    ctx->pc = 0x19B458u;
    // 0x19b458: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b45c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b460: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19B460u;
    {
        const bool branch_taken_0x19b460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b460) {
            ctx->pc = 0x19B4A0u;
            goto label_19b4a0;
        }
    }
    ctx->pc = 0x19B468u;
    // 0x19b468: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b468u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b470: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b478: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b47c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b480: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19b480u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b484: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b484u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b488: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b48c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x19b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x19b490: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b494: 0x754023  subu        $t0, $v1, $s5
    ctx->pc = 0x19b494u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x19b498: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B498u;
    SET_GPR_U32(ctx, 31, 0x19B4A0u);
    ctx->pc = 0x19B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B498u;
    // 0x19b49c: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B498u, 0x19B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4A0u;
label_19b4a0:
    // 0x19b4a0: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b4a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b4a4: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b4a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b4a8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b4ac: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b4acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b4b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b4b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B4B4u;
    {
        const bool branch_taken_0x19b4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b4b4) {
            ctx->pc = 0x19B500u;
            goto label_19b500;
        }
    }
    ctx->pc = 0x19B4BCu;
    // 0x19b4bc: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b4bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b4c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b4c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B4C4u;
    {
        const bool branch_taken_0x19b4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b4c4) {
            ctx->pc = 0x19B500u;
            goto label_19b500;
        }
    }
    ctx->pc = 0x19B4CCu;
    // 0x19b4cc: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b4d4: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b4d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b4d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b4dc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b4e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b4e4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19b4e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b4e8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b4e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b4ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b4f0: 0x734021  addu        $t0, $v1, $s3
    ctx->pc = 0x19b4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b4f4: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B4F4u;
    SET_GPR_U32(ctx, 31, 0x19B4FCu);
    ctx->pc = 0x19B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B4F4u;
    // 0x19b4f8: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B4F4u, 0x19B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4FCu;
label_19b4fc:
    // 0x19b4fc: 0x0  nop
    ctx->pc = 0x19b4fcu;
    // NOP
label_19b500:
    // 0x19b500: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b504: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b508: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b50c: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b50cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b510: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19b514: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B514u;
    {
        const bool branch_taken_0x19b514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b514) {
            ctx->pc = 0x19B560u;
            goto label_19b560;
        }
    }
    ctx->pc = 0x19B51Cu;
    // 0x19b51c: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b520: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19b524: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B524u;
    {
        const bool branch_taken_0x19b524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b524) {
            ctx->pc = 0x19B560u;
            goto label_19b560;
        }
    }
    ctx->pc = 0x19B52Cu;
    // 0x19b52c: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b52cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b534: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b53c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b540: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b544: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19b544u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b548: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x19b548u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b54c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b550: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b554: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B554u;
    SET_GPR_U32(ctx, 31, 0x19B55Cu);
    ctx->pc = 0x19B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B554u;
    // 0x19b558: 0x544821  addu        $t1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B554u, 0x19B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B55Cu;
label_19b55c:
    // 0x19b55c: 0x0  nop
    ctx->pc = 0x19b55cu;
    // NOP
label_19b560:
    // 0x19b560: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b560u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b564: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b568: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b56c: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b56cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b570: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19b570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19b574: 0x10400132  beqz        $v0, . + 4 + (0x132 << 2)
    ctx->pc = 0x19B574u;
    {
        const bool branch_taken_0x19b574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b574) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B57Cu;
    // 0x19b57c: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b580: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19b580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19b584: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x19B584u;
    {
        const bool branch_taken_0x19b584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b584) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B58Cu;
    // 0x19b58c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b58cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b594: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b59c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b5a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b5a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5a4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19b5a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b5a8: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x19b5a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b5b0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b5b4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x19b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x19b5b8: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b5bc: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B5BCu;
    SET_GPR_U32(ctx, 31, 0x19B5C4u);
    ctx->pc = 0x19B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B5BCu;
    // 0x19b5c0: 0x554823  subu        $t1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B5BCu, 0x19B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5C4u;
label_19b5c4:
    // 0x19b5c4: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x19B5C4u;
    {
        const bool branch_taken_0x19b5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5c4) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B5CCu;
    // 0x19b5cc: 0x0  nop
    ctx->pc = 0x19b5ccu;
    // NOP
label_19b5d0:
    // 0x19b5d0: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b5d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b5d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b5d8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19B5D8u;
    {
        const bool branch_taken_0x19b5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5d8) {
            ctx->pc = 0x19B628u;
            goto label_19b628;
        }
    }
    ctx->pc = 0x19B5E0u;
    // 0x19b5e0: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b5e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b5e8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19B5E8u;
    {
        const bool branch_taken_0x19b5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b5e8) {
            ctx->pc = 0x19B628u;
            goto label_19b628;
        }
    }
    ctx->pc = 0x19B5F0u;
    // 0x19b5f0: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b5f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b5f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5f8: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b5fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b600: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b608: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19b608u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b60c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b60cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b610: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b614: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b618: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b61c: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B61Cu;
    SET_GPR_U32(ctx, 31, 0x19B624u);
    ctx->pc = 0x19B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B61Cu;
    // 0x19b620: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B61Cu, 0x19B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B624u;
label_19b624:
    // 0x19b624: 0x0  nop
    ctx->pc = 0x19b624u;
    // NOP
label_19b628:
    // 0x19b628: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b62c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b62cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b630: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b634: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b638: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b63c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19B63Cu;
    {
        const bool branch_taken_0x19b63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b63c) {
            ctx->pc = 0x19B690u;
            goto label_19b690;
        }
    }
    ctx->pc = 0x19B644u;
    // 0x19b644: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b648: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b64c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B64Cu;
    {
        const bool branch_taken_0x19b64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b64c) {
            ctx->pc = 0x19B690u;
            goto label_19b690;
        }
    }
    ctx->pc = 0x19B654u;
    // 0x19b654: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b65c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b664: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b66c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19b66cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b670: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b670u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b674: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b678: 0x24630022  addiu       $v1, $v1, 0x22
    ctx->pc = 0x19b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 34));
    // 0x19b67c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b680: 0x754023  subu        $t0, $v1, $s5
    ctx->pc = 0x19b680u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x19b684: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B684u;
    SET_GPR_U32(ctx, 31, 0x19B68Cu);
    ctx->pc = 0x19B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B684u;
    // 0x19b688: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B684u, 0x19B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B68Cu;
label_19b68c:
    // 0x19b68c: 0x0  nop
    ctx->pc = 0x19b68cu;
    // NOP
label_19b690:
    // 0x19b690: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b690u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b694: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b698: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b69c: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b69cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b6a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19b6a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19B6A4u;
    {
        const bool branch_taken_0x19b6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6a4) {
            ctx->pc = 0x19B6F8u;
            goto label_19b6f8;
        }
    }
    ctx->pc = 0x19B6ACu;
    // 0x19b6ac: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b6b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19b6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19b6b4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B6B4u;
    {
        const bool branch_taken_0x19b6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b6b4) {
            ctx->pc = 0x19B6F8u;
            goto label_19b6f8;
        }
    }
    ctx->pc = 0x19B6BCu;
    // 0x19b6bc: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b6bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6c4: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b6c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b6c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6cc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6d4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19b6d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b6d8: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x19b6d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b6e0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b6e4: 0x24420022  addiu       $v0, $v0, 0x22
    ctx->pc = 0x19b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
    // 0x19b6e8: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b6ec: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B6ECu;
    SET_GPR_U32(ctx, 31, 0x19B6F4u);
    ctx->pc = 0x19B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B6ECu;
    // 0x19b6f0: 0x554823  subu        $t1, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B6ECu, 0x19B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B6F4u;
label_19b6f4:
    // 0x19b6f4: 0x0  nop
    ctx->pc = 0x19b6f4u;
    // NOP
label_19b6f8:
    // 0x19b6f8: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b6f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b6fc: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b700: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b704: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b704u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b708: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19b70c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B70Cu;
    {
        const bool branch_taken_0x19b70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b70c) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B714u;
    // 0x19b714: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b718: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19b71c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B71Cu;
    {
        const bool branch_taken_0x19b71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b71c) {
            ctx->pc = 0x19B758u;
            goto label_19b758;
        }
    }
    ctx->pc = 0x19B724u;
    // 0x19b724: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b728: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x19b728u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b72c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b72cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b738: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b73c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b740: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19b740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b744: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b748: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b74c: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b750: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B750u;
    SET_GPR_U32(ctx, 31, 0x19B758u);
    ctx->pc = 0x19B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B750u;
    // 0x19b754: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B750u, 0x19B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B758u;
label_19b758:
    // 0x19b758: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b758u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b75c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b760: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b764: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b764u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b76c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B76Cu;
    {
        const bool branch_taken_0x19b76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b76c) {
            ctx->pc = 0x19B7B8u;
            goto label_19b7b8;
        }
    }
    ctx->pc = 0x19B774u;
    // 0x19b774: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b778: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b77c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B77Cu;
    {
        const bool branch_taken_0x19b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b77c) {
            ctx->pc = 0x19B7B8u;
            goto label_19b7b8;
        }
    }
    ctx->pc = 0x19B784u;
    // 0x19b784: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b78c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b78cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b790: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b794: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b79c: 0x240a0022  addiu       $t2, $zero, 0x22
    ctx->pc = 0x19b79cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b7a0: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b7a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b7a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b7a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b7ac: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b7acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b7b0: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B7B0u;
    SET_GPR_U32(ctx, 31, 0x19B7B8u);
    ctx->pc = 0x19B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7B0u;
    // 0x19b7b4: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B7B0u, 0x19B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7B8u;
label_19b7b8:
    // 0x19b7b8: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b7b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b7bc: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b7c0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b7c4: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b7c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b7c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b7cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B7CCu;
    {
        const bool branch_taken_0x19b7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b7cc) {
            ctx->pc = 0x19B818u;
            goto label_19b818;
        }
    }
    ctx->pc = 0x19B7D4u;
    // 0x19b7d4: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b7d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b7dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B7DCu;
    {
        const bool branch_taken_0x19b7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b7dc) {
            ctx->pc = 0x19B818u;
            goto label_19b818;
        }
    }
    ctx->pc = 0x19B7E4u;
    // 0x19b7e4: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b7e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7ec: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b7ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b7f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7f4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b7f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b7f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7fc: 0x240a0022  addiu       $t2, $zero, 0x22
    ctx->pc = 0x19b7fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b800: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b800u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b804: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b808: 0x734021  addu        $t0, $v1, $s3
    ctx->pc = 0x19b808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b80c: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B80Cu;
    SET_GPR_U32(ctx, 31, 0x19B814u);
    ctx->pc = 0x19B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B80Cu;
    // 0x19b810: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B80Cu, 0x19B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B814u;
label_19b814:
    // 0x19b814: 0x0  nop
    ctx->pc = 0x19b814u;
    // NOP
label_19b818:
    // 0x19b818: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b818u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b81c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b81cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b820: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b824: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b824u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b828: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19b828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19b82c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B82Cu;
    {
        const bool branch_taken_0x19b82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b82c) {
            ctx->pc = 0x19B878u;
            goto label_19b878;
        }
    }
    ctx->pc = 0x19B834u;
    // 0x19b834: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b838: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19b838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19b83c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B83Cu;
    {
        const bool branch_taken_0x19b83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b83c) {
            ctx->pc = 0x19B878u;
            goto label_19b878;
        }
    }
    ctx->pc = 0x19B844u;
    // 0x19b844: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b84c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b84cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b854: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b85c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19b85cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b860: 0x240b0022  addiu       $t3, $zero, 0x22
    ctx->pc = 0x19b860u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b864: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b868: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b86c: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B86Cu;
    SET_GPR_U32(ctx, 31, 0x19B874u);
    ctx->pc = 0x19B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B86Cu;
    // 0x19b870: 0x544821  addu        $t1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B86Cu, 0x19B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B874u;
label_19b874:
    // 0x19b874: 0x0  nop
    ctx->pc = 0x19b874u;
    // NOP
label_19b878:
    // 0x19b878: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b87c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b880: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x19b880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b884: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b888: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19b888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19b88c: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x19B88Cu;
    {
        const bool branch_taken_0x19b88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b88c) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B894u;
    // 0x19b894: 0x906200d9  lbu         $v0, 0xD9($v1)
    ctx->pc = 0x19b894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 217)));
    // 0x19b898: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19b898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19b89c: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x19B89Cu;
    {
        const bool branch_taken_0x19b89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b89c) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B8A4u;
    // 0x19b8a4: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b8a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b8a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8ac: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b8acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b8b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8b4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b8b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8bc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19b8bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b8c0: 0x240b0022  addiu       $t3, $zero, 0x22
    ctx->pc = 0x19b8c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b8c4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b8c8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b8cc: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b8d0: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B8D0u;
    SET_GPR_U32(ctx, 31, 0x19B8D8u);
    ctx->pc = 0x19B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B8D0u;
    // 0x19b8d4: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B8D0u, 0x19B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8D8u;
label_19b8d8:
    // 0x19b8d8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x19B8D8u;
    {
        const bool branch_taken_0x19b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b8d8) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B8E0u;
label_19b8e0:
    // 0x19b8e0: 0x10e00057  beqz        $a3, . + 4 + (0x57 << 2)
    ctx->pc = 0x19B8E0u;
    {
        const bool branch_taken_0x19b8e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b8e0) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B8E8u;
    // 0x19b8e8: 0x906200b6  lbu         $v0, 0xB6($v1)
    ctx->pc = 0x19b8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 182)));
    // 0x19b8ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B8ECu;
    {
        const bool branch_taken_0x19b8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b8ec) {
            ctx->pc = 0x19B908u;
            goto label_19b908;
        }
    }
    ctx->pc = 0x19B8F4u;
    // 0x19b8f4: 0x922200c7  lbu         $v0, 0xC7($s1)
    ctx->pc = 0x19b8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 199)));
    // 0x19b8f8: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x19b8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x19b8fc: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x19b8fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b900: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x19B900u;
    {
        const bool branch_taken_0x19b900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b900) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19B908u;
label_19b908:
    // 0x19b908: 0x8062004f  lb          $v0, 0x4F($v1)
    ctx->pc = 0x19b908u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x19b90c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b910: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19B910u;
    {
        const bool branch_taken_0x19b910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b910) {
            ctx->pc = 0x19B950u;
            goto label_19b950;
        }
    }
    ctx->pc = 0x19B918u;
    // 0x19b918: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b918u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b91c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b920: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b928: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b930: 0x240a0022  addiu       $t2, $zero, 0x22
    ctx->pc = 0x19b930u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b934: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b934u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b938: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b93c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b940: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b944: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B944u;
    SET_GPR_U32(ctx, 31, 0x19B94Cu);
    ctx->pc = 0x19B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B944u;
    // 0x19b948: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B944u, 0x19B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B94Cu;
label_19b94c:
    // 0x19b94c: 0x0  nop
    ctx->pc = 0x19b94cu;
    // NOP
label_19b950:
    // 0x19b950: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b954: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b958: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b95c: 0x8042004f  lb          $v0, 0x4F($v0)
    ctx->pc = 0x19b95cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x19b960: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b964: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B964u;
    {
        const bool branch_taken_0x19b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b964) {
            ctx->pc = 0x19B9A0u;
            goto label_19b9a0;
        }
    }
    ctx->pc = 0x19B96Cu;
    // 0x19b96c: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b96cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b974: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b974u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b97c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b984: 0x240a0022  addiu       $t2, $zero, 0x22
    ctx->pc = 0x19b984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b988: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x19b988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b98c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19b990: 0x734021  addu        $t0, $v1, $s3
    ctx->pc = 0x19b990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b994: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B994u;
    SET_GPR_U32(ctx, 31, 0x19B99Cu);
    ctx->pc = 0x19B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B994u;
    // 0x19b998: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B994u, 0x19B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B99Cu;
label_19b99c:
    // 0x19b99c: 0x0  nop
    ctx->pc = 0x19b99cu;
    // NOP
label_19b9a0:
    // 0x19b9a0: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b9a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b9a4: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b9a8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b9ac: 0x8042004f  lb          $v0, 0x4F($v0)
    ctx->pc = 0x19b9acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x19b9b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19b9b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B9B4u;
    {
        const bool branch_taken_0x19b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9b4) {
            ctx->pc = 0x19B9F0u;
            goto label_19b9f0;
        }
    }
    ctx->pc = 0x19B9BCu;
    // 0x19b9bc: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19b9bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19b9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9c4: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19b9c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19b9c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19b9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9cc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19b9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19b9d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19b9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9d4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19b9d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b9d8: 0x240b0022  addiu       $t3, $zero, 0x22
    ctx->pc = 0x19b9d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19b9dc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19b9e0: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19b9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19b9e4: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19B9E4u;
    SET_GPR_U32(ctx, 31, 0x19B9ECu);
    ctx->pc = 0x19B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B9E4u;
    // 0x19b9e8: 0x544821  addu        $t1, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19B9E4u, 0x19B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9ECu;
label_19b9ec:
    // 0x19b9ec: 0x0  nop
    ctx->pc = 0x19b9ecu;
    // NOP
label_19b9f0:
    // 0x19b9f0: 0x8222004c  lb          $v0, 0x4C($s1)
    ctx->pc = 0x19b9f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19b9f4: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x19b9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b9f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x19b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19b9fc: 0x8042004f  lb          $v0, 0x4F($v0)
    ctx->pc = 0x19b9fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x19ba00: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19ba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19ba04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19BA04u;
    {
        const bool branch_taken_0x19ba04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba04) {
            ctx->pc = 0x19BA40u;
            goto label_19ba40;
        }
    }
    ctx->pc = 0x19BA0Cu;
    // 0x19ba0c: 0x86230090  lh          $v1, 0x90($s1)
    ctx->pc = 0x19ba0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19ba10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba14: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x19ba14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19ba18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ba18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba1c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19ba1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19ba20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ba20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba24: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x19ba24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19ba28: 0x240b0022  addiu       $t3, $zero, 0x22
    ctx->pc = 0x19ba28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19ba2c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x19ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x19ba30: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x19ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19ba34: 0x2468001e  addiu       $t0, $v1, 0x1E
    ctx->pc = 0x19ba34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x19ba38: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19BA38u;
    SET_GPR_U32(ctx, 31, 0x19BA40u);
    ctx->pc = 0x19BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA38u;
    // 0x19ba3c: 0x2449001e  addiu       $t1, $v0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19BA38u, 0x19BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA40u;
label_19ba40:
    // 0x19ba40: 0x8224004c  lb          $a0, 0x4C($s1)
    ctx->pc = 0x19ba40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x19ba44: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x19ba44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x19ba48: 0x2e4102a  slt         $v0, $s7, $a0
    ctx->pc = 0x19ba48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19ba4c: 0x1440fdfc  bnez        $v0, . + 4 + (-0x204 << 2)
    ctx->pc = 0x19BA4Cu;
    {
        const bool branch_taken_0x19ba4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA4Cu;
        // 0x19ba50: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba4c) {
            ctx->pc = 0x19B240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b240;
        }
    }
    ctx->pc = 0x19BA54u;
    // 0x19ba54: 0x0  nop
    ctx->pc = 0x19ba54u;
    // NOP
label_19ba58:
    // 0x19ba58: 0x8222004d  lb          $v0, 0x4D($s1)
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x19ba5c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19ba5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x19ba60: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x19ba60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19ba64: 0x1440fd24  bnez        $v0, . + 4 + (-0x2DC << 2)
    ctx->pc = 0x19BA64u;
    {
        const bool branch_taken_0x19ba64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA64u;
        // 0x19ba68: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba64) {
            ctx->pc = 0x19AEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aef8;
        }
    }
    ctx->pc = 0x19BA6Cu;
    // 0x19ba6c: 0x0  nop
    ctx->pc = 0x19ba6cu;
    // NOP
label_19ba70:
    // 0x19ba70: 0x82220048  lb          $v0, 0x48($s1)
    ctx->pc = 0x19ba70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x19ba74: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19ba74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ba78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ba7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ba80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba84: 0x2408008a  addiu       $t0, $zero, 0x8A
    ctx->pc = 0x19ba84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x19ba88: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x19ba88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x19ba8c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x19ba8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba90: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19BA90u;
    SET_GPR_U32(ctx, 31, 0x19BA98u);
    ctx->pc = 0x19BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA90u;
    // 0x19ba94: 0x2446000f  addiu       $a2, $v0, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19BA90u, 0x19BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA98u;
label_19ba98:
    // 0x19ba98: 0x8228004a  lb          $t0, 0x4A($s1)
    ctx->pc = 0x19ba98u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x19ba9c: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19ba9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19baa0: 0x8222004b  lb          $v0, 0x4B($s1)
    ctx->pc = 0x19baa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x19baa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19baa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19baa8: 0x86290090  lh          $t1, 0x90($s1)
    ctx->pc = 0x19baa8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x19baac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bab0: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x19bab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x19bab4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x19bab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x19bab8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19bab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19babc: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x19babcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bac0: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x19bac0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x19bac4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19bac8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x19bac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x19bacc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19bad0: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x19bad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x19bad4: 0xc0670cc  jal         func_19C330
    ctx->pc = 0x19BAD4u;
    SET_GPR_U32(ctx, 31, 0x19BADCu);
    ctx->pc = 0x19BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BAD4u;
    // 0x19bad8: 0x2449fffe  addiu       $t1, $v0, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C330u, 0x19BAD4u, 0x19BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BADCu;
label_19badc:
    // 0x19badc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19badcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bae0:
    // 0x19bae0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19bae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19bae4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x19bae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19bae8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x19bae8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19baec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19baecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19baf0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19baf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19baf4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19baf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19baf8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19baf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bafc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19bafcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bb00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19bb00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bb04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19bb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bb08: 0x3e00008  jr          $ra
    ctx->pc = 0x19BB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB08u;
        // 0x19bb0c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BB10u;
}

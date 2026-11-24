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

// Function: sub_00182390
// Address: 0x182390 - 0x18281c
void sub_00182390_0x182390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182390_0x182390");
#endif

    switch (ctx->pc) {
        case 0x182410u: goto label_182410;
        case 0x18251cu: goto label_18251c;
        case 0x18252cu: goto label_18252c;
        default: break;
    }

    ctx->pc = 0x182390u;

    // 0x182390: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x182390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x182394: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x182394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x182398: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x182398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18239c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1823a0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1823a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1823a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1823a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1823a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1823ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1823acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1823b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1823b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1823b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1823b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1823b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1823b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1823bc: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x1823bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1823c0: 0x8c940048  lw          $s4, 0x48($a0)
    ctx->pc = 0x1823c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1823c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1823c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1823c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1823C8u;
    {
        const bool branch_taken_0x1823c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1823CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823C8u;
        // 0x1823cc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823c8) {
            ctx->pc = 0x1823D8u;
            goto label_1823d8;
        }
    }
    ctx->pc = 0x1823D0u;
    // 0x1823d0: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x1823D0u;
    {
        const bool branch_taken_0x1823d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823D0u;
        // 0x1823d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823d0) {
            ctx->pc = 0x1827F0u;
            goto label_1827f0;
        }
    }
    ctx->pc = 0x1823D8u;
label_1823d8:
    // 0x1823d8: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x1823d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x1823dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1823DCu;
    {
        const bool branch_taken_0x1823dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1823E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823DCu;
        // 0x1823e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823dc) {
            ctx->pc = 0x1823F0u;
            goto label_1823f0;
        }
    }
    ctx->pc = 0x1823E4u;
    // 0x1823e4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x1823E4u;
    {
        const bool branch_taken_0x1823e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823e4) {
            ctx->pc = 0x1827F0u;
            goto label_1827f0;
        }
    }
    ctx->pc = 0x1823ECu;
    // 0x1823ec: 0x0  nop
    ctx->pc = 0x1823ecu;
    // NOP
label_1823f0:
    // 0x1823f0: 0x92a200cc  lbu         $v0, 0xCC($s5)
    ctx->pc = 0x1823f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x1823f4: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1823f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1823f8: 0x102000dd  beqz        $at, . + 4 + (0xDD << 2)
    ctx->pc = 0x1823F8u;
    {
        const bool branch_taken_0x1823f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823F8u;
        // 0x1823fc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823f8) {
            ctx->pc = 0x182770u;
            goto label_182770;
        }
    }
    ctx->pc = 0x182400u;
    // 0x182400: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x182400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182404: 0x27b20094  addiu       $s2, $sp, 0x94
    ctx->pc = 0x182404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x182408: 0x27b10098  addiu       $s1, $sp, 0x98
    ctx->pc = 0x182408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x18240c: 0x27b0009c  addiu       $s0, $sp, 0x9C
    ctx->pc = 0x18240cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_182410:
    // 0x182410: 0x8ea3009c  lw          $v1, 0x9C($s5)
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x182414: 0x8ea40098  lw          $a0, 0x98($s5)
    ctx->pc = 0x182414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x182418: 0x9682006a  lhu         $v0, 0x6A($s4)
    ctx->pc = 0x182418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 106)));
    // 0x18241c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x18241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x182420: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x182420u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182424: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x182424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x182428: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x182428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18242c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x18242cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182430: 0x142000c9  bnez        $at, . + 4 + (0xC9 << 2)
    ctx->pc = 0x182430u;
    {
        const bool branch_taken_0x182430 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x182434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182430u;
        // 0x182434: 0x90840000  lbu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182430) {
            ctx->pc = 0x182758u;
            goto label_182758;
        }
    }
    ctx->pc = 0x182438u;
    // 0x182438: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x182438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18243c: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x18243cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x182440: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x182440u;
    {
        const bool branch_taken_0x182440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182440) {
            ctx->pc = 0x182478u;
            goto label_182478;
        }
    }
    ctx->pc = 0x182448u;
    // 0x182448: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x182448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x18244c: 0x108000c2  beqz        $a0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x18244Cu;
    {
        const bool branch_taken_0x18244c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18244Cu;
        // 0x182450: 0x328c0  sll         $a1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18244c) {
            ctx->pc = 0x182758u;
            goto label_182758;
        }
    }
    ctx->pc = 0x182454u;
    // 0x182454: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x182454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x182458: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x182458u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18245c: 0x92a500cd  lbu         $a1, 0xCD($s5)
    ctx->pc = 0x18245cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 205)));
    // 0x182460: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x182460u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x182464: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x182464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x182468: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x182468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18246c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x18246cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x182470: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182470u;
    {
        const bool branch_taken_0x182470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182470u;
        // 0x182474: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182470) {
            ctx->pc = 0x182490u;
            goto label_182490;
        }
    }
    ctx->pc = 0x182478u;
label_182478:
    // 0x182478: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x182478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18247c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x18247cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x182480: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x182480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x182484: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x182484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x182488: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x182488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18248c: 0x0  nop
    ctx->pc = 0x18248cu;
    // NOP
label_182490:
    // 0x182490: 0x948500c6  lhu         $a1, 0xC6($a0)
    ctx->pc = 0x182490u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x182494: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x182494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x182498: 0x14a000af  bnez        $a1, . + 4 + (0xAF << 2)
    ctx->pc = 0x182498u;
    {
        const bool branch_taken_0x182498 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x18249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182498u;
        // 0x18249c: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182498) {
            ctx->pc = 0x182758u;
            goto label_182758;
        }
    }
    ctx->pc = 0x1824A0u;
    // 0x1824a0: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1824A0u;
    {
        const bool branch_taken_0x1824a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1824a0) {
            ctx->pc = 0x182538u;
            goto label_182538;
        }
    }
    ctx->pc = 0x1824A8u;
    // 0x1824a8: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x1824a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x1824ac: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1824acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1824b0: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1824B0u;
    {
        const bool branch_taken_0x1824b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1824b0) {
            ctx->pc = 0x182758u;
            goto label_182758;
        }
    }
    ctx->pc = 0x1824B8u;
    // 0x1824b8: 0x8ea200a0  lw          $v0, 0xA0($s5)
    ctx->pc = 0x1824b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x1824bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1824bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1824c0: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x1824c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x1824c4: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x1824c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1824c8: 0x8ea80094  lw          $t0, 0x94($s5)
    ctx->pc = 0x1824c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x1824cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1824ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1824d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1824d4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1824d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1824d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1824d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1824dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1824dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1824e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1824e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1824e4: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x1824e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1824e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1824e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1824ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1824ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1824f0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1824f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1824f4: 0xe6a000d0  swc1        $f0, 0xD0($s5)
    ctx->pc = 0x1824f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 208), bits); }
    // 0x1824f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1824f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1824fc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1824fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x182500: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x182500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x182504: 0xe6a000d4  swc1        $f0, 0xD4($s5)
    ctx->pc = 0x182504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
    // 0x182508: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x182508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18250c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x18250cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x182510: 0xe6a000d8  swc1        $f0, 0xD8($s5)
    ctx->pc = 0x182510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 216), bits); }
    // 0x182514: 0xc041442  jal         func_105108
    ctx->pc = 0x182514u;
    SET_GPR_U32(ctx, 31, 0x18251Cu);
    ctx->pc = 0x182518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182514u;
    // 0x182518: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x182514u, 0x18251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18251Cu;
label_18251c:
    // 0x18251c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x18251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182520: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x182520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182524: 0xc0414ca  jal         func_105328
    ctx->pc = 0x182524u;
    SET_GPR_U32(ctx, 31, 0x18252Cu);
    ctx->pc = 0x182528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182524u;
    // 0x182528: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x182524u, 0x18252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18252Cu;
label_18252c:
    // 0x18252c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x18252Cu;
    {
        const bool branch_taken_0x18252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18252c) {
            ctx->pc = 0x182758u;
            goto label_182758;
        }
    }
    ctx->pc = 0x182534u;
    // 0x182534: 0x0  nop
    ctx->pc = 0x182534u;
    // NOP
label_182538:
    // 0x182538: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x182538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18253c: 0x10a00070  beqz        $a1, . + 4 + (0x70 << 2)
    ctx->pc = 0x18253Cu;
    {
        const bool branch_taken_0x18253c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18253c) {
            ctx->pc = 0x182700u;
            goto label_182700;
        }
    }
    ctx->pc = 0x182544u;
    // 0x182544: 0x8ea700a0  lw          $a3, 0xA0($s5)
    ctx->pc = 0x182544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x182548: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x182548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x18254c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18254cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x182550: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x182550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x182554: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x182554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182558: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x182558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x18255c: 0x8ea600c4  lw          $a2, 0xC4($s5)
    ctx->pc = 0x18255cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x182560: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x182560u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182564: 0x8ea80094  lw          $t0, 0x94($s5)
    ctx->pc = 0x182564u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x182568: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x182568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18256c: 0xf31821  addu        $v1, $a3, $s3
    ctx->pc = 0x18256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x182570: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x182570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182574: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x182574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x182578: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x182578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x18257c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x18257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x182580: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x182580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182584: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x182584u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x182588: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x182588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18258c: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x18258cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x182590: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x182590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x182594: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x182594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182598: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x182598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x18259c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x18259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1825a0: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1825a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1825a4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1825a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1825a8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1825a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1825ac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1825acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1825b0: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x1825b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x1825b4: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1825b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1825b8: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1825b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1825bc: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1825bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1825c0: 0xc7a50090  lwc1        $f5, 0x90($sp)
    ctx->pc = 0x1825c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1825c4: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x1825c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1825c8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1825c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1825cc: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1825ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1825d0: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1825d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1825d4: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x1825d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1825d8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1825d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1825dc: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1825dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1825e0: 0xc7a50090  lwc1        $f5, 0x90($sp)
    ctx->pc = 0x1825e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1825e4: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x1825e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1825e8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1825e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1825ec: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1825ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1825f0: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1825f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1825f4: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x1825f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1825f8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1825f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1825fc: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x1825fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x182600: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x182600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x182604: 0xc7a50090  lwc1        $f5, 0x90($sp)
    ctx->pc = 0x182604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x182608: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x182608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18260c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x18260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x182610: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x182610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182614: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x182614u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x182618: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x182618u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x18261c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x18261cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x182620: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x182620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x182624: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x182624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182628: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x182628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18262c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18262cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x182630: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x182630u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x182634: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x182634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x182638: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x182638u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18263c: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x18263cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x182640: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x182640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x182644: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x182644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x182648: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x182648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18264c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x18264cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182650: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x182650u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x182654: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x182654u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x182658: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x182658u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18265c: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x18265cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x182660: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x182660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x182664: 0xc7a50090  lwc1        $f5, 0x90($sp)
    ctx->pc = 0x182664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x182668: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x182668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18266c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x18266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x182670: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x182670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182674: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x182674u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x182678: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x182678u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x18267c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x18267cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x182680: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x182680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x182684: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x182684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x182688: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x182688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18268c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x18268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x182690: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x182690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x182694: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x182694u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x182698: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x182698u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x18269c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x18269cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1826a0: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1826a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1826a4: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1826a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1826a8: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1826a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1826ac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1826acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1826b0: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x1826b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x1826b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1826b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1826b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1826b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1826bc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1826bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1826c0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1826c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1826c4: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x1826c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x1826c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1826c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1826cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1826ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1826d0: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x1826d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1826d4: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x1826d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x1826d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1826d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1826dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1826dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1826e0: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1826e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1826e4: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x1826e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x1826e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1826e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1826ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1826ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1826f0: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1826f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1826f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1826F4u;
    {
        const bool branch_taken_0x1826f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826F4u;
        // 0x1826f8: 0xac85003c  sw          $a1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826f4) {
            ctx->pc = 0x182758u;
            goto label_182758;
        }
    }
    ctx->pc = 0x1826FCu;
    // 0x1826fc: 0x0  nop
    ctx->pc = 0x1826fcu;
    // NOP
label_182700:
    // 0x182700: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x182700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x182704: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x182704u;
    {
        const bool branch_taken_0x182704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182704) {
            ctx->pc = 0x182758u;
            goto label_182758;
        }
    }
    ctx->pc = 0x18270Cu;
    // 0x18270c: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x18270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x182710: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x182710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x182714: 0x8ea500c4  lw          $a1, 0xC4($s5)
    ctx->pc = 0x182714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x182718: 0x8ea70094  lw          $a3, 0x94($s5)
    ctx->pc = 0x182718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x18271c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x18271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x182720: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x182720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182724: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x182724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x182728: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18272c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18272cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182730: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x182730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x182734: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x182734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x182738: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x182738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18273c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x18273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x182740: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x182740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182744: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x182744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x182748: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x182748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18274c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182750: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x182750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x182754: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x182754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
label_182758:
    // 0x182758: 0x92a200cc  lbu         $v0, 0xCC($s5)
    ctx->pc = 0x182758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x18275c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18275cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x182760: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x182760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182764: 0x1440ff2a  bnez        $v0, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x182764u;
    {
        const bool branch_taken_0x182764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182764u;
        // 0x182768: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182764) {
            ctx->pc = 0x182410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182410;
        }
    }
    ctx->pc = 0x18276Cu;
    // 0x18276c: 0x0  nop
    ctx->pc = 0x18276cu;
    // NOP
label_182770:
    // 0x182770: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x182770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x182774: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x182774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182778: 0xaea200c4  sw          $v0, 0xC4($s5)
    ctx->pc = 0x182778u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 2));
    // 0x18277c: 0xaea000c0  sw          $zero, 0xC0($s5)
    ctx->pc = 0x18277cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 0));
    // 0x182780: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x182780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x182784: 0x96a200c8  lhu         $v0, 0xC8($s5)
    ctx->pc = 0x182784u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x182788: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x182788u;
    {
        const bool branch_taken_0x182788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182788u;
        // 0x18278c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182788) {
            ctx->pc = 0x182798u;
            goto label_182798;
        }
    }
    ctx->pc = 0x182790u;
    // 0x182790: 0xaea200c0  sw          $v0, 0xC0($s5)
    ctx->pc = 0x182790u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 2));
    // 0x182794: 0x0  nop
    ctx->pc = 0x182794u;
    // NOP
label_182798:
    // 0x182798: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x182798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x18279c: 0x96a200c8  lhu         $v0, 0xC8($s5)
    ctx->pc = 0x18279cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x1827a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1827a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1827a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1827A4u;
    {
        const bool branch_taken_0x1827a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1827a4) {
            ctx->pc = 0x1827B8u;
            goto label_1827b8;
        }
    }
    ctx->pc = 0x1827ACu;
    // 0x1827ac: 0xaea000c4  sw          $zero, 0xC4($s5)
    ctx->pc = 0x1827acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 0));
    // 0x1827b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1827b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1827b4: 0xaea200c0  sw          $v0, 0xC0($s5)
    ctx->pc = 0x1827b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 2));
label_1827b8:
    // 0x1827b8: 0x8ea200b4  lw          $v0, 0xB4($s5)
    ctx->pc = 0x1827b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x1827bc: 0xaea200b8  sw          $v0, 0xB8($s5)
    ctx->pc = 0x1827bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 2));
    // 0x1827c0: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x1827c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x1827c4: 0x8ea200a4  lw          $v0, 0xA4($s5)
    ctx->pc = 0x1827c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 164)));
    // 0x1827c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1827c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1827cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1827ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1827d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1827d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1827d4: 0xaea200b4  sw          $v0, 0xB4($s5)
    ctx->pc = 0x1827d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 2));
    // 0x1827d8: 0x8ea300b8  lw          $v1, 0xB8($s5)
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 184)));
    // 0x1827dc: 0x8ea200b4  lw          $v0, 0xB4($s5)
    ctx->pc = 0x1827dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x1827e0: 0x601827  not         $v1, $v1
    ctx->pc = 0x1827e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1827e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1827e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1827e8: 0xaea20074  sw          $v0, 0x74($s5)
    ctx->pc = 0x1827e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 2));
    // 0x1827ec: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x1827ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
label_1827f0:
    // 0x1827f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1827f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1827f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1827f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1827f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1827f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1827fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1827fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182800: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18280c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18280cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182814: 0x3e00008  jr          $ra
    ctx->pc = 0x182814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182814u;
        // 0x182818: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18281Cu;
}

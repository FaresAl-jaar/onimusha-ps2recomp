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

// Function: sub_0015F640
// Address: 0x15f640 - 0x15fd54
void sub_0015F640_0x15f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F640_0x15f640");
#endif

    switch (ctx->pc) {
        case 0x15f968u: goto label_15f968;
        case 0x15f9a8u: goto label_15f9a8;
        case 0x15f9b8u: goto label_15f9b8;
        default: break;
    }

    ctx->pc = 0x15f640u;

    // 0x15f640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15f644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15f648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15f650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f654: 0x90840098  lbu         $a0, 0x98($a0)
    ctx->pc = 0x15f654u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x15f658: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x15f658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x15f65c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15f65cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15f660: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x15F660u;
    {
        const bool branch_taken_0x15f660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F660u;
        // 0x15f664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f660) {
            ctx->pc = 0x15F720u;
            goto label_15f720;
        }
    }
    ctx->pc = 0x15F668u;
    // 0x15f668: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x15f668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x15f66c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15f66cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15f670: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x15F670u;
    {
        const bool branch_taken_0x15f670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f670) {
            ctx->pc = 0x15F720u;
            goto label_15f720;
        }
    }
    ctx->pc = 0x15F678u;
    // 0x15f678: 0x8223009a  lb          $v1, 0x9A($s1)
    ctx->pc = 0x15f678u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 154)));
    // 0x15f67c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15f680: 0xa223009a  sb          $v1, 0x9A($s1)
    ctx->pc = 0x15f680u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f684: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15f684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15f688: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15f688u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x15f68c: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15F68Cu;
    {
        const bool branch_taken_0x15f68c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x15f68c) {
            ctx->pc = 0x15F6F0u;
            goto label_15f6f0;
        }
    }
    ctx->pc = 0x15F694u;
    // 0x15f694: 0x9226009b  lbu         $a2, 0x9B($s1)
    ctx->pc = 0x15f694u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 155)));
    // 0x15f698: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15f69c: 0x92240099  lbu         $a0, 0x99($s1)
    ctx->pc = 0x15f69cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 153)));
    // 0x15f6a0: 0x92250098  lbu         $a1, 0x98($s1)
    ctx->pc = 0x15f6a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x15f6a4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x15f6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15f6a8: 0x30a40030  andi        $a0, $a1, 0x30
    ctx->pc = 0x15f6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x15f6ac: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x15f6acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x15f6b0: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x15f6b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x15f6b4: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x15f6b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15f6b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F6B8u;
    {
        const bool branch_taken_0x15f6b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6B8u;
        // 0x15f6bc: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6b8) {
            ctx->pc = 0x15F6E0u;
            goto label_15f6e0;
        }
    }
    ctx->pc = 0x15F6C0u;
    // 0x15f6c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F6C0u;
    {
        const bool branch_taken_0x15f6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6C0u;
        // 0x15f6c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6c0) {
            ctx->pc = 0x15F6D0u;
            goto label_15f6d0;
        }
    }
    ctx->pc = 0x15F6C8u;
    // 0x15f6c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15F6C8u;
    {
        const bool branch_taken_0x15f6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f6c8) {
            ctx->pc = 0x15F6E0u;
            goto label_15f6e0;
        }
    }
    ctx->pc = 0x15F6D0u;
label_15f6d0:
    // 0x15f6d0: 0x30a300bf  andi        $v1, $a1, 0xBF
    ctx->pc = 0x15f6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x15f6d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15f6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f6d8: 0xa2230098  sb          $v1, 0x98($s1)
    ctx->pc = 0x15f6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f6dc: 0x0  nop
    ctx->pc = 0x15f6dcu;
    // NOP
label_15f6e0:
    // 0x15f6e0: 0xa226009b  sb          $a2, 0x9B($s1)
    ctx->pc = 0x15f6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 6));
    // 0x15f6e4: 0x92230098  lbu         $v1, 0x98($s1)
    ctx->pc = 0x15f6e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x15f6e8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x15f6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15f6ec: 0xa223009a  sb          $v1, 0x9A($s1)
    ctx->pc = 0x15f6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 3));
label_15f6f0:
    // 0x15f6f0: 0x9226009b  lbu         $a2, 0x9B($s1)
    ctx->pc = 0x15f6f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 155)));
    // 0x15f6f4: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x15f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x15f6f8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x15f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x15f6fc: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x15f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15f700: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15f700u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15f704: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15f704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f708: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15f708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15f70c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x15f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f710: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x15f710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x15f714: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x15f714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x15f718: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15f718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15f71c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x15f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_15f720:
    // 0x15f720: 0x92240030  lbu         $a0, 0x30($s1)
    ctx->pc = 0x15f720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x15f724: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15f728: 0x10830181  beq         $a0, $v1, . + 4 + (0x181 << 2)
    ctx->pc = 0x15F728u;
    {
        const bool branch_taken_0x15f728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F728u;
        // 0x15f72c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f728) {
            ctx->pc = 0x15FD30u;
            goto label_15fd30;
        }
    }
    ctx->pc = 0x15F730u;
    // 0x15f730: 0x1083013b  beq         $a0, $v1, . + 4 + (0x13B << 2)
    ctx->pc = 0x15F730u;
    {
        const bool branch_taken_0x15f730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f730) {
            ctx->pc = 0x15FC20u;
            goto label_15fc20;
        }
    }
    ctx->pc = 0x15F738u;
    // 0x15f738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f73c: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x15F73Cu;
    {
        const bool branch_taken_0x15f73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15f73c) {
            ctx->pc = 0x15F8E0u;
            goto label_15f8e0;
        }
    }
    ctx->pc = 0x15F744u;
    // 0x15f744: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F744u;
    {
        const bool branch_taken_0x15f744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f744) {
            ctx->pc = 0x15F758u;
            goto label_15f758;
        }
    }
    ctx->pc = 0x15F74Cu;
    // 0x15f74c: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x15F74Cu;
    {
        const bool branch_taken_0x15f74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f74c) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15F754u;
    // 0x15f754: 0x0  nop
    ctx->pc = 0x15f754u;
    // NOP
label_15f758:
    // 0x15f758: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f75c: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15f760: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15f760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15f764: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15f764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15f768: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15f768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15f76c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f770: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15f770u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15f774: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15f778: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15f77c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15f77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15f780: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15f780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15f784: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15f784u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15f788: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15f788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15f78c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15f790: 0x9467003a  lhu         $a3, 0x3A($v1)
    ctx->pc = 0x15f790u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x15f794: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15f794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15f798: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15F798u;
    {
        const bool branch_taken_0x15f798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F798u;
        // 0x15f79c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f798) {
            ctx->pc = 0x15F7C8u;
            goto label_15f7c8;
        }
    }
    ctx->pc = 0x15F7A0u;
    // 0x15f7a0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15f7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15f7a4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15f7a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15f7a8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15f7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f7ac: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15f7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15f7b0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15f7b4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15f7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15f7b8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15f7b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15f7bc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15f7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15f7c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f7c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15f7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15f7c8:
    // 0x15f7c8: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15f7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f7cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15f7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15f7d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15f7d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15f7d4: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x15F7D4u;
    {
        const bool branch_taken_0x15f7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7D4u;
        // 0x15f7d8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7d4) {
            ctx->pc = 0x15F8D0u;
            goto label_15f8d0;
        }
    }
    ctx->pc = 0x15F7DCu;
    // 0x15f7dc: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15f7e0: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x15f7e4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15f7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15f7e8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15f7ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f7f0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15f7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15f7f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15f7f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15f7fc: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15f7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15f800: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15f800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15f804: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x15f804u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x15f808: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15f808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15f80c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15f810: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x15f810u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x15f814: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15f814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15f818: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15F818u;
    {
        const bool branch_taken_0x15f818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F818u;
        // 0x15f81c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f818) {
            ctx->pc = 0x15F848u;
            goto label_15f848;
        }
    }
    ctx->pc = 0x15F820u;
    // 0x15f820: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15f820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15f824: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15f824u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15f828: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15f828u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f82c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15f82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15f830: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15f830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15f834: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15f834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15f838: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15f838u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15f83c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15f83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15f840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f844: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15f844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15f848:
    // 0x15f848: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15f848u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f84c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f850: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15f850u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15f854: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15f854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15f858: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15f858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15f85c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15f860: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f864: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15f864u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15f868: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15f868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15f86c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15f870: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15f870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15f874: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15f874u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15f878: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x15f878u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x15f87c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15f87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15f880: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15f884: 0x9467003c  lhu         $a3, 0x3C($v1)
    ctx->pc = 0x15f884u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x15f888: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15f888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15f88c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15F88Cu;
    {
        const bool branch_taken_0x15f88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F88Cu;
        // 0x15f890: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f88c) {
            ctx->pc = 0x15F8BCu;
            goto label_15f8bc;
        }
    }
    ctx->pc = 0x15F894u;
    // 0x15f894: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15f894u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15f898: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f89c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15f89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15f8a0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15f8a4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15f8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15f8a8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15f8ac: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15f8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15f8b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f8b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F8B4u;
    {
        const bool branch_taken_0x15f8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8B4u;
        // 0x15f8b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8b4) {
            ctx->pc = 0x15F8C0u;
            goto label_15f8c0;
        }
    }
    ctx->pc = 0x15F8BCu;
label_15f8bc:
    // 0x15f8bc: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15f8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_15f8c0:
    // 0x15f8c0: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x15f8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f8c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f8c8: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x15F8C8u;
    {
        const bool branch_taken_0x15f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8C8u;
        // 0x15f8cc: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8c8) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15F8D0u;
label_15f8d0:
    // 0x15f8d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f8d4: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x15F8D4u;
    {
        const bool branch_taken_0x15f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8D4u;
        // 0x15f8d8: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8d4) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15F8DCu;
    // 0x15f8dc: 0x0  nop
    ctx->pc = 0x15f8dcu;
    // NOP
label_15f8e0:
    // 0x15f8e0: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x15f8e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x15f8e4: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x15F8E4u;
    {
        const bool branch_taken_0x15f8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8E4u;
        // 0x15f8e8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8e4) {
            ctx->pc = 0x15FA40u;
            goto label_15fa40;
        }
    }
    ctx->pc = 0x15F8ECu;
    // 0x15f8ec: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15f8f0: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x15f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x15f8f4: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15f8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15f8f8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15f8fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f900: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15f900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15f904: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15f908: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15f908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15f90c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15f90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15f910: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x15f910u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x15f914: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15f914u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15f918: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15f918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15f91c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x15f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15f920: 0x9446002e  lhu         $a2, 0x2E($v0)
    ctx->pc = 0x15f920u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x15f924: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x15f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x15f928: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15F928u;
    {
        const bool branch_taken_0x15f928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F928u;
        // 0x15f92c: 0x30c20fff  andi        $v0, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f928) {
            ctx->pc = 0x15F958u;
            goto label_15f958;
        }
    }
    ctx->pc = 0x15F930u;
    // 0x15f930: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15f934: 0x62303  sra         $a0, $a2, 12
    ctx->pc = 0x15f934u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 12));
    // 0x15f938: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x15f938u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15f93c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15f93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15f940: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15f944: 0x30c20fff  andi        $v0, $a2, 0xFFF
    ctx->pc = 0x15f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x15f948: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15f948u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15f94c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15f94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15f950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f954: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15f958:
    // 0x15f958: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x15f958u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15f95c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15F95Cu;
    {
        const bool branch_taken_0x15f95c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f95c) {
            ctx->pc = 0x15F968u;
            goto label_15f968;
        }
    }
    ctx->pc = 0x15F964u;
    // 0x15f964: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15f964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f968:
    // 0x15f968: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x15f968u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x15f96c: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x15f96cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15f970: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15f970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15f974: 0x9e230004  lwu         $v1, 0x4($s1)
    ctx->pc = 0x15f974u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15f978: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15f978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15f97c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f980: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x15f980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x15f984: 0x3c053003  lui         $a1, 0x3003
    ctx->pc = 0x15f984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12291 << 16));
    // 0x15f988: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x15f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x15f98c: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x15f98cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x15f990: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x15f990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x15f994: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f998: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15f998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15f99c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15f9a0: 0xc05db84  jal         func_176E10
    ctx->pc = 0x15F9A0u;
    SET_GPR_U32(ctx, 31, 0x15F9A8u);
    ctx->pc = 0x15F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F9A0u;
    // 0x15f9a4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E10u, 0x15F9A0u, 0x15F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F9A8u;
label_15f9a8:
    // 0x15f9a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F9A8u;
    {
        const bool branch_taken_0x15f9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9A8u;
        // 0x15f9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9a8) {
            ctx->pc = 0x15F9B8u;
            goto label_15f9b8;
        }
    }
    ctx->pc = 0x15F9B0u;
    // 0x15f9b0: 0xc0585cc  jal         func_161730
    ctx->pc = 0x15F9B0u;
    SET_GPR_U32(ctx, 31, 0x15F9B8u);
    ctx->pc = 0x15F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F9B0u;
    // 0x15f9b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161730u, 0x15F9B0u, 0x15F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F9B8u;
label_15f9b8:
    // 0x15f9b8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15f9bc: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x15F9BCu;
    {
        const bool branch_taken_0x15f9bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9BCu;
        // 0x15f9c0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9bc) {
            ctx->pc = 0x15F968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f968;
        }
    }
    ctx->pc = 0x15F9C4u;
    // 0x15f9c4: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15f9c8: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x15f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x15f9cc: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15f9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15f9d0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15f9d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f9d8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15f9dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15f9e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15f9e4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15f9e8: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x15f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x15f9ec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15f9f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15f9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15f9f4: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x15f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15f9f8: 0x9446003c  lhu         $a2, 0x3C($v0)
    ctx->pc = 0x15f9f8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15f9fc: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x15f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x15fa00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15FA00u;
    {
        const bool branch_taken_0x15fa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA00u;
        // 0x15fa04: 0x30c20fff  andi        $v0, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa00) {
            ctx->pc = 0x15FA30u;
            goto label_15fa30;
        }
    }
    ctx->pc = 0x15FA08u;
    // 0x15fa08: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15fa0c: 0x62303  sra         $a0, $a2, 12
    ctx->pc = 0x15fa0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 12));
    // 0x15fa10: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15fa14: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15fa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15fa18: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15fa1c: 0x30c20fff  andi        $v0, $a2, 0xFFF
    ctx->pc = 0x15fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x15fa20: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15fa20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15fa24: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15fa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15fa28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15fa2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15fa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15fa30:
    // 0x15fa30: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x15fa30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x15fa34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15FA34u;
    {
        const bool branch_taken_0x15fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA34u;
        // 0x15fa38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa34) {
            ctx->pc = 0x15FA48u;
            goto label_15fa48;
        }
    }
    ctx->pc = 0x15FA3Cu;
    // 0x15fa3c: 0x0  nop
    ctx->pc = 0x15fa3cu;
    // NOP
label_15fa40:
    // 0x15fa40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15fa44: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x15fa44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
label_15fa48:
    // 0x15fa48: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15fa4c: 0x94630030  lhu         $v1, 0x30($v1)
    ctx->pc = 0x15fa4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15fa50: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15FA50u;
    {
        const bool branch_taken_0x15fa50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa50) {
            ctx->pc = 0x15FA80u;
            goto label_15fa80;
        }
    }
    ctx->pc = 0x15FA58u;
    // 0x15fa58: 0x962400a0  lhu         $a0, 0xA0($s1)
    ctx->pc = 0x15fa58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x15fa5c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15fa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15fa60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15fa64: 0xa62400a0  sh          $a0, 0xA0($s1)
    ctx->pc = 0x15fa64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x15fa68: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15fa68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15fa6c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FA6Cu;
    {
        const bool branch_taken_0x15fa6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15fa6c) {
            ctx->pc = 0x15FA80u;
            goto label_15fa80;
        }
    }
    ctx->pc = 0x15FA74u;
    // 0x15fa74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15fa78: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x15FA78u;
    {
        const bool branch_taken_0x15fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA78u;
        // 0x15fa7c: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa78) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15FA80u;
label_15fa80:
    // 0x15fa80: 0x86230094  lh          $v1, 0x94($s1)
    ctx->pc = 0x15fa80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x15fa84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15fa88: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15fa88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15fa8c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15fa8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15fa90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15fa90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15fa94: 0x1c6000aa  bgtz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x15FA94u;
    {
        const bool branch_taken_0x15fa94 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x15FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA94u;
        // 0x15fa98: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa94) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15FA9Cu;
    // 0x15fa9c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15faa0: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x15faa4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15faa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15faa8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15faa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15faac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15faacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15fab0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15fab4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15fab8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15fabc: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15fabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15fac0: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15fac4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15fac8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15fac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15facc: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15fad0: 0x9467003a  lhu         $a3, 0x3A($v1)
    ctx->pc = 0x15fad0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x15fad4: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15fad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15fad8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15FAD8u;
    {
        const bool branch_taken_0x15fad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAD8u;
        // 0x15fadc: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fad8) {
            ctx->pc = 0x15FB08u;
            goto label_15fb08;
        }
    }
    ctx->pc = 0x15FAE0u;
    // 0x15fae0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15fae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15fae4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15fae8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15fae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15faec: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15faecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15faf0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15faf4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15faf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15faf8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15faf8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15fafc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15fafcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15fb00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fb04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15fb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15fb08:
    // 0x15fb08: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15fb08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15fb0c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15fb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15fb10: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15fb10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15fb14: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x15FB14u;
    {
        const bool branch_taken_0x15fb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB14u;
        // 0x15fb18: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb14) {
            ctx->pc = 0x15FC10u;
            goto label_15fc10;
        }
    }
    ctx->pc = 0x15FB1Cu;
    // 0x15fb1c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15fb20: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x15fb24: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15fb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15fb28: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15fb2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15fb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15fb30: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15fb34: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15fb38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15fb3c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15fb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15fb40: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15fb44: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x15fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x15fb48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15fb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15fb4c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15fb50: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x15fb50u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x15fb54: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15fb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15fb58: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15FB58u;
    {
        const bool branch_taken_0x15fb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB58u;
        // 0x15fb5c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb58) {
            ctx->pc = 0x15FB88u;
            goto label_15fb88;
        }
    }
    ctx->pc = 0x15FB60u;
    // 0x15fb60: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15fb64: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15fb68: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fb6c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15fb6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15fb70: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15fb74: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15fb78: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15fb78u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15fb7c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15fb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15fb80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fb84: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15fb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15fb88:
    // 0x15fb88: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15fb88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15fb8c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15fb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15fb90: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15fb94: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15fb98: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15fb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15fb9c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15fba0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15fba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15fba4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15fba8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15fbac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15fbb0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15fbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15fbb4: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15fbb8: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x15fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x15fbbc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15fbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15fbc0: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15fbc4: 0x9467003c  lhu         $a3, 0x3C($v1)
    ctx->pc = 0x15fbc4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x15fbc8: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15fbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15fbcc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15FBCCu;
    {
        const bool branch_taken_0x15fbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBCCu;
        // 0x15fbd0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbcc) {
            ctx->pc = 0x15FBFCu;
            goto label_15fbfc;
        }
    }
    ctx->pc = 0x15FBD4u;
    // 0x15fbd4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15fbd4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15fbd8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15fbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fbdc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15fbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15fbe0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15fbe4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15fbe8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15fbe8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15fbec: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15fbecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15fbf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fbf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15FBF4u;
    {
        const bool branch_taken_0x15fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBF4u;
        // 0x15fbf8: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbf4) {
            ctx->pc = 0x15FC00u;
            goto label_15fc00;
        }
    }
    ctx->pc = 0x15FBFCu;
label_15fbfc:
    // 0x15fbfc: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15fbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_15fc00:
    // 0x15fc00: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x15fc00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x15fc04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fc08: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x15FC08u;
    {
        const bool branch_taken_0x15fc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC08u;
        // 0x15fc0c: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc08) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15FC10u;
label_15fc10:
    // 0x15fc10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fc14: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x15FC14u;
    {
        const bool branch_taken_0x15fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC14u;
        // 0x15fc18: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc14) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15FC1Cu;
    // 0x15fc1c: 0x0  nop
    ctx->pc = 0x15fc1cu;
    // NOP
label_15fc20:
    // 0x15fc20: 0x86230094  lh          $v1, 0x94($s1)
    ctx->pc = 0x15fc20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x15fc24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15fc28: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15fc28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15fc2c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15fc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15fc30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15fc30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15fc34: 0x1c600042  bgtz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x15FC34u;
    {
        const bool branch_taken_0x15fc34 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x15FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC34u;
        // 0x15fc38: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc34) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15FC3Cu;
    // 0x15fc3c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15fc40: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x15fc44: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15fc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15fc48: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15fc48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15fc4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15fc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15fc50: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15fc54: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15fc58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15fc5c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15fc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15fc60: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15fc64: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x15fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x15fc68: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15fc68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15fc6c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15fc70: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x15fc70u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x15fc74: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15fc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15fc78: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15FC78u;
    {
        const bool branch_taken_0x15fc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC78u;
        // 0x15fc7c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc78) {
            ctx->pc = 0x15FCA8u;
            goto label_15fca8;
        }
    }
    ctx->pc = 0x15FC80u;
    // 0x15fc80: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15fc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15fc84: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15fc84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15fc88: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15fc88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fc8c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15fc8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15fc90: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15fc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15fc94: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15fc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15fc98: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15fc98u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15fc9c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15fc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15fca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fca4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15fca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15fca8:
    // 0x15fca8: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x15fca8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x15fcac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15fcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15fcb0: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15fcb4: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15fcb8: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15fcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15fcbc: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15fcc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15fcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15fcc4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15fcc8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15fccc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15fcd0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15fcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15fcd4: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15fcd8: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x15fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x15fcdc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15fcdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15fce0: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15fce4: 0x9467003c  lhu         $a3, 0x3C($v1)
    ctx->pc = 0x15fce4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x15fce8: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x15fce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x15fcec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15FCECu;
    {
        const bool branch_taken_0x15fcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FCECu;
        // 0x15fcf0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fcec) {
            ctx->pc = 0x15FD1Cu;
            goto label_15fd1c;
        }
    }
    ctx->pc = 0x15FCF4u;
    // 0x15fcf4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x15fcf4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x15fcf8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15fcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15fcfc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15fcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15fd00: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15fd04: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15fd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15fd08: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15fd08u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15fd0c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15fd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15fd10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fd14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15FD14u;
    {
        const bool branch_taken_0x15fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD14u;
        // 0x15fd18: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd14) {
            ctx->pc = 0x15FD20u;
            goto label_15fd20;
        }
    }
    ctx->pc = 0x15FD1Cu;
label_15fd1c:
    // 0x15fd1c: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15fd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_15fd20:
    // 0x15fd20: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x15fd20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x15fd24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fd28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15FD28u;
    {
        const bool branch_taken_0x15fd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD28u;
        // 0x15fd2c: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd28) {
            ctx->pc = 0x15FD40u;
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15FD30u;
label_15fd30:
    // 0x15fd30: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x15fd30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15fd34: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x15fd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x15fd38: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x15fd38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x15fd3c: 0x0  nop
    ctx->pc = 0x15fd3cu;
    // NOP
label_15fd40:
    // 0x15fd40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15fd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fd44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fd44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fd48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD4Cu;
        // 0x15fd50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FD54u;
}

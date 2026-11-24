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

// Function: sub_0022E640
// Address: 0x22e640 - 0x22e988
void sub_0022E640_0x22e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E640_0x22e640");
#endif

    switch (ctx->pc) {
        case 0x22e6c8u: goto label_22e6c8;
        case 0x22e798u: goto label_22e798;
        default: break;
    }

    ctx->pc = 0x22e640u;

    // 0x22e640: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x22e640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x22e644: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22e644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22e648: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e64c: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x22e64cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22e650: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22e650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22e654: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22e654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22e658: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x22e658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x22e65c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x22e65cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e660: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x22e660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22e664: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x22e664u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x22e668: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x22e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x22e66c: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x22e66cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x22e670: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22e670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22e674: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x22e674u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x22e678: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x22e678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x22e67c: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x22e67cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e680: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22e680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22e684: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x22e684u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x22e688: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x22e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x22e68c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x22e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x22e690: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x22e690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x22e694: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x22e694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x22e698: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x22e698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x22e69c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x22e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x22e6a0: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x22e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x22e6a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x22e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x22e6a8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x22e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x22e6ac: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x22e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x22e6b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e6b4: 0x84ed0000  lh          $t5, 0x0($a3)
    ctx->pc = 0x22e6b4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22e6b8: 0x84ea0002  lh          $t2, 0x2($a3)
    ctx->pc = 0x22e6b8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x22e6bc: 0x852e0000  lh          $t6, 0x0($t1)
    ctx->pc = 0x22e6bcu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22e6c0: 0x1880009f  blez        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x22E6C0u;
    {
        const bool branch_taken_0x22e6c0 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x22E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6C0u;
        // 0x22e6c4: 0x85300002  lh          $s0, 0x2($t1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6c0) {
            ctx->pc = 0x22E940u;
            goto label_22e940;
        }
    }
    ctx->pc = 0x22E6C8u;
label_22e6c8:
    // 0x22e6c8: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x22e6c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x22e6cc: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x22e6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x22e6d0: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x22e6d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x22e6d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22e6d8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x22e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22e6dc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x22e6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x22e6e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22e6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22e6e4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x22e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22e6e8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22e6ec: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x22e6ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x22e6f0: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x22e6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x22e6f4: 0x14600099  bnez        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x22E6F4u;
    {
        const bool branch_taken_0x22e6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6F4u;
        // 0x22e6f8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6f4) {
            ctx->pc = 0x22E95Cu;
            goto label_22e95c;
        }
    }
    ctx->pc = 0x22E6FCu;
    // 0x22e6fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x22e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e700: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x22e700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e704: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x22e704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e708: 0xc00013  mtlo        $a2
    ctx->pc = 0x22e708u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x22e70c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x22e70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22e710: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x22e710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22e714: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x22e714u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e718: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x22e718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x22e71c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x22e71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x22e720: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x22e720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x22e724: 0x24770001  addiu       $s7, $v1, 0x1
    ctx->pc = 0x22e724u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22e728: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x22e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e72c: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x22e72cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x22e730: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x22e730u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x22e734: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x22e734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x22e738: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x22e738u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x22e73c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22e740: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x22e740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x22e744: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22e744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22e748: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22e748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22e74c: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x22e74cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x22e750: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x22e750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x22e754: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x22E754u;
    {
        const bool branch_taken_0x22e754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E754u;
        // 0x22e758: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e754) {
            ctx->pc = 0x22E95Cu;
            goto label_22e95c;
        }
    }
    ctx->pc = 0x22E75Cu;
    // 0x22e75c: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x22e75cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x22e760: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x22e760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e764: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x22e764u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22e768: 0x600013  mtlo        $v1
    ctx->pc = 0x22e768u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x22e76c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x22e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22e770: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x22e770u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22e774: 0x24187fff  addiu       $t8, $zero, 0x7FFF
    ctx->pc = 0x22e774u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x22e778: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x22e778u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e77c: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x22e77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x22e780: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x22e780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x22e784: 0x241e001e  addiu       $fp, $zero, 0x1E
    ctx->pc = 0x22e784u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x22e788: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x22e788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22e78c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x22e78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x22e790: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x22e790u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22e794: 0x0  nop
    ctx->pc = 0x22e794u;
    // NOP
label_22e798:
    // 0x22e798: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x22e798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x22e79c: 0x24a1018  mult        $v0, $s2, $t2
    ctx->pc = 0x22e79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e7a0: 0x726d2018  mult1       $a0, $s3, $t5
    ctx->pc = 0x22e7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e7a4: 0x91e60012  lbu         $a2, 0x12($t7)
    ctx->pc = 0x22e7a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x22e7a8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x22e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x22e7ac: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x22e7acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7b0: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x22e7b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x22e7b4: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x22e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x22e7b8: 0xb72818  mult        $a1, $a1, $s7
    ctx->pc = 0x22e7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22e7bc: 0x36603  sra         $t4, $v1, 24
    ctx->pc = 0x22e7bcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 24));
    // 0x22e7c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22e7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22e7c4: 0x3182000f  andi        $v0, $t4, 0xF
    ctx->pc = 0x22e7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x22e7c8: 0x61f03  sra         $v1, $a2, 28
    ctx->pc = 0x22e7c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 28));
    // 0x22e7cc: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x22e7ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x22e7d0: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x22e7d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x22e7d4: 0x746018  mult        $t4, $v1, $s4
    ctx->pc = 0x22e7d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x22e7d8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x22e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x22e7dc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x22e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22e7e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e7e4: 0x2463a268  addiu       $v1, $v1, -0x5D98
    ctx->pc = 0x22e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943336));
    // 0x22e7e8: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x22e7e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e7ec: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x22e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x22e7f0: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x22e7f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e7f4: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x22e7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e7f8: 0x24a8818  mult        $s1, $s2, $t2
    ctx->pc = 0x22e7f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x22e7fc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x22e7fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x22e800: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x22e800u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22e804: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x22e804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x22e808: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E808u;
    {
        const bool branch_taken_0x22e808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E808u;
        // 0x22e80c: 0x30c9000f  andi        $t1, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e808) {
            ctx->pc = 0x22E81Cu;
            goto label_22e81c;
        }
    }
    ctx->pc = 0x22E810u;
    // 0x22e810: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x22e810u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x22e814: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x22e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e818: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x22e818u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_22e81c:
    // 0x22e81c: 0x2502018  mult        $a0, $s2, $s0
    ctx->pc = 0x22e81cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e820: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x22e820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e824: 0x726e1018  mult1       $v0, $s3, $t6
    ctx->pc = 0x22e824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e828: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x22e828u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e82c: 0x26d1818  mult        $v1, $s3, $t5
    ctx->pc = 0x22e82cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22e830: 0x2503818  mult        $a3, $s2, $s0
    ctx->pc = 0x22e830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x22e834: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x22e834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e838: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e83c: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x22e83cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x22e840: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22e844: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x22e844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x22e848: 0x33303  sra         $a2, $v1, 12
    ctx->pc = 0x22e848u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 12));
    // 0x22e84c: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x22e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x22e850: 0x28a28000  slti        $v0, $a1, -0x8000
    ctx->pc = 0x22e850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e854: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x22e854u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22e858: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x22e858u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22e85c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E85Cu;
    {
        const bool branch_taken_0x22e85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E85Cu;
        // 0x22e860: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e85c) {
            ctx->pc = 0x22E870u;
            goto label_22e870;
        }
    }
    ctx->pc = 0x22E864u;
    // 0x22e864: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x22e864u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x22e868: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x22e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e86c: 0x4c280b  movn        $a1, $v0, $t4
    ctx->pc = 0x22e86cu;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_22e870:
    // 0x22e870: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x22e870u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22e874: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x22e874u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e878: 0x26e1018  mult        $v0, $s3, $t6
    ctx->pc = 0x22e878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e87c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22e880: 0x1972018  mult        $a0, $t4, $s7
    ctx->pc = 0x22e880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e884: 0x24a5a268  addiu       $a1, $a1, -0x5D98
    ctx->pc = 0x22e884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943336));
    // 0x22e888: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x22e888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x22e88c: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x22e88cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x22e890: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22e890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22e894: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x22e894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e898: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22e89c: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x22e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x22e8a0: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x22e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x22e8a4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e8a8: 0x26303  sra         $t4, $v0, 12
    ctx->pc = 0x22e8a8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 12));
    // 0x22e8ac: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x22e8b0: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x22e8b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e8b4: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x22e8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e8b8: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x22e8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x22e8bc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x22e8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x22e8c0: 0xd43018  mult        $a2, $a2, $s4
    ctx->pc = 0x22e8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x22e8c4: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x22e8c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22e8c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E8C8u;
    {
        const bool branch_taken_0x22e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8C8u;
        // 0x22e8cc: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8c8) {
            ctx->pc = 0x22E8DCu;
            goto label_22e8dc;
        }
    }
    ctx->pc = 0x22E8D0u;
    // 0x22e8d0: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x22e8d0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x22e8d4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x22e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e8d8: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x22e8d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_22e8dc:
    // 0x22e8dc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x22e8dcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8e0: 0x1862821  addu        $a1, $t4, $a2
    ctx->pc = 0x22e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x22e8e4: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x22e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x22e8e8: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x22e8e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e8ec: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x22e8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e8f0: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x22e8f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22e8f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E8F4u;
    {
        const bool branch_taken_0x22e8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8F4u;
        // 0x22e8f8: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8f4) {
            ctx->pc = 0x22E908u;
            goto label_22e908;
        }
    }
    ctx->pc = 0x22E8FCu;
    // 0x22e8fc: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x22e8fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x22e900: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x22e900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e904: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x22e904u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_22e908:
    // 0x22e908: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x22e908u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e90c: 0x27defffe  addiu       $fp, $fp, -0x2
    ctx->pc = 0x22e90cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x22e910: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x22e910u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x22e914: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x22e914u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x22e918: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x22e918u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x22e91c: 0x7c1ff9e  bgez        $fp, . + 4 + (-0x62 << 2)
    ctx->pc = 0x22E91Cu;
    {
        const bool branch_taken_0x22e91c = (GPR_S64(ctx, 30) >= 0);
        ctx->pc = 0x22E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E91Cu;
        // 0x22e920: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e91c) {
            ctx->pc = 0x22E798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e798;
        }
    }
    ctx->pc = 0x22E924u;
    // 0x22e924: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x22e924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22e928: 0x25ef0012  addiu       $t7, $t7, 0x12
    ctx->pc = 0x22e928u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
    // 0x22e92c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e930: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22e930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22e934: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x22e934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22e938: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x22E938u;
    {
        const bool branch_taken_0x22e938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E938u;
        // 0x22e93c: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e938) {
            ctx->pc = 0x22E6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e6c8;
        }
    }
    ctx->pc = 0x22E940u;
label_22e940:
    // 0x22e940: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x22e940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22e944: 0xa48a0002  sh          $t2, 0x2($a0)
    ctx->pc = 0x22e944u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x22e948: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x22e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e94c: 0xa48d0000  sh          $t5, 0x0($a0)
    ctx->pc = 0x22e94cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x22e950: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x22e950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22e954: 0xa4b00002  sh          $s0, 0x2($a1)
    ctx->pc = 0x22e954u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x22e958: 0xa4ae0000  sh          $t6, 0x0($a1)
    ctx->pc = 0x22e958u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 14));
label_22e95c:
    // 0x22e95c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22e95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e960: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x22e960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22e964: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22e964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e968: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x22e968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22e96c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22e96cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e970: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x22e970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e974: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x22e974u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e978: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x22e978u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e97c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x22e97cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e980: 0x3e00008  jr          $ra
    ctx->pc = 0x22E980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E980u;
        // 0x22e984: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E988u;
}

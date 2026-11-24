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

// Function: sub_00181720
// Address: 0x181720 - 0x181968
void sub_00181720_0x181720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181720_0x181720");
#endif

    switch (ctx->pc) {
        case 0x181760u: goto label_181760;
        case 0x1818c0u: goto label_1818c0;
        case 0x1818f0u: goto label_1818f0;
        default: break;
    }

    ctx->pc = 0x181720u;

    // 0x181720: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x181720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x181724: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181728: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x181728u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18172c: 0x30680001  andi        $t0, $v1, 0x1
    ctx->pc = 0x18172cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x181730: 0x30670002  andi        $a3, $v1, 0x2
    ctx->pc = 0x181730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x181734: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x181734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x181738: 0x3c0c40c9  lui         $t4, 0x40C9
    ctx->pc = 0x181738u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16585 << 16));
    // 0x18173c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x18173cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x181740: 0x358d0fdb  ori         $t5, $t4, 0xFDB
    ctx->pc = 0x181740u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)4059);
    // 0x181744: 0x346c0fdb  ori         $t4, $v1, 0xFDB
    ctx->pc = 0x181744u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x181748: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x181748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x18174c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x181750: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x181750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x181754: 0x448d1800  mtc1        $t5, $f3
    ctx->pc = 0x181754u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x181758: 0x448c2000  mtc1        $t4, $f4
    ctx->pc = 0x181758u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18175c: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x18175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_181760:
    // 0x181760: 0x15000029  bnez        $t0, . + 4 + (0x29 << 2)
    ctx->pc = 0x181760u;
    {
        const bool branch_taken_0x181760 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x181760) {
            ctx->pc = 0x181808u;
            goto label_181808;
        }
    }
    ctx->pc = 0x181768u;
    // 0x181768: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x181768u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18176c: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x18176cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181770: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x181770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x181774: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x181774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x181778: 0x31490040  andi        $t1, $t2, 0x40
    ctx->pc = 0x181778u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)64);
    // 0x18177c: 0x9702b  sltu        $t6, $zero, $t1
    ctx->pc = 0x18177cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x181780: 0x31490080  andi        $t1, $t2, 0x80
    ctx->pc = 0x181780u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)128);
    // 0x181784: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x181784u;
    {
        const bool branch_taken_0x181784 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x181784) {
            ctx->pc = 0x1817C0u;
            goto label_1817c0;
        }
    }
    ctx->pc = 0x18178Cu;
    // 0x18178c: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x18178cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181790: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x181790u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x181794: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x181794u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x181798: 0x640d0001  daddiu      $t5, $zero, 0x1
    ctx->pc = 0x181798u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x18179c: 0xa643c  dsll32      $t4, $t2, 16
    ctx->pc = 0x18179cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 16));
    // 0x1817a0: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x1817a0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x1817a4: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x1817a4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1817a8: 0x18a5025  or          $t2, $t4, $t2
    ctx->pc = 0x1817a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x1817ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1817acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1817b0: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x1817b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x1817b4: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x1817b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x1817b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1817B8u;
    {
        const bool branch_taken_0x1817b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817B8u;
        // 0x1817bc: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817b8) {
            ctx->pc = 0x1817D0u;
            goto label_1817d0;
        }
    }
    ctx->pc = 0x1817C0u;
label_1817c0:
    // 0x1817c0: 0x1434824  and         $t1, $t2, $v1
    ctx->pc = 0x1817c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1817c4: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x1817c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
    // 0x1817c8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1817c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1817cc: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1817ccu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_1817d0:
    // 0x1817d0: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1817D0u;
    {
        const bool branch_taken_0x1817d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817D0u;
        // 0x1817d4: 0xa4c3c  dsll32      $t1, $t2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817d0) {
            ctx->pc = 0x1817E8u;
            goto label_1817e8;
        }
    }
    ctx->pc = 0x1817D8u;
    // 0x1817d8: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1817d8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1817dc: 0x94823  negu        $t1, $t1
    ctx->pc = 0x1817dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1817e0: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x1817e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
    // 0x1817e4: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1817e4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_1817e8:
    // 0x1817e8: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1817E8u;
    {
        const bool branch_taken_0x1817e8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817E8u;
        // 0x1817ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817e8) {
            ctx->pc = 0x181808u;
            goto label_181808;
        }
    }
    ctx->pc = 0x1817F0u;
    // 0x1817f0: 0xa643c  dsll32      $t4, $t2, 16
    ctx->pc = 0x1817f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 16));
    // 0x1817f4: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x1817f4u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x1817f8: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1817F8u;
    {
        const bool branch_taken_0x1817f8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1817f8) {
            ctx->pc = 0x181808u;
            goto label_181808;
        }
    }
    ctx->pc = 0x181800u;
    // 0x181800: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x181800u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x181804: 0x0  nop
    ctx->pc = 0x181804u;
    // NOP
label_181808:
    // 0x181808: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181808u;
    {
        const bool branch_taken_0x181808 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x181808) {
            ctx->pc = 0x181818u;
            goto label_181818;
        }
    }
    ctx->pc = 0x181810u;
    // 0x181810: 0x11200021  beqz        $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x181810u;
    {
        const bool branch_taken_0x181810 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x181810) {
            ctx->pc = 0x181898u;
            goto label_181898;
        }
    }
    ctx->pc = 0x181818u;
label_181818:
    // 0x181818: 0x8ccc0000  lw          $t4, 0x0($a2)
    ctx->pc = 0x181818u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18181c: 0x918d0000  lbu         $t5, 0x0($t4)
    ctx->pc = 0x18181cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x181820: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x181820u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x181824: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x181824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x181828: 0xafad000c  sw          $t5, 0xC($sp)
    ctx->pc = 0x181828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 13));
    // 0x18182c: 0x8ccc0000  lw          $t4, 0x0($a2)
    ctx->pc = 0x18182cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181830: 0x918d0000  lbu         $t5, 0x0($t4)
    ctx->pc = 0x181830u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x181834: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x181834u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x181838: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x181838u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x18183c: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x18183cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x181840: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x181840u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x181844: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x181844u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x181848: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x181848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x18184c: 0x8ccc0000  lw          $t4, 0x0($a2)
    ctx->pc = 0x18184cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181850: 0x918d0000  lbu         $t5, 0x0($t4)
    ctx->pc = 0x181850u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x181854: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x181854u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x181858: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x181858u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x18185c: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x18185cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x181860: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x181860u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x181864: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x181864u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x181868: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x181868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x18186c: 0x8ccc0000  lw          $t4, 0x0($a2)
    ctx->pc = 0x18186cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181870: 0x918d0000  lbu         $t5, 0x0($t4)
    ctx->pc = 0x181870u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x181874: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x181874u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x181878: 0xd6e00  sll         $t5, $t5, 24
    ctx->pc = 0x181878u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 24));
    // 0x18187c: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x18187cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
    // 0x181880: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x181880u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x181884: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x181884u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x181888: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x181888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x18188c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x18188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181890: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x181890u;
    {
        const bool branch_taken_0x181890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181890u;
        // 0x181894: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181890) {
            ctx->pc = 0x181950u;
            goto label_181950;
        }
    }
    ctx->pc = 0x181898u;
label_181898:
    // 0x181898: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x181898u;
    {
        const bool branch_taken_0x181898 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x181898) {
            ctx->pc = 0x181918u;
            goto label_181918;
        }
    }
    ctx->pc = 0x1818A0u;
    // 0x1818a0: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x1818a0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1818a4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1818a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1818a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1818a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1818ac: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1818acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1818b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1818b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1818b4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1818b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1818b8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1818B8u;
    {
        const bool branch_taken_0x1818b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1818BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818B8u;
        // 0x1818bc: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818b8) {
            ctx->pc = 0x1818E0u;
            goto label_1818e0;
        }
    }
    ctx->pc = 0x1818C0u;
label_1818c0:
    // 0x1818c0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1818c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1818c4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1818c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1818c8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1818c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1818cc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1818ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1818d0: 0x0  nop
    ctx->pc = 0x1818d0u;
    // NOP
    // 0x1818d4: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1818D4u;
    {
        const bool branch_taken_0x1818d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1818d4) {
            ctx->pc = 0x1818C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1818c0;
        }
    }
    ctx->pc = 0x1818DCu;
    // 0x1818dc: 0x0  nop
    ctx->pc = 0x1818dcu;
    // NOP
label_1818e0:
    // 0x1818e0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1818e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1818e4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1818E4u;
    {
        const bool branch_taken_0x1818e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1818e4) {
            ctx->pc = 0x181950u;
            goto label_181950;
        }
    }
    ctx->pc = 0x1818ECu;
    // 0x1818ec: 0x0  nop
    ctx->pc = 0x1818ecu;
    // NOP
label_1818f0:
    // 0x1818f0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1818f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1818f4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1818f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1818f8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1818f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1818fc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1818fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x181900: 0x0  nop
    ctx->pc = 0x181900u;
    // NOP
    // 0x181904: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x181904u;
    {
        const bool branch_taken_0x181904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x181904) {
            ctx->pc = 0x1818F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1818f0;
        }
    }
    ctx->pc = 0x18190Cu;
    // 0x18190c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18190Cu;
    {
        const bool branch_taken_0x18190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18190c) {
            ctx->pc = 0x181950u;
            goto label_181950;
        }
    }
    ctx->pc = 0x181914u;
    // 0x181914: 0x0  nop
    ctx->pc = 0x181914u;
    // NOP
label_181918:
    // 0x181918: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181918u;
    {
        const bool branch_taken_0x181918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x181918) {
            ctx->pc = 0x181938u;
            goto label_181938;
        }
    }
    ctx->pc = 0x181920u;
    // 0x181920: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x181920u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181924: 0x0  nop
    ctx->pc = 0x181924u;
    // NOP
    // 0x181928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x181928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18192c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x18192cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x181930: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x181930u;
    {
        const bool branch_taken_0x181930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181930u;
        // 0x181934: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181930) {
            ctx->pc = 0x181950u;
            goto label_181950;
        }
    }
    ctx->pc = 0x181938u;
label_181938:
    // 0x181938: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x181938u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18193c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x18193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181940: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x181940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181944: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x181944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x181948: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x181948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18194c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x18194cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_181950:
    // 0x181950: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x181950u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x181954: 0x296c0003  slti        $t4, $t3, 0x3
    ctx->pc = 0x181954u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x181958: 0x1580ff81  bnez        $t4, . + 4 + (-0x7F << 2)
    ctx->pc = 0x181958u;
    {
        const bool branch_taken_0x181958 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x18195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181958u;
        // 0x18195c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181958) {
            ctx->pc = 0x181760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181760;
        }
    }
    ctx->pc = 0x181960u;
    // 0x181960: 0x3e00008  jr          $ra
    ctx->pc = 0x181960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181960u;
        // 0x181964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181968u;
}

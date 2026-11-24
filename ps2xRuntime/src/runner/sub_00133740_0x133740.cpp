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

// Function: sub_00133740
// Address: 0x133740 - 0x13393c
void sub_00133740_0x133740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133740_0x133740");
#endif

    switch (ctx->pc) {
        case 0x1337b0u: goto label_1337b0;
        case 0x1337e4u: goto label_1337e4;
        case 0x1337e8u: goto label_1337e8;
        case 0x133848u: goto label_133848;
        case 0x133908u: goto label_133908;
        default: break;
    }

    ctx->pc = 0x133740u;

    // 0x133740: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x133740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x133744: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x133744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x133748: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x133748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x13374c: 0x34424105  ori         $v0, $v0, 0x4105
    ctx->pc = 0x13374cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16645);
    // 0x133750: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x133750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x133754: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x133754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x133758: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x133758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13375c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x13375cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133760: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x133764: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x133768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13376c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133774: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x133774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x133778: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x133778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13377c: 0x8cd2000c  lw          $s2, 0xC($a2)
    ctx->pc = 0x13377cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x133780: 0x8cd30008  lw          $s3, 0x8($a2)
    ctx->pc = 0x133780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x133784: 0x94740008  lhu         $s4, 0x8($v1)
    ctx->pc = 0x133784u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x133788: 0x2645003e  addiu       $a1, $s2, 0x3E
    ctx->pc = 0x133788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 62));
    // 0x13378c: 0x450019  multu       $v0, $a1
    ctx->pc = 0x13378cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x133790: 0x0  nop
    ctx->pc = 0x133790u;
    // NOP
    // 0x133794: 0x0  nop
    ctx->pc = 0x133794u;
    // NOP
    // 0x133798: 0x1810  mfhi        $v1
    ctx->pc = 0x133798u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13379c: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x13379cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1337a0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1337a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1337a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1337a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1337a8: 0xc04cda8  jal         func_1336A0
    ctx->pc = 0x1337A8u;
    SET_GPR_U32(ctx, 31, 0x1337B0u);
    ctx->pc = 0x1337ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1337A8u;
    // 0x1337ac: 0x22942  srl         $a1, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1336A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1336A0u, 0x1337A8u, 0x1337B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337B0u;
label_1337b0:
    // 0x1337b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1337B0u;
    {
        const bool branch_taken_0x1337b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1337B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337B0u;
        // 0x1337b4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1337b0) {
            ctx->pc = 0x1337C0u;
            goto label_1337c0;
        }
    }
    ctx->pc = 0x1337B8u;
    // 0x1337b8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1337B8u;
    {
        const bool branch_taken_0x1337b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1337BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337B8u;
        // 0x1337bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1337b8) {
            ctx->pc = 0x133910u;
            goto label_133910;
        }
    }
    ctx->pc = 0x1337C0u;
label_1337c0:
    // 0x1337c0: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x1337c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1337c4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1337c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1337c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1337c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337cc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1337ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1337d0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1337d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1337d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1337d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1337d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1337d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1337dc: 0xc04cdc4  jal         func_133710
    ctx->pc = 0x1337DCu;
    SET_GPR_U32(ctx, 31, 0x1337E4u);
    ctx->pc = 0x1337E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1337DCu;
    // 0x1337e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133710u, 0x1337DCu, 0x1337E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337E4u;
label_1337e4:
    // 0x1337e4: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x1337e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1337e8:
    // 0x1337e8: 0x2e410040  sltiu       $at, $s2, 0x40
    ctx->pc = 0x1337e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1337ec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1337ECu;
    {
        const bool branch_taken_0x1337ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1337F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1337ECu;
        // 0x1337f0: 0x2411003f  addiu       $s1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1337ec) {
            ctx->pc = 0x133800u;
            goto label_133800;
        }
    }
    ctx->pc = 0x1337F4u;
    // 0x1337f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1337F4u;
    {
        const bool branch_taken_0x1337f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1337f4) {
            ctx->pc = 0x133808u;
            goto label_133808;
        }
    }
    ctx->pc = 0x1337FCu;
    // 0x1337fc: 0x0  nop
    ctx->pc = 0x1337fcu;
    // NOP
label_133800:
    // 0x133800: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x133800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133804: 0x0  nop
    ctx->pc = 0x133804u;
    // NOP
label_133808:
    // 0x133808: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x133808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13380c: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x13380cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x133810: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x133810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x133814: 0x142c3c  dsll32      $a1, $s4, 16
    ctx->pc = 0x133814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 16));
    // 0x133818: 0x105c3c  dsll32      $t3, $s0, 16
    ctx->pc = 0x133818u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 16) << (32 + 16));
    // 0x13381c: 0xfea20010  sd          $v0, 0x10($s5)
    ctx->pc = 0x13381cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
    // 0x133820: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x133820u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x133824: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x133824u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x133828: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x133828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x13382c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13382cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x133834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133838: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x133838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13383c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x13383cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x133840: 0xc040df4  jal         func_1037D0
    ctx->pc = 0x133840u;
    SET_GPR_U32(ctx, 31, 0x133848u);
    ctx->pc = 0x133844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133840u;
    // 0x133844: 0xfea00018  sd          $zero, 0x18($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1037D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1037D0u, 0x133840u, 0x133848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133848u;
label_133848:
    // 0x133848: 0x13113c  dsll32      $v0, $s3, 4
    ctx->pc = 0x133848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 4));
    // 0x13384c: 0x112b40  sll         $a1, $s1, 13
    ctx->pc = 0x13384cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 13));
    // 0x133850: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x133850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x133854: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x133854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x133858: 0x51102  srl         $v0, $a1, 4
    ctx->pc = 0x133858u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x13385c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x13385cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x133860: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x133860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x133864: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x133864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x133868: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13386c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x13386cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x133870: 0xfea20080  sd          $v0, 0x80($s5)
    ctx->pc = 0x133870u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 128), GPR_U64(ctx, 2));
    // 0x133874: 0xfea00088  sd          $zero, 0x88($s5)
    ctx->pc = 0x133874u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 136), GPR_U64(ctx, 0));
    // 0x133878: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x133878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13387c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13387Cu;
    {
        const bool branch_taken_0x13387c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13387c) {
            ctx->pc = 0x1338B8u;
            goto label_1338b8;
        }
    }
    ctx->pc = 0x133884u;
    // 0x133884: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x133884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x133888: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x133888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x13388c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x133890: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x133890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x133894: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x133894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x133898: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x133898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13389c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13389cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1338a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1338a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1338a4: 0xfea20090  sd          $v0, 0x90($s5)
    ctx->pc = 0x1338a4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 144), GPR_U64(ctx, 2));
    // 0x1338a8: 0xfea00098  sd          $zero, 0x98($s5)
    ctx->pc = 0x1338a8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 152), GPR_U64(ctx, 0));
    // 0x1338ac: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x1338acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1338b0: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x1338B0u;
    {
        const bool branch_taken_0x1338b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338B0u;
        // 0x1338b4: 0x2519023  subu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338b0) {
            ctx->pc = 0x1337E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1337e8;
        }
    }
    ctx->pc = 0x1338B8u;
label_1338b8:
    // 0x1338b8: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x1338b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x1338bc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1338bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1338c0: 0xaed70034  sw          $s7, 0x34($s6)
    ctx->pc = 0x1338c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 23));
    // 0x1338c4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1338c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1338C8u;
    {
        const bool branch_taken_0x1338c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1338c8) {
            ctx->pc = 0x1338E0u;
            goto label_1338e0;
        }
    }
    ctx->pc = 0x1338D0u;
    // 0x1338d0: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x1338d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
    // 0x1338d4: 0xfea20090  sd          $v0, 0x90($s5)
    ctx->pc = 0x1338d4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 144), GPR_U64(ctx, 2));
    // 0x1338d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1338D8u;
    {
        const bool branch_taken_0x1338d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338D8u;
        // 0x1338dc: 0xfea00098  sd          $zero, 0x98($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 152), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338d8) {
            ctx->pc = 0x133900u;
            goto label_133900;
        }
    }
    ctx->pc = 0x1338E0u;
label_1338e0:
    // 0x1338e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1338e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1338e4: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x1338e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1338e8: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1338e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1338ec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1338ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1338f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1338f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1338f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1338f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1338f8: 0xfea20090  sd          $v0, 0x90($s5)
    ctx->pc = 0x1338f8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 144), GPR_U64(ctx, 2));
    // 0x1338fc: 0xfea00098  sd          $zero, 0x98($s5)
    ctx->pc = 0x1338fcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 152), GPR_U64(ctx, 0));
label_133900:
    // 0x133900: 0xc043898  jal         func_10E260
    ctx->pc = 0x133900u;
    SET_GPR_U32(ctx, 31, 0x133908u);
    ctx->pc = 0x133904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133900u;
    // 0x133904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x133900u, 0x133908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133908u;
label_133908:
    // 0x133908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13390c: 0x0  nop
    ctx->pc = 0x13390cu;
    // NOP
label_133910:
    // 0x133910: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x133910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133914: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x133914u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x133918: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x133918u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13391c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13391cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133920: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133924: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13392c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13392cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133934: 0x3e00008  jr          $ra
    ctx->pc = 0x133934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133934u;
        // 0x133938: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13393Cu;
}

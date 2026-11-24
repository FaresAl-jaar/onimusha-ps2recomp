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

// Function: sub_0029E760
// Address: 0x29e760 - 0x29e99c
void sub_0029E760_0x29e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E760_0x29e760");
#endif

    switch (ctx->pc) {
        case 0x29e798u: goto label_29e798;
        default: break;
    }

    ctx->pc = 0x29e760u;

    // 0x29e760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29e764: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29e768: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29e768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29e76c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29e770: 0x69880  sll         $s3, $a2, 2
    ctx->pc = 0x29e770u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29e774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e778: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x29e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x29e77c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e780: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e784: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x29e784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x29e788: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29e788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e78c: 0xac5000e0  sw          $s0, 0xE0($v0)
    ctx->pc = 0x29e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 16));
    // 0x29e790: 0xc0a7a68  jal         func_29E9A0
    ctx->pc = 0x29E790u;
    SET_GPR_U32(ctx, 31, 0x29E798u);
    ctx->pc = 0x29E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E790u;
    // 0x29e794: 0xac5100f8  sw          $s1, 0xF8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9A0u, 0x29E790u, 0x29E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E798u;
label_29e798:
    // 0x29e798: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x29e798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x29e79c: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x29e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x29e7a0: 0xac9000f0  sw          $s0, 0xF0($a0)
    ctx->pc = 0x29e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 16));
    // 0x29e7a4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x29e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29e7a8: 0xac820108  sw          $v0, 0x108($a0)
    ctx->pc = 0x29e7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 2));
    // 0x29e7ac: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x29e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x29e7b0: 0xac830100  sw          $v1, 0x100($a0)
    ctx->pc = 0x29e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 3));
    // 0x29e7b4: 0xac820110  sw          $v0, 0x110($a0)
    ctx->pc = 0x29e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 2));
    // 0x29e7b8: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x29e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x29e7bc: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x29e7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x29e7c0: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x29e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x29e7c4: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x29e7c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x29e7c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29e7cc: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x29E7CCu;
    {
        const bool branch_taken_0x29e7cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7CCu;
        // 0x29e7d0: 0x244200b0  addiu       $v0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7cc) {
            ctx->pc = 0x29E878u;
            goto label_29e878;
        }
    }
    ctx->pc = 0x29E7D4u;
    // 0x29e7d4: 0x11213c  dsll32      $a0, $s1, 4
    ctx->pc = 0x29e7d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 4));
    // 0x29e7d8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x29e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x29e7dc: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x29e7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x29e7e0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x29e7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x29e7e4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29e7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29e7e8: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x29e7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x29e7ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29e7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e7f0: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x29e7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x29e7f4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x29e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x29e7f8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x29e7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x29e7fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x29e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x29e800: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x29e800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x29e804: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x29e804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x29e808: 0x8e480078  lw          $t0, 0x78($s2)
    ctx->pc = 0x29e808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x29e80c: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x29e80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x29e810: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x29e810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x29e814: 0x34850404  ori         $a1, $a0, 0x404
    ctx->pc = 0x29e814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x29e818: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x29e818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29e81c: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x29e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x29e820: 0x346403f8  ori         $a0, $v1, 0x3F8
    ctx->pc = 0x29e820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1016);
    // 0x29e824: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x29e824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x29e828: 0x95080002  lhu         $t0, 0x2($t0)
    ctx->pc = 0x29e828u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x29e82c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x29e82cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29e830: 0x25080009  addiu       $t0, $t0, 0x9
    ctx->pc = 0x29e830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9));
    // 0x29e834: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29e834u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29e838: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x29e838u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29e83c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x29e83cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x29e840: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x29e840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x29e844: 0xfe060010  sd          $a2, 0x10($s0)
    ctx->pc = 0x29e844u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 6));
    // 0x29e848: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x29e848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x29e84c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x29e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x29e850: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x29e850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x29e854: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x29e854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x29e858: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x29e858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x29e85c: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x29e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x29e860: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x29e860u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x29e864: 0x42480  sll         $a0, $a0, 18
    ctx->pc = 0x29e864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 18));
    // 0x29e868: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29e868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e86c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x29E86Cu;
    {
        const bool branch_taken_0x29e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E86Cu;
        // 0x29e870: 0xae0300ac  sw          $v1, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e86c) {
            ctx->pc = 0x29E980u;
            goto label_29e980;
        }
    }
    ctx->pc = 0x29E874u;
    // 0x29e874: 0x0  nop
    ctx->pc = 0x29e874u;
    // NOP
label_29e878:
    // 0x29e878: 0x11193c  dsll32      $v1, $s1, 4
    ctx->pc = 0x29e878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 4));
    // 0x29e87c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x29e87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x29e880: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x29e880u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x29e884: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x29e884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29e888: 0x3c0a3000  lui         $t2, 0x3000
    ctx->pc = 0x29e888u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12288 << 16));
    // 0x29e88c: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x29e88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x29e890: 0x3c086c00  lui         $t0, 0x6C00
    ctx->pc = 0x29e890u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)27648 << 16));
    // 0x29e894: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x29e894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x29e898: 0x34e60109  ori         $a2, $a3, 0x109
    ctx->pc = 0x29e898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)265);
    // 0x29e89c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29e89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29e8a0: 0x672025  or          $a0, $v1, $a3
    ctx->pc = 0x29e8a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x29e8a4: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x29e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x29e8a8: 0x35440003  ori         $a0, $t2, 0x3
    ctx->pc = 0x29e8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)3);
    // 0x29e8ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x29e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x29e8b0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29e8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29e8b4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x29e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x29e8b8: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x29e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x29e8bc: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x29e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x29e8c0: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x29e8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x29e8c4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x29e8c8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x29e8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x29e8cc: 0x8e490078  lw          $t1, 0x78($s2)
    ctx->pc = 0x29e8ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x29e8d0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x29e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29e8d4: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x29e8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x29e8d8: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x29e8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x29e8dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29e8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29e8e0: 0x873825  or          $a3, $a0, $a3
    ctx->pc = 0x29e8e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x29e8e4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x29e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x29e8e8: 0x95290002  lhu         $t1, 0x2($t1)
    ctx->pc = 0x29e8e8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x29e8ec: 0x34850404  ori         $a1, $a0, 0x404
    ctx->pc = 0x29e8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x29e8f0: 0x3c046c08  lui         $a0, 0x6C08
    ctx->pc = 0x29e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27656 << 16));
    // 0x29e8f4: 0x348403f8  ori         $a0, $a0, 0x3F8
    ctx->pc = 0x29e8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1016);
    // 0x29e8f8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x29e8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x29e8fc: 0x2529ff00  addiu       $t1, $t1, -0x100
    ctx->pc = 0x29e8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967040));
    // 0x29e900: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x29e900u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x29e904: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x29e904u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x29e908: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x29e908u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x29e90c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x29e90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x29e910: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x29e910u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x29e914: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x29e914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x29e918: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x29e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x29e91c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x29e91cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x29e920: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29e920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29e924: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x29e924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
    // 0x29e928: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29e928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29e92c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x29e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29e930: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x29e930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x29e934: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x29e934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x29e938: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x29e938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x29e93c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x29e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29e940: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x29e940u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x29e944: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x29e944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x29e948: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29e948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x29e94c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x29e94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x29e950: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x29e950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x29e954: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29e954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29e958: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29e95c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x29e95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29e960: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x29e960u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x29e964: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x29e964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x29e968: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x29e968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x29e96c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x29e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x29e970: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x29e970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x29e974: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x29e974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x29e978: 0xae0800ac  sw          $t0, 0xAC($s0)
    ctx->pc = 0x29e978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 8));
    // 0x29e97c: 0x0  nop
    ctx->pc = 0x29e97cu;
    // NOP
label_29e980:
    // 0x29e980: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29e980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29e984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e994: 0x3e00008  jr          $ra
    ctx->pc = 0x29E994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E994u;
        // 0x29e998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E99Cu;
}

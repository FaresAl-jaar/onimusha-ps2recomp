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

// Function: sub_00174620
// Address: 0x174620 - 0x1747d8
void sub_00174620_0x174620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174620_0x174620");
#endif

    switch (ctx->pc) {
        case 0x174650u: goto label_174650;
        case 0x174740u: goto label_174740;
        default: break;
    }

    ctx->pc = 0x174620u;

    // 0x174620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174624: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x174628: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17462c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17462cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174630: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x174630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174638: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x174638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17463c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174640: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x174640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x174644: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x174644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x174648: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x174648u;
    {
        const bool branch_taken_0x174648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174648u;
        // 0x17464c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174648) {
            ctx->pc = 0x1747A8u;
            goto label_1747a8;
        }
    }
    ctx->pc = 0x174650u;
label_174650:
    // 0x174650: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x174650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x174654: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x174654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174658: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x174658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17465c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x17465cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x174660: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x174660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x174664: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x174664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x174668: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x174668u;
    {
        const bool branch_taken_0x174668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x17466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174668u;
        // 0x17466c: 0x24a80008  addiu       $t0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174668) {
            ctx->pc = 0x174700u;
            goto label_174700;
        }
    }
    ctx->pc = 0x174670u;
    // 0x174670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174674: 0x1047001a  beq         $v0, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x174674u;
    {
        const bool branch_taken_0x174674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x174674) {
            ctx->pc = 0x1746E0u;
            goto label_1746e0;
        }
    }
    ctx->pc = 0x17467Cu;
    // 0x17467c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17467Cu;
    {
        const bool branch_taken_0x17467c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17467c) {
            ctx->pc = 0x174690u;
            goto label_174690;
        }
    }
    ctx->pc = 0x174684u;
    // 0x174684: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x174684u;
    {
        const bool branch_taken_0x174684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174684) {
            ctx->pc = 0x174728u;
            goto label_174728;
        }
    }
    ctx->pc = 0x17468Cu;
    // 0x17468c: 0x0  nop
    ctx->pc = 0x17468cu;
    // NOP
label_174690:
    // 0x174690: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x174690u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x174694: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x174694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x174698: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x174698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x17469c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1746a0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1746a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1746a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1746A4u;
    {
        const bool branch_taken_0x1746a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1746a4) {
            ctx->pc = 0x1746B8u;
            goto label_1746b8;
        }
    }
    ctx->pc = 0x1746ACu;
    // 0x1746ac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1746ACu;
    {
        const bool branch_taken_0x1746ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746ACu;
        // 0x1746b0: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746ac) {
            ctx->pc = 0x174728u;
            goto label_174728;
        }
    }
    ctx->pc = 0x1746B4u;
    // 0x1746b4: 0x0  nop
    ctx->pc = 0x1746b4u;
    // NOP
label_1746b8:
    // 0x1746b8: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x1746b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1746bc: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x1746bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1746c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1746C0u;
    {
        const bool branch_taken_0x1746c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1746c0) {
            ctx->pc = 0x1746D0u;
            goto label_1746d0;
        }
    }
    ctx->pc = 0x1746C8u;
    // 0x1746c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1746C8u;
    {
        const bool branch_taken_0x1746c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1746c8) {
            ctx->pc = 0x1746D8u;
            goto label_1746d8;
        }
    }
    ctx->pc = 0x1746D0u;
label_1746d0:
    // 0x1746d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1746d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1746d4: 0x0  nop
    ctx->pc = 0x1746d4u;
    // NOP
label_1746d8:
    // 0x1746d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1746D8u;
    {
        const bool branch_taken_0x1746d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746D8u;
        // 0x1746dc: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746d8) {
            ctx->pc = 0x174728u;
            goto label_174728;
        }
    }
    ctx->pc = 0x1746E0u;
label_1746e0:
    // 0x1746e0: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x1746e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1746e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1746e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1746e8: 0xa5020004  sh          $v0, 0x4($t0)
    ctx->pc = 0x1746e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1746ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1746ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1746f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1746F0u;
    {
        const bool branch_taken_0x1746f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1746f0) {
            ctx->pc = 0x174728u;
            goto label_174728;
        }
    }
    ctx->pc = 0x1746F8u;
    // 0x1746f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1746F8u;
    {
        const bool branch_taken_0x1746f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746F8u;
        // 0x1746fc: 0xa1060000  sb          $a2, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746f8) {
            ctx->pc = 0x174728u;
            goto label_174728;
        }
    }
    ctx->pc = 0x174700u;
label_174700:
    // 0x174700: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x174700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x174704: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x174704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x174708: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x174708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17470c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17470Cu;
    {
        const bool branch_taken_0x17470c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17470c) {
            ctx->pc = 0x174720u;
            goto label_174720;
        }
    }
    ctx->pc = 0x174714u;
    // 0x174714: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x174714u;
    {
        const bool branch_taken_0x174714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174714u;
        // 0x174718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174714) {
            ctx->pc = 0x174730u;
            goto label_174730;
        }
    }
    ctx->pc = 0x17471Cu;
    // 0x17471c: 0x0  nop
    ctx->pc = 0x17471cu;
    // NOP
label_174720:
    // 0x174720: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x174720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174724: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x174724u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_174728:
    // 0x174728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17472c: 0x0  nop
    ctx->pc = 0x17472cu;
    // NOP
label_174730:
    // 0x174730: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x174730u;
    {
        const bool branch_taken_0x174730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174730u;
        // 0x174734: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174730) {
            ctx->pc = 0x174750u;
            goto label_174750;
        }
    }
    ctx->pc = 0x174738u;
    // 0x174738: 0xc05d390  jal         func_174E40
    ctx->pc = 0x174738u;
    SET_GPR_U32(ctx, 31, 0x174740u);
    ctx->pc = 0x174E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E40u, 0x174738u, 0x174740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174740u;
label_174740:
    // 0x174740: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x174740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174744: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x174744u;
    {
        const bool branch_taken_0x174744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174744u;
        // 0x174748: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174744) {
            ctx->pc = 0x1747A8u;
            goto label_1747a8;
        }
    }
    ctx->pc = 0x17474Cu;
    // 0x17474c: 0x0  nop
    ctx->pc = 0x17474cu;
    // NOP
label_174750:
    // 0x174750: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x174750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x174754: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x174754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x174758: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x174758u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17475c: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x17475cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x174760: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x174760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x174764: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x174764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174768: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x174768u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x17476c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17476cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174770: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x174770u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174774: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x174774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x174778: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x174778u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x17477c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x17477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174780: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x174780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174784: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x174784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174788: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x174788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17478c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x17478cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x174790: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x174790u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x174794: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x174798: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x174798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x17479c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x17479cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1747a0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1747a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1747a4: 0x0  nop
    ctx->pc = 0x1747a4u;
    // NOP
label_1747a8:
    // 0x1747a8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1747a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1747ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1747acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1747b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1747b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1747b4: 0x1462ffa6  bne         $v1, $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x1747B4u;
    {
        const bool branch_taken_0x1747b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1747B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747B4u;
        // 0x1747b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1747b4) {
            ctx->pc = 0x174650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174650;
        }
    }
    ctx->pc = 0x1747BCu;
    // 0x1747bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1747bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1747c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1747c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1747c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1747c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1747c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1747c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1747cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1747ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1747d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1747D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1747D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747D0u;
        // 0x1747d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1747D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1747D8u;
}

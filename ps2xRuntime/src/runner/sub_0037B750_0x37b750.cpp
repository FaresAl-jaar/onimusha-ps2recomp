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

// Function: sub_0037B750
// Address: 0x37b750 - 0x37b9f0
void sub_0037B750_0x37b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B750_0x37b750");
#endif

    switch (ctx->pc) {
        case 0x37b768u: goto label_37b768;
        case 0x37b7acu: goto label_37b7ac;
        case 0x37b7b8u: goto label_37b7b8;
        case 0x37b7ecu: goto label_37b7ec;
        case 0x37b81cu: goto label_37b81c;
        case 0x37b88cu: goto label_37b88c;
        case 0x37b8b0u: goto label_37b8b0;
        case 0x37b8ccu: goto label_37b8cc;
        case 0x37b8d8u: goto label_37b8d8;
        case 0x37b8ecu: goto label_37b8ec;
        case 0x37b90cu: goto label_37b90c;
        case 0x37b914u: goto label_37b914;
        case 0x37b92cu: goto label_37b92c;
        case 0x37b98cu: goto label_37b98c;
        case 0x37b9a0u: goto label_37b9a0;
        case 0x37b9ccu: goto label_37b9cc;
        default: break;
    }

    ctx->pc = 0x37b750u;

    // 0x37b750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37b754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37b758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b75c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37b75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b760: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x37B760u;
    SET_GPR_U32(ctx, 31, 0x37B768u);
    ctx->pc = 0x37B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B760u;
    // 0x37b764: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x37B760u, 0x37B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B768u;
label_37b768:
    // 0x37b768: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x37b768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x37b76c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37B76Cu;
    {
        const bool branch_taken_0x37b76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B76Cu;
        // 0x37b770: 0x3c03457a  lui         $v1, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b76c) {
            ctx->pc = 0x37B790u;
            goto label_37b790;
        }
    }
    ctx->pc = 0x37B774u;
    // 0x37b774: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x37b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x37b778: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x37b778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x37b77c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x37b77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x37b780: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37b780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37b784: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x37b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37b788: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37b788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x37b78c: 0x0  nop
    ctx->pc = 0x37b78cu;
    // NOP
label_37b790:
    // 0x37b790: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x37b790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x37b794: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x37b794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x37b798: 0x240204c0  addiu       $v0, $zero, 0x4C0
    ctx->pc = 0x37b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    // 0x37b79c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37B79Cu;
    {
        const bool branch_taken_0x37b79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B79Cu;
        // 0x37b7a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b79c) {
            ctx->pc = 0x37B7B0u;
            goto label_37b7b0;
        }
    }
    ctx->pc = 0x37B7A4u;
    // 0x37b7a4: 0xc097904  jal         func_25E410
    ctx->pc = 0x37B7A4u;
    SET_GPR_U32(ctx, 31, 0x37B7ACu);
    ctx->pc = 0x37B7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7A4u;
    // 0x37b7a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E410u, 0x37B7A4u, 0x37B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7ACu;
label_37b7ac:
    // 0x37b7ac: 0x0  nop
    ctx->pc = 0x37b7acu;
    // NOP
label_37b7b0:
    // 0x37b7b0: 0xc0deca0  jal         func_37B280
    ctx->pc = 0x37B7B0u;
    SET_GPR_U32(ctx, 31, 0x37B7B8u);
    ctx->pc = 0x37B280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B280u, 0x37B7B0u, 0x37B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7B8u;
label_37b7b8:
    // 0x37b7b8: 0xae222b80  sw          $v0, 0x2B80($s1)
    ctx->pc = 0x37b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11136), GPR_U32(ctx, 2));
    // 0x37b7bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37b7c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b7c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b7c8: 0xa2220163  sb          $v0, 0x163($s1)
    ctx->pc = 0x37b7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 355), (uint8_t)GPR_U32(ctx, 2));
    // 0x37b7cc: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37b7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b7d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x37b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37b7d4: 0xa2232b8f  sb          $v1, 0x2B8F($s1)
    ctx->pc = 0x37b7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11151), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b7d8: 0xa2232b90  sb          $v1, 0x2B90($s1)
    ctx->pc = 0x37b7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11152), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b7dc: 0xae202b60  sw          $zero, 0x2B60($s1)
    ctx->pc = 0x37b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11104), GPR_U32(ctx, 0));
    // 0x37b7e0: 0xa6222b74  sh          $v0, 0x2B74($s1)
    ctx->pc = 0x37b7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11124), (uint16_t)GPR_U32(ctx, 2));
    // 0x37b7e4: 0xc0e0438  jal         func_3810E0
    ctx->pc = 0x37B7E4u;
    SET_GPR_U32(ctx, 31, 0x37B7ECu);
    ctx->pc = 0x37B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B7E4u;
    // 0x37b7e8: 0x7e202b50  sq          $zero, 0x2B50($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 11088), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3810E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3810E0u, 0x37B7E4u, 0x37B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B7ECu;
label_37b7ec:
    // 0x37b7ec: 0x8e302b80  lw          $s0, 0x2B80($s1)
    ctx->pc = 0x37b7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11136)));
    // 0x37b7f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x37b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37b7f4: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x37b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37b7f8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37b7fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x37b7fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37b800: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x37b800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37b804: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37b804u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37b808: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37b808u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37b80c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37b80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b810: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x37b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37b814: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x37B814u;
    SET_GPR_U32(ctx, 31, 0x37B81Cu);
    ctx->pc = 0x37B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B814u;
    // 0x37b818: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x37B814u, 0x37B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B81Cu;
label_37b81c:
    // 0x37b81c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x37b81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37b820: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37b820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37b824: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x37B824u;
    {
        const bool branch_taken_0x37b824 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B824u;
        // 0x37b828: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b824) {
            ctx->pc = 0x37B838u;
            goto label_37b838;
        }
    }
    ctx->pc = 0x37B82Cu;
    // 0x37b82c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37B82Cu;
    {
        const bool branch_taken_0x37b82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B82Cu;
        // 0x37b830: 0xa2220780  sb          $v0, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b82c) {
            ctx->pc = 0x37B840u;
            goto label_37b840;
        }
    }
    ctx->pc = 0x37B834u;
    // 0x37b834: 0x0  nop
    ctx->pc = 0x37b834u;
    // NOP
label_37b838:
    // 0x37b838: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x37b838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x37b83c: 0xa2220780  sb          $v0, 0x780($s1)
    ctx->pc = 0x37b83cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 2));
label_37b840:
    // 0x37b840: 0xa2202b78  sb          $zero, 0x2B78($s1)
    ctx->pc = 0x37b840u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b844: 0xae202b84  sw          $zero, 0x2B84($s1)
    ctx->pc = 0x37b844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11140), GPR_U32(ctx, 0));
    // 0x37b848: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x37b848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37b84c: 0xa2200730  sb          $zero, 0x730($s1)
    ctx->pc = 0x37b84cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1840), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b850: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b854: 0xa2230731  sb          $v1, 0x731($s1)
    ctx->pc = 0x37b854u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1841), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b85c: 0xa2220734  sb          $v0, 0x734($s1)
    ctx->pc = 0x37b85cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1844), (uint8_t)GPR_U32(ctx, 2));
    // 0x37b860: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37b860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x37b864: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x37b864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
    // 0x37b868: 0x3c02c2e8  lui         $v0, 0xC2E8
    ctx->pc = 0x37b868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49896 << 16));
    // 0x37b86c: 0xae200704  sw          $zero, 0x704($s1)
    ctx->pc = 0x37b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1796), GPR_U32(ctx, 0));
    // 0x37b870: 0xae200708  sw          $zero, 0x708($s1)
    ctx->pc = 0x37b870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1800), GPR_U32(ctx, 0));
    // 0x37b874: 0xae23070c  sw          $v1, 0x70C($s1)
    ctx->pc = 0x37b874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1804), GPR_U32(ctx, 3));
    // 0x37b878: 0xae200710  sw          $zero, 0x710($s1)
    ctx->pc = 0x37b878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1808), GPR_U32(ctx, 0));
    // 0x37b87c: 0xae200714  sw          $zero, 0x714($s1)
    ctx->pc = 0x37b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1812), GPR_U32(ctx, 0));
    // 0x37b880: 0xae220718  sw          $v0, 0x718($s1)
    ctx->pc = 0x37b880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1816), GPR_U32(ctx, 2));
    // 0x37b884: 0xc0e0188  jal         func_380620
    ctx->pc = 0x37B884u;
    SET_GPR_U32(ctx, 31, 0x37B88Cu);
    ctx->pc = 0x37B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B884u;
    // 0x37b888: 0xae23071c  sw          $v1, 0x71C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1820), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380620u, 0x37B884u, 0x37B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B88Cu;
label_37b88c:
    // 0x37b88c: 0x92232b78  lbu         $v1, 0x2B78($s1)
    ctx->pc = 0x37b88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11128)));
    // 0x37b890: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x37b890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37b894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b898: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37b898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37b89c: 0xa2232b78  sb          $v1, 0x2B78($s1)
    ctx->pc = 0x37b89cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11128), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b8a0: 0xa2222901  sb          $v0, 0x2901($s1)
    ctx->pc = 0x37b8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10497), (uint8_t)GPR_U32(ctx, 2));
    // 0x37b8a4: 0x7a220710  lq          $v0, 0x710($s1)
    ctx->pc = 0x37b8a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1808)));
    // 0x37b8a8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x37B8A8u;
    SET_GPR_U32(ctx, 31, 0x37B8B0u);
    ctx->pc = 0x37B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B8A8u;
    // 0x37b8ac: 0x7e222910  sq          $v0, 0x2910($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 10512), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x37B8A8u, 0x37B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B8B0u;
label_37b8b0:
    // 0x37b8b0: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x37b8b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x37b8b4: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x37b8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x37b8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37b8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b8bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37b8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b8c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37b8c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b8c4: 0xc0aa134  jal         func_2A84D0
    ctx->pc = 0x37B8C4u;
    SET_GPR_U32(ctx, 31, 0x37B8CCu);
    ctx->pc = 0x37B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B8C4u;
    // 0x37b8c8: 0x25081d30  addiu       $t0, $t0, 0x1D30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84D0u, 0x37B8C4u, 0x37B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B8CCu;
label_37b8cc:
    // 0x37b8cc: 0x8e24296c  lw          $a0, 0x296C($s1)
    ctx->pc = 0x37b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10604)));
    // 0x37b8d0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x37B8D0u;
    SET_GPR_U32(ctx, 31, 0x37B8D8u);
    ctx->pc = 0x37B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B8D0u;
    // 0x37b8d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x37B8D0u, 0x37B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B8D8u;
label_37b8d8:
    // 0x37b8d8: 0xae30296c  sw          $s0, 0x296C($s1)
    ctx->pc = 0x37b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10604), GPR_U32(ctx, 16));
    // 0x37b8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b8e0: 0xa2202b91  sb          $zero, 0x2B91($s1)
    ctx->pc = 0x37b8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11153), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b8e4: 0xc0e0588  jal         func_381620
    ctx->pc = 0x37B8E4u;
    SET_GPR_U32(ctx, 31, 0x37B8ECu);
    ctx->pc = 0x37B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B8E4u;
    // 0x37b8e8: 0xa2202bca  sb          $zero, 0x2BCA($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11210), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381620u, 0x37B8E4u, 0x37B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B8ECu;
label_37b8ec:
    // 0x37b8ec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x37b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37b8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b8f4: 0xa2232bca  sb          $v1, 0x2BCA($s1)
    ctx->pc = 0x37b8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11210), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b8f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b8fc: 0xa2222b92  sb          $v0, 0x2B92($s1)
    ctx->pc = 0x37b8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11154), (uint8_t)GPR_U32(ctx, 2));
    // 0x37b900: 0xa6202b94  sh          $zero, 0x2B94($s1)
    ctx->pc = 0x37b900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11156), (uint16_t)GPR_U32(ctx, 0));
    // 0x37b904: 0xc0e01ec  jal         func_3807B0
    ctx->pc = 0x37B904u;
    SET_GPR_U32(ctx, 31, 0x37B90Cu);
    ctx->pc = 0x37B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B904u;
    // 0x37b908: 0xa6202b9c  sh          $zero, 0x2B9C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 11164), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807B0u, 0x37B904u, 0x37B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B90Cu;
label_37b90c:
    // 0x37b90c: 0xc0e0224  jal         func_380890
    ctx->pc = 0x37B90Cu;
    SET_GPR_U32(ctx, 31, 0x37B914u);
    ctx->pc = 0x37B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B90Cu;
    // 0x37b910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380890u, 0x37B90Cu, 0x37B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B914u;
label_37b914:
    // 0x37b914: 0xa2202b7a  sb          $zero, 0x2B7A($s1)
    ctx->pc = 0x37b914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11130), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b91c: 0xa2202b96  sb          $zero, 0x2B96($s1)
    ctx->pc = 0x37b91cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11158), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b920: 0xae202b98  sw          $zero, 0x2B98($s1)
    ctx->pc = 0x37b920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11160), GPR_U32(ctx, 0));
    // 0x37b924: 0xc0e02bc  jal         func_380AF0
    ctx->pc = 0x37B924u;
    SET_GPR_U32(ctx, 31, 0x37B92Cu);
    ctx->pc = 0x37B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B924u;
    // 0x37b928: 0xa2202bbc  sb          $zero, 0x2BBC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11196), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AF0u, 0x37B924u, 0x37B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B92Cu;
label_37b92c:
    // 0x37b92c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x37b92cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b930: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x37b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37b934: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x37b934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x37b938: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x37b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37b93c: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x37b93cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x37b940: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x37b940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37b944: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b948: 0xa22307f5  sb          $v1, 0x7F5($s1)
    ctx->pc = 0x37b948u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x37b94c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37b94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37b950: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x37b950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37b954: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x37b954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x37b958: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x37b958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x37b95c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37b960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b964: 0xa2222bbd  sb          $v0, 0x2BBD($s1)
    ctx->pc = 0x37b964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11197), (uint8_t)GPR_U32(ctx, 2));
    // 0x37b968: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37b968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x37b96c: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x37b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
    // 0x37b970: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x37b970u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x65AF70u));
    // 0x37b974: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x37b978: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x37b978u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x37b97c: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x37b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x37b980: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37b980u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65AF80u));
    // 0x37b984: 0xc053b28  jal         func_14ECA0
    ctx->pc = 0x37B984u;
    SET_GPR_U32(ctx, 31, 0x37B98Cu);
    ctx->pc = 0x37B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B984u;
    // 0x37b988: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x37B984u, 0x37B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B98Cu;
label_37b98c:
    // 0x37b98c: 0xdf838390  ld          $v1, -0x7C70($gp)
    ctx->pc = 0x37b98cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x37b990: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x37b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x37b994: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37b994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b998: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37B998u;
    {
        const bool branch_taken_0x37b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B998u;
        // 0x37b99c: 0xfc830000  sd          $v1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b998) {
            ctx->pc = 0x37B9D0u;
            goto label_37b9d0;
        }
    }
    ctx->pc = 0x37B9A0u;
label_37b9a0:
    // 0x37b9a0: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x37b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x37b9a4: 0x90430068  lbu         $v1, 0x68($v0)
    ctx->pc = 0x37b9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x37b9a8: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x37b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x37b9ac: 0x8e27004c  lw          $a3, 0x4C($s1)
    ctx->pc = 0x37b9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x37b9b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37b9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x37b9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37b9b8: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x37b9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37b9bc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x37b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x37b9c0: 0x8ce20094  lw          $v0, 0x94($a3)
    ctx->pc = 0x37b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x37b9c4: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x37B9C4u;
    SET_GPR_U32(ctx, 31, 0x37B9CCu);
    ctx->pc = 0x37B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9C4u;
    // 0x37b9c8: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x37B9C4u, 0x37B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B9CCu;
label_37b9cc:
    // 0x37b9cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37b9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_37b9d0:
    // 0x37b9d0: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x37b9d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x37b9d4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x37B9D4u;
    {
        const bool branch_taken_0x37b9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b9d4) {
            ctx->pc = 0x37B9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b9a0;
        }
    }
    ctx->pc = 0x37B9DCu;
    // 0x37b9dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37b9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b9e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x37B9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B9E8u;
        // 0x37b9ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B9F0u;
}

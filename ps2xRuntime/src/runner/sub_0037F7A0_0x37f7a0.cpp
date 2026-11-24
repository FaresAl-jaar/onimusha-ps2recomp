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

// Function: sub_0037F7A0
// Address: 0x37f7a0 - 0x37f8c0
void sub_0037F7A0_0x37f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F7A0_0x37f7a0");
#endif

    switch (ctx->pc) {
        case 0x37f7ecu: goto label_37f7ec;
        case 0x37f820u: goto label_37f820;
        case 0x37f834u: goto label_37f834;
        case 0x37f850u: goto label_37f850;
        case 0x37f870u: goto label_37f870;
        default: break;
    }

    ctx->pc = 0x37f7a0u;

    // 0x37f7a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x37f7a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37f7a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37f7ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37f7b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37f7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37f7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37f7b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x37f7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x37f7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f7c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x37f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37f7c4: 0x26432b50  addiu       $v1, $s2, 0x2B50
    ctx->pc = 0x37f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 11088));
    // 0x37f7c8: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x37f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x37f7cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x37f7ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37f7d0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x37f7d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f7d4: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37f7d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37f7d8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37f7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37f7dc: 0x864500c0  lh          $a1, 0xC0($s2)
    ctx->pc = 0x37f7dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x37f7e0: 0x864600c2  lh          $a2, 0xC2($s2)
    ctx->pc = 0x37f7e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x37f7e4: 0xc04d548  jal         func_135520
    ctx->pc = 0x37F7E4u;
    SET_GPR_U32(ctx, 31, 0x37F7ECu);
    ctx->pc = 0x37F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F7E4u;
    // 0x37f7e8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135520u, 0x37F7E4u, 0x37F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F7ECu;
label_37f7ec:
    // 0x37f7ec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x37f7f0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x37f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37f7f4: 0x2442afc0  addiu       $v0, $v0, -0x5040
    ctx->pc = 0x37f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x37f7f8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37f7f8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65AFC0u));
    // 0x37f7fc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F7FCu;
    {
        const bool branch_taken_0x37f7fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F7FCu;
        // 0x37f800: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f7fc) {
            ctx->pc = 0x37F810u;
            goto label_37f810;
        }
    }
    ctx->pc = 0x37F804u;
    // 0x37f804: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x37f804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x37f808: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x37f808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x37f80c: 0x0  nop
    ctx->pc = 0x37f80cu;
    // NOP
label_37f810:
    // 0x37f810: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x37f810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37f814: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x37f814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37f818: 0xc041442  jal         func_105108
    ctx->pc = 0x37F818u;
    SET_GPR_U32(ctx, 31, 0x37F820u);
    ctx->pc = 0x37F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F818u;
    // 0x37f81c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x37F818u, 0x37F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F820u;
label_37f820:
    // 0x37f820: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x37f820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x37f824: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37F824u;
    {
        const bool branch_taken_0x37f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F824u;
        // 0x37f828: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f824) {
            ctx->pc = 0x37F848u;
            goto label_37f848;
        }
    }
    ctx->pc = 0x37F82Cu;
    // 0x37f82c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x37F82Cu;
    SET_GPR_U32(ctx, 31, 0x37F834u);
    ctx->pc = 0x37F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F82Cu;
    // 0x37f830: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x37F82Cu, 0x37F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F834u;
label_37f834:
    // 0x37f834: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x37f834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37f838: 0x0  nop
    ctx->pc = 0x37f838u;
    // NOP
    // 0x37f83c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37f83cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f840: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37F840u;
    {
        const bool branch_taken_0x37f840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37f840) {
            ctx->pc = 0x37F858u;
            goto label_37f858;
        }
    }
    ctx->pc = 0x37F848u;
label_37f848:
    // 0x37f848: 0xc0dfcec  jal         func_37F3B0
    ctx->pc = 0x37F848u;
    SET_GPR_U32(ctx, 31, 0x37F850u);
    ctx->pc = 0x37F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F848u;
    // 0x37f84c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F3B0u, 0x37F848u, 0x37F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F850u;
label_37f850:
    // 0x37f850: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F850u;
    {
        const bool branch_taken_0x37f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f850) {
            ctx->pc = 0x37F860u;
            goto label_37f860;
        }
    }
    ctx->pc = 0x37F858u;
label_37f858:
    // 0x37f858: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37F858u;
    {
        const bool branch_taken_0x37f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F858u;
        // 0x37f85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f858) {
            ctx->pc = 0x37F8A8u;
            goto label_37f8a8;
        }
    }
    ctx->pc = 0x37F860u;
label_37f860:
    // 0x37f860: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x37f860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x37f864: 0xc64c2b60  lwc1        $f12, 0x2B60($s2)
    ctx->pc = 0x37f864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37f868: 0xc0414dc  jal         func_105370
    ctx->pc = 0x37F868u;
    SET_GPR_U32(ctx, 31, 0x37F870u);
    ctx->pc = 0x37F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F868u;
    // 0x37f86c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x37F868u, 0x37F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F870u;
label_37f870:
    // 0x37f870: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x37f870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x37f874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37f874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f878: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x37f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f87c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x37f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f880: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37f880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37f884: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x37f884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x37f888: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x37f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f88c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x37f88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f890: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37f890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37f894: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x37f894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x37f898: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x37f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f89c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x37f89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f8a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37f8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37f8a4: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x37f8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_37f8a8:
    // 0x37f8a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37f8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37f8ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37f8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37f8b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37f8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37f8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x37F8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F8B8u;
        // 0x37f8bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F8C0u;
}

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

// Function: sub_003C65B0
// Address: 0x3c65b0 - 0x3c66d0
void sub_003C65B0_0x3c65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C65B0_0x3c65b0");
#endif

    switch (ctx->pc) {
        case 0x3c65fcu: goto label_3c65fc;
        case 0x3c6630u: goto label_3c6630;
        case 0x3c6644u: goto label_3c6644;
        case 0x3c6660u: goto label_3c6660;
        case 0x3c6680u: goto label_3c6680;
        default: break;
    }

    ctx->pc = 0x3c65b0u;

    // 0x3c65b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c65b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3c65b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c65b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c65b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c65b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c65bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c65bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c65c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c65c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c65c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c65c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c65c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c65c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c65cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3c65ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c65d0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c65d4: 0x26430590  addiu       $v1, $s2, 0x590
    ctx->pc = 0x3c65d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x3c65d8: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x3c65d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3c65dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3c65dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c65e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3c65e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c65e4: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3c65e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3c65e8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3c65e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3c65ec: 0x864500c0  lh          $a1, 0xC0($s2)
    ctx->pc = 0x3c65ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x3c65f0: 0x864600c2  lh          $a2, 0xC2($s2)
    ctx->pc = 0x3c65f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3c65f4: 0xc04d548  jal         func_135520
    ctx->pc = 0x3C65F4u;
    SET_GPR_U32(ctx, 31, 0x3C65FCu);
    ctx->pc = 0x3C65F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C65F4u;
    // 0x3c65f8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135520u, 0x3C65F4u, 0x3C65FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C65FCu;
label_3c65fc:
    // 0x3c65fc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c6600: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3c6600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c6604: 0x2442e360  addiu       $v0, $v0, -0x1CA0
    ctx->pc = 0x3c6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959968));
    // 0x3c6608: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c6608u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E360u));
    // 0x3c660c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C660Cu;
    {
        const bool branch_taken_0x3c660c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C660Cu;
        // 0x3c6610: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c660c) {
            ctx->pc = 0x3C6620u;
            goto label_3c6620;
        }
    }
    ctx->pc = 0x3C6614u;
    // 0x3c6614: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c6614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3c6618: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x3c6618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x3c661c: 0x0  nop
    ctx->pc = 0x3c661cu;
    // NOP
label_3c6620:
    // 0x3c6620: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c6620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c6624: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3c6624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c6628: 0xc041442  jal         func_105108
    ctx->pc = 0x3C6628u;
    SET_GPR_U32(ctx, 31, 0x3C6630u);
    ctx->pc = 0x3C662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6628u;
    // 0x3c662c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3C6628u, 0x3C6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6630u;
label_3c6630:
    // 0x3c6630: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3c6630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3c6634: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C6634u;
    {
        const bool branch_taken_0x3c6634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6634u;
        // 0x3c6638: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6634) {
            ctx->pc = 0x3C6658u;
            goto label_3c6658;
        }
    }
    ctx->pc = 0x3C663Cu;
    // 0x3c663c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x3C663Cu;
    SET_GPR_U32(ctx, 31, 0x3C6644u);
    ctx->pc = 0x3C6640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C663Cu;
    // 0x3c6640: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x3C663Cu, 0x3C6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6644u;
label_3c6644:
    // 0x3c6644: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c6644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6648: 0x0  nop
    ctx->pc = 0x3c6648u;
    // NOP
    // 0x3c664c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c664cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c6650: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C6650u;
    {
        const bool branch_taken_0x3c6650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c6650) {
            ctx->pc = 0x3C6668u;
            goto label_3c6668;
        }
    }
    ctx->pc = 0x3C6658u;
label_3c6658:
    // 0x3c6658: 0xc0f19e8  jal         func_3C67A0
    ctx->pc = 0x3C6658u;
    SET_GPR_U32(ctx, 31, 0x3C6660u);
    ctx->pc = 0x3C665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6658u;
    // 0x3c665c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C67A0u, 0x3C6658u, 0x3C6660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6660u;
label_3c6660:
    // 0x3c6660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C6660u;
    {
        const bool branch_taken_0x3c6660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6660) {
            ctx->pc = 0x3C6670u;
            goto label_3c6670;
        }
    }
    ctx->pc = 0x3C6668u;
label_3c6668:
    // 0x3c6668: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C6668u;
    {
        const bool branch_taken_0x3c6668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6668u;
        // 0x3c666c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6668) {
            ctx->pc = 0x3C66B8u;
            goto label_3c66b8;
        }
    }
    ctx->pc = 0x3C6670u;
label_3c6670:
    // 0x3c6670: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3c6670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3c6674: 0xc64c05a0  lwc1        $f12, 0x5A0($s2)
    ctx->pc = 0x3c6674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c6678: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C6678u;
    SET_GPR_U32(ctx, 31, 0x3C6680u);
    ctx->pc = 0x3C667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6678u;
    // 0x3c667c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C6678u, 0x3C6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6680u;
label_3c6680:
    // 0x3c6680: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x3c6680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x3c6684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c6684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6688: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x3c6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c668c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3c668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6690: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c6690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c6694: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x3c6694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x3c6698: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x3c6698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c669c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x3c669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c66a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c66a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c66a4: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x3c66a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x3c66a8: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x3c66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c66ac: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x3c66acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c66b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c66b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c66b4: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x3c66b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_3c66b8:
    // 0x3c66b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c66b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c66bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c66bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c66c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c66c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c66c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c66c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c66c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C66C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C66C8u;
        // 0x3c66cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C66C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C66D0u;
}

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

// Function: sub_003DB600
// Address: 0x3db600 - 0x3db73c
void sub_003DB600_0x3db600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB600_0x3db600");
#endif

    switch (ctx->pc) {
        case 0x3db63cu: goto label_3db63c;
        case 0x3db6a4u: goto label_3db6a4;
        case 0x3db6d4u: goto label_3db6d4;
        case 0x3db6ecu: goto label_3db6ec;
        default: break;
    }

    ctx->pc = 0x3db600u;

    // 0x3db600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3db600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3db604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3db604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3db608: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3db608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3db60c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3db60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3db610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3db610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db614: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3db614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3db618: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3db618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3db61c: 0x26032ba0  addiu       $v1, $s0, 0x2BA0
    ctx->pc = 0x3db61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11168));
    // 0x3db620: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x3db620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3db624: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3db624u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3db628: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3db628u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db62c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3db62cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3db630: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3db630u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3db634: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3DB634u;
    SET_GPR_U32(ctx, 31, 0x3DB63Cu);
    ctx->pc = 0x3DB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB634u;
    // 0x3db638: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3DB634u, 0x3DB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB63Cu;
label_3db63c:
    // 0x3db63c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3db63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3db640: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3db640u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3db644: 0x460ca036  c.le.s      $f20, $f12
    ctx->pc = 0x3db644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3db648: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DB648u;
    {
        const bool branch_taken_0x3db648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB648u;
        // 0x3db64c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db648) {
            ctx->pc = 0x3DB660u;
            goto label_3db660;
        }
    }
    ctx->pc = 0x3DB650u;
    // 0x3db650: 0xe60c2bc0  swc1        $f12, 0x2BC0($s0)
    ctx->pc = 0x3db650u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11200), bits); }
    // 0x3db654: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3DB654u;
    {
        const bool branch_taken_0x3db654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB654u;
        // 0x3db658: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db654) {
            ctx->pc = 0x3DB6E0u;
            goto label_3db6e0;
        }
    }
    ctx->pc = 0x3DB65Cu;
    // 0x3db65c: 0x0  nop
    ctx->pc = 0x3db65cu;
    // NOP
label_3db660:
    // 0x3db660: 0xc6012bc0  lwc1        $f1, 0x2BC0($s0)
    ctx->pc = 0x3db660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db664: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x3db664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3db668: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DB668u;
    {
        const bool branch_taken_0x3db668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3db668) {
            ctx->pc = 0x3DB680u;
            goto label_3db680;
        }
    }
    ctx->pc = 0x3DB670u;
    // 0x3db670: 0xe6142bc0  swc1        $f20, 0x2BC0($s0)
    ctx->pc = 0x3db670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11200), bits); }
    // 0x3db674: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3DB674u;
    {
        const bool branch_taken_0x3db674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB674u;
        // 0x3db678: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db674) {
            ctx->pc = 0x3DB6D8u;
            goto label_3db6d8;
        }
    }
    ctx->pc = 0x3DB67Cu;
    // 0x3db67c: 0x0  nop
    ctx->pc = 0x3db67cu;
    // NOP
label_3db680:
    // 0x3db680: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3db680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3db684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3db684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3db688: 0x0  nop
    ctx->pc = 0x3db688u;
    // NOP
    // 0x3db68c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3db68cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3db690: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3db690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3db694: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3DB694u;
    {
        const bool branch_taken_0x3db694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DB698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB694u;
        // 0x3db698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db694) {
            ctx->pc = 0x3DB6B0u;
            goto label_3db6b0;
        }
    }
    ctx->pc = 0x3DB69Cu;
    // 0x3db69c: 0xc0f6e0c  jal         func_3DB830
    ctx->pc = 0x3DB69Cu;
    SET_GPR_U32(ctx, 31, 0x3DB6A4u);
    ctx->pc = 0x3DB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB830u, 0x3DB69Cu, 0x3DB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB6A4u;
label_3db6a4:
    // 0x3db6a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DB6A4u;
    {
        const bool branch_taken_0x3db6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db6a4) {
            ctx->pc = 0x3DB6D8u;
            goto label_3db6d8;
        }
    }
    ctx->pc = 0x3DB6ACu;
    // 0x3db6ac: 0x0  nop
    ctx->pc = 0x3db6acu;
    // NOP
label_3db6b0:
    // 0x3db6b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3db6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3db6b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3db6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3db6b8: 0x0  nop
    ctx->pc = 0x3db6b8u;
    // NOP
    // 0x3db6bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3db6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3db6c0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3db6c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3db6c4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB6C4u;
    {
        const bool branch_taken_0x3db6c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB6C4u;
        // 0x3db6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db6c4) {
            ctx->pc = 0x3DB6D8u;
            goto label_3db6d8;
        }
    }
    ctx->pc = 0x3DB6CCu;
    // 0x3db6cc: 0xc0f6e14  jal         func_3DB850
    ctx->pc = 0x3DB6CCu;
    SET_GPR_U32(ctx, 31, 0x3DB6D4u);
    ctx->pc = 0x3DB850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB850u, 0x3DB6CCu, 0x3DB6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB6D4u;
label_3db6d4:
    // 0x3db6d4: 0x0  nop
    ctx->pc = 0x3db6d4u;
    // NOP
label_3db6d8:
    // 0x3db6d8: 0xc6002bc0  lwc1        $f0, 0x2BC0($s0)
    ctx->pc = 0x3db6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db6dc: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x3db6dcu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_3db6e0:
    // 0x3db6e0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3db6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3db6e4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DB6E4u;
    SET_GPR_U32(ctx, 31, 0x3DB6ECu);
    ctx->pc = 0x3DB6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB6E4u;
    // 0x3db6e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DB6E4u, 0x3DB6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB6ECu;
label_3db6ec:
    // 0x3db6ec: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3db6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x3db6f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3db6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db6f4: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x3db6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db6f8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3db6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db6fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3db6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3db700: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x3db700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x3db704: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x3db704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db708: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3db708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db70c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3db70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3db710: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x3db710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3db714: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x3db714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db718: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3db718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db71c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3db71cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3db720: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x3db720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x3db724: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3db724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3db728: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3db728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3db72c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3db72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3db730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3db730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db734: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB734u;
        // 0x3db738: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB73Cu;
}

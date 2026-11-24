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

// Function: sub_003DB4E0
// Address: 0x3db4e0 - 0x3db5bc
void sub_003DB4E0_0x3db4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB4E0_0x3db4e0");
#endif

    switch (ctx->pc) {
        case 0x3db504u: goto label_3db504;
        case 0x3db518u: goto label_3db518;
        case 0x3db540u: goto label_3db540;
        case 0x3db56cu: goto label_3db56c;
        default: break;
    }

    ctx->pc = 0x3db4e0u;

    // 0x3db4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3db4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3db4e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3db4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3db4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3db4ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3db4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3db4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3db4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db4f4: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3db4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3db4f8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3db4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3db4fc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3DB4FCu;
    SET_GPR_U32(ctx, 31, 0x3DB504u);
    ctx->pc = 0x3DB500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB4FCu;
    // 0x3db500: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DB4FCu, 0x3DB504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB504u;
label_3db504:
    // 0x3db504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3db504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db508: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB508u;
    {
        const bool branch_taken_0x3db508 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB508u;
        // 0x3db50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db508) {
            ctx->pc = 0x3DB518u;
            goto label_3db518;
        }
    }
    ctx->pc = 0x3DB510u;
    // 0x3db510: 0xc0f6e60  jal         func_3DB980
    ctx->pc = 0x3DB510u;
    SET_GPR_U32(ctx, 31, 0x3DB518u);
    ctx->pc = 0x3DB980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB980u, 0x3DB510u, 0x3DB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB518u;
label_3db518:
    // 0x3db518: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3DB518u;
    {
        const bool branch_taken_0x3db518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB518u;
        // 0x3db51c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db518) {
            ctx->pc = 0x3DB590u;
            goto label_3db590;
        }
    }
    ctx->pc = 0x3DB520u;
    // 0x3db520: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x3db520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3db524: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x3db524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3db528: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3db528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3db52c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3db52cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db530: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3db530u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3db534: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3db534u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3db538: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x3DB538u;
    SET_GPR_U32(ctx, 31, 0x3DB540u);
    ctx->pc = 0x3DB53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB538u;
    // 0x3db53c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x3DB538u, 0x3DB540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB540u;
label_3db540:
    // 0x3db540: 0xc6012bd0  lwc1        $f1, 0x2BD0($s0)
    ctx->pc = 0x3db540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db544: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3db544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3db548: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x3DB548u;
    {
        const bool branch_taken_0x3db548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3db548) {
            ctx->pc = 0x3DB590u;
            goto label_3db590;
        }
    }
    ctx->pc = 0x3DB550u;
    // 0x3db550: 0x0  nop
    ctx->pc = 0x3db550u;
    // NOP
    // 0x3db554: 0x0  nop
    ctx->pc = 0x3db554u;
    // NOP
    // 0x3db558: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3db558u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3db55c: 0x0  nop
    ctx->pc = 0x3db55cu;
    // NOP
    // 0x3db560: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3db560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3db564: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DB564u;
    SET_GPR_U32(ctx, 31, 0x3DB56Cu);
    ctx->pc = 0x3DB568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB564u;
    // 0x3db568: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DB564u, 0x3DB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB56Cu;
label_3db56c:
    // 0x3db56c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x3db56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3db570: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3db570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3db574: 0x26042ba0  addiu       $a0, $s0, 0x2BA0
    ctx->pc = 0x3db574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11168));
    // 0x3db578: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3db578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3db57c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3db57cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db580: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3db580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3db584: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x3db584u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3db588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB588u;
    {
        const bool branch_taken_0x3db588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB588u;
        // 0x3db58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db588) {
            ctx->pc = 0x3DB5A8u;
            goto label_3db5a8;
        }
    }
    ctx->pc = 0x3DB590u;
label_3db590:
    // 0x3db590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3db590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db594: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x3db594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3db598: 0x26032ba0  addiu       $v1, $s0, 0x2BA0
    ctx->pc = 0x3db598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11168));
    // 0x3db59c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3db59cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db5a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3db5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db5a4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3db5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_3db5a8:
    // 0x3db5a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3db5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3db5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db5b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5B4u;
        // 0x3db5b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB5BCu;
}

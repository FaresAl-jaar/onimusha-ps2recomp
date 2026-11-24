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

// Function: sub_003C77C0
// Address: 0x3c77c0 - 0x3c7974
void sub_003C77C0_0x3c77c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C77C0_0x3c77c0");
#endif

    switch (ctx->pc) {
        case 0x3c77e8u: goto label_3c77e8;
        case 0x3c789cu: goto label_3c789c;
        case 0x3c78ccu: goto label_3c78cc;
        case 0x3c78d8u: goto label_3c78d8;
        case 0x3c78e8u: goto label_3c78e8;
        case 0x3c7944u: goto label_3c7944;
        default: break;
    }

    ctx->pc = 0x3c77c0u;

    // 0x3c77c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c77c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c77c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c77c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3c77c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c77c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c77cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c77ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c77d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c77d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c77d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c77d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c77d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c77d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c77dc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3C77DCu;
    {
        const bool branch_taken_0x3c77dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C77DCu;
        // 0x3c77e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c77dc) {
            ctx->pc = 0x3C7948u;
            goto label_3c7948;
        }
    }
    ctx->pc = 0x3C77E4u;
    // 0x3c77e4: 0x0  nop
    ctx->pc = 0x3c77e4u;
    // NOP
label_3c77e8:
    // 0x3c77e8: 0x8e67004c  lw          $a3, 0x4C($s3)
    ctx->pc = 0x3c77e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3c77ec: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x3c77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3c77f0: 0x123180  sll         $a2, $s2, 6
    ctx->pc = 0x3c77f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x3c77f4: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x3c77f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3c77f8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x3c77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c77fc: 0x8e620574  lw          $v0, 0x574($s3)
    ctx->pc = 0x3c77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c7800: 0x8ce30080  lw          $v1, 0x80($a3)
    ctx->pc = 0x3c7800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x3c7804: 0x8ce50094  lw          $a1, 0x94($a3)
    ctx->pc = 0x3c7804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x3c7808: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3c7808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3c780c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3c780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7810: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3c7810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c7814: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x3c7814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x3c7818: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3c7818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c781c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3c781cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7820: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x3C7820u;
    {
        const bool branch_taken_0x3c7820 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7820u;
        // 0x3c7824: 0xa68821  addu        $s1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7820) {
            ctx->pc = 0x3C7868u;
            goto label_3c7868;
        }
    }
    ctx->pc = 0x3C7828u;
    // 0x3c7828: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3c7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c782c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x3c782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7830: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3c7830u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7834: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3C7834u;
    {
        const bool branch_taken_0x3c7834 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7834) {
            ctx->pc = 0x3C7868u;
            goto label_3c7868;
        }
    }
    ctx->pc = 0x3C783Cu;
    // 0x3c783c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3c783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7840: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x3c7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7844: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3c7844u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7848: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3C7848u;
    {
        const bool branch_taken_0x3c7848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7848) {
            ctx->pc = 0x3C7868u;
            goto label_3c7868;
        }
    }
    ctx->pc = 0x3C7850u;
    // 0x3c7850: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x3c7850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3c7854: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c7854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c7858: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x3c7858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c785c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C785Cu;
    {
        const bool branch_taken_0x3c785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C785Cu;
        // 0x3c7860: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c785c) {
            ctx->pc = 0x3C7890u;
            goto label_3c7890;
        }
    }
    ctx->pc = 0x3C7864u;
    // 0x3c7864: 0x0  nop
    ctx->pc = 0x3c7864u;
    // NOP
label_3c7868:
    // 0x3c7868: 0x8e620574  lw          $v0, 0x574($s3)
    ctx->pc = 0x3c7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c786c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x3c786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3c7870: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3c7870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c7874: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x3c7874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x3c7878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c7878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c787c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3c787cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c7880: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3c7880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c7884: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3c7884u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3c7888: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x3c7888u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3c788c: 0x0  nop
    ctx->pc = 0x3c788cu;
    // NOP
label_3c7890:
    // 0x3c7890: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3c7890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c7894: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3C7894u;
    SET_GPR_U32(ctx, 31, 0x3C789Cu);
    ctx->pc = 0x3C7898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7894u;
    // 0x3c7898: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3C7894u, 0x3C789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C789Cu;
label_3c789c:
    // 0x3c789c: 0x8e620574  lw          $v0, 0x574($s3)
    ctx->pc = 0x3c789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c78a0: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x3c78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x3c78a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c78a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c78a8: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x3c78a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3c78ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c78acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c78b0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3c78b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3c78b4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3c78b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c78b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c78bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3c78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3c78c0: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3c78c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c78c4: 0xc041460  jal         func_105180
    ctx->pc = 0x3C78C4u;
    SET_GPR_U32(ctx, 31, 0x3C78CCu);
    ctx->pc = 0x3C78C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C78C4u;
    // 0x3c78c8: 0x7ce80000  sq          $t0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3C78C4u, 0x3C78CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C78CCu;
label_3c78cc:
    // 0x3c78cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c78ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c78d0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3C78D0u;
    SET_GPR_U32(ctx, 31, 0x3C78D8u);
    ctx->pc = 0x3C78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C78D0u;
    // 0x3c78d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3C78D0u, 0x3C78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C78D8u;
label_3c78d8:
    // 0x3c78d8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3c78d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3c78dc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3c78dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c78e0: 0xc041460  jal         func_105180
    ctx->pc = 0x3C78E0u;
    SET_GPR_U32(ctx, 31, 0x3C78E8u);
    ctx->pc = 0x3C78E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C78E0u;
    // 0x3c78e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3C78E0u, 0x3C78E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C78E8u;
label_3c78e8:
    // 0x3c78e8: 0x8e640574  lw          $a0, 0x574($s3)
    ctx->pc = 0x3c78e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1396)));
    // 0x3c78ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c78ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c78f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c78f4: 0x123980  sll         $a3, $s2, 6
    ctx->pc = 0x3c78f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x3c78f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c78f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c78fc: 0x26280030  addiu       $t0, $s1, 0x30
    ctx->pc = 0x3c78fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3c7900: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c7900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c7904: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x3c7904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x3c7908: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3c7908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c790c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x3c790cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3c7910: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c7910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c7914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c7914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7918: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x3c7918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3c791c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c791cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c7920: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x3c7920u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x3c7924: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x3c7924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3c7928: 0xe622001c  swc1        $f2, 0x1C($s1)
    ctx->pc = 0x3c7928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x3c792c: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x3c792cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x3c7930: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x3c7930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x3c7934: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3c7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3c7938: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x3c7938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x3c793c: 0xc04144e  jal         func_105138
    ctx->pc = 0x3C793Cu;
    SET_GPR_U32(ctx, 31, 0x3C7944u);
    ctx->pc = 0x3C7940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C793Cu;
    // 0x3c7940: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x3C793Cu, 0x3C7944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7944u;
label_3c7944:
    // 0x3c7944: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c7944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c7948:
    // 0x3c7948: 0x8e630568  lw          $v1, 0x568($s3)
    ctx->pc = 0x3c7948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1384)));
    // 0x3c794c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x3c794cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c7950: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x3C7950u;
    {
        const bool branch_taken_0x3c7950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7950) {
            ctx->pc = 0x3C77E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c77e8;
        }
    }
    ctx->pc = 0x3C7958u;
    // 0x3c7958: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c7958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c795c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c795cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c7960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c7964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c7968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c796c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C796Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C796Cu;
        // 0x3c7970: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C796Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7974u;
}

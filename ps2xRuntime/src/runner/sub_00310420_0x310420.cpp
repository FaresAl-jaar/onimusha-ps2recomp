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

// Function: sub_00310420
// Address: 0x310420 - 0x310a9c
void sub_00310420_0x310420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310420_0x310420");
#endif

    switch (ctx->pc) {
        case 0x31047cu: goto label_31047c;
        case 0x310488u: goto label_310488;
        case 0x310490u: goto label_310490;
        case 0x310498u: goto label_310498;
        case 0x3104b8u: goto label_3104b8;
        case 0x3104ccu: goto label_3104cc;
        case 0x3104d8u: goto label_3104d8;
        case 0x3104e8u: goto label_3104e8;
        case 0x3104f4u: goto label_3104f4;
        case 0x310508u: goto label_310508;
        case 0x310568u: goto label_310568;
        case 0x3105c8u: goto label_3105c8;
        case 0x3106f8u: goto label_3106f8;
        case 0x310764u: goto label_310764;
        case 0x3107d8u: goto label_3107d8;
        case 0x3107f0u: goto label_3107f0;
        case 0x310800u: goto label_310800;
        case 0x3108f8u: goto label_3108f8;
        case 0x310934u: goto label_310934;
        case 0x3109a0u: goto label_3109a0;
        case 0x3109a8u: goto label_3109a8;
        case 0x3109ccu: goto label_3109cc;
        case 0x3109e0u: goto label_3109e0;
        case 0x3109fcu: goto label_3109fc;
        case 0x310a10u: goto label_310a10;
        case 0x310a68u: goto label_310a68;
        default: break;
    }

    ctx->pc = 0x310420u;

    // 0x310420: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x310420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x310424: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x310424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x310428: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x310428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x31042c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x310430: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x310430u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310434: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x310434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x310438: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x310438u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31043c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x310440: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x310440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310444: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x310444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x310448: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x310448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31044c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x310450: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x310450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310454: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x310454u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x310458: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x310458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31045c: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x31045cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x310460: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x310460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x310464: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x310464u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x310468: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x310468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31046c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x31046cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x310470: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x310470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310474: 0xc0414d0  jal         func_105340
    ctx->pc = 0x310474u;
    SET_GPR_U32(ctx, 31, 0x31047Cu);
    ctx->pc = 0x310478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310474u;
    // 0x310478: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x310474u, 0x31047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31047Cu;
label_31047c:
    // 0x31047c: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x31047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x310480: 0xc041472  jal         func_1051C8
    ctx->pc = 0x310480u;
    SET_GPR_U32(ctx, 31, 0x310488u);
    ctx->pc = 0x310484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310480u;
    // 0x310484: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x310480u, 0x310488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310488u;
label_310488:
    // 0x310488: 0xc04150c  jal         func_105430
    ctx->pc = 0x310488u;
    SET_GPR_U32(ctx, 31, 0x310490u);
    ctx->pc = 0x31048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310488u;
    // 0x31048c: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x310488u, 0x310490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310490u;
label_310490:
    // 0x310490: 0xc04150c  jal         func_105430
    ctx->pc = 0x310490u;
    SET_GPR_U32(ctx, 31, 0x310498u);
    ctx->pc = 0x310494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310490u;
    // 0x310494: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x310490u, 0x310498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310498u;
label_310498:
    // 0x310498: 0x27a30280  addiu       $v1, $sp, 0x280
    ctx->pc = 0x310498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x31049c: 0x7a660000  lq          $a2, 0x0($s3)
    ctx->pc = 0x31049cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3104a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3104a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3104a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3104a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3104a8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x3104a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x3104ac: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x3104acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x3104b0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3104B0u;
    SET_GPR_U32(ctx, 31, 0x3104B8u);
    ctx->pc = 0x3104B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104B0u;
    // 0x3104b4: 0x7c660000  sq          $a2, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3104B0u, 0x3104B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104B8u;
label_3104b8:
    // 0x3104b8: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x3104b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x3104bc: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x3104bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3104c0: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x3104c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x3104c4: 0xc041460  jal         func_105180
    ctx->pc = 0x3104C4u;
    SET_GPR_U32(ctx, 31, 0x3104CCu);
    ctx->pc = 0x3104C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104C4u;
    // 0x3104c8: 0x24c69220  addiu       $a2, $a2, -0x6DE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3104C4u, 0x3104CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104CCu;
label_3104cc:
    // 0x3104cc: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x3104ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3104d0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3104D0u;
    SET_GPR_U32(ctx, 31, 0x3104D8u);
    ctx->pc = 0x3104D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104D0u;
    // 0x3104d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3104D0u, 0x3104D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104D8u;
label_3104d8:
    // 0x3104d8: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x3104d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x3104dc: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x3104dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x3104e0: 0xc041460  jal         func_105180
    ctx->pc = 0x3104E0u;
    SET_GPR_U32(ctx, 31, 0x3104E8u);
    ctx->pc = 0x3104E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104E0u;
    // 0x3104e4: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3104E0u, 0x3104E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104E8u;
label_3104e8:
    // 0x3104e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3104e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3104ec: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3104ECu;
    SET_GPR_U32(ctx, 31, 0x3104F4u);
    ctx->pc = 0x3104F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104ECu;
    // 0x3104f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3104ECu, 0x3104F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104F4u;
label_3104f4:
    // 0x3104f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3104f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3104f8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3104f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x3104fc: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x3104fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x310500: 0xc04144e  jal         func_105138
    ctx->pc = 0x310500u;
    SET_GPR_U32(ctx, 31, 0x310508u);
    ctx->pc = 0x310504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310500u;
    // 0x310504: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x310500u, 0x310508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310508u;
label_310508:
    // 0x310508: 0x6400001  bltz        $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x310508u;
    {
        const bool branch_taken_0x310508 = (GPR_S64(ctx, 18) < 0);
        if (branch_taken_0x310508) {
            ctx->pc = 0x310510u;
            goto label_310510;
        }
    }
    ctx->pc = 0x310510u;
label_310510:
    // 0x310510: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x310510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x310514: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x310514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310518: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x310518u;
    {
        const bool branch_taken_0x310518 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x31051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310518u;
        // 0x31051c: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310518) {
            ctx->pc = 0x31052Cu;
            goto label_31052c;
        }
    }
    ctx->pc = 0x310520u;
    // 0x310520: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x310520u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310524: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x310524u;
    {
        const bool branch_taken_0x310524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310524u;
        // 0x310528: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310524) {
            ctx->pc = 0x310544u;
            goto label_310544;
        }
    }
    ctx->pc = 0x31052Cu;
label_31052c:
    // 0x31052c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x31052cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x310530: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x310530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x310534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310538: 0x0  nop
    ctx->pc = 0x310538u;
    // NOP
    // 0x31053c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31053cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x310540: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x310540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_310544:
    // 0x310544: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x310548: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x310548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x31054c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x31054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x310550: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x310550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x310554: 0x46150583  div.s       $f22, $f0, $f21
    ctx->pc = 0x310554u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x310558: 0x0  nop
    ctx->pc = 0x310558u;
    // NOP
    // 0x31055c: 0x0  nop
    ctx->pc = 0x31055cu;
    // NOP
    // 0x310560: 0xc041494  jal         func_105250
    ctx->pc = 0x310560u;
    SET_GPR_U32(ctx, 31, 0x310568u);
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x310560u, 0x310568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310568u;
label_310568:
    // 0x310568: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x310568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x31056c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310570: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x310570u;
    {
        const bool branch_taken_0x310570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x310574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310570u;
        // 0x310574: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310570) {
            ctx->pc = 0x310698u;
            goto label_310698;
        }
    }
    ctx->pc = 0x310578u;
    // 0x310578: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x310578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x31057c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x31057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x310580: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x310580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x310584: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x310584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x310588: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x310588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x31058c: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x31058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x310590: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x310590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x310594: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x310594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x310598: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x310598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x31059c: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x31059cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x3105a0: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x3105a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x3105a4: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x3105a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x3105a8: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x3105a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
    // 0x3105ac: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x3105acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
    // 0x3105b0: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x3105b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
    // 0x3105b4: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x3105b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x3105b8: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x3105b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x3105bc: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x3105bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
    // 0x3105c0: 0xc04144e  jal         func_105138
    ctx->pc = 0x3105C0u;
    SET_GPR_U32(ctx, 31, 0x3105C8u);
    ctx->pc = 0x3105C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3105C0u;
    // 0x3105c4: 0xafa0023c  sw          $zero, 0x23C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x3105C0u, 0x3105C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3105C8u;
label_3105c8:
    // 0x3105c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3105c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3105cc: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x3105ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x3105d0: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x3105d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x3105d4: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x3105d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x3105d8: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x3105d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x3105dc: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x3105dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x3105e0: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x3105e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x3105e4: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x3105e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
    // 0x3105e8: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x3105e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
    // 0x3105ec: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x3105ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
    // 0x3105f0: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x3105f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x3105f4: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x3105f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x3105f8: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x3105f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
    // 0x3105fc: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x3105fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
    // 0x310600: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x310600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
    // 0x310604: 0xafa00248  sw          $zero, 0x248($sp)
    ctx->pc = 0x310604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 0));
    // 0x310608: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x310608u;
    {
        const bool branch_taken_0x310608 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x31060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310608u;
        // 0x31060c: 0xafa0024c  sw          $zero, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310608) {
            ctx->pc = 0x31061Cu;
            goto label_31061c;
        }
    }
    ctx->pc = 0x310610u;
    // 0x310610: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x310610u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310614: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x310614u;
    {
        const bool branch_taken_0x310614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310614u;
        // 0x310618: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310614) {
            ctx->pc = 0x310638u;
            goto label_310638;
        }
    }
    ctx->pc = 0x31061Cu;
label_31061c:
    // 0x31061c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x31061cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x310620: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x310620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x310624: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x310624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x310628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31062c: 0x0  nop
    ctx->pc = 0x31062cu;
    // NOP
    // 0x310630: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x310630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x310634: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x310634u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_310638:
    // 0x310638: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x310638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x31063c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x310640: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x310640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310648: 0x0  nop
    ctx->pc = 0x310648u;
    // NOP
    // 0x31064c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x31064cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x310650: 0x26a300c0  addiu       $v1, $s5, 0xC0
    ctx->pc = 0x310650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x310654: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x310654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x310658: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x310658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x31065c: 0xe7a10240  swc1        $f1, 0x240($sp)
    ctx->pc = 0x31065cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x310660: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x310660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310668: 0x0  nop
    ctx->pc = 0x310668u;
    // NOP
    // 0x31066c: 0xe7a10244  swc1        $f1, 0x244($sp)
    ctx->pc = 0x31066cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x310670: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x310670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x310674: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x310674u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310678: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x310678u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31067c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x31067cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x310680: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x310680u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x310684: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x310684u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x310688: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x310688u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x31068c: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x31068cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x310690: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x310690u;
    {
        const bool branch_taken_0x310690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310690u;
        // 0x310694: 0x7c640030  sq          $a0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310690) {
            ctx->pc = 0x310790u;
            goto label_310790;
        }
    }
    ctx->pc = 0x310698u;
label_310698:
    // 0x310698: 0x3c0242ff  lui         $v0, 0x42FF
    ctx->pc = 0x310698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17151 << 16));
    // 0x31069c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31069cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3106a0: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x3106a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x3106a4: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x3106a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x3106a8: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x3106a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x3106ac: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x3106acu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x3106b0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3106b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3106b4: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x3106b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x3106b8: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x3106b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x3106bc: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x3106bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x3106c0: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x3106c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x3106c4: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x3106c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x3106c8: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x3106c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x3106cc: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x3106ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x3106d0: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x3106d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x3106d4: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x3106d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x3106d8: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x3106d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
    // 0x3106dc: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x3106dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
    // 0x3106e0: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x3106e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
    // 0x3106e4: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x3106e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x3106e8: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x3106e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
    // 0x3106ec: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x3106ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
    // 0x3106f0: 0xc04144e  jal         func_105138
    ctx->pc = 0x3106F0u;
    SET_GPR_U32(ctx, 31, 0x3106F8u);
    ctx->pc = 0x3106F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3106F0u;
    // 0x3106f4: 0xe7a00234  swc1        $f0, 0x234($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x3106F0u, 0x3106F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3106F8u;
label_3106f8:
    // 0x3106f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3106f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3106fc: 0x26a400c0  addiu       $a0, $s5, 0xC0
    ctx->pc = 0x3106fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x310700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310704: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x310704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x310708: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x310708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x31070c: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x31070cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x310710: 0x46150043  div.s       $f1, $f0, $f21
    ctx->pc = 0x310710u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x310714: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x310714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x310718: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x310718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x31071c: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x31071cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x310720: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x310720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x310724: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x310724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x310728: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x310728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x31072c: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x31072cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x310730: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x310730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
    // 0x310734: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x310734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
    // 0x310738: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x310738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
    // 0x31073c: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x31073cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x310740: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x310740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
    // 0x310744: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x310744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
    // 0x310748: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x310748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
    // 0x31074c: 0xafa0024c  sw          $zero, 0x24C($sp)
    ctx->pc = 0x31074cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
    // 0x310750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310754: 0x0  nop
    ctx->pc = 0x310754u;
    // NOP
    // 0x310758: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x310758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31075c: 0xc04144e  jal         func_105138
    ctx->pc = 0x31075Cu;
    SET_GPR_U32(ctx, 31, 0x310764u);
    ctx->pc = 0x310760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31075Cu;
    // 0x310760: 0xe7a00230  swc1        $f0, 0x230($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x31075Cu, 0x310764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310764u;
label_310764:
    // 0x310764: 0x26a200c0  addiu       $v0, $s5, 0xC0
    ctx->pc = 0x310764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x310768: 0x26a30100  addiu       $v1, $s5, 0x100
    ctx->pc = 0x310768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x31076c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x31076cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310770: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x310770u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x310774: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x310774u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x310778: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x310778u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x31077c: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x31077cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x310780: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x310780u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x310784: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x310784u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x310788: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x310788u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
    // 0x31078c: 0x0  nop
    ctx->pc = 0x31078cu;
    // NOP
label_310790:
    // 0x310790: 0x3c02491f  lui         $v0, 0x491F
    ctx->pc = 0x310790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18719 << 16));
    // 0x310794: 0x3443ff60  ori         $v1, $v0, 0xFF60
    ctx->pc = 0x310794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65376);
    // 0x310798: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x310798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x31079c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31079cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3107a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3107a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3107a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3107a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3107a8: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3107a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3107ac: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x3107acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3107b0: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x3107b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x3107b4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3107b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x3107b8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3107b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x3107bc: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x3107bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x3107c0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x3107c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x3107c4: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x3107c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x3107c8: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x3107c8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x3107cc: 0x46006c46  mov.s       $f17, $f13
    ctx->pc = 0x3107ccu;
    ctx->f[17] = FPU_MOV_S(ctx->f[13]);
    // 0x3107d0: 0xc041646  jal         func_105918
    ctx->pc = 0x3107D0u;
    SET_GPR_U32(ctx, 31, 0x3107D8u);
    ctx->pc = 0x3107D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107D0u;
    // 0x3107d4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105918u, 0x3107D0u, 0x3107D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3107D8u;
label_3107d8:
    // 0x3107d8: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x3107d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x3107dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3107dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3107e0: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x3107e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x3107e4: 0x27a602d0  addiu       $a2, $sp, 0x2D0
    ctx->pc = 0x3107e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x3107e8: 0xc0415d0  jal         func_105740
    ctx->pc = 0x3107E8u;
    SET_GPR_U32(ctx, 31, 0x3107F0u);
    ctx->pc = 0x3107ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107E8u;
    // 0x3107ec: 0x24e79220  addiu       $a3, $a3, -0x6DE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105740u, 0x3107E8u, 0x3107F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3107F0u;
label_3107f0:
    // 0x3107f0: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x3107f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x3107f4: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3107f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3107f8: 0xc04144e  jal         func_105138
    ctx->pc = 0x3107F8u;
    SET_GPR_U32(ctx, 31, 0x310800u);
    ctx->pc = 0x3107FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107F8u;
    // 0x3107fc: 0x27a602e0  addiu       $a2, $sp, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x3107F8u, 0x310800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310800u;
label_310800:
    // 0x310800: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x310800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x310804: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x310804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310808: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x310808u;
    {
        const bool branch_taken_0x310808 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x31080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310808u;
        // 0x31080c: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310808) {
            ctx->pc = 0x31081Cu;
            goto label_31081c;
        }
    }
    ctx->pc = 0x310810u;
    // 0x310810: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x310810u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310814: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x310814u;
    {
        const bool branch_taken_0x310814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310814u;
        // 0x310818: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310814) {
            ctx->pc = 0x310834u;
            goto label_310834;
        }
    }
    ctx->pc = 0x31081Cu;
label_31081c:
    // 0x31081c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x31081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x310820: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x310820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x310824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310828: 0x0  nop
    ctx->pc = 0x310828u;
    // NOP
    // 0x31082c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31082cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x310830: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x310830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_310834:
    // 0x310834: 0x0  nop
    ctx->pc = 0x310834u;
    // NOP
    // 0x310838: 0x0  nop
    ctx->pc = 0x310838u;
    // NOP
    // 0x31083c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x31083cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x310840: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x310840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x310844: 0x3c03bf7f  lui         $v1, 0xBF7F
    ctx->pc = 0x310844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49023 << 16));
    // 0x310848: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x310848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x31084c: 0x3463be77  ori         $v1, $v1, 0xBE77
    ctx->pc = 0x31084cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48759);
    // 0x310850: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x310850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
    // 0x310854: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x310854u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31085c: 0x0  nop
    ctx->pc = 0x31085cu;
    // NOP
    // 0x310860: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x310860u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x310864: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x310864u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x310868: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x310868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31086c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31086Cu;
    {
        const bool branch_taken_0x31086c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x310870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31086Cu;
        // 0x310870: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31086c) {
            ctx->pc = 0x310880u;
            goto label_310880;
        }
    }
    ctx->pc = 0x310874u;
    // 0x310874: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x310874u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310878: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x310878u;
    {
        const bool branch_taken_0x310878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310878u;
        // 0x31087c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310878) {
            ctx->pc = 0x310898u;
            goto label_310898;
        }
    }
    ctx->pc = 0x310880u;
label_310880:
    // 0x310880: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x310880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x310884: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x310884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x310888: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31088c: 0x0  nop
    ctx->pc = 0x31088cu;
    // NOP
    // 0x310890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x310890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x310894: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x310894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_310898:
    // 0x310898: 0x0  nop
    ctx->pc = 0x310898u;
    // NOP
    // 0x31089c: 0x0  nop
    ctx->pc = 0x31089cu;
    // NOP
    // 0x3108a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3108a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3108a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3108a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3108a8: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x3108a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x3108ac: 0x26a40140  addiu       $a0, $s5, 0x140
    ctx->pc = 0x3108acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x3108b0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x3108b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3108b4: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x3108b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x3108b8: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x3108b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x3108bc: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x3108bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x3108c0: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x3108c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x3108c4: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x3108c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x3108c8: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x3108c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x3108cc: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x3108ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x3108d0: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x3108d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x3108d4: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x3108d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x3108d8: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x3108d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x3108dc: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x3108dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
    // 0x3108e0: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x3108e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
    // 0x3108e4: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x3108e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x3108e8: 0xe7a20184  swc1        $f2, 0x184($sp)
    ctx->pc = 0x3108e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x3108ec: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x3108ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x3108f0: 0xc04144e  jal         func_105138
    ctx->pc = 0x3108F0u;
    SET_GPR_U32(ctx, 31, 0x3108F8u);
    ctx->pc = 0x3108F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3108F0u;
    // 0x3108f4: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x3108F0u, 0x3108F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3108F8u;
label_3108f8:
    // 0x3108f8: 0x3c02491f  lui         $v0, 0x491F
    ctx->pc = 0x3108f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18719 << 16));
    // 0x3108fc: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x3108fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x310900: 0x3442ff60  ori         $v0, $v0, 0xFF60
    ctx->pc = 0x310900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65376);
    // 0x310904: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x310904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x310908: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x310908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31090c: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x31090cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x310910: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x310910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x310914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310918: 0x0  nop
    ctx->pc = 0x310918u;
    // NOP
    // 0x31091c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x31091cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x310920: 0x461605c3  div.s       $f23, $f0, $f22
    ctx->pc = 0x310920u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[0], ctx->f[22]); }
    // 0x310924: 0x0  nop
    ctx->pc = 0x310924u;
    // NOP
    // 0x310928: 0x0  nop
    ctx->pc = 0x310928u;
    // NOP
    // 0x31092c: 0xc04150c  jal         func_105430
    ctx->pc = 0x31092Cu;
    SET_GPR_U32(ctx, 31, 0x310934u);
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x31092Cu, 0x310934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310934u;
label_310934:
    // 0x310934: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x310934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x310938: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x310938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x31093c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31093cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310940: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x310940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310944: 0x4617b880  add.s       $f2, $f23, $f23
    ctx->pc = 0x310944u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
    // 0x310948: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x310948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x31094c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x31094cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x310950: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x310950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x310954: 0x461508c2  mul.s       $f3, $f1, $f21
    ctx->pc = 0x310954u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x310958: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x310958u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x31095c: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x31095cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x310960: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x310960u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x310964: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x310964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x310968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31096c: 0x4615a042  mul.s       $f1, $f20, $f21
    ctx->pc = 0x31096cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x310970: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x310970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x310974: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x310974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x310978: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x310978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x31097c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31097cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x310980: 0x4615a081  sub.s       $f2, $f20, $f21
    ctx->pc = 0x310980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x310984: 0x4615a0c0  add.s       $f3, $f20, $f21
    ctx->pc = 0x310984u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x310988: 0x46021843  div.s       $f1, $f3, $f2
    ctx->pc = 0x310988u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x31098c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x31098cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x310990: 0x0  nop
    ctx->pc = 0x310990u;
    // NOP
    // 0x310994: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x310994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x310998: 0xc04144e  jal         func_105138
    ctx->pc = 0x310998u;
    SET_GPR_U32(ctx, 31, 0x3109A0u);
    ctx->pc = 0x31099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310998u;
    // 0x31099c: 0xe7a00148  swc1        $f0, 0x148($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x310998u, 0x3109A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109A0u;
label_3109a0:
    // 0x3109a0: 0xc04150c  jal         func_105430
    ctx->pc = 0x3109A0u;
    SET_GPR_U32(ctx, 31, 0x3109A8u);
    ctx->pc = 0x3109A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109A0u;
    // 0x3109a4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x3109A0u, 0x3109A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109A8u;
label_3109a8:
    // 0x3109a8: 0x3c02c300  lui         $v0, 0xC300
    ctx->pc = 0x3109a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49920 << 16));
    // 0x3109ac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3109acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3109b0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3109b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x3109b4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3109b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3109b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3109b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3109bc: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x3109bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x3109c0: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3109c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x3109c4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3109C4u;
    SET_GPR_U32(ctx, 31, 0x3109CCu);
    ctx->pc = 0x3109C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109C4u;
    // 0x3109c8: 0xe7b600d0  swc1        $f22, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3109C4u, 0x3109CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109CCu;
label_3109cc:
    // 0x3109cc: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x3109ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x3109d0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3109d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3109d4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3109d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3109d8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3109D8u;
    SET_GPR_U32(ctx, 31, 0x3109E0u);
    ctx->pc = 0x3109DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109D8u;
    // 0x3109dc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3109D8u, 0x3109E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109E0u;
label_3109e0:
    // 0x3109e0: 0x3c02c300  lui         $v0, 0xC300
    ctx->pc = 0x3109e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49920 << 16));
    // 0x3109e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3109e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3109e8: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3109e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x3109ec: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3109ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3109f0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x3109f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x3109f4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3109F4u;
    SET_GPR_U32(ctx, 31, 0x3109FCu);
    ctx->pc = 0x3109F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109F4u;
    // 0x3109f8: 0xe7b600d4  swc1        $f22, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3109F4u, 0x3109FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109FCu;
label_3109fc:
    // 0x3109fc: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x3109fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x310a00: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x310a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x310a04: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x310a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x310a08: 0xc041472  jal         func_1051C8
    ctx->pc = 0x310A08u;
    SET_GPR_U32(ctx, 31, 0x310A10u);
    ctx->pc = 0x310A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A08u;
    // 0x310a0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x310A08u, 0x310A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310A10u;
label_310a10:
    // 0x310a10: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x310a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310a14: 0x26a40180  addiu       $a0, $s5, 0x180
    ctx->pc = 0x310a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    // 0x310a18: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x310a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310a1c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x310a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x310a20: 0xc7a50100  lwc1        $f5, 0x100($sp)
    ctx->pc = 0x310a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x310a24: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x310a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x310a28: 0xc7a40108  lwc1        $f4, 0x108($sp)
    ctx->pc = 0x310a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310a2c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x310a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x310a30: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x310a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310a34: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x310a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x310a38: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x310a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310a3c: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x310a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x310a40: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x310a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x310a44: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x310a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310a48: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x310a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310a4c: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x310a4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x310a50: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x310a50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x310a54: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x310a54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x310a58: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x310a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x310a5c: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x310a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x310a60: 0xc04144e  jal         func_105138
    ctx->pc = 0x310A60u;
    SET_GPR_U32(ctx, 31, 0x310A68u);
    ctx->pc = 0x310A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A60u;
    // 0x310a64: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x310A60u, 0x310A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310A68u;
label_310a68:
    // 0x310a68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x310a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x310a6c: 0xc7b7001c  lwc1        $f23, 0x1C($sp)
    ctx->pc = 0x310a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x310a70: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x310a70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x310a74: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x310a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x310a78: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x310a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x310a7c: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x310a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x310a80: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x310a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x310a84: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x310a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310a88: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x310a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x310a8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x310a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x310a90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x310a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310a94: 0x3e00008  jr          $ra
    ctx->pc = 0x310A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A94u;
        // 0x310a98: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310A9Cu;
}

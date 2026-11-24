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

// Function: sub_0037F490
// Address: 0x37f490 - 0x37f7a0
void sub_0037F490_0x37f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F490_0x37f490");
#endif

    switch (ctx->pc) {
        case 0x37f520u: goto label_37f520;
        case 0x37f530u: goto label_37f530;
        case 0x37f590u: goto label_37f590;
        case 0x37f5d4u: goto label_37f5d4;
        case 0x37f630u: goto label_37f630;
        case 0x37f66cu: goto label_37f66c;
        case 0x37f68cu: goto label_37f68c;
        case 0x37f6b8u: goto label_37f6b8;
        case 0x37f6d8u: goto label_37f6d8;
        case 0x37f6ecu: goto label_37f6ec;
        case 0x37f70cu: goto label_37f70c;
        case 0x37f720u: goto label_37f720;
        case 0x37f748u: goto label_37f748;
        default: break;
    }

    ctx->pc = 0x37f490u;

    // 0x37f490: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x37f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x37f494: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x37f498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37f498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f49c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37f49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37f4a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37f4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x37f4a4: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x37f4a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f4a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37f4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37f4ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37f4acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f4b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37f4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37f4b4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37f4b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x37f4b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37f4b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37f4bc: 0x8c822b80  lw          $v0, 0x2B80($a0)
    ctx->pc = 0x37f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11136)));
    // 0x37f4c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x37F4C0u;
    {
        const bool branch_taken_0x37f4c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4C0u;
        // 0x37f4c4: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f4c0) {
            ctx->pc = 0x37F4D0u;
            goto label_37f4d0;
        }
    }
    ctx->pc = 0x37F4C8u;
    // 0x37f4c8: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x37f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37f4cc: 0x0  nop
    ctx->pc = 0x37f4ccu;
    // NOP
label_37f4d0:
    // 0x37f4d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37f4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37f4d4: 0x0  nop
    ctx->pc = 0x37f4d4u;
    // NOP
    // 0x37f4d8: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x37f4d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f4dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x37F4DCu;
    {
        const bool branch_taken_0x37f4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37f4dc) {
            ctx->pc = 0x37F4E8u;
            goto label_37f4e8;
        }
    }
    ctx->pc = 0x37F4E4u;
    // 0x37f4e4: 0xc455000c  lwc1        $f21, 0xC($v0)
    ctx->pc = 0x37f4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37f4e8:
    // 0x37f4e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x37f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x37f4ec: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x37f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x37f4f0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x37f4f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f4f4: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x37f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x37f4f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x37f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x37f4fc: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x37f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x37f500: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x37f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x37f504: 0xe7ac00c4  swc1        $f12, 0xC4($sp)
    ctx->pc = 0x37f504u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x37f508: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x37f508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37f50c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x37f50cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f510: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37f510u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37f514: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37f514u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37f518: 0xc04d8e4  jal         func_136390
    ctx->pc = 0x37F518u;
    SET_GPR_U32(ctx, 31, 0x37F520u);
    ctx->pc = 0x37F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F518u;
    // 0x37f51c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136390u, 0x37F518u, 0x37F520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F520u;
label_37f520:
    // 0x37f520: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x37f520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x37f524: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x37f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x37f528: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x37F528u;
    SET_GPR_U32(ctx, 31, 0x37F530u);
    ctx->pc = 0x37F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F528u;
    // 0x37f52c: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x37F528u, 0x37F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F530u;
label_37f530:
    // 0x37f530: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x37f530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x37f534: 0x87a300de  lh          $v1, 0xDE($sp)
    ctx->pc = 0x37f534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x37f538: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37f538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37f53c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f540: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37f540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f544: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37f544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37f548: 0x28410800  slti        $at, $v0, 0x800
    ctx->pc = 0x37f548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x37f54c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x37F54Cu;
    {
        const bool branch_taken_0x37f54c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F54Cu;
        // 0x37f550: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f54c) {
            ctx->pc = 0x37F598u;
            goto label_37f598;
        }
    }
    ctx->pc = 0x37F554u;
    // 0x37f554: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x37f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x37f558: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37f558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f55c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f560: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37f560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f564: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x37f564u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f568: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x37f568u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x37f56c: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x37f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x37f570: 0x2642ffc8  addiu       $v0, $s2, -0x38
    ctx->pc = 0x37f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967240));
    // 0x37f574: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37f574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37f578: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f57c: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x37f57cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37f580: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x37f580u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f584: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x37f584u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x37f588: 0xc0dfebc  jal         func_37FAF0
    ctx->pc = 0x37F588u;
    SET_GPR_U32(ctx, 31, 0x37F590u);
    ctx->pc = 0x37F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F588u;
    // 0x37f58c: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FAF0u, 0x37F588u, 0x37F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F590u;
label_37f590:
    // 0x37f590: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x37F590u;
    {
        const bool branch_taken_0x37f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f590) {
            ctx->pc = 0x37F5D8u;
            goto label_37f5d8;
        }
    }
    ctx->pc = 0x37F598u;
label_37f598:
    // 0x37f598: 0x24620c00  addiu       $v0, $v1, 0xC00
    ctx->pc = 0x37f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3072));
    // 0x37f59c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f5a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f5a4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x37f5a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f5a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37f5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37f5ac: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x37f5acu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x37f5b0: 0x2643ffc8  addiu       $v1, $s2, -0x38
    ctx->pc = 0x37f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967240));
    // 0x37f5b4: 0x26420038  addiu       $v0, $s2, 0x38
    ctx->pc = 0x37f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x37f5b8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37f5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37f5bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f5c0: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x37f5c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37f5c4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x37f5c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f5c8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x37f5c8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x37f5cc: 0xc0dfebc  jal         func_37FAF0
    ctx->pc = 0x37F5CCu;
    SET_GPR_U32(ctx, 31, 0x37F5D4u);
    ctx->pc = 0x37F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F5CCu;
    // 0x37f5d0: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FAF0u, 0x37F5CCu, 0x37F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F5D4u;
label_37f5d4:
    // 0x37f5d4: 0x0  nop
    ctx->pc = 0x37f5d4u;
    // NOP
label_37f5d8:
    // 0x37f5d8: 0x87a400dc  lh          $a0, 0xDC($sp)
    ctx->pc = 0x37f5d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x37f5dc: 0x3c024480  lui         $v0, 0x4480
    ctx->pc = 0x37f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17536 << 16));
    // 0x37f5e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x37f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x37f5e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37f5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37f5e8: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x37f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x37f5ec: 0x866500c0  lh          $a1, 0xC0($s3)
    ctx->pc = 0x37f5ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x37f5f0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x37f5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37f5f4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x37f5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x37f5f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f5fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x37f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37f600: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x37f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f604: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x37f604u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x37f608: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37f608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37f60c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f60cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37f610: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37f610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x37f614: 0x0  nop
    ctx->pc = 0x37f614u;
    // NOP
    // 0x37f618: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37f618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f61c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37f61cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37f620: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f624: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x37f624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f628: 0xc0decb8  jal         func_37B2E0
    ctx->pc = 0x37F628u;
    SET_GPR_U32(ctx, 31, 0x37F630u);
    ctx->pc = 0x37F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F628u;
    // 0x37f62c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2E0u, 0x37F628u, 0x37F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F630u;
label_37f630:
    // 0x37f630: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x37f630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f634: 0x866300c0  lh          $v1, 0xC0($s3)
    ctx->pc = 0x37f634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x37f638: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x37f638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x37f63c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x37f63cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x37f640: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37f640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37f644: 0x0  nop
    ctx->pc = 0x37f644u;
    // NOP
    // 0x37f648: 0x4601a801  sub.s       $f0, $f21, $f1
    ctx->pc = 0x37f648u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x37f64c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x37f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37f650: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f654: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x37f654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f658: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x37F658u;
    {
        const bool branch_taken_0x37f658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F658u;
        // 0x37f65c: 0xa66200c0  sh          $v0, 0xC0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f658) {
            ctx->pc = 0x37F698u;
            goto label_37f698;
        }
    }
    ctx->pc = 0x37F660u;
    // 0x37f660: 0x866500c2  lh          $a1, 0xC2($s3)
    ctx->pc = 0x37f660u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x37f664: 0xc0decb8  jal         func_37B2E0
    ctx->pc = 0x37F664u;
    SET_GPR_U32(ctx, 31, 0x37F66Cu);
    ctx->pc = 0x37F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F664u;
    // 0x37f668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2E0u, 0x37F664u, 0x37F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F66Cu;
label_37f66c:
    // 0x37f66c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37f66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37f670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f674: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x37f674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x37f678: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37f678u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37f67c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37f680: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f684: 0xc0dfcec  jal         func_37F3B0
    ctx->pc = 0x37F684u;
    SET_GPR_U32(ctx, 31, 0x37F68Cu);
    ctx->pc = 0x37F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F684u;
    // 0x37f688: 0xa66200c2  sh          $v0, 0xC2($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F3B0u, 0x37F684u, 0x37F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F68Cu;
label_37f68c:
    // 0x37f68c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x37F68Cu;
    {
        const bool branch_taken_0x37f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f68c) {
            ctx->pc = 0x37F710u;
            goto label_37f710;
        }
    }
    ctx->pc = 0x37F694u;
    // 0x37f694: 0x0  nop
    ctx->pc = 0x37f694u;
    // NOP
label_37f698:
    // 0x37f698: 0x46150800  add.s       $f0, $f1, $f21
    ctx->pc = 0x37f698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x37f69c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x37f69cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37f6a0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x37F6A0u;
    {
        const bool branch_taken_0x37f6a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37f6a0) {
            ctx->pc = 0x37F6E0u;
            goto label_37f6e0;
        }
    }
    ctx->pc = 0x37F6A8u;
    // 0x37f6a8: 0x866500c2  lh          $a1, 0xC2($s3)
    ctx->pc = 0x37f6a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x37f6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f6b0: 0xc0decb8  jal         func_37B2E0
    ctx->pc = 0x37F6B0u;
    SET_GPR_U32(ctx, 31, 0x37F6B8u);
    ctx->pc = 0x37F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F6B0u;
    // 0x37f6b4: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2E0u, 0x37F6B0u, 0x37F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F6B8u;
label_37f6b8:
    // 0x37f6b8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37f6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f6bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f6c0: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x37f6c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x37f6c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37f6c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37f6c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37f6cc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f6d0: 0xc0dfcfc  jal         func_37F3F0
    ctx->pc = 0x37F6D0u;
    SET_GPR_U32(ctx, 31, 0x37F6D8u);
    ctx->pc = 0x37F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F6D0u;
    // 0x37f6d4: 0xa66200c2  sh          $v0, 0xC2($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F3F0u, 0x37F6D0u, 0x37F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F6D8u;
label_37f6d8:
    // 0x37f6d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37F6D8u;
    {
        const bool branch_taken_0x37f6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f6d8) {
            ctx->pc = 0x37F710u;
            goto label_37f710;
        }
    }
    ctx->pc = 0x37F6E0u;
label_37f6e0:
    // 0x37f6e0: 0x866500c2  lh          $a1, 0xC2($s3)
    ctx->pc = 0x37f6e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x37f6e4: 0xc0decb8  jal         func_37B2E0
    ctx->pc = 0x37F6E4u;
    SET_GPR_U32(ctx, 31, 0x37F6ECu);
    ctx->pc = 0x37F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F6E4u;
    // 0x37f6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B2E0u, 0x37F6E4u, 0x37F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F6ECu;
label_37f6ec:
    // 0x37f6ec: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x37f6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37f6f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37f6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f6f4: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x37f6f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x37f6f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37f6f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37f6fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37f700: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37f700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37f704: 0xc0dfcec  jal         func_37F3B0
    ctx->pc = 0x37F704u;
    SET_GPR_U32(ctx, 31, 0x37F70Cu);
    ctx->pc = 0x37F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F704u;
    // 0x37f708: 0xa66200c2  sh          $v0, 0xC2($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F3B0u, 0x37F704u, 0x37F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F70Cu;
label_37f70c:
    // 0x37f70c: 0x0  nop
    ctx->pc = 0x37f70cu;
    // NOP
label_37f710:
    // 0x37f710: 0x866500c0  lh          $a1, 0xC0($s3)
    ctx->pc = 0x37f710u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x37f714: 0x866600c2  lh          $a2, 0xC2($s3)
    ctx->pc = 0x37f714u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x37f718: 0xc04d548  jal         func_135520
    ctx->pc = 0x37F718u;
    SET_GPR_U32(ctx, 31, 0x37F720u);
    ctx->pc = 0x37F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F718u;
    // 0x37f71c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135520u, 0x37F718u, 0x37F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F720u;
label_37f720:
    // 0x37f720: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37f720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x37f724: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x37f724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37f728: 0x2442afb0  addiu       $v0, $v0, -0x5050
    ctx->pc = 0x37f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946736));
    // 0x37f72c: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x37f72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x37f730: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37f730u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65AFB0u));
    // 0x37f734: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x37f734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37f738: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x37f738u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x37f73c: 0xc6602b60  lwc1        $f0, 0x2B60($s3)
    ctx->pc = 0x37f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f740: 0xc041442  jal         func_105108
    ctx->pc = 0x37F740u;
    SET_GPR_U32(ctx, 31, 0x37F748u);
    ctx->pc = 0x37F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F740u;
    // 0x37f744: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x37F740u, 0x37F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F748u;
label_37f748:
    // 0x37f748: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x37f748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x37f74c: 0xc6610090  lwc1        $f1, 0x90($s3)
    ctx->pc = 0x37f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f750: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x37f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f754: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37f754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37f758: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x37f758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x37f75c: 0xc6610094  lwc1        $f1, 0x94($s3)
    ctx->pc = 0x37f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f760: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x37f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f764: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37f764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37f768: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x37f768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x37f76c: 0xc6610098  lwc1        $f1, 0x98($s3)
    ctx->pc = 0x37f76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f770: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x37f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37f774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37f778: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x37f778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x37f77c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37f77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37f780: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37f780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37f784: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37f784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37f788: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37f78c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37f78cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37f790: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37f790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37f794: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37f794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f798: 0x3e00008  jr          $ra
    ctx->pc = 0x37F798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F798u;
        // 0x37f79c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F7A0u;
}

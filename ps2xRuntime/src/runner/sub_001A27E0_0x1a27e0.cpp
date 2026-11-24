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

// Function: sub_001A27E0
// Address: 0x1a27e0 - 0x1a2958
void sub_001A27E0_0x1a27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A27E0_0x1a27e0");
#endif

    switch (ctx->pc) {
        case 0x1a2808u: goto label_1a2808;
        case 0x1a2884u: goto label_1a2884;
        case 0x1a2890u: goto label_1a2890;
        case 0x1a2940u: goto label_1a2940;
        default: break;
    }

    ctx->pc = 0x1a27e0u;

    // 0x1a27e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1a27e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1a27e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a27e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a27e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a27e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a27ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a27ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a27f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a27f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a27f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a27f8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a27f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27fc: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1a27fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1a2800: 0xc0688a0  jal         func_1A2280
    ctx->pc = 0x1A2800u;
    SET_GPR_U32(ctx, 31, 0x1A2808u);
    ctx->pc = 0x1A2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2800u;
    // 0x1a2804: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2280u, 0x1A2800u, 0x1A2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2808u;
label_1a2808:
    // 0x1a2808: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1a2808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a280c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a2810: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1a2810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2814: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1a2814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a2818: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1a2818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a281c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1a281cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a2820: 0xc7a50080  lwc1        $f5, 0x80($sp)
    ctx->pc = 0x1a2820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a2824: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x1a2824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2828: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x1a2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a282c: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x1a282cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1a2830: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1a2830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a2834: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1a2834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a2838: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1a2838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a283c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1a283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2840: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1a2840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2844: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x1a2844u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a2848: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x1a2848u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a284c: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x1a284cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1a2850: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1a2850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1a2854: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x1a2854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1a2858: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a2858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a285c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1a285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2860: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a2860u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a2864: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1a2864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1a2868: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a2868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a286c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a286cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a2870: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1a2870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1a2874: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1a2874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2878: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a2878u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a287c: 0xc0689e4  jal         func_1A2790
    ctx->pc = 0x1A287Cu;
    SET_GPR_U32(ctx, 31, 0x1A2884u);
    ctx->pc = 0x1A2880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A287Cu;
    // 0x1a2880: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2790u, 0x1A287Cu, 0x1A2884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2884u;
label_1a2884:
    // 0x1a2884: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a2884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a2888: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2888u;
    {
        const bool branch_taken_0x1a2888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2888u;
        // 0x1a288c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2888) {
            ctx->pc = 0x1A28ACu;
            goto label_1a28ac;
        }
    }
    ctx->pc = 0x1A2890u;
label_1a2890:
    // 0x1a2890: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a2890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2894: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a2894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a2898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a2898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a289c: 0x0  nop
    ctx->pc = 0x1a289cu;
    // NOP
    // 0x1a28a0: 0x0  nop
    ctx->pc = 0x1a28a0u;
    // NOP
    // 0x1a28a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A28A4u;
    {
        const bool branch_taken_0x1a28a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a28a4) {
            ctx->pc = 0x1A2890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2890;
        }
    }
    ctx->pc = 0x1A28ACu;
label_1a28ac:
    // 0x1a28ac: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1a28acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a28b0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1a28b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a28b4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1a28b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a28b8: 0x0  nop
    ctx->pc = 0x1a28b8u;
    // NOP
    // 0x1a28bc: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x1a28bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a28c0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x1A28C0u;
    {
        const bool branch_taken_0x1a28c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28C0u;
        // 0x1a28c4: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28c0) {
            ctx->pc = 0x1A2940u;
            goto label_1a2940;
        }
    }
    ctx->pc = 0x1A28C8u;
    // 0x1a28c8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1a28c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a28cc: 0x4614a102  mul.s       $f4, $f20, $f20
    ctx->pc = 0x1a28ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1a28d0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1a28d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1a28d4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a28d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a28d8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1a28d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1a28dc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a28dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a28e0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1a28e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1a28e4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1a28e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a28e8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1a28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a28ec: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1a28ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a28f0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a28f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a28f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a28f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a28f8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1a28f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1a28fc: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1a28fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1a2900: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1a2900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2904: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1A2904u;
    {
        const bool branch_taken_0x1a2904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2904) {
            ctx->pc = 0x1A2940u;
            goto label_1a2940;
        }
    }
    ctx->pc = 0x1A290Cu;
    // 0x1a290c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a290cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2910: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1A2910u;
    {
        const bool branch_taken_0x1a2910 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2910) {
            ctx->pc = 0x1A2940u;
            goto label_1a2940;
        }
    }
    ctx->pc = 0x1A2918u;
    // 0x1a2918: 0x0  nop
    ctx->pc = 0x1a2918u;
    // NOP
    // 0x1a291c: 0x0  nop
    ctx->pc = 0x1a291cu;
    // NOP
    // 0x1a2920: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x1a2920u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x1a2924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a2928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a292c: 0x46000304  c1          0x304
    ctx->pc = 0x1a292cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a2930: 0x0  nop
    ctx->pc = 0x1a2930u;
    // NOP
    // 0x1a2934: 0x0  nop
    ctx->pc = 0x1a2934u;
    // NOP
    // 0x1a2938: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A2938u;
    SET_GPR_U32(ctx, 31, 0x1A2940u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A2938u, 0x1A2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2940u;
label_1a2940:
    // 0x1a2940: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a2940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2944: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a2944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2948: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a2948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a294c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a294cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2950: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2950u;
        // 0x1a2954: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2958u;
}

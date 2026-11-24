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

// Function: sub_003F2750
// Address: 0x3f2750 - 0x3f28b0
void sub_003F2750_0x3f2750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2750_0x3f2750");
#endif

    switch (ctx->pc) {
        case 0x3f28a4u: goto label_3f28a4;
        default: break;
    }

    ctx->pc = 0x3f2750u;

    // 0x3f2750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2754: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f2754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f2758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f275c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f275cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f2760: 0x8f858d34  lw          $a1, -0x72CC($gp)
    ctx->pc = 0x3f2760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f2764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f2768: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3f2768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f276c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f276cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f2770: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f2770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f2774: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f2778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f277c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2780: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f2780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f2784: 0xa0a60390  sb          $a2, 0x390($a1)
    ctx->pc = 0x3f2784u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 912), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f2788: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f278c: 0xa0400391  sb          $zero, 0x391($v0)
    ctx->pc = 0x3f278cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f2790: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2790u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2794: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2798: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f279c: 0xac4303a0  sw          $v1, 0x3A0($v0)
    ctx->pc = 0x3f279cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 928), GPR_U32(ctx, 3));
    // 0x3f27a0: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f27a4: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f27a8: 0xac4303a4  sw          $v1, 0x3A4($v0)
    ctx->pc = 0x3f27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 932), GPR_U32(ctx, 3));
    // 0x3f27ac: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f27acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f27b0: 0x246201d0  addiu       $v0, $v1, 0x1D0
    ctx->pc = 0x3f27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x3f27b4: 0xac6203a8  sw          $v0, 0x3A8($v1)
    ctx->pc = 0x3f27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 936), GPR_U32(ctx, 2));
    // 0x3f27b8: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f27bc: 0x246202b0  addiu       $v0, $v1, 0x2B0
    ctx->pc = 0x3f27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3f27c0: 0xac6203ac  sw          $v0, 0x3AC($v1)
    ctx->pc = 0x3f27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 940), GPR_U32(ctx, 2));
    // 0x3f27c4: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f27c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f27c8: 0xa04403b0  sb          $a0, 0x3B0($v0)
    ctx->pc = 0x3f27c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 944), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f27cc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f27ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f27d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f27d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f27d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f27d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f27d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f27d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f27dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F27DCu;
    {
        const bool branch_taken_0x3f27dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f27dc) {
            ctx->pc = 0x3F27F4u;
            goto label_3f27f4;
        }
    }
    ctx->pc = 0x3F27E4u;
    // 0x3f27e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f27e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f27e8: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f27e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f27ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F27ECu;
    {
        const bool branch_taken_0x3f27ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F27ECu;
        // 0x3f27f0: 0x8f878d34  lw          $a3, -0x72CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f27ec) {
            ctx->pc = 0x3F2810u;
            goto label_3f2810;
        }
    }
    ctx->pc = 0x3F27F4u;
label_3f27f4:
    // 0x3f27f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f27f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f27f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f27fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f27fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2800: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2804: 0x0  nop
    ctx->pc = 0x3f2804u;
    // NOP
    // 0x3f2808: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f2808u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f280c: 0x8f878d34  lw          $a3, -0x72CC($gp)
    ctx->pc = 0x3f280cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_3f2810:
    // 0x3f2810: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f2810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f2814: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f2814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f2818: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f2818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f281c: 0x3c08428c  lui         $t0, 0x428C
    ctx->pc = 0x3f281cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17036 << 16));
    // 0x3f2820: 0x24a501d0  addiu       $a1, $a1, 0x1D0
    ctx->pc = 0x3f2820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 464));
    // 0x3f2824: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f2824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f2828: 0x246301e0  addiu       $v1, $v1, 0x1E0
    ctx->pc = 0x3f2828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x3f282c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f2830: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f2830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f2834: 0xace903b4  sw          $t1, 0x3B4($a3)
    ctx->pc = 0x3f2834u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 9));
    // 0x3f2838: 0x8f878d34  lw          $a3, -0x72CC($gp)
    ctx->pc = 0x3f2838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f283c: 0xace803b8  sw          $t0, 0x3B8($a3)
    ctx->pc = 0x3f283cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 952), GPR_U32(ctx, 8));
    // 0x3f2840: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f2840u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6601D0u));
    // 0x3f2844: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f2844u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f2848: 0x8f858d34  lw          $a1, -0x72CC($gp)
    ctx->pc = 0x3f2848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f284c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2850: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f2850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2854: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f2854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2858: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f2858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f285c: 0xe4a303c0  swc1        $f3, 0x3C0($a1)
    ctx->pc = 0x3f285cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 960), bits); }
    // 0x3f2860: 0xe4a203c4  swc1        $f2, 0x3C4($a1)
    ctx->pc = 0x3f2860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 964), bits); }
    // 0x3f2864: 0xe4a103c8  swc1        $f1, 0x3C8($a1)
    ctx->pc = 0x3f2864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 968), bits); }
    // 0x3f2868: 0xe4a003cc  swc1        $f0, 0x3CC($a1)
    ctx->pc = 0x3f2868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 972), bits); }
    // 0x3f286c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f286cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6601E0u));
    // 0x3f2870: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f2870u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f2874: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f2874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2878: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f2878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f287c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2880: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f2884: 0xe4a303d0  swc1        $f3, 0x3D0($a1)
    ctx->pc = 0x3f2884u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 976), bits); }
    // 0x3f2888: 0xe4a203d4  swc1        $f2, 0x3D4($a1)
    ctx->pc = 0x3f2888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 980), bits); }
    // 0x3f288c: 0xe4a103d8  swc1        $f1, 0x3D8($a1)
    ctx->pc = 0x3f288cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 984), bits); }
    // 0x3f2890: 0xe4a003dc  swc1        $f0, 0x3DC($a1)
    ctx->pc = 0x3f2890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 988), bits); }
    // 0x3f2894: 0xaca203e0  sw          $v0, 0x3E0($a1)
    ctx->pc = 0x3f2894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 992), GPR_U32(ctx, 2));
    // 0x3f2898: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f289c: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F289Cu;
    SET_GPR_U32(ctx, 31, 0x3F28A4u);
    ctx->pc = 0x3F28A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F289Cu;
    // 0x3f28a0: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F289Cu, 0x3F28A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F28A4u;
label_3f28a4:
    // 0x3f28a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f28a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f28a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F28A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F28A8u;
        // 0x3f28ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F28A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F28B0u;
}

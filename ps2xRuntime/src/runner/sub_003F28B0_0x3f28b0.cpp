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

// Function: sub_003F28B0
// Address: 0x3f28b0 - 0x3f2a0c
void sub_003F28B0_0x3f28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F28B0_0x3f28b0");
#endif

    switch (ctx->pc) {
        case 0x3f2a00u: goto label_3f2a00;
        default: break;
    }

    ctx->pc = 0x3f28b0u;

    // 0x3f28b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f28b4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3f28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3f28b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f28b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f28bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3f28bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f28c0: 0x8f848d34  lw          $a0, -0x72CC($gp)
    ctx->pc = 0x3f28c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f28c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3f28c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f28c8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f28cc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f28ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f28d0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3f28d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f28d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f28d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f28d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f28dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f28dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f28e0: 0xa0850390  sb          $a1, 0x390($a0)
    ctx->pc = 0x3f28e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f28e4: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f28e8: 0xa0400391  sb          $zero, 0x391($v0)
    ctx->pc = 0x3f28e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f28ec: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f28f0: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f28f4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f28f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f28f8: 0xac4303a0  sw          $v1, 0x3A0($v0)
    ctx->pc = 0x3f28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 928), GPR_U32(ctx, 3));
    // 0x3f28fc: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2900: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2904: 0xac4303a4  sw          $v1, 0x3A4($v0)
    ctx->pc = 0x3f2904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 932), GPR_U32(ctx, 3));
    // 0x3f2908: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f2908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f290c: 0x246201d0  addiu       $v0, $v1, 0x1D0
    ctx->pc = 0x3f290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x3f2910: 0xac6203a8  sw          $v0, 0x3A8($v1)
    ctx->pc = 0x3f2910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 936), GPR_U32(ctx, 2));
    // 0x3f2914: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f2914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2918: 0x246202b0  addiu       $v0, $v1, 0x2B0
    ctx->pc = 0x3f2918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3f291c: 0xac6203ac  sw          $v0, 0x3AC($v1)
    ctx->pc = 0x3f291cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 940), GPR_U32(ctx, 2));
    // 0x3f2920: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2924: 0xa04503b0  sb          $a1, 0x3B0($v0)
    ctx->pc = 0x3f2924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 944), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f2928: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f2928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f292c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f292cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f2930: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f2930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f2934: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f2934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f2938: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2938u;
    {
        const bool branch_taken_0x3f2938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2938) {
            ctx->pc = 0x3F2950u;
            goto label_3f2950;
        }
    }
    ctx->pc = 0x3F2940u;
    // 0x3f2940: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2940u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2944: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2948u;
    {
        const bool branch_taken_0x3f2948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2948u;
        // 0x3f294c: 0x8f878d34  lw          $a3, -0x72CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2948) {
            ctx->pc = 0x3F296Cu;
            goto label_3f296c;
        }
    }
    ctx->pc = 0x3F2950u;
label_3f2950:
    // 0x3f2950: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f2950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f2954: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f2954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f2958: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f295c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f295cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2960: 0x0  nop
    ctx->pc = 0x3f2960u;
    // NOP
    // 0x3f2964: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f2964u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f2968: 0x8f878d34  lw          $a3, -0x72CC($gp)
    ctx->pc = 0x3f2968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_3f296c:
    // 0x3f296c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f296cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f2970: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f2970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f2974: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f2974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f2978: 0x3c08428c  lui         $t0, 0x428C
    ctx->pc = 0x3f2978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17036 << 16));
    // 0x3f297c: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x3f297cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x3f2980: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f2980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f2984: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x3f2984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x3f2988: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f2988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f298c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f2990: 0xace903b4  sw          $t1, 0x3B4($a3)
    ctx->pc = 0x3f2990u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 9));
    // 0x3f2994: 0x8f878d34  lw          $a3, -0x72CC($gp)
    ctx->pc = 0x3f2994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2998: 0xace803b8  sw          $t0, 0x3B8($a3)
    ctx->pc = 0x3f2998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 952), GPR_U32(ctx, 8));
    // 0x3f299c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f299cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6601F0u));
    // 0x3f29a0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f29a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f29a4: 0x8f858d34  lw          $a1, -0x72CC($gp)
    ctx->pc = 0x3f29a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f29a8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f29a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f29ac: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f29acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f29b0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f29b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f29b4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f29b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f29b8: 0xe4a303c0  swc1        $f3, 0x3C0($a1)
    ctx->pc = 0x3f29b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 960), bits); }
    // 0x3f29bc: 0xe4a203c4  swc1        $f2, 0x3C4($a1)
    ctx->pc = 0x3f29bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 964), bits); }
    // 0x3f29c0: 0xe4a103c8  swc1        $f1, 0x3C8($a1)
    ctx->pc = 0x3f29c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 968), bits); }
    // 0x3f29c4: 0xe4a003cc  swc1        $f0, 0x3CC($a1)
    ctx->pc = 0x3f29c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 972), bits); }
    // 0x3f29c8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f29c8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660200u));
    // 0x3f29cc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f29ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f29d0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f29d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f29d4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f29d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f29d8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f29d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f29dc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f29dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f29e0: 0xe4a303d0  swc1        $f3, 0x3D0($a1)
    ctx->pc = 0x3f29e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 976), bits); }
    // 0x3f29e4: 0xe4a203d4  swc1        $f2, 0x3D4($a1)
    ctx->pc = 0x3f29e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 980), bits); }
    // 0x3f29e8: 0xe4a103d8  swc1        $f1, 0x3D8($a1)
    ctx->pc = 0x3f29e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 984), bits); }
    // 0x3f29ec: 0xe4a003dc  swc1        $f0, 0x3DC($a1)
    ctx->pc = 0x3f29ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 988), bits); }
    // 0x3f29f0: 0xaca203e0  sw          $v0, 0x3E0($a1)
    ctx->pc = 0x3f29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 992), GPR_U32(ctx, 2));
    // 0x3f29f4: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f29f8: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F29F8u;
    SET_GPR_U32(ctx, 31, 0x3F2A00u);
    ctx->pc = 0x3F29FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F29F8u;
    // 0x3f29fc: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F29F8u, 0x3F2A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A00u;
label_3f2a00:
    // 0x3f2a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2a04: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A04u;
        // 0x3f2a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2A0Cu;
}

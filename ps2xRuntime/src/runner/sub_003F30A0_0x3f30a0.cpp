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

// Function: sub_003F30A0
// Address: 0x3f30a0 - 0x3f31fc
void sub_003F30A0_0x3f30a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F30A0_0x3f30a0");
#endif

    switch (ctx->pc) {
        case 0x3f31f0u: goto label_3f31f0;
        default: break;
    }

    ctx->pc = 0x3f30a0u;

    // 0x3f30a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f30a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f30a4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3f30a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3f30a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f30a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f30ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3f30acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f30b0: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x3f30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f30b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3f30b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f30b8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f30bc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f30bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f30c0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3f30c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f30c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f30c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f30c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f30cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f30ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f30d0: 0xa0850390  sb          $a1, 0x390($a0)
    ctx->pc = 0x3f30d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f30d4: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f30d8: 0xa0400391  sb          $zero, 0x391($v0)
    ctx->pc = 0x3f30d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f30dc: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f30e0: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f30e4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f30e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f30e8: 0xac4303a0  sw          $v1, 0x3A0($v0)
    ctx->pc = 0x3f30e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 928), GPR_U32(ctx, 3));
    // 0x3f30ec: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f30ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f30f0: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f30f4: 0xac4303a4  sw          $v1, 0x3A4($v0)
    ctx->pc = 0x3f30f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 932), GPR_U32(ctx, 3));
    // 0x3f30f8: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f30fc: 0x246201d0  addiu       $v0, $v1, 0x1D0
    ctx->pc = 0x3f30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x3f3100: 0xac6203a8  sw          $v0, 0x3A8($v1)
    ctx->pc = 0x3f3100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 936), GPR_U32(ctx, 2));
    // 0x3f3104: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f3104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f3108: 0x246202b0  addiu       $v0, $v1, 0x2B0
    ctx->pc = 0x3f3108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3f310c: 0xac6203ac  sw          $v0, 0x3AC($v1)
    ctx->pc = 0x3f310cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 940), GPR_U32(ctx, 2));
    // 0x3f3110: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f3110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f3114: 0xa04503b0  sb          $a1, 0x3B0($v0)
    ctx->pc = 0x3f3114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 944), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f3118: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f3118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f311c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f311cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f3120: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f3120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f3124: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f3124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f3128: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3128u;
    {
        const bool branch_taken_0x3f3128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3128) {
            ctx->pc = 0x3F3140u;
            goto label_3f3140;
        }
    }
    ctx->pc = 0x3F3130u;
    // 0x3f3130: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3134: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3138: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3138u;
    {
        const bool branch_taken_0x3f3138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3138u;
        // 0x3f313c: 0x8f878d38  lw          $a3, -0x72C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3138) {
            ctx->pc = 0x3F315Cu;
            goto label_3f315c;
        }
    }
    ctx->pc = 0x3F3140u;
label_3f3140:
    // 0x3f3140: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f3140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f3144: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f3144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f3148: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f314c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f314cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3150: 0x0  nop
    ctx->pc = 0x3f3150u;
    // NOP
    // 0x3f3154: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f3154u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f3158: 0x8f878d38  lw          $a3, -0x72C8($gp)
    ctx->pc = 0x3f3158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_3f315c:
    // 0x3f315c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f315cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f3160: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f3160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f3164: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f3164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f3168: 0x3c08428c  lui         $t0, 0x428C
    ctx->pc = 0x3f3168u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17036 << 16));
    // 0x3f316c: 0x24a50270  addiu       $a1, $a1, 0x270
    ctx->pc = 0x3f316cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
    // 0x3f3170: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f3170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f3174: 0x24630280  addiu       $v1, $v1, 0x280
    ctx->pc = 0x3f3174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x3f3178: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f3178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f317c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f3180: 0xace903b4  sw          $t1, 0x3B4($a3)
    ctx->pc = 0x3f3180u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 9));
    // 0x3f3184: 0x8f878d38  lw          $a3, -0x72C8($gp)
    ctx->pc = 0x3f3184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f3188: 0xace803b8  sw          $t0, 0x3B8($a3)
    ctx->pc = 0x3f3188u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 952), GPR_U32(ctx, 8));
    // 0x3f318c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f318cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660270u));
    // 0x3f3190: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f3190u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f3194: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x3f3194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f3198: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f3198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f319c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f31a0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f31a4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f31a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f31a8: 0xe4a303c0  swc1        $f3, 0x3C0($a1)
    ctx->pc = 0x3f31a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 960), bits); }
    // 0x3f31ac: 0xe4a203c4  swc1        $f2, 0x3C4($a1)
    ctx->pc = 0x3f31acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 964), bits); }
    // 0x3f31b0: 0xe4a103c8  swc1        $f1, 0x3C8($a1)
    ctx->pc = 0x3f31b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 968), bits); }
    // 0x3f31b4: 0xe4a003cc  swc1        $f0, 0x3CC($a1)
    ctx->pc = 0x3f31b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 972), bits); }
    // 0x3f31b8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f31b8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660280u));
    // 0x3f31bc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f31bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f31c0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f31c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f31c4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f31c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f31c8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f31c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f31cc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f31ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f31d0: 0xe4a303d0  swc1        $f3, 0x3D0($a1)
    ctx->pc = 0x3f31d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 976), bits); }
    // 0x3f31d4: 0xe4a203d4  swc1        $f2, 0x3D4($a1)
    ctx->pc = 0x3f31d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 980), bits); }
    // 0x3f31d8: 0xe4a103d8  swc1        $f1, 0x3D8($a1)
    ctx->pc = 0x3f31d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 984), bits); }
    // 0x3f31dc: 0xe4a003dc  swc1        $f0, 0x3DC($a1)
    ctx->pc = 0x3f31dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 988), bits); }
    // 0x3f31e0: 0xaca203e0  sw          $v0, 0x3E0($a1)
    ctx->pc = 0x3f31e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 992), GPR_U32(ctx, 2));
    // 0x3f31e4: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f31e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f31e8: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F31E8u;
    SET_GPR_U32(ctx, 31, 0x3F31F0u);
    ctx->pc = 0x3F31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F31E8u;
    // 0x3f31ec: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F31E8u, 0x3F31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F31F0u;
label_3f31f0:
    // 0x3f31f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f31f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f31f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F31F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F31F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F31F4u;
        // 0x3f31f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F31F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F31FCu;
}

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

// Function: sub_003F2F40
// Address: 0x3f2f40 - 0x3f30a0
void sub_003F2F40_0x3f2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2F40_0x3f2f40");
#endif

    switch (ctx->pc) {
        case 0x3f3094u: goto label_3f3094;
        default: break;
    }

    ctx->pc = 0x3f2f40u;

    // 0x3f2f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2f44: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f2f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f2f4c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f2f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f2f50: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x3f2f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f2f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f2f58: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3f2f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2f5c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f2f60: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f2f64: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f2f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f2f6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f2f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2f70: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f2f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f2f74: 0xa0a60390  sb          $a2, 0x390($a1)
    ctx->pc = 0x3f2f74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 912), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f2f78: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2f7c: 0xa0400391  sb          $zero, 0x391($v0)
    ctx->pc = 0x3f2f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f2f80: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2f80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2f84: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2f88: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2f8c: 0xac4303a0  sw          $v1, 0x3A0($v0)
    ctx->pc = 0x3f2f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 928), GPR_U32(ctx, 3));
    // 0x3f2f90: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2f94: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2f98: 0xac4303a4  sw          $v1, 0x3A4($v0)
    ctx->pc = 0x3f2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 932), GPR_U32(ctx, 3));
    // 0x3f2f9c: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2fa0: 0x246201d0  addiu       $v0, $v1, 0x1D0
    ctx->pc = 0x3f2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x3f2fa4: 0xac6203a8  sw          $v0, 0x3A8($v1)
    ctx->pc = 0x3f2fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 936), GPR_U32(ctx, 2));
    // 0x3f2fa8: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2fac: 0x246202b0  addiu       $v0, $v1, 0x2B0
    ctx->pc = 0x3f2facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x3f2fb0: 0xac6203ac  sw          $v0, 0x3AC($v1)
    ctx->pc = 0x3f2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 940), GPR_U32(ctx, 2));
    // 0x3f2fb4: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2fb8: 0xa04403b0  sb          $a0, 0x3B0($v0)
    ctx->pc = 0x3f2fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 944), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f2fbc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f2fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2fc0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f2fc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f2fc4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f2fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f2fc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f2fc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f2fcc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2FCCu;
    {
        const bool branch_taken_0x3f2fcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2fcc) {
            ctx->pc = 0x3F2FE4u;
            goto label_3f2fe4;
        }
    }
    ctx->pc = 0x3F2FD4u;
    // 0x3f2fd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2fd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2fd8: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2fd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2fdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2FDCu;
    {
        const bool branch_taken_0x3f2fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2FDCu;
        // 0x3f2fe0: 0x8f878d38  lw          $a3, -0x72C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2fdc) {
            ctx->pc = 0x3F3000u;
            goto label_3f3000;
        }
    }
    ctx->pc = 0x3F2FE4u;
label_3f2fe4:
    // 0x3f2fe4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f2fe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f2fe8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f2fec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2fecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2ff0: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2ff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2ff4: 0x0  nop
    ctx->pc = 0x3f2ff4u;
    // NOP
    // 0x3f2ff8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f2ff8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f2ffc: 0x8f878d38  lw          $a3, -0x72C8($gp)
    ctx->pc = 0x3f2ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_3f3000:
    // 0x3f3000: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f3000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f3004: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f3004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f3008: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f3008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f300c: 0x3c08428c  lui         $t0, 0x428C
    ctx->pc = 0x3f300cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17036 << 16));
    // 0x3f3010: 0x24a50250  addiu       $a1, $a1, 0x250
    ctx->pc = 0x3f3010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 592));
    // 0x3f3014: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f3014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f3018: 0x24630260  addiu       $v1, $v1, 0x260
    ctx->pc = 0x3f3018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 608));
    // 0x3f301c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f3020: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f3020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f3024: 0xace903b4  sw          $t1, 0x3B4($a3)
    ctx->pc = 0x3f3024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 9));
    // 0x3f3028: 0x8f878d38  lw          $a3, -0x72C8($gp)
    ctx->pc = 0x3f3028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f302c: 0xace803b8  sw          $t0, 0x3B8($a3)
    ctx->pc = 0x3f302cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 952), GPR_U32(ctx, 8));
    // 0x3f3030: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f3030u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660250u));
    // 0x3f3034: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f3034u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f3038: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x3f3038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f303c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3040: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f3040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3044: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f3044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3048: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f3048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f304c: 0xe4a303c0  swc1        $f3, 0x3C0($a1)
    ctx->pc = 0x3f304cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 960), bits); }
    // 0x3f3050: 0xe4a203c4  swc1        $f2, 0x3C4($a1)
    ctx->pc = 0x3f3050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 964), bits); }
    // 0x3f3054: 0xe4a103c8  swc1        $f1, 0x3C8($a1)
    ctx->pc = 0x3f3054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 968), bits); }
    // 0x3f3058: 0xe4a003cc  swc1        $f0, 0x3CC($a1)
    ctx->pc = 0x3f3058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 972), bits); }
    // 0x3f305c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f305cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660260u));
    // 0x3f3060: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f3060u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f3064: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f3064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3068: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f3068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f306c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3070: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f3070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3074: 0xe4a303d0  swc1        $f3, 0x3D0($a1)
    ctx->pc = 0x3f3074u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 976), bits); }
    // 0x3f3078: 0xe4a203d4  swc1        $f2, 0x3D4($a1)
    ctx->pc = 0x3f3078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 980), bits); }
    // 0x3f307c: 0xe4a103d8  swc1        $f1, 0x3D8($a1)
    ctx->pc = 0x3f307cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 984), bits); }
    // 0x3f3080: 0xe4a003dc  swc1        $f0, 0x3DC($a1)
    ctx->pc = 0x3f3080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 988), bits); }
    // 0x3f3084: 0xaca203e0  sw          $v0, 0x3E0($a1)
    ctx->pc = 0x3f3084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 992), GPR_U32(ctx, 2));
    // 0x3f3088: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f3088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f308c: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F308Cu;
    SET_GPR_U32(ctx, 31, 0x3F3094u);
    ctx->pc = 0x3F3090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F308Cu;
    // 0x3f3090: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F308Cu, 0x3F3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3094u;
label_3f3094:
    // 0x3f3094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3098: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3098u;
        // 0x3f309c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F30A0u;
}

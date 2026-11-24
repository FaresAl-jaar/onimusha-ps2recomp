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

// Function: sub_003F2DE0
// Address: 0x3f2de0 - 0x3f2f40
void sub_003F2DE0_0x3f2de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2DE0_0x3f2de0");
#endif

    switch (ctx->pc) {
        case 0x3f2f34u: goto label_3f2f34;
        default: break;
    }

    ctx->pc = 0x3f2de0u;

    // 0x3f2de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2de4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f2de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f2dec: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f2decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f2df0: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x3f2df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2df4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f2df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f2df8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f2df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f2dfc: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f2e00: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f2e04: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f2e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f2e0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f2e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f2e10: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f2e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f2e14: 0xa0a60390  sb          $a2, 0x390($a1)
    ctx->pc = 0x3f2e14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 912), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f2e18: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2e1c: 0xa0400391  sb          $zero, 0x391($v0)
    ctx->pc = 0x3f2e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f2e20: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2e24: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2e28: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2e2c: 0xac4303a0  sw          $v1, 0x3A0($v0)
    ctx->pc = 0x3f2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 928), GPR_U32(ctx, 3));
    // 0x3f2e30: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2e34: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2e38: 0xac4303a4  sw          $v1, 0x3A4($v0)
    ctx->pc = 0x3f2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 932), GPR_U32(ctx, 3));
    // 0x3f2e3c: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2e40: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f2e44: 0xac6203a8  sw          $v0, 0x3A8($v1)
    ctx->pc = 0x3f2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 936), GPR_U32(ctx, 2));
    // 0x3f2e48: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2e4c: 0x246200f0  addiu       $v0, $v1, 0xF0
    ctx->pc = 0x3f2e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3f2e50: 0xac6203ac  sw          $v0, 0x3AC($v1)
    ctx->pc = 0x3f2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 940), GPR_U32(ctx, 2));
    // 0x3f2e54: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2e58: 0xa04403b0  sb          $a0, 0x3B0($v0)
    ctx->pc = 0x3f2e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 944), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f2e5c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f2e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2e60: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f2e60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f2e64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f2e64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f2e68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f2e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f2e6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2E6Cu;
    {
        const bool branch_taken_0x3f2e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2e6c) {
            ctx->pc = 0x3F2E84u;
            goto label_3f2e84;
        }
    }
    ctx->pc = 0x3F2E74u;
    // 0x3f2e74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2e74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2e78: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2e7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2E7Cu;
    {
        const bool branch_taken_0x3f2e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2E7Cu;
        // 0x3f2e80: 0x8f878d38  lw          $a3, -0x72C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2e7c) {
            ctx->pc = 0x3F2EA0u;
            goto label_3f2ea0;
        }
    }
    ctx->pc = 0x3F2E84u;
label_3f2e84:
    // 0x3f2e84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f2e84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f2e88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f2e8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2e8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2e90: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2e94: 0x0  nop
    ctx->pc = 0x3f2e94u;
    // NOP
    // 0x3f2e98: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f2e98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f2e9c: 0x8f878d38  lw          $a3, -0x72C8($gp)
    ctx->pc = 0x3f2e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_3f2ea0:
    // 0x3f2ea0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f2ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f2ea4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f2ea8: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f2eac: 0x3c08428c  lui         $t0, 0x428C
    ctx->pc = 0x3f2eacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17036 << 16));
    // 0x3f2eb0: 0x24a50230  addiu       $a1, $a1, 0x230
    ctx->pc = 0x3f2eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 560));
    // 0x3f2eb4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f2eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f2eb8: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x3f2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x3f2ebc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f2ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f2ec0: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f2ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f2ec4: 0xace903b4  sw          $t1, 0x3B4($a3)
    ctx->pc = 0x3f2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 9));
    // 0x3f2ec8: 0x8f878d38  lw          $a3, -0x72C8($gp)
    ctx->pc = 0x3f2ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2ecc: 0xace803b8  sw          $t0, 0x3B8($a3)
    ctx->pc = 0x3f2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 952), GPR_U32(ctx, 8));
    // 0x3f2ed0: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f2ed0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660230u));
    // 0x3f2ed4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f2ed8: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x3f2ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2edc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f2edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2ee0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f2ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2ee4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f2ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2ee8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f2ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f2eec: 0xe4a303c0  swc1        $f3, 0x3C0($a1)
    ctx->pc = 0x3f2eecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 960), bits); }
    // 0x3f2ef0: 0xe4a203c4  swc1        $f2, 0x3C4($a1)
    ctx->pc = 0x3f2ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 964), bits); }
    // 0x3f2ef4: 0xe4a103c8  swc1        $f1, 0x3C8($a1)
    ctx->pc = 0x3f2ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 968), bits); }
    // 0x3f2ef8: 0xe4a003cc  swc1        $f0, 0x3CC($a1)
    ctx->pc = 0x3f2ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 972), bits); }
    // 0x3f2efc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f2efcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660240u));
    // 0x3f2f00: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f2f00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f2f04: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f2f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2f08: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f2f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2f0c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f2f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2f10: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f2f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f2f14: 0xe4a303d0  swc1        $f3, 0x3D0($a1)
    ctx->pc = 0x3f2f14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 976), bits); }
    // 0x3f2f18: 0xe4a203d4  swc1        $f2, 0x3D4($a1)
    ctx->pc = 0x3f2f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 980), bits); }
    // 0x3f2f1c: 0xe4a103d8  swc1        $f1, 0x3D8($a1)
    ctx->pc = 0x3f2f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 984), bits); }
    // 0x3f2f20: 0xe4a003dc  swc1        $f0, 0x3DC($a1)
    ctx->pc = 0x3f2f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 988), bits); }
    // 0x3f2f24: 0xaca203e0  sw          $v0, 0x3E0($a1)
    ctx->pc = 0x3f2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 992), GPR_U32(ctx, 2));
    // 0x3f2f28: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2f2c: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F2F2Cu;
    SET_GPR_U32(ctx, 31, 0x3F2F34u);
    ctx->pc = 0x3F2F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2F2Cu;
    // 0x3f2f30: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F2F2Cu, 0x3F2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2F34u;
label_3f2f34:
    // 0x3f2f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2f38: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2F38u;
        // 0x3f2f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2F40u;
}

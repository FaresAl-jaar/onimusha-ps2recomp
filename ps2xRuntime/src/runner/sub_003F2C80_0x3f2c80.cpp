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

// Function: sub_003F2C80
// Address: 0x3f2c80 - 0x3f2ddc
void sub_003F2C80_0x3f2c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2C80_0x3f2c80");
#endif

    switch (ctx->pc) {
        case 0x3f2dd0u: goto label_3f2dd0;
        default: break;
    }

    ctx->pc = 0x3f2c80u;

    // 0x3f2c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2c84: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3f2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3f2c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f2c8c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3f2c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f2c90: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x3f2c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2c94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f2c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2c98: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f2c9c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2ca0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3f2ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f2ca4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f2ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f2ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f2cac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f2cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f2cb0: 0xa0850390  sb          $a1, 0x390($a0)
    ctx->pc = 0x3f2cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f2cb4: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2cb8: 0xa0400391  sb          $zero, 0x391($v0)
    ctx->pc = 0x3f2cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 913), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f2cbc: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2cc0: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2cc4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2cc8: 0xac4303a0  sw          $v1, 0x3A0($v0)
    ctx->pc = 0x3f2cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 928), GPR_U32(ctx, 3));
    // 0x3f2ccc: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2cd0: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2cd4: 0xac4303a4  sw          $v1, 0x3A4($v0)
    ctx->pc = 0x3f2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 932), GPR_U32(ctx, 3));
    // 0x3f2cd8: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2cdc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f2ce0: 0xac6203a8  sw          $v0, 0x3A8($v1)
    ctx->pc = 0x3f2ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 936), GPR_U32(ctx, 2));
    // 0x3f2ce4: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x3f2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2ce8: 0x246200f0  addiu       $v0, $v1, 0xF0
    ctx->pc = 0x3f2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3f2cec: 0xac6203ac  sw          $v0, 0x3AC($v1)
    ctx->pc = 0x3f2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 940), GPR_U32(ctx, 2));
    // 0x3f2cf0: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2cf4: 0xa04503b0  sb          $a1, 0x3B0($v0)
    ctx->pc = 0x3f2cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 944), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f2cf8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f2cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2cfc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f2cfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f2d00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f2d00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f2d04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f2d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f2d08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2D08u;
    {
        const bool branch_taken_0x3f2d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2d08) {
            ctx->pc = 0x3F2D20u;
            goto label_3f2d20;
        }
    }
    ctx->pc = 0x3F2D10u;
    // 0x3f2d10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2d10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2d14: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2d14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2d18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2D18u;
    {
        const bool branch_taken_0x3f2d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2D18u;
        // 0x3f2d1c: 0x8f878d38  lw          $a3, -0x72C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2d18) {
            ctx->pc = 0x3F2D3Cu;
            goto label_3f2d3c;
        }
    }
    ctx->pc = 0x3F2D20u;
label_3f2d20:
    // 0x3f2d20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f2d20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f2d24: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f2d28: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2d2c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2d30: 0x0  nop
    ctx->pc = 0x3f2d30u;
    // NOP
    // 0x3f2d34: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f2d34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f2d38: 0x8f878d38  lw          $a3, -0x72C8($gp)
    ctx->pc = 0x3f2d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_3f2d3c:
    // 0x3f2d3c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f2d40: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f2d44: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f2d48: 0x3c08428c  lui         $t0, 0x428C
    ctx->pc = 0x3f2d48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17036 << 16));
    // 0x3f2d4c: 0x24a50210  addiu       $a1, $a1, 0x210
    ctx->pc = 0x3f2d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
    // 0x3f2d50: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f2d54: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x3f2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x3f2d58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f2d5c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f2d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f2d60: 0xace903b4  sw          $t1, 0x3B4($a3)
    ctx->pc = 0x3f2d60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 9));
    // 0x3f2d64: 0x8f878d38  lw          $a3, -0x72C8($gp)
    ctx->pc = 0x3f2d64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2d68: 0xace803b8  sw          $t0, 0x3B8($a3)
    ctx->pc = 0x3f2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 952), GPR_U32(ctx, 8));
    // 0x3f2d6c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f2d6cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660210u));
    // 0x3f2d70: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f2d74: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x3f2d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2d78: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f2d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2d7c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f2d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2d80: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f2d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2d84: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f2d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f2d88: 0xe4a303c0  swc1        $f3, 0x3C0($a1)
    ctx->pc = 0x3f2d88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 960), bits); }
    // 0x3f2d8c: 0xe4a203c4  swc1        $f2, 0x3C4($a1)
    ctx->pc = 0x3f2d8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 964), bits); }
    // 0x3f2d90: 0xe4a103c8  swc1        $f1, 0x3C8($a1)
    ctx->pc = 0x3f2d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 968), bits); }
    // 0x3f2d94: 0xe4a003cc  swc1        $f0, 0x3CC($a1)
    ctx->pc = 0x3f2d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 972), bits); }
    // 0x3f2d98: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f2d98u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660220u));
    // 0x3f2d9c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f2d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f2da0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f2da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2da4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f2da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2da8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f2da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2dac: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f2dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f2db0: 0xe4a303d0  swc1        $f3, 0x3D0($a1)
    ctx->pc = 0x3f2db0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 976), bits); }
    // 0x3f2db4: 0xe4a203d4  swc1        $f2, 0x3D4($a1)
    ctx->pc = 0x3f2db4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 980), bits); }
    // 0x3f2db8: 0xe4a103d8  swc1        $f1, 0x3D8($a1)
    ctx->pc = 0x3f2db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 984), bits); }
    // 0x3f2dbc: 0xe4a003dc  swc1        $f0, 0x3DC($a1)
    ctx->pc = 0x3f2dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 988), bits); }
    // 0x3f2dc0: 0xaca203e0  sw          $v0, 0x3E0($a1)
    ctx->pc = 0x3f2dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 992), GPR_U32(ctx, 2));
    // 0x3f2dc4: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f2dc8: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F2DC8u;
    SET_GPR_U32(ctx, 31, 0x3F2DD0u);
    ctx->pc = 0x3F2DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2DC8u;
    // 0x3f2dcc: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F2DC8u, 0x3F2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2DD0u;
label_3f2dd0:
    // 0x3f2dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2DD4u;
        // 0x3f2dd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2DDCu;
}

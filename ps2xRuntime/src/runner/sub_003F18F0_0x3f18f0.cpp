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

// Function: sub_003F18F0
// Address: 0x3f18f0 - 0x3f1a50
void sub_003F18F0_0x3f18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F18F0_0x3f18f0");
#endif

    switch (ctx->pc) {
        case 0x3f1a44u: goto label_3f1a44;
        default: break;
    }

    ctx->pc = 0x3f18f0u;

    // 0x3f18f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f18f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f18f4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f18f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f18f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f18fc: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f1900: 0x8f858d2c  lw          $a1, -0x72D4($gp)
    ctx->pc = 0x3f1900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1904: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f1904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f1908: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f1908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f190c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f190cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f1910: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f1910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f1914: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f1914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f1918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f1918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f191c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f1920: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f1920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f1924: 0xa0a601d0  sb          $a2, 0x1D0($a1)
    ctx->pc = 0x3f1924u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 464), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f1928: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f1928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f192c: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f192cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f1930: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f1930u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f1934: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f1934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1938: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f1938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f193c: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f193cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f1940: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f1940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f1944: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f1944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1948: 0xac4301e4  sw          $v1, 0x1E4($v0)
    ctx->pc = 0x3f1948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 3));
    // 0x3f194c: 0x8f838d2c  lw          $v1, -0x72D4($gp)
    ctx->pc = 0x3f194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1950: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f1950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f1954: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f1954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f1958: 0x8f838d2c  lw          $v1, -0x72D4($gp)
    ctx->pc = 0x3f1958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f195c: 0x246200f0  addiu       $v0, $v1, 0xF0
    ctx->pc = 0x3f195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3f1960: 0xac6201ec  sw          $v0, 0x1EC($v1)
    ctx->pc = 0x3f1960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 492), GPR_U32(ctx, 2));
    // 0x3f1964: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f1964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1968: 0xa04401f0  sb          $a0, 0x1F0($v0)
    ctx->pc = 0x3f1968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f196c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f1970: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f1970u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f1974: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f1974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f1978: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f1978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f197c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F197Cu;
    {
        const bool branch_taken_0x3f197c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f197c) {
            ctx->pc = 0x3F1994u;
            goto label_3f1994;
        }
    }
    ctx->pc = 0x3F1984u;
    // 0x3f1984: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1984u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f1988: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f1988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f198c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F198Cu;
    {
        const bool branch_taken_0x3f198c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F198Cu;
        // 0x3f1990: 0x8f878d2c  lw          $a3, -0x72D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f198c) {
            ctx->pc = 0x3F19B0u;
            goto label_3f19b0;
        }
    }
    ctx->pc = 0x3F1994u;
label_3f1994:
    // 0x3f1994: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f1994u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f1998: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f1998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f199c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f199cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f19a0: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f19a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f19a4: 0x0  nop
    ctx->pc = 0x3f19a4u;
    // NOP
    // 0x3f19a8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f19a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f19ac: 0x8f878d2c  lw          $a3, -0x72D4($gp)
    ctx->pc = 0x3f19acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
label_3f19b0:
    // 0x3f19b0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f19b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f19b8: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f19bc: 0x3c084320  lui         $t0, 0x4320
    ctx->pc = 0x3f19bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17184 << 16));
    // 0x3f19c0: 0x24a50130  addiu       $a1, $a1, 0x130
    ctx->pc = 0x3f19c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
    // 0x3f19c4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f19c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f19c8: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x3f19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x3f19cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f19d0: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f19d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f19d4: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f19d8: 0x8f878d2c  lw          $a3, -0x72D4($gp)
    ctx->pc = 0x3f19d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f19dc: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f19dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f19e0: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f19e0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660130u));
    // 0x3f19e4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f19e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f19e8: 0x8f858d2c  lw          $a1, -0x72D4($gp)
    ctx->pc = 0x3f19e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f19ec: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f19f0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f19f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f19f4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f19f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f19f8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f19f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f19fc: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f19fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f1a00: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f1a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f1a04: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f1a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f1a08: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f1a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f1a0c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f1a0cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660140u));
    // 0x3f1a10: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f1a10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f1a14: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f1a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f1a18: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f1a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f1a1c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f1a20: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f1a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f1a24: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f1a24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f1a28: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f1a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f1a2c: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f1a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f1a30: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f1a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f1a34: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f1a38: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1a3c: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F1A3Cu;
    SET_GPR_U32(ctx, 31, 0x3F1A44u);
    ctx->pc = 0x3F1A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1A3Cu;
    // 0x3f1a40: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F1A3Cu, 0x3F1A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1A44u;
label_3f1a44:
    // 0x3f1a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f1a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A48u;
        // 0x3f1a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1A50u;
}

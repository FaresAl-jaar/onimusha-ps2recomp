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

// Function: sub_003F1790
// Address: 0x3f1790 - 0x3f18ec
void sub_003F1790_0x3f1790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1790_0x3f1790");
#endif

    switch (ctx->pc) {
        case 0x3f18e0u: goto label_3f18e0;
        default: break;
    }

    ctx->pc = 0x3f1790u;

    // 0x3f1790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f1790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f1794: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3f1794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3f1798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f179c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3f179cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f17a0: 0x8f848d2c  lw          $a0, -0x72D4($gp)
    ctx->pc = 0x3f17a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f17a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f17a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f17a8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f17ac: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f17acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f17b0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3f17b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f17b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f17b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f17b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f17bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f17bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f17c0: 0xa08501d0  sb          $a1, 0x1D0($a0)
    ctx->pc = 0x3f17c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 464), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f17c4: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f17c8: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f17c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f17cc: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f17d0: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f17d4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f17d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f17d8: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f17dc: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f17e0: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f17e4: 0xac4301e4  sw          $v1, 0x1E4($v0)
    ctx->pc = 0x3f17e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 3));
    // 0x3f17e8: 0x8f838d2c  lw          $v1, -0x72D4($gp)
    ctx->pc = 0x3f17e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f17ec: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f17f0: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f17f4: 0x8f838d2c  lw          $v1, -0x72D4($gp)
    ctx->pc = 0x3f17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f17f8: 0x246200f0  addiu       $v0, $v1, 0xF0
    ctx->pc = 0x3f17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3f17fc: 0xac6201ec  sw          $v0, 0x1EC($v1)
    ctx->pc = 0x3f17fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 492), GPR_U32(ctx, 2));
    // 0x3f1800: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1804: 0xa04501f0  sb          $a1, 0x1F0($v0)
    ctx->pc = 0x3f1804u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f1808: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f1808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f180c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f180cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f1810: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f1810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f1814: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f1814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f1818: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1818u;
    {
        const bool branch_taken_0x3f1818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f1818) {
            ctx->pc = 0x3F1830u;
            goto label_3f1830;
        }
    }
    ctx->pc = 0x3F1820u;
    // 0x3f1820: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f1824: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f1824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f1828: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F1828u;
    {
        const bool branch_taken_0x3f1828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1828u;
        // 0x3f182c: 0x8f878d2c  lw          $a3, -0x72D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1828) {
            ctx->pc = 0x3F184Cu;
            goto label_3f184c;
        }
    }
    ctx->pc = 0x3F1830u;
label_3f1830:
    // 0x3f1830: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f1830u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f1834: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f1834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f1838: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f1838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f183c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f183cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f1840: 0x0  nop
    ctx->pc = 0x3f1840u;
    // NOP
    // 0x3f1844: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f1844u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f1848: 0x8f878d2c  lw          $a3, -0x72D4($gp)
    ctx->pc = 0x3f1848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
label_3f184c:
    // 0x3f184c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f184cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f1850: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f1850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f1854: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f1854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f1858: 0x3c084320  lui         $t0, 0x4320
    ctx->pc = 0x3f1858u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17184 << 16));
    // 0x3f185c: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x3f185cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x3f1860: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f1860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f1864: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x3f1864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3f1868: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f1868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f186c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f186cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f1870: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f1870u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f1874: 0x8f878d2c  lw          $a3, -0x72D4($gp)
    ctx->pc = 0x3f1874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1878: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f1878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f187c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f187cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660110u));
    // 0x3f1880: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f1880u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f1884: 0x8f858d2c  lw          $a1, -0x72D4($gp)
    ctx->pc = 0x3f1884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1888: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f1888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f188c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f1890: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f1890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f1894: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f1894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f1898: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f1898u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f189c: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f189cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f18a0: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f18a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f18a4: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f18a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f18a8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f18a8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660120u));
    // 0x3f18ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f18acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f18b0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f18b4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f18b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f18b8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f18b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f18bc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f18bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f18c0: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f18c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f18c4: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f18c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f18c8: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f18c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f18cc: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f18ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f18d0: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f18d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f18d4: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f18d8: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F18D8u;
    SET_GPR_U32(ctx, 31, 0x3F18E0u);
    ctx->pc = 0x3F18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F18D8u;
    // 0x3f18dc: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F18D8u, 0x3F18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F18E0u;
label_3f18e0:
    // 0x3f18e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f18e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f18e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F18E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F18E4u;
        // 0x3f18e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F18E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F18ECu;
}

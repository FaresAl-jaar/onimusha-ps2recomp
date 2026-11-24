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

// Function: sub_003F2140
// Address: 0x3f2140 - 0x3f22a0
void sub_003F2140_0x3f2140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2140_0x3f2140");
#endif

    switch (ctx->pc) {
        case 0x3f2294u: goto label_3f2294;
        default: break;
    }

    ctx->pc = 0x3f2140u;

    // 0x3f2140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2144: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f2144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f2148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f214c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f2150: 0x8f858d30  lw          $a1, -0x72D0($gp)
    ctx->pc = 0x3f2150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2154: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f2154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f2158: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f2158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f215c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f215cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f2160: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f2160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f2164: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f2168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f216c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f2170: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f2170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f2174: 0xa0a601d0  sb          $a2, 0x1D0($a1)
    ctx->pc = 0x3f2174u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 464), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f2178: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f217c: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f217cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f2180: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2180u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2184: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2188: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f218c: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f218cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f2190: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f2190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2194: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2198: 0xac4301e4  sw          $v1, 0x1E4($v0)
    ctx->pc = 0x3f2198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 3));
    // 0x3f219c: 0x8f838d30  lw          $v1, -0x72D0($gp)
    ctx->pc = 0x3f219cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f21a0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f21a4: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f21a8: 0x8f838d30  lw          $v1, -0x72D0($gp)
    ctx->pc = 0x3f21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f21ac: 0x246200f0  addiu       $v0, $v1, 0xF0
    ctx->pc = 0x3f21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3f21b0: 0xac6201ec  sw          $v0, 0x1EC($v1)
    ctx->pc = 0x3f21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 492), GPR_U32(ctx, 2));
    // 0x3f21b4: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f21b8: 0xa04401f0  sb          $a0, 0x1F0($v0)
    ctx->pc = 0x3f21b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f21bc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f21bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f21c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f21c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f21c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f21c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f21c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f21c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f21cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F21CCu;
    {
        const bool branch_taken_0x3f21cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f21cc) {
            ctx->pc = 0x3F21E4u;
            goto label_3f21e4;
        }
    }
    ctx->pc = 0x3F21D4u;
    // 0x3f21d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f21d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f21d8: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f21d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f21dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F21DCu;
    {
        const bool branch_taken_0x3f21dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F21DCu;
        // 0x3f21e0: 0x8f878d30  lw          $a3, -0x72D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f21dc) {
            ctx->pc = 0x3F2200u;
            goto label_3f2200;
        }
    }
    ctx->pc = 0x3F21E4u;
label_3f21e4:
    // 0x3f21e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f21e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f21e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f21ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f21ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f21f0: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f21f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f21f4: 0x0  nop
    ctx->pc = 0x3f21f4u;
    // NOP
    // 0x3f21f8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f21f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f21fc: 0x8f878d30  lw          $a3, -0x72D0($gp)
    ctx->pc = 0x3f21fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
label_3f2200:
    // 0x3f2200: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f2200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f2204: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f2204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f2208: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f2208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f220c: 0x3c084320  lui         $t0, 0x4320
    ctx->pc = 0x3f220cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17184 << 16));
    // 0x3f2210: 0x24a50170  addiu       $a1, $a1, 0x170
    ctx->pc = 0x3f2210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
    // 0x3f2214: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f2214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f2218: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x3f2218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x3f221c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f221cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f2220: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f2220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f2224: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f2224u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f2228: 0x8f878d30  lw          $a3, -0x72D0($gp)
    ctx->pc = 0x3f2228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f222c: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f222cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f2230: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f2230u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660170u));
    // 0x3f2234: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f2234u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f2238: 0x8f858d30  lw          $a1, -0x72D0($gp)
    ctx->pc = 0x3f2238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f223c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2240: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f2240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2244: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f2244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2248: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f2248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f224c: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f224cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f2250: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f2250u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f2254: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f2254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f2258: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f2258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f225c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f225cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660180u));
    // 0x3f2260: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f2260u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f2264: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f2264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2268: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f2268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f226c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f2270: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f2270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f2274: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f2274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f2278: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f2278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f227c: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f227cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f2280: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f2280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f2284: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f2284u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f2288: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f228c: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F228Cu;
    SET_GPR_U32(ctx, 31, 0x3F2294u);
    ctx->pc = 0x3F2290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F228Cu;
    // 0x3f2290: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F228Cu, 0x3F2294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2294u;
label_3f2294:
    // 0x3f2294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2298: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2298u;
        // 0x3f229c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F22A0u;
}

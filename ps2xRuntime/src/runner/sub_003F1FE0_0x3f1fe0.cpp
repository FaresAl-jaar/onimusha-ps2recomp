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

// Function: sub_003F1FE0
// Address: 0x3f1fe0 - 0x3f213c
void sub_003F1FE0_0x3f1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1FE0_0x3f1fe0");
#endif

    switch (ctx->pc) {
        case 0x3f2130u: goto label_3f2130;
        default: break;
    }

    ctx->pc = 0x3f1fe0u;

    // 0x3f1fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f1fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f1fe4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3f1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3f1fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f1fec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3f1fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f1ff0: 0x8f848d30  lw          $a0, -0x72D0($gp)
    ctx->pc = 0x3f1ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f1ff4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f1ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f1ff8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f1ffc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f1ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2000: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3f2000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f2004: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f2004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f2008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f2008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f200c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f200cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f2010: 0xa08501d0  sb          $a1, 0x1D0($a0)
    ctx->pc = 0x3f2010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 464), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f2014: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2018: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f2018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f201c: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f201cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2020: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2024: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f2024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f2028: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f2028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f202c: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f202cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f2030: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2034: 0xac4301e4  sw          $v1, 0x1E4($v0)
    ctx->pc = 0x3f2034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 3));
    // 0x3f2038: 0x8f838d30  lw          $v1, -0x72D0($gp)
    ctx->pc = 0x3f2038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f203c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f2040: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f2040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f2044: 0x8f838d30  lw          $v1, -0x72D0($gp)
    ctx->pc = 0x3f2044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2048: 0x246200f0  addiu       $v0, $v1, 0xF0
    ctx->pc = 0x3f2048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3f204c: 0xac6201ec  sw          $v0, 0x1EC($v1)
    ctx->pc = 0x3f204cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 492), GPR_U32(ctx, 2));
    // 0x3f2050: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2054: 0xa04501f0  sb          $a1, 0x1F0($v0)
    ctx->pc = 0x3f2054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f2058: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f2058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f205c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f205cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f2060: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f2060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f2064: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f2064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f2068: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2068u;
    {
        const bool branch_taken_0x3f2068 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f2068) {
            ctx->pc = 0x3F2080u;
            goto label_3f2080;
        }
    }
    ctx->pc = 0x3F2070u;
    // 0x3f2070: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f2074: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f2074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F2078u;
    {
        const bool branch_taken_0x3f2078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2078u;
        // 0x3f207c: 0x8f878d30  lw          $a3, -0x72D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2078) {
            ctx->pc = 0x3F209Cu;
            goto label_3f209c;
        }
    }
    ctx->pc = 0x3F2080u;
label_3f2080:
    // 0x3f2080: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f2080u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f2084: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f2084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f2088: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f2088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f208c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f208cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f2090: 0x0  nop
    ctx->pc = 0x3f2090u;
    // NOP
    // 0x3f2094: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f2094u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f2098: 0x8f878d30  lw          $a3, -0x72D0($gp)
    ctx->pc = 0x3f2098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
label_3f209c:
    // 0x3f209c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f209cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f20a0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f20a4: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f20a8: 0x3c084320  lui         $t0, 0x4320
    ctx->pc = 0x3f20a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17184 << 16));
    // 0x3f20ac: 0x24a50150  addiu       $a1, $a1, 0x150
    ctx->pc = 0x3f20acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    // 0x3f20b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f20b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f20b4: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x3f20b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x3f20b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f20bc: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f20bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f20c0: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f20c4: 0x8f878d30  lw          $a3, -0x72D0($gp)
    ctx->pc = 0x3f20c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f20c8: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f20c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f20cc: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f20ccu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660150u));
    // 0x3f20d0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f20d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f20d4: 0x8f858d30  lw          $a1, -0x72D0($gp)
    ctx->pc = 0x3f20d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f20d8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f20d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f20dc: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f20dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f20e0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f20e4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f20e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f20e8: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f20e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f20ec: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f20ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f20f0: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f20f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f20f4: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f20f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f20f8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f20f8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660160u));
    // 0x3f20fc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f20fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f2100: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f2100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f2104: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f2104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f2108: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f2108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f210c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f2110: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f2110u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f2114: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f2114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f2118: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f2118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f211c: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f2120: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f2120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f2124: 0x8f828d30  lw          $v0, -0x72D0($gp)
    ctx->pc = 0x3f2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x3f2128: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F2128u;
    SET_GPR_U32(ctx, 31, 0x3F2130u);
    ctx->pc = 0x3F212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2128u;
    // 0x3f212c: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F2128u, 0x3F2130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2130u;
label_3f2130:
    // 0x3f2130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2134: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2134u;
        // 0x3f2138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F213Cu;
}

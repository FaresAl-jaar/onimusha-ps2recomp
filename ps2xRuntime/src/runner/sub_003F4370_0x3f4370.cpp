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

// Function: sub_003F4370
// Address: 0x3f4370 - 0x3f44c4
void sub_003F4370_0x3f4370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4370_0x3f4370");
#endif

    switch (ctx->pc) {
        case 0x3f44b8u: goto label_3f44b8;
        default: break;
    }

    ctx->pc = 0x3f4370u;

    // 0x3f4370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f4370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f4374: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f4374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f4378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f4378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f437c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f437cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f4380: 0x8f858d48  lw          $a1, -0x72B8($gp)
    ctx->pc = 0x3f4380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f4384: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f4384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f4388: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f4388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f438c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f4390: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f4390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f4394: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f4394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f4398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f4398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f439c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f43a0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f43a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f43a4: 0xa0a601d0  sb          $a2, 0x1D0($a1)
    ctx->pc = 0x3f43a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 464), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f43a8: 0x8f828d48  lw          $v0, -0x72B8($gp)
    ctx->pc = 0x3f43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f43ac: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f43acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f43b0: 0x8c23b870  lw          $v1, -0x4790($at)
    ctx->pc = 0x3f43b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80B870u));
    // 0x3f43b4: 0x8f828d48  lw          $v0, -0x72B8($gp)
    ctx->pc = 0x3f43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f43b8: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f43bc: 0x8f828d48  lw          $v0, -0x72B8($gp)
    ctx->pc = 0x3f43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f43c0: 0xac4001e4  sw          $zero, 0x1E4($v0)
    ctx->pc = 0x3f43c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 0));
    // 0x3f43c4: 0x8f838d48  lw          $v1, -0x72B8($gp)
    ctx->pc = 0x3f43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f43c8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f43cc: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f43d0: 0x8f828d48  lw          $v0, -0x72B8($gp)
    ctx->pc = 0x3f43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f43d4: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x3f43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
    // 0x3f43d8: 0x8f828d48  lw          $v0, -0x72B8($gp)
    ctx->pc = 0x3f43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f43dc: 0xa04401f0  sb          $a0, 0x1F0($v0)
    ctx->pc = 0x3f43dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f43e0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f43e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f43e4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f43e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f43e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f43e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f43ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f43ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f43f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F43F0u;
    {
        const bool branch_taken_0x3f43f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f43f0) {
            ctx->pc = 0x3F4408u;
            goto label_3f4408;
        }
    }
    ctx->pc = 0x3F43F8u;
    // 0x3f43f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f43f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f43fc: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f43fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f4400: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F4400u;
    {
        const bool branch_taken_0x3f4400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4400u;
        // 0x3f4404: 0x8f878d48  lw          $a3, -0x72B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4400) {
            ctx->pc = 0x3F4424u;
            goto label_3f4424;
        }
    }
    ctx->pc = 0x3F4408u;
label_3f4408:
    // 0x3f4408: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f4408u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f440c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f440cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f4410: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f4410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f4414: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f4414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f4418: 0x0  nop
    ctx->pc = 0x3f4418u;
    // NOP
    // 0x3f441c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f441cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f4420: 0x8f878d48  lw          $a3, -0x72B8($gp)
    ctx->pc = 0x3f4420u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
label_3f4424:
    // 0x3f4424: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f4424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f4428: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f4428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f442c: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f442cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f4430: 0x3c084352  lui         $t0, 0x4352
    ctx->pc = 0x3f4430u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17234 << 16));
    // 0x3f4434: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x3f4434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x3f4438: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f4438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f443c: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x3f443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x3f4440: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f4440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f4444: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f4444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f4448: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f4448u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f444c: 0x8f878d48  lw          $a3, -0x72B8($gp)
    ctx->pc = 0x3f444cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f4450: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f4450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f4454: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f4454u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660370u));
    // 0x3f4458: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f4458u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f445c: 0x8f858d48  lw          $a1, -0x72B8($gp)
    ctx->pc = 0x3f445cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f4460: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f4460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f4464: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f4464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f4468: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f4468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f446c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f4470: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f4470u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f4474: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f4474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f4478: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f4478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f447c: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f447cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f4480: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f4480u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660380u));
    // 0x3f4484: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f4484u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f4488: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f4488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f448c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f4490: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f4490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f4494: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f4494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f4498: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f4498u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f449c: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f449cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f44a0: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f44a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f44a4: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f44a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f44a8: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f44ac: 0x8f828d48  lw          $v0, -0x72B8($gp)
    ctx->pc = 0x3f44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x3f44b0: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F44B0u;
    SET_GPR_U32(ctx, 31, 0x3F44B8u);
    ctx->pc = 0x3F44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F44B0u;
    // 0x3f44b4: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F44B0u, 0x3F44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F44B8u;
label_3f44b8:
    // 0x3f44b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f44b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f44bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F44BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F44C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F44BCu;
        // 0x3f44c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F44BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F44C4u;
}

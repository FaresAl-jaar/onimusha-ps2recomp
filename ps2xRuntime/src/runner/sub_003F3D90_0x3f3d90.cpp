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

// Function: sub_003F3D90
// Address: 0x3f3d90 - 0x3f3ee0
void sub_003F3D90_0x3f3d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3D90_0x3f3d90");
#endif

    switch (ctx->pc) {
        case 0x3f3ed4u: goto label_3f3ed4;
        default: break;
    }

    ctx->pc = 0x3f3d90u;

    // 0x3f3d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f3d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f3d94: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3f3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3f3d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f3d9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3f3d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f3da0: 0x8f848d44  lw          $a0, -0x72BC($gp)
    ctx->pc = 0x3f3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3da4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f3da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3da8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f3dac: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f3dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f3db0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3f3db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f3db4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f3db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f3db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f3dbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f3dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f3dc0: 0xa08501d0  sb          $a1, 0x1D0($a0)
    ctx->pc = 0x3f3dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 464), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f3dc4: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3dc8: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f3dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f3dcc: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f3dd0: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3dd4: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f3dd8: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3ddc: 0xac4001e4  sw          $zero, 0x1E4($v0)
    ctx->pc = 0x3f3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 0));
    // 0x3f3de0: 0x8f838d44  lw          $v1, -0x72BC($gp)
    ctx->pc = 0x3f3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3de4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f3de8: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f3dec: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3df0: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x3f3df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
    // 0x3f3df4: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3df8: 0xa04501f0  sb          $a1, 0x1F0($v0)
    ctx->pc = 0x3f3df8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f3dfc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f3dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3e00: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f3e00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f3e04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f3e04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f3e08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f3e08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f3e0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3E0Cu;
    {
        const bool branch_taken_0x3f3e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3e0c) {
            ctx->pc = 0x3F3E24u;
            goto label_3f3e24;
        }
    }
    ctx->pc = 0x3F3E14u;
    // 0x3f3e14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3e14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3e18: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3e18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3e1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3E1Cu;
    {
        const bool branch_taken_0x3f3e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3E1Cu;
        // 0x3f3e20: 0x8f878d44  lw          $a3, -0x72BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3e1c) {
            ctx->pc = 0x3F3E40u;
            goto label_3f3e40;
        }
    }
    ctx->pc = 0x3F3E24u;
label_3f3e24:
    // 0x3f3e24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f3e24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f3e28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f3e2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3e2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3e30: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3e34: 0x0  nop
    ctx->pc = 0x3f3e34u;
    // NOP
    // 0x3f3e38: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f3e38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f3e3c: 0x8f878d44  lw          $a3, -0x72BC($gp)
    ctx->pc = 0x3f3e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
label_3f3e40:
    // 0x3f3e40: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f3e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f3e44: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f3e48: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f3e4c: 0x3c084352  lui         $t0, 0x4352
    ctx->pc = 0x3f3e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17234 << 16));
    // 0x3f3e50: 0x24a50310  addiu       $a1, $a1, 0x310
    ctx->pc = 0x3f3e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 784));
    // 0x3f3e54: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f3e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f3e58: 0x24630320  addiu       $v1, $v1, 0x320
    ctx->pc = 0x3f3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x3f3e5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f3e60: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f3e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f3e64: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f3e68: 0x8f878d44  lw          $a3, -0x72BC($gp)
    ctx->pc = 0x3f3e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3e6c: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f3e70: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f3e70u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660310u));
    // 0x3f3e74: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f3e74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f3e78: 0x8f858d44  lw          $a1, -0x72BC($gp)
    ctx->pc = 0x3f3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3e7c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f3e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3e80: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f3e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3e84: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f3e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3e88: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f3e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3e8c: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f3e8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f3e90: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f3e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f3e94: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f3e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f3e98: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f3e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f3e9c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f3e9cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660320u));
    // 0x3f3ea0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f3ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f3ea4: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f3ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3ea8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f3ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3eac: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f3eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3eb0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f3eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3eb4: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f3eb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f3eb8: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f3eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f3ebc: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f3ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f3ec0: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f3ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f3ec4: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f3ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f3ec8: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3ecc: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F3ECCu;
    SET_GPR_U32(ctx, 31, 0x3F3ED4u);
    ctx->pc = 0x3F3ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3ECCu;
    // 0x3f3ed0: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F3ECCu, 0x3F3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3ED4u;
label_3f3ed4:
    // 0x3f3ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3ED8u;
        // 0x3f3edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3EE0u;
}

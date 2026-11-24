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

// Function: sub_003F3EE0
// Address: 0x3f3ee0 - 0x3f4034
void sub_003F3EE0_0x3f3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3EE0_0x3f3ee0");
#endif

    switch (ctx->pc) {
        case 0x3f4028u: goto label_3f4028;
        default: break;
    }

    ctx->pc = 0x3f3ee0u;

    // 0x3f3ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f3ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f3ee4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f3ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f3eec: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f3eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f3ef0: 0x8f858d44  lw          $a1, -0x72BC($gp)
    ctx->pc = 0x3f3ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3ef4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f3ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f3ef8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f3ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f3efc: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f3f00: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f3f04: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f3f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f3f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f3f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f3f0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f3f10: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f3f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f3f14: 0xa0a601d0  sb          $a2, 0x1D0($a1)
    ctx->pc = 0x3f3f14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 464), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f3f18: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3f1c: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f3f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f3f20: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f3f24: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3f28: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f3f2c: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3f30: 0xac4001e4  sw          $zero, 0x1E4($v0)
    ctx->pc = 0x3f3f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 0));
    // 0x3f3f34: 0x8f838d44  lw          $v1, -0x72BC($gp)
    ctx->pc = 0x3f3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3f38: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f3f3c: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f3f40: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3f44: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x3f3f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
    // 0x3f3f48: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3f4c: 0xa04401f0  sb          $a0, 0x1F0($v0)
    ctx->pc = 0x3f3f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f3f50: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f3f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3f54: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f3f54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f3f58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f3f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f3f5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f3f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f3f60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3F60u;
    {
        const bool branch_taken_0x3f3f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3f60) {
            ctx->pc = 0x3F3F78u;
            goto label_3f3f78;
        }
    }
    ctx->pc = 0x3F3F68u;
    // 0x3f3f68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3f68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3f6c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3f70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3F70u;
    {
        const bool branch_taken_0x3f3f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3F70u;
        // 0x3f3f74: 0x8f878d44  lw          $a3, -0x72BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3f70) {
            ctx->pc = 0x3F3F94u;
            goto label_3f3f94;
        }
    }
    ctx->pc = 0x3F3F78u;
label_3f3f78:
    // 0x3f3f78: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f3f78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f3f7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f3f80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3f84: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3f88: 0x0  nop
    ctx->pc = 0x3f3f88u;
    // NOP
    // 0x3f3f8c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f3f8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f3f90: 0x8f878d44  lw          $a3, -0x72BC($gp)
    ctx->pc = 0x3f3f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
label_3f3f94:
    // 0x3f3f94: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f3f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f3f98: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f3f9c: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f3fa0: 0x3c084352  lui         $t0, 0x4352
    ctx->pc = 0x3f3fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17234 << 16));
    // 0x3f3fa4: 0x24a50330  addiu       $a1, $a1, 0x330
    ctx->pc = 0x3f3fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 816));
    // 0x3f3fa8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f3fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f3fac: 0x24630340  addiu       $v1, $v1, 0x340
    ctx->pc = 0x3f3facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x3f3fb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f3fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f3fb4: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f3fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f3fb8: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f3fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f3fbc: 0x8f878d44  lw          $a3, -0x72BC($gp)
    ctx->pc = 0x3f3fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3fc0: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f3fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f3fc4: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f3fc4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x660330u));
    // 0x3f3fc8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f3fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f3fcc: 0x8f858d44  lw          $a1, -0x72BC($gp)
    ctx->pc = 0x3f3fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f3fd0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f3fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3fd4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f3fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3fd8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f3fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3fdc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f3fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3fe0: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f3fe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f3fe4: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f3fe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f3fe8: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f3fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f3fec: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f3fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f3ff0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f3ff0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660340u));
    // 0x3f3ff4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f3ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f3ff8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f3ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3ffc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f3ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f4000: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f4000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f4004: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f4004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f4008: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f4008u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f400c: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f400cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f4010: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f4010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f4014: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f4014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f4018: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f4018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f401c: 0x8f828d44  lw          $v0, -0x72BC($gp)
    ctx->pc = 0x3f401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937924)));
    // 0x3f4020: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F4020u;
    SET_GPR_U32(ctx, 31, 0x3F4028u);
    ctx->pc = 0x3F4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F4020u;
    // 0x3f4024: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F4020u, 0x3F4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4028u;
label_3f4028:
    // 0x3f4028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f4028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f402c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F402Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F402Cu;
        // 0x3f4030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F402Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F4034u;
}

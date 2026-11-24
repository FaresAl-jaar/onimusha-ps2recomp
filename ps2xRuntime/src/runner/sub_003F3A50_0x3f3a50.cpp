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

// Function: sub_003F3A50
// Address: 0x3f3a50 - 0x3f3ba4
void sub_003F3A50_0x3f3a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3A50_0x3f3a50");
#endif

    switch (ctx->pc) {
        case 0x3f3b98u: goto label_3f3b98;
        default: break;
    }

    ctx->pc = 0x3f3a50u;

    // 0x3f3a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f3a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f3a54: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3f3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3f3a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f3a5c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3f3a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3f3a60: 0x8f858d40  lw          $a1, -0x72C0($gp)
    ctx->pc = 0x3f3a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f3a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3f3a68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f3a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f3a6c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3f3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3f3a70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3f3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3f3a74: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3f3a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3f3a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f3a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3f3a7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3f3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f3a80: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f3a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3f3a84: 0xa0a601d0  sb          $a2, 0x1D0($a1)
    ctx->pc = 0x3f3a84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 464), (uint8_t)GPR_U32(ctx, 6));
    // 0x3f3a88: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3a8c: 0xa04001d1  sb          $zero, 0x1D1($v0)
    ctx->pc = 0x3f3a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 465), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f3a90: 0x8c2395c0  lw          $v1, -0x6A40($at)
    ctx->pc = 0x3f3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095C0u));
    // 0x3f3a94: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3a98: 0xac4301e0  sw          $v1, 0x1E0($v0)
    ctx->pc = 0x3f3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 3));
    // 0x3f3a9c: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3aa0: 0xac4001e4  sw          $zero, 0x1E4($v0)
    ctx->pc = 0x3f3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 0));
    // 0x3f3aa4: 0x8f838d40  lw          $v1, -0x72C0($gp)
    ctx->pc = 0x3f3aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3aa8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3f3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3f3aac: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x3f3aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x3f3ab0: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3ab4: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x3f3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
    // 0x3f3ab8: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3abc: 0xa04401f0  sb          $a0, 0x1F0($v0)
    ctx->pc = 0x3f3abcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 4));
    // 0x3f3ac0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3f3ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3ac4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3f3ac4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3f3ac8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f3ac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3f3acc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f3accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3f3ad0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3AD0u;
    {
        const bool branch_taken_0x3f3ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f3ad0) {
            ctx->pc = 0x3F3AE8u;
            goto label_3f3ae8;
        }
    }
    ctx->pc = 0x3F3AD8u;
    // 0x3f3ad8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3ad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3adc: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3adcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3ae0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3AE0u;
    {
        const bool branch_taken_0x3f3ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3AE0u;
        // 0x3f3ae4: 0x8f878d40  lw          $a3, -0x72C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3ae0) {
            ctx->pc = 0x3F3B04u;
            goto label_3f3b04;
        }
    }
    ctx->pc = 0x3F3AE8u;
label_3f3ae8:
    // 0x3f3ae8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f3ae8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3f3aec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f3af0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f3af0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3f3af4: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3f3af4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3f3af8: 0x0  nop
    ctx->pc = 0x3f3af8u;
    // NOP
    // 0x3f3afc: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3f3afcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3f3b00: 0x8f878d40  lw          $a3, -0x72C0($gp)
    ctx->pc = 0x3f3b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
label_3f3b04:
    // 0x3f3b04: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f3b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f3b08: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3f3b0c: 0x3c021600  lui         $v0, 0x1600
    ctx->pc = 0x3f3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5632 << 16));
    // 0x3f3b10: 0x3c084352  lui         $t0, 0x4352
    ctx->pc = 0x3f3b10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17234 << 16));
    // 0x3f3b14: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x3f3b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x3f3b18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3f3b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3f3b1c: 0x24630300  addiu       $v1, $v1, 0x300
    ctx->pc = 0x3f3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x3f3b20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f3b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f3b24: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x3f3b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3f3b28: 0xace901f4  sw          $t1, 0x1F4($a3)
    ctx->pc = 0x3f3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 9));
    // 0x3f3b2c: 0x8f878d40  lw          $a3, -0x72C0($gp)
    ctx->pc = 0x3f3b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3b30: 0xace801f8  sw          $t0, 0x1F8($a3)
    ctx->pc = 0x3f3b30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 504), GPR_U32(ctx, 8));
    // 0x3f3b34: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x3f3b34u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x6602F0u));
    // 0x3f3b38: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3f3b38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3f3b3c: 0x8f858d40  lw          $a1, -0x72C0($gp)
    ctx->pc = 0x3f3b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3b40: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f3b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3b44: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f3b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3b48: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f3b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3b4c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f3b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3b50: 0xe4a30200  swc1        $f3, 0x200($a1)
    ctx->pc = 0x3f3b50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x3f3b54: 0xe4a20204  swc1        $f2, 0x204($a1)
    ctx->pc = 0x3f3b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
    // 0x3f3b58: 0xe4a10208  swc1        $f1, 0x208($a1)
    ctx->pc = 0x3f3b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 520), bits); }
    // 0x3f3b5c: 0xe4a0020c  swc1        $f0, 0x20C($a1)
    ctx->pc = 0x3f3b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 524), bits); }
    // 0x3f3b60: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3f3b60u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x660300u));
    // 0x3f3b64: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3f3b64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3f3b68: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f3b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3f3b6c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f3b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3f3b70: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f3b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3b74: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f3b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3b78: 0xe4a30210  swc1        $f3, 0x210($a1)
    ctx->pc = 0x3f3b78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x3f3b7c: 0xe4a20214  swc1        $f2, 0x214($a1)
    ctx->pc = 0x3f3b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 532), bits); }
    // 0x3f3b80: 0xe4a10218  swc1        $f1, 0x218($a1)
    ctx->pc = 0x3f3b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 536), bits); }
    // 0x3f3b84: 0xe4a0021c  swc1        $f0, 0x21C($a1)
    ctx->pc = 0x3f3b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 540), bits); }
    // 0x3f3b88: 0xaca20220  sw          $v0, 0x220($a1)
    ctx->pc = 0x3f3b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 2));
    // 0x3f3b8c: 0x8f828d40  lw          $v0, -0x72C0($gp)
    ctx->pc = 0x3f3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x3f3b90: 0xc0fc710  jal         func_3F1C40
    ctx->pc = 0x3F3B90u;
    SET_GPR_U32(ctx, 31, 0x3F3B98u);
    ctx->pc = 0x3F3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3B90u;
    // 0x3f3b94: 0x244401e0  addiu       $a0, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C40u, 0x3F3B90u, 0x3F3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3B98u;
label_3f3b98:
    // 0x3f3b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3B9Cu;
        // 0x3f3ba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3BA4u;
}

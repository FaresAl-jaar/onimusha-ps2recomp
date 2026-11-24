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

// Function: sub_0014FE70
// Address: 0x14fe70 - 0x14ff68
void sub_0014FE70_0x14fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FE70_0x14fe70");
#endif

    ctx->pc = 0x14fe70u;

    // 0x14fe70: 0xc4e70008  lwc1        $f7, 0x8($a3)
    ctx->pc = 0x14fe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14fe74: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x14fe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fe78: 0xc4e80000  lwc1        $f8, 0x0($a3)
    ctx->pc = 0x14fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x14fe7c: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x14fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14fe80: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x14fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x14fe84: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe88: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x14fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x14fe8c: 0x46070981  sub.s       $f6, $f1, $f7
    ctx->pc = 0x14fe8cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x14fe90: 0x460a0041  sub.s       $f1, $f0, $f10
    ctx->pc = 0x14fe90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x14fe94: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x14fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fe98: 0x46082141  sub.s       $f5, $f4, $f8
    ctx->pc = 0x14fe98u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x14fe9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x14fe9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14fea0: 0x0  nop
    ctx->pc = 0x14fea0u;
    // NOP
    // 0x14fea4: 0x46091901  sub.s       $f4, $f3, $f9
    ctx->pc = 0x14fea4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
    // 0x14fea8: 0x4606081a  mula.s      $f1, $f6
    ctx->pc = 0x14fea8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x14feac: 0x460522dd  msub.s      $f11, $f4, $f5
    ctx->pc = 0x14feacu;
    ctx->f[11] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x14feb0: 0x460b1032  c.eq.s      $f2, $f11
    ctx->pc = 0x14feb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14feb4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14FEB4u;
    {
        const bool branch_taken_0x14feb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEB4u;
        // 0x14feb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14feb4) {
            ctx->pc = 0x14FEC8u;
            goto label_14fec8;
        }
    }
    ctx->pc = 0x14FEBCu;
    // 0x14febc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x14FEBCu;
    {
        const bool branch_taken_0x14febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14febc) {
            ctx->pc = 0x14FF60u;
            goto label_14ff60;
        }
    }
    ctx->pc = 0x14FEC4u;
    // 0x14fec4: 0x0  nop
    ctx->pc = 0x14fec4u;
    // NOP
label_14fec8:
    // 0x14fec8: 0x46074801  sub.s       $f0, $f9, $f7
    ctx->pc = 0x14fec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x14fecc: 0x460850c1  sub.s       $f3, $f10, $f8
    ctx->pc = 0x14feccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[8]);
    // 0x14fed0: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x14fed0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x14fed4: 0x4606195d  msub.s      $f5, $f3, $f6
    ctx->pc = 0x14fed4u;
    ctx->f[5] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x14fed8: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x14fed8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x14fedc: 0x460b2943  div.s       $f5, $f5, $f11
    ctx->pc = 0x14fedcu;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[11]); }
    // 0x14fee0: 0x460418dd  msub.s      $f3, $f3, $f4
    ctx->pc = 0x14fee0u;
    ctx->f[3] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x14fee4: 0x0  nop
    ctx->pc = 0x14fee4u;
    // NOP
    // 0x14fee8: 0x460b18c3  div.s       $f3, $f3, $f11
    ctx->pc = 0x14fee8u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[11]); }
    // 0x14feec: 0x0  nop
    ctx->pc = 0x14feecu;
    // NOP
    // 0x14fef0: 0x0  nop
    ctx->pc = 0x14fef0u;
    // NOP
    // 0x14fef4: 0x46051036  c.le.s      $f2, $f5
    ctx->pc = 0x14fef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fef8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x14FEF8u;
    {
        const bool branch_taken_0x14fef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEF8u;
        // 0x14fefc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fef8) {
            ctx->pc = 0x14FF58u;
            goto label_14ff58;
        }
    }
    ctx->pc = 0x14FF00u;
    // 0x14ff00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ff00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ff04: 0x0  nop
    ctx->pc = 0x14ff04u;
    // NOP
    // 0x14ff08: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x14ff08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ff0c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x14FF0Cu;
    {
        const bool branch_taken_0x14ff0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ff0c) {
            ctx->pc = 0x14FF58u;
            goto label_14ff58;
        }
    }
    ctx->pc = 0x14FF14u;
    // 0x14ff14: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x14ff14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ff18: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x14FF18u;
    {
        const bool branch_taken_0x14ff18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ff18) {
            ctx->pc = 0x14FF58u;
            goto label_14ff58;
        }
    }
    ctx->pc = 0x14FF20u;
    // 0x14ff20: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x14ff20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ff24: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x14FF24u;
    {
        const bool branch_taken_0x14ff24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ff24) {
            ctx->pc = 0x14FF58u;
            goto label_14ff58;
        }
    }
    ctx->pc = 0x14FF2Cu;
    // 0x14ff2c: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x14ff2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x14ff30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ff34: 0x46005040  add.s       $f1, $f10, $f0
    ctx->pc = 0x14ff34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x14ff38: 0x46042802  mul.s       $f0, $f5, $f4
    ctx->pc = 0x14ff38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x14ff3c: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x14ff3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x14ff40: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x14ff40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14ff44: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x14ff44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14ff48: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x14ff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x14ff4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14FF4Cu;
    {
        const bool branch_taken_0x14ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF4Cu;
        // 0x14ff50: 0xe482000c  swc1        $f2, 0xC($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff4c) {
            ctx->pc = 0x14FF60u;
            goto label_14ff60;
        }
    }
    ctx->pc = 0x14FF54u;
    // 0x14ff54: 0x0  nop
    ctx->pc = 0x14ff54u;
    // NOP
label_14ff58:
    // 0x14ff58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ff58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff5c: 0x0  nop
    ctx->pc = 0x14ff5cu;
    // NOP
label_14ff60:
    // 0x14ff60: 0x3e00008  jr          $ra
    ctx->pc = 0x14FF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FF68u;
}

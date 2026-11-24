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

// Function: sub_00265EB0
// Address: 0x265eb0 - 0x265f6c
void sub_00265EB0_0x265eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265EB0_0x265eb0");
#endif

    ctx->pc = 0x265eb0u;

    // 0x265eb0: 0xc4b20004  lwc1        $f18, 0x4($a1)
    ctx->pc = 0x265eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x265eb4: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x265eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265eb8: 0xc4ca0018  lwc1        $f10, 0x18($a2)
    ctx->pc = 0x265eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x265ebc: 0xc4b10000  lwc1        $f17, 0x0($a1)
    ctx->pc = 0x265ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x265ec0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x265ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265ec4: 0xc4cb0008  lwc1        $f11, 0x8($a2)
    ctx->pc = 0x265ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x265ec8: 0xc4c70004  lwc1        $f7, 0x4($a2)
    ctx->pc = 0x265ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x265ecc: 0xc4c60014  lwc1        $f6, 0x14($a2)
    ctx->pc = 0x265eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x265ed0: 0x46009382  mul.s       $f14, $f18, $f0
    ctx->pc = 0x265ed0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x265ed4: 0x46018bc2  mul.s       $f15, $f17, $f1
    ctx->pc = 0x265ed4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[17], ctx->f[1]);
    // 0x265ed8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x265ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x265edc: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x265edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x265ee0: 0xc4b00008  lwc1        $f16, 0x8($a1)
    ctx->pc = 0x265ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x265ee4: 0xc4cd002c  lwc1        $f13, 0x2C($a2)
    ctx->pc = 0x265ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x265ee8: 0x460e7818  adda.s      $f15, $f14
    ctx->pc = 0x265ee8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[15], ctx->f[14]));
    // 0x265eec: 0xc4c90028  lwc1        $f9, 0x28($a2)
    ctx->pc = 0x265eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x265ef0: 0x460b8ac2  mul.s       $f11, $f17, $f11
    ctx->pc = 0x265ef0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[17], ctx->f[11]);
    // 0x265ef4: 0x460a9282  mul.s       $f10, $f18, $f10
    ctx->pc = 0x265ef4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[18], ctx->f[10]);
    // 0x265ef8: 0x460d835c  madd.s      $f13, $f16, $f13
    ctx->pc = 0x265ef8u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[16], ctx->f[13]));
    // 0x265efc: 0xc4cc003c  lwc1        $f12, 0x3C($a2)
    ctx->pc = 0x265efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x265f00: 0x460a5818  adda.s      $f11, $f10
    ctx->pc = 0x265f00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[11], ctx->f[10]));
    // 0x265f04: 0xc4c50024  lwc1        $f5, 0x24($a2)
    ctx->pc = 0x265f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x265f08: 0x460789c2  mul.s       $f7, $f17, $f7
    ctx->pc = 0x265f08u;
    ctx->f[7] = FPU_MUL_S(ctx->f[17], ctx->f[7]);
    // 0x265f0c: 0x46069182  mul.s       $f6, $f18, $f6
    ctx->pc = 0x265f0cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[18], ctx->f[6]);
    // 0x265f10: 0x4609825c  madd.s      $f9, $f16, $f9
    ctx->pc = 0x265f10u;
    ctx->f[9] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[16], ctx->f[9]));
    // 0x265f14: 0xc4c80038  lwc1        $f8, 0x38($a2)
    ctx->pc = 0x265f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x265f18: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x265f18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[6]));
    // 0x265f1c: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x265f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265f20: 0x460388c2  mul.s       $f3, $f17, $f3
    ctx->pc = 0x265f20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[17], ctx->f[3]);
    // 0x265f24: 0x46029082  mul.s       $f2, $f18, $f2
    ctx->pc = 0x265f24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[18], ctx->f[2]);
    // 0x265f28: 0x4605815c  madd.s      $f5, $f16, $f5
    ctx->pc = 0x265f28u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[16], ctx->f[5]));
    // 0x265f2c: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x265f2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x265f30: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x265f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x265f34: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x265f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265f38: 0x4601805c  madd.s      $f1, $f16, $f1
    ctx->pc = 0x265f38u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[16], ctx->f[1]));
    // 0x265f3c: 0x460d6300  add.s       $f12, $f12, $f13
    ctx->pc = 0x265f3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x265f40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x265f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x265f44: 0x46052080  add.s       $f2, $f4, $f5
    ctx->pc = 0x265f44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x265f48: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x265f48u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x265f4c: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x265f4cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x265f50: 0x460c1043  div.s       $f1, $f2, $f12
    ctx->pc = 0x265f50u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
    // 0x265f54: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x265f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265f58: 0x460c4203  div.s       $f8, $f8, $f12
    ctx->pc = 0x265f58u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[12]); }
    // 0x265f5c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x265f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x265f60: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x265f60u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x265f64: 0x3e00008  jr          $ra
    ctx->pc = 0x265F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265F64u;
        // 0x265f68: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265F6Cu;
}

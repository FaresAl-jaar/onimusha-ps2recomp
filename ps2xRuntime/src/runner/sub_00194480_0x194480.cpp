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

// Function: sub_00194480
// Address: 0x194480 - 0x194508
void sub_00194480_0x194480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194480_0x194480");
#endif

    ctx->pc = 0x194480u;

    // 0x194480: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x194480u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x194484: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x194484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x194488: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x194488u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19448c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x19448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194490: 0x460c01c1  sub.s       $f7, $f0, $f12
    ctx->pc = 0x194490u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x194494: 0xc4c10048  lwc1        $f1, 0x48($a2)
    ctx->pc = 0x194494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194498: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x194498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19449c: 0xc4c50058  lwc1        $f5, 0x58($a2)
    ctx->pc = 0x19449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1944a0: 0x4607101a  mula.s      $f2, $f7
    ctx->pc = 0x1944a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x1944a4: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x1944a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1944a8: 0xc4c30050  lwc1        $f3, 0x50($a2)
    ctx->pc = 0x1944a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1944ac: 0x460c099c  madd.s      $f6, $f1, $f12
    ctx->pc = 0x1944acu;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x1944b0: 0x4607001a  mula.s      $f0, $f7
    ctx->pc = 0x1944b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[7]));
    // 0x1944b4: 0x460c295c  madd.s      $f5, $f5, $f12
    ctx->pc = 0x1944b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[12]));
    // 0x1944b8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1944b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1944bc: 0x4607201a  mula.s      $f4, $f7
    ctx->pc = 0x1944bcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[7]));
    // 0x1944c0: 0x460c18dc  madd.s      $f3, $f3, $f12
    ctx->pc = 0x1944c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[12]));
    // 0x1944c4: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x1944c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1944c8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1944c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1944cc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1944ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1944d0: 0x4607101a  mula.s      $f2, $f7
    ctx->pc = 0x1944d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x1944d4: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1944d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1944d8: 0x460c085c  madd.s      $f1, $f1, $f12
    ctx->pc = 0x1944d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x1944dc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1944dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1944e0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1944e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1944e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1944e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1944e8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1944e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1944ec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1944ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1944f0: 0x46052082  mul.s       $f2, $f4, $f5
    ctx->pc = 0x1944f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1944f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1944f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1944f8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1944f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1944fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1944fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x194500: 0x3e00008  jr          $ra
    ctx->pc = 0x194500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194500u;
        // 0x194504: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194508u;
}

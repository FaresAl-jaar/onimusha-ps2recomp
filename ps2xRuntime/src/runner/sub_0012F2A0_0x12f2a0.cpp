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

// Function: sub_0012F2A0
// Address: 0x12f2a0 - 0x12f324
void sub_0012F2A0_0x12f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F2A0_0x12f2a0");
#endif

    ctx->pc = 0x12f2a0u;

    // 0x12f2a0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x12f2a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f2a4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x12f2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x12f2a8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x12f2a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12f2ac: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x12f2acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x12f2b0: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x12f2b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x12f2b4: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x12f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x12f2b8: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x12f2b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x12f2bc: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x12f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x12f2c0: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x12f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f2c4: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x12f2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x12f2c8: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x12f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f2cc: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x12f2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x12f2d0: 0xc4a30050  lwc1        $f3, 0x50($a1)
    ctx->pc = 0x12f2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12f2d4: 0xc4a20054  lwc1        $f2, 0x54($a1)
    ctx->pc = 0x12f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f2d8: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x12f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f2dc: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x12f2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f2e0: 0xe4830050  swc1        $f3, 0x50($a0)
    ctx->pc = 0x12f2e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x12f2e4: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x12f2e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x12f2e8: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x12f2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x12f2ec: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x12f2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x12f2f0: 0xc4a30060  lwc1        $f3, 0x60($a1)
    ctx->pc = 0x12f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12f2f4: 0xc4a20064  lwc1        $f2, 0x64($a1)
    ctx->pc = 0x12f2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f2f8: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x12f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f2fc: 0xc4a0006c  lwc1        $f0, 0x6C($a1)
    ctx->pc = 0x12f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f300: 0xe4830060  swc1        $f3, 0x60($a0)
    ctx->pc = 0x12f300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x12f304: 0xe4820064  swc1        $f2, 0x64($a0)
    ctx->pc = 0x12f304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x12f308: 0xe4810068  swc1        $f1, 0x68($a0)
    ctx->pc = 0x12f308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x12f30c: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x12f30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x12f310: 0xc4a00074  lwc1        $f0, 0x74($a1)
    ctx->pc = 0x12f310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f314: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x12f314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x12f318: 0xc4a00078  lwc1        $f0, 0x78($a1)
    ctx->pc = 0x12f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f31c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F31Cu;
        // 0x12f320: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F324u;
}

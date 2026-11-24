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

// Function: sub_001A18B0
// Address: 0x1a18b0 - 0x1a1920
void sub_001A18B0_0x1a18b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A18B0_0x1a18b0");
#endif

    ctx->pc = 0x1a18b0u;

    // 0x1a18b0: 0x460e6882  mul.s       $f2, $f13, $f14
    ctx->pc = 0x1a18b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
    // 0x1a18b4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1a18b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1a18b8: 0x46027882  mul.s       $f2, $f15, $f2
    ctx->pc = 0x1a18b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x1a18bc: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x1a18bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1a18c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a18c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a18c4: 0x460e7142  mul.s       $f5, $f14, $f14
    ctx->pc = 0x1a18c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x1a18c8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1a18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1a18cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a18ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a18d0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1a18d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a18d4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1a18d4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1a18d8: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x1a18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x1a18dc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a18dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a18e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a18e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a18e4: 0x460f7982  mul.s       $f6, $f15, $f15
    ctx->pc = 0x1a18e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x1a18e8: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1a18e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1a18ec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a18ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1a18f0: 0x46062800  add.s       $f0, $f5, $f6
    ctx->pc = 0x1a18f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1a18f4: 0x460d6902  mul.s       $f4, $f13, $f13
    ctx->pc = 0x1a18f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a18f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a18f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a18fc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1a18fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1a1900: 0x46043040  add.s       $f1, $f6, $f4
    ctx->pc = 0x1a1900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x1a1904: 0x46052000  add.s       $f0, $f4, $f5
    ctx->pc = 0x1a1904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1a1908: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1a1908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a190c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a190cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a1910: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1a1910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1a1914: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1a1914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1a1918: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1918u;
        // 0x1a191c: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1920u;
}

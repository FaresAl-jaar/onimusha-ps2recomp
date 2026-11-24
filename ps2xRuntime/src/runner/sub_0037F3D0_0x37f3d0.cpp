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

// Function: sub_0037F3D0
// Address: 0x37f3d0 - 0x37f3e4
void sub_0037F3D0_0x37f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F3D0_0x37f3d0");
#endif

    ctx->pc = 0x37f3d0u;

    // 0x37f3d0: 0xc4812b6c  lwc1        $f1, 0x2B6C($a0)
    ctx->pc = 0x37f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37f3d4: 0xc4802b60  lwc1        $f0, 0x2B60($a0)
    ctx->pc = 0x37f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37f3d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x37f3d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x37f3dc: 0x80dfcfc  j           func_37F3F0
    ctx->pc = 0x37F3DCu;
    ctx->pc = 0x37F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F3DCu;
    // 0x37f3e0: 0xe4802b60  swc1        $f0, 0x2B60($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F3F0u;
    sub_0037F3F0_0x37f3f0(rdram, ctx, runtime); return;
    ctx->pc = 0x37F3E4u;
}

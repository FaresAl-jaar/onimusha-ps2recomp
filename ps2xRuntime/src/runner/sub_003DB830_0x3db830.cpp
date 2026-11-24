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

// Function: sub_003DB830
// Address: 0x3db830 - 0x3db844
void sub_003DB830_0x3db830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB830_0x3db830");
#endif

    ctx->pc = 0x3db830u;

    // 0x3db830: 0xc4812bc4  lwc1        $f1, 0x2BC4($a0)
    ctx->pc = 0x3db830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db834: 0xc4802bc0  lwc1        $f0, 0x2BC0($a0)
    ctx->pc = 0x3db834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db838: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3db838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3db83c: 0x80f6e1c  j           func_3DB870
    ctx->pc = 0x3DB83Cu;
    ctx->pc = 0x3DB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB83Cu;
    // 0x3db840: 0xe4802bc0  swc1        $f0, 0x2BC0($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB870u;
    sub_003DB870_0x3db870(rdram, ctx, runtime); return;
    ctx->pc = 0x3DB844u;
}

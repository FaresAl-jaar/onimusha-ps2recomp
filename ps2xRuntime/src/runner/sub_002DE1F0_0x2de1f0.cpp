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

// Function: sub_002DE1F0
// Address: 0x2de1f0 - 0x2de204
void sub_002DE1F0_0x2de1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE1F0_0x2de1f0");
#endif

    ctx->pc = 0x2de1f0u;

    // 0x2de1f0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2de1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2de1f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2de1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2de1f8: 0x0  nop
    ctx->pc = 0x2de1f8u;
    // NOP
    // 0x2de1fc: 0x80b7840  j           func_2DE100
    ctx->pc = 0x2DE1FCu;
    ctx->pc = 0x2DE100u;
    sub_002DE100_0x2de100(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE204u;
}

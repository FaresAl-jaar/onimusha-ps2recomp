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

// Function: sub_002DE110
// Address: 0x2de110 - 0x2de118
void sub_002DE110_0x2de110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE110_0x2de110");
#endif

    ctx->pc = 0x2de110u;

    // 0x2de110: 0x80b7848  j           func_2DE120
    ctx->pc = 0x2DE110u;
    ctx->pc = 0x2DE114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE110u;
    // 0x2de114: 0xe48e0000  swc1        $f14, 0x0($a0) (Delay Slot)
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE120u;
    sub_002DE120_0x2de120(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE118u;
}

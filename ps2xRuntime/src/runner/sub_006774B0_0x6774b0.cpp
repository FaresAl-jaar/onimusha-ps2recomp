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

// Function: sub_006774B0
// Address: 0x6774b0 - 0x6774c0
void sub_006774B0_0x6774b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006774B0_0x6774b0");
#endif

    ctx->pc = 0x6774b0u;

    // 0x6774b0: 0x0  nop
    ctx->pc = 0x6774b0u;
    // NOP
    // 0x6774b4: 0x0  nop
    ctx->pc = 0x6774b4u;
    // NOP
    // 0x6774b8: 0x0  nop
    ctx->pc = 0x6774b8u;
    // NOP
    // 0x6774bc: 0x0  nop
    ctx->pc = 0x6774bcu;
    // NOP
    ctx->pc = 0x6774c0u;
}

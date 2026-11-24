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

// Function: sub_004CC688
// Address: 0x4cc688 - 0x4cc690
void sub_004CC688_0x4cc688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC688_0x4cc688");
#endif

    ctx->pc = 0x4cc688u;

    // 0x4cc688: 0x0  nop
    ctx->pc = 0x4cc688u;
    // NOP
    // 0x4cc68c: 0x0  nop
    ctx->pc = 0x4cc68cu;
    // NOP
    ctx->pc = 0x4cc690u;
}

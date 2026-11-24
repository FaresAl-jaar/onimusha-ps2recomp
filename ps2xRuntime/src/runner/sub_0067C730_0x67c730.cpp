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

// Function: sub_0067C730
// Address: 0x67c730 - 0x67c734
void sub_0067C730_0x67c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0067C730_0x67c730");
#endif

    ctx->pc = 0x67c730u;

    // 0x67c730: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x67c730u;
    
    ctx->pc = 0x67c734u;
}

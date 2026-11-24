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

// Function: sub_0040D7C0
// Address: 0x40d7c0 - 0x40d7d0
void sub_0040D7C0_0x40d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D7C0_0x40d7c0");
#endif

    ctx->pc = 0x40d7c0u;

    // 0x40d7c0: 0x30100  sll         $zero, $v1, 4
    ctx->pc = 0x40d7c0u;
    
    // 0x40d7c4: 0x0  nop
    ctx->pc = 0x40d7c4u;
    // NOP
    // 0x40d7c8: 0x0  nop
    ctx->pc = 0x40d7c8u;
    // NOP
    // 0x40d7cc: 0x0  nop
    ctx->pc = 0x40d7ccu;
    // NOP
    ctx->pc = 0x40d7d0u;
}

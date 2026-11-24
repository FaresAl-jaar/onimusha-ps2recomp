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

// Function: sub_0010A83C
// Address: 0x10a83c - 0x10a840
void sub_0010A83C_0x10a83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A83C_0x10a83c");
#endif

    ctx->pc = 0x10a83cu;

    // 0x10a83c: 0x0  nop
    ctx->pc = 0x10a83cu;
    // NOP
    ctx->pc = 0x10a840u;
}

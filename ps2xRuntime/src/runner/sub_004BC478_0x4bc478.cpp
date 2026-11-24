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

// Function: sub_004BC478
// Address: 0x4bc478 - 0x4bc47c
void sub_004BC478_0x4bc478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BC478_0x4bc478");
#endif

    ctx->pc = 0x4bc478u;

    // 0x4bc478: 0x0  nop
    ctx->pc = 0x4bc478u;
    // NOP
    ctx->pc = 0x4bc47cu;
}

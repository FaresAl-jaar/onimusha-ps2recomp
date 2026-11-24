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

// Function: sub_00131A00
// Address: 0x131a00 - 0x131a10
void sub_00131A00_0x131a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131A00_0x131a00");
#endif

    ctx->pc = 0x131a00u;

    // 0x131a00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x131a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131a04: 0x0  nop
    ctx->pc = 0x131a04u;
    // NOP
    // 0x131a08: 0x0  nop
    ctx->pc = 0x131a08u;
    // NOP
    // 0x131a0c: 0x0  nop
    ctx->pc = 0x131a0cu;
    // NOP
    ctx->pc = 0x131a10u;
}

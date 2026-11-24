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

// Function: sub_00115100
// Address: 0x115100 - 0x115108
void sub_00115100_0x115100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115100_0x115100");
#endif

    ctx->pc = 0x115100u;

    // 0x115100: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x115100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x115104: 0x0  nop
    ctx->pc = 0x115104u;
    // NOP
    ctx->pc = 0x115108u;
}

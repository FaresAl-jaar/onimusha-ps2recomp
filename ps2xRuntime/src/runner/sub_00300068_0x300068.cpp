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

// Function: sub_00300068
// Address: 0x300068 - 0x300070
void sub_00300068_0x300068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300068_0x300068");
#endif

    ctx->pc = 0x300068u;

    // 0x300068: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x300068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30006c: 0x0  nop
    ctx->pc = 0x30006cu;
    // NOP
    ctx->pc = 0x300070u;
}

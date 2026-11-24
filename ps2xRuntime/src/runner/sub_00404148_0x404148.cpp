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

// Function: sub_00404148
// Address: 0x404148 - 0x404154
void sub_00404148_0x404148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00404148_0x404148");
#endif

    ctx->pc = 0x404148u;

    // 0x404148: 0x0  nop
    ctx->pc = 0x404148u;
    // NOP
    // 0x40414c: 0x0  nop
    ctx->pc = 0x40414cu;
    // NOP
    // 0x404150: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x404150u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    ctx->pc = 0x404154u;
}

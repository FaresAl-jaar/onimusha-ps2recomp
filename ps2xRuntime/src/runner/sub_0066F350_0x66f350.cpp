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

// Function: sub_0066F350
// Address: 0x66f350 - 0x66f358
void sub_0066F350_0x66f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066F350_0x66f350");
#endif

    ctx->pc = 0x66f350u;

    // 0x66f350: 0xc0a0806  jal         func_282018
    ctx->pc = 0x66F350u;
    SET_GPR_U32(ctx, 31, 0x66F358u);
    ctx->pc = 0x282018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282018u, 0x66F350u, 0x66F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x66F358u;
}

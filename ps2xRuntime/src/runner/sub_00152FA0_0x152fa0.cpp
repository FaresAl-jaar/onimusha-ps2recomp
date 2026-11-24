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

// Function: sub_00152FA0
// Address: 0x152fa0 - 0x152fbc
void sub_00152FA0_0x152fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152FA0_0x152fa0");
#endif

    ctx->pc = 0x152fa0u;

label_152fa0:
    // 0x152fa0: 0x0  nop
    ctx->pc = 0x152fa0u;
    // NOP
    // 0x152fa4: 0x0  nop
    ctx->pc = 0x152fa4u;
    // NOP
    // 0x152fa8: 0x0  nop
    ctx->pc = 0x152fa8u;
    // NOP
    // 0x152fac: 0x0  nop
    ctx->pc = 0x152facu;
    // NOP
    // 0x152fb0: 0x0  nop
    ctx->pc = 0x152fb0u;
    // NOP
    // 0x152fb4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x152FB4u;
    {
        const bool branch_taken_0x152fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152fb4) {
            ctx->pc = 0x152FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152fa0;
        }
    }
    ctx->pc = 0x152FBCu;
}

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

// Function: sub_006695C0
// Address: 0x6695c0 - 0x6695c8
void sub_006695C0_0x6695c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006695C0_0x6695c0");
#endif

    ctx->pc = 0x6695c0u;

    // 0x6695c0: 0x10000000  b           . + 4 + (0x0 << 2)
label_6695c4:
    if (ctx->pc == 0x6695C4u) {
        ctx->pc = 0x6695C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6695C0u;
        // 0x6695c4: 0x10000800  b           . + 4 + (0x800 << 2) (Delay Slot)
        // Likely branch instruction at 0x6695C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x6695C8u;
        goto label_fallthrough_0x6695c0;
    }
    ctx->pc = 0x6695C0u;
    {
        const bool branch_taken_0x6695c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x6695C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6695C0u;
        // 0x6695c4: 0x10000800  b           . + 4 + (0x800 << 2) (Delay Slot)
        // Likely branch instruction at 0x6695C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x6695c0) {
            ctx->pc = 0x6695C4u;
            goto label_6695c4;
        }
    }
label_fallthrough_0x6695c0:
    ctx->pc = 0x6695C8u;
}

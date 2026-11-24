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

// Function: sub_0066E970
// Address: 0x66e970 - 0x66e978
void sub_0066E970_0x66e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066E970_0x66e970");
#endif

    ctx->pc = 0x66e970u;

    // 0x66e970: 0x52325350  beql        $s1, $s2, . + 4 + (0x5350 << 2)
    ctx->pc = 0x66E970u;
    {
        const bool branch_taken_0x66e970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x66e970) {
            ctx->pc = 0x66E974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x66E970u;
            // 0x66e974: 0x535f414e  beql        $k0, $ra, . + 4 + (0x414E << 2) (Delay Slot)
            // Likely branch instruction at 0x66E974 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x6836B4u;
            return;
        }
    }
    ctx->pc = 0x66E978u;
}

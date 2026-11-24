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

// Function: sub_0033F380
// Address: 0x33f380 - 0x33f388
void sub_0033F380_0x33f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F380_0x33f380");
#endif

    ctx->pc = 0x33f380u;

    // 0x33f380: 0x80cfce4  j           func_33F390
    ctx->pc = 0x33F380u;
    ctx->pc = 0x33F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F380u;
    // 0x33f384: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F390u;
    sub_0033F390_0x33f390(rdram, ctx, runtime); return;
    ctx->pc = 0x33F388u;
}

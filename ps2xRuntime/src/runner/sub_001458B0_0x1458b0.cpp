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

// Function: sub_001458B0
// Address: 0x1458b0 - 0x1458c4
void sub_001458B0_0x1458b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001458B0_0x1458b0");
#endif

    ctx->pc = 0x1458b0u;

    // 0x1458b0: 0xac850330  sw          $a1, 0x330($a0)
    ctx->pc = 0x1458b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 816), GPR_U32(ctx, 5));
    // 0x1458b4: 0xac850334  sw          $a1, 0x334($a0)
    ctx->pc = 0x1458b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 820), GPR_U32(ctx, 5));
    // 0x1458b8: 0xac800338  sw          $zero, 0x338($a0)
    ctx->pc = 0x1458b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 824), GPR_U32(ctx, 0));
    // 0x1458bc: 0x8051868  j           func_1461A0
    ctx->pc = 0x1458BCu;
    ctx->pc = 0x1458C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1458BCu;
    // 0x1458c0: 0xa0800358  sb          $zero, 0x358($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 856), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1461A0u;
    sub_001461A0_0x1461a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1458C4u;
}

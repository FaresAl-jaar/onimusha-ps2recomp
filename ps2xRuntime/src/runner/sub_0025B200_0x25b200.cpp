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

// Function: sub_0025B200
// Address: 0x25b200 - 0x25b210
void sub_0025B200_0x25b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B200_0x25b200");
#endif

    ctx->pc = 0x25b200u;

    // 0x25b200: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25b200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b204: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x25b204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x25b208: 0x807cce0  j           func_1F3380
    ctx->pc = 0x25B208u;
    ctx->pc = 0x25B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B208u;
    // 0x25b20c: 0x2484c6e0  addiu       $a0, $a0, -0x3920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    sub_001F3380_0x1f3380(rdram, ctx, runtime); return;
    ctx->pc = 0x25B210u;
}

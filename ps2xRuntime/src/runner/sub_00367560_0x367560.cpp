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

// Function: sub_00367560
// Address: 0x367560 - 0x36756c
void sub_00367560_0x367560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367560_0x367560");
#endif

    ctx->pc = 0x367560u;

    // 0x367560: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x367560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x367564: 0x80d99c0  j           func_366700
    ctx->pc = 0x367564u;
    ctx->pc = 0x367568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367564u;
    // 0x367568: 0xa020e020  sb          $zero, -0x1FE0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959136), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366700u;
    sub_00366700_0x366700(rdram, ctx, runtime); return;
    ctx->pc = 0x36756Cu;
}

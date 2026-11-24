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

// Function: sub_0026F3E0
// Address: 0x26f3e0 - 0x26f400
void sub_0026F3E0_0x26f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F3E0_0x26f3e0");
#endif

    ctx->pc = 0x26f3e0u;

    // 0x26f3e0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x26f3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f3e4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x26f3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f3e8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x26f3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f3ec: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x26f3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f3f0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x26f3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f3f4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x26f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x26f3f8: 0x809bd20  j           func_26F480
    ctx->pc = 0x26F3F8u;
    ctx->pc = 0x26F3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F3F8u;
    // 0x26f3fc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F480u;
    sub_0026F480_0x26f480(rdram, ctx, runtime); return;
    ctx->pc = 0x26F400u;
}

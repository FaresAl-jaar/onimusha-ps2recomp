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

// Function: sub_003297C0
// Address: 0x3297c0 - 0x3297dc
void sub_003297C0_0x3297c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003297C0_0x3297c0");
#endif

    ctx->pc = 0x3297c0u;

    // 0x3297c0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3297c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3297c4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3297c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3297c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3297c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3297cc: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x3297ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x3297d0: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x3297d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x3297d4: 0x80ca6a4  j           func_329A90
    ctx->pc = 0x3297D4u;
    ctx->pc = 0x3297D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297D4u;
    // 0x3297d8: 0xa480000c  sh          $zero, 0xC($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329A90u;
    sub_00329A90_0x329a90(rdram, ctx, runtime); return;
    ctx->pc = 0x3297DCu;
}

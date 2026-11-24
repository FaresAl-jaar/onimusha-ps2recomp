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

// Function: sub_00145870
// Address: 0x145870 - 0x1458ac
void sub_00145870_0x145870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145870_0x145870");
#endif

    ctx->pc = 0x145870u;

    // 0x145870: 0xac800330  sw          $zero, 0x330($a0)
    ctx->pc = 0x145870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 816), GPR_U32(ctx, 0));
    // 0x145874: 0xac80033c  sw          $zero, 0x33C($a0)
    ctx->pc = 0x145874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 828), GPR_U32(ctx, 0));
    // 0x145878: 0xac800340  sw          $zero, 0x340($a0)
    ctx->pc = 0x145878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 0));
    // 0x14587c: 0xac800344  sw          $zero, 0x344($a0)
    ctx->pc = 0x14587cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 0));
    // 0x145880: 0xac80034c  sw          $zero, 0x34C($a0)
    ctx->pc = 0x145880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 844), GPR_U32(ctx, 0));
    // 0x145884: 0xac800348  sw          $zero, 0x348($a0)
    ctx->pc = 0x145884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 840), GPR_U32(ctx, 0));
    // 0x145888: 0xa0800350  sb          $zero, 0x350($a0)
    ctx->pc = 0x145888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 848), (uint8_t)GPR_U32(ctx, 0));
    // 0x14588c: 0xa0800351  sb          $zero, 0x351($a0)
    ctx->pc = 0x14588cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 849), (uint8_t)GPR_U32(ctx, 0));
    // 0x145890: 0xa0800352  sb          $zero, 0x352($a0)
    ctx->pc = 0x145890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 850), (uint8_t)GPR_U32(ctx, 0));
    // 0x145894: 0xa0800353  sb          $zero, 0x353($a0)
    ctx->pc = 0x145894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 851), (uint8_t)GPR_U32(ctx, 0));
    // 0x145898: 0xa0800354  sb          $zero, 0x354($a0)
    ctx->pc = 0x145898u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 852), (uint8_t)GPR_U32(ctx, 0));
    // 0x14589c: 0xa0800355  sb          $zero, 0x355($a0)
    ctx->pc = 0x14589cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 853), (uint8_t)GPR_U32(ctx, 0));
    // 0x1458a0: 0xa0800356  sb          $zero, 0x356($a0)
    ctx->pc = 0x1458a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 854), (uint8_t)GPR_U32(ctx, 0));
    // 0x1458a4: 0x80518a4  j           func_146290
    ctx->pc = 0x1458A4u;
    ctx->pc = 0x1458A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1458A4u;
    // 0x1458a8: 0xa0800357  sb          $zero, 0x357($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 855), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146290u;
    sub_00146290_0x146290(rdram, ctx, runtime); return;
    ctx->pc = 0x1458ACu;
}

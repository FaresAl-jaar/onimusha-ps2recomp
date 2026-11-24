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

// Function: sub_002F4D30
// Address: 0x2f4d30 - 0x2f4d6c
void sub_002F4D30_0x2f4d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4D30_0x2f4d30");
#endif

    ctx->pc = 0x2f4d30u;

    // 0x2f4d30: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2f4d30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d38: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2f4d38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4d3c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f4d40: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2f4d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2f4d44: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x2f4d44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4d48: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x2f4d48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4d4c: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x2f4d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4d50: 0xa080000f  sb          $zero, 0xF($a0)
    ctx->pc = 0x2f4d50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4d54: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x2f4d54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f4d58: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x2f4d58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f4d5c: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x2f4d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4d60: 0xa0800015  sb          $zero, 0x15($a0)
    ctx->pc = 0x2f4d60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4d64: 0x80dc8f0  j           func_3723C0
    ctx->pc = 0x2F4D64u;
    ctx->pc = 0x2F4D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D64u;
    // 0x2f4d68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3723C0u;
    sub_003723C0_0x3723c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F4D6Cu;
}

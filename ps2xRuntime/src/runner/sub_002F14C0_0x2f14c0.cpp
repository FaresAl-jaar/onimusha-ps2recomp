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

// Function: sub_002F14C0
// Address: 0x2f14c0 - 0x2f14d8
void sub_002F14C0_0x2f14c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F14C0_0x2f14c0");
#endif

    ctx->pc = 0x2f14c0u;

    // 0x2f14c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f14c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14c4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f14c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f14c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f14ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14d0: 0x80cd52c  j           func_3354B0
    ctx->pc = 0x2F14D0u;
    ctx->pc = 0x2F14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F14D0u;
    // 0x2f14d4: 0x24080024  addiu       $t0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354B0u;
    sub_003354B0_0x3354b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F14D8u;
}

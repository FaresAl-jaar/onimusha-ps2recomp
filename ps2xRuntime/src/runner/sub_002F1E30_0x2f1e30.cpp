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

// Function: sub_002F1E30
// Address: 0x2f1e30 - 0x2f1e48
void sub_002F1E30_0x2f1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1E30_0x2f1e30");
#endif

    ctx->pc = 0x2f1e30u;

    // 0x2f1e30: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e34: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e40: 0x80e7d98  j           func_39F660
    ctx->pc = 0x2F1E40u;
    ctx->pc = 0x2F1E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E40u;
    // 0x2f1e44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F660u;
    sub_0039F660_0x39f660(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1E48u;
}

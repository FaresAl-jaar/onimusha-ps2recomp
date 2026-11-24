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

// Function: sub_002F1440
// Address: 0x2f1440 - 0x2f1458
void sub_002F1440_0x2f1440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1440_0x2f1440");
#endif

    ctx->pc = 0x2f1440u;

    // 0x2f1440: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1444: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f144c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f144cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1450: 0x80c04d4  j           func_301350
    ctx->pc = 0x2F1450u;
    ctx->pc = 0x2F1454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1450u;
    // 0x2f1454: 0x24080017  addiu       $t0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301350u;
    sub_00301350_0x301350(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1458u;
}

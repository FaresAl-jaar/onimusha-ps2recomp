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

// Function: sub_002F18A0
// Address: 0x2f18a0 - 0x2f18b8
void sub_002F18A0_0x2f18a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F18A0_0x2f18a0");
#endif

    ctx->pc = 0x2f18a0u;

    // 0x2f18a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f18a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f18a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f18a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f18acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18b0: 0x80d8858  j           func_362160
    ctx->pc = 0x2F18B0u;
    ctx->pc = 0x2F18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F18B0u;
    // 0x2f18b4: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362160u;
    sub_00362160_0x362160(rdram, ctx, runtime); return;
    ctx->pc = 0x2F18B8u;
}

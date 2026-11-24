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

// Function: sub_0010D360
// Address: 0x10d360 - 0x10d370
void sub_0010D360_0x10d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D360_0x10d360");
#endif

    ctx->pc = 0x10d360u;

    // 0x10d360: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10d360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d364: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x10d364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x10d368: 0x8044332  j           func_110CC8
    ctx->pc = 0x10D368u;
    ctx->pc = 0x10D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D368u;
    // 0x10d36c: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    sub_00110CC8_0x110cc8(rdram, ctx, runtime); return;
    ctx->pc = 0x10D370u;
}

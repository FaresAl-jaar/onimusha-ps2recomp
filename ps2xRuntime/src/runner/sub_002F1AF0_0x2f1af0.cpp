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

// Function: sub_002F1AF0
// Address: 0x2f1af0 - 0x2f1b0c
void sub_002F1AF0_0x2f1af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1AF0_0x2f1af0");
#endif

    ctx->pc = 0x2f1af0u;

    // 0x2f1af0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1af4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1af8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1afc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b04: 0x80d7474  j           func_35D1D0
    ctx->pc = 0x2F1B04u;
    ctx->pc = 0x2F1B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B04u;
    // 0x2f1b08: 0x24090009  addiu       $t1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1D0u;
    sub_0035D1D0_0x35d1d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1B0Cu;
}

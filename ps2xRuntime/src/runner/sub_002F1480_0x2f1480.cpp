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

// Function: sub_002F1480
// Address: 0x2f1480 - 0x2f149c
void sub_002F1480_0x2f1480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1480_0x2f1480");
#endif

    ctx->pc = 0x2f1480u;

    // 0x2f1480: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1484: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1488: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f148c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f148cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1494: 0x80cd160  j           func_334580
    ctx->pc = 0x2F1494u;
    ctx->pc = 0x2F1498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1494u;
    // 0x2f1498: 0x2409001d  addiu       $t1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334580u;
    sub_00334580_0x334580(rdram, ctx, runtime); return;
    ctx->pc = 0x2F149Cu;
}

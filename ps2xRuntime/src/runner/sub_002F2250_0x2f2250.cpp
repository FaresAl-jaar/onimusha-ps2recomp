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

// Function: sub_002F2250
// Address: 0x2f2250 - 0x2f2270
void sub_002F2250_0x2f2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2250_0x2f2250");
#endif

    ctx->pc = 0x2f2250u;

    // 0x2f2250: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f2250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2254: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f2254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2258: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f2258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f225c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f225cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2264: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2f2264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f2268: 0x80f4be0  j           func_3D2F80
    ctx->pc = 0x2F2268u;
    ctx->pc = 0x2F226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2268u;
    // 0x2f226c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2F80u;
    sub_003D2F80_0x3d2f80(rdram, ctx, runtime); return;
    ctx->pc = 0x2F2270u;
}

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

// Function: sub_002F2300
// Address: 0x2f2300 - 0x2f2318
void sub_002F2300_0x2f2300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2300_0x2f2300");
#endif

    ctx->pc = 0x2f2300u;

    // 0x2f2300: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f2300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2304: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f2304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f230c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f230cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2310: 0x80f77b4  j           func_3DDED0
    ctx->pc = 0x2F2310u;
    ctx->pc = 0x2F2314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2310u;
    // 0x2f2314: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDED0u;
    sub_003DDED0_0x3dded0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F2318u;
}

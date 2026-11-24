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

// Function: sub_002A7180
// Address: 0x2a7180 - 0x2a7198
void sub_002A7180_0x2a7180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7180_0x2a7180");
#endif

    ctx->pc = 0x2a7180u;

    // 0x2a7180: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2a7180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7184: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2a7184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7188: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a7188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a718c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a718cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7190: 0x80c1e6c  j           func_3079B0
    ctx->pc = 0x2A7190u;
    ctx->pc = 0x2A7194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7190u;
    // 0x2a7194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3079B0u;
    sub_003079B0_0x3079b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2A7198u;
}

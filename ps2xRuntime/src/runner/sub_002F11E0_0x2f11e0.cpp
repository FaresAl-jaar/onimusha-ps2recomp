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

// Function: sub_002F11E0
// Address: 0x2f11e0 - 0x2f1200
void sub_002F11E0_0x2f11e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F11E0_0x2f11e0");
#endif

    ctx->pc = 0x2f11e0u;

    // 0x2f11e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f11e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f11e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f11e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f11ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f11f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f11f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f11f4: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x2f11f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f11f8: 0x80d5278  j           func_3549E0
    ctx->pc = 0x2F11F8u;
    ctx->pc = 0x2F11FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11F8u;
    // 0x2f11fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3549E0u;
    sub_003549E0_0x3549e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1200u;
}

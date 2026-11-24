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

// Function: sub_002F1360
// Address: 0x2f1360 - 0x2f1378
void sub_002F1360_0x2f1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1360_0x2f1360");
#endif

    ctx->pc = 0x2f1360u;

    // 0x2f1360: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1364: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1368: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f136c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f136cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1370: 0x80fa138  j           func_3E84E0
    ctx->pc = 0x2F1370u;
    ctx->pc = 0x2F1374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1370u;
    // 0x2f1374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E84E0u;
    sub_003E84E0_0x3e84e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1378u;
}

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

// Function: sub_002F1E80
// Address: 0x2f1e80 - 0x2f1e9c
void sub_002F1E80_0x2f1e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1E80_0x2f1e80");
#endif

    ctx->pc = 0x2f1e80u;

    // 0x2f1e80: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f1e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e94: 0x80ebca0  j           func_3AF280
    ctx->pc = 0x2F1E94u;
    ctx->pc = 0x2F1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E94u;
    // 0x2f1e98: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF280u;
    sub_003AF280_0x3af280(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1E9Cu;
}

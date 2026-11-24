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

// Function: sub_0039FE80
// Address: 0x39fe80 - 0x39fe9c
void sub_0039FE80_0x39fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FE80_0x39fe80");
#endif

    ctx->pc = 0x39fe80u;

    // 0x39fe80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39fe80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fe84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39fe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fe88: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x39fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x39fe8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39fe8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fe90: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x39fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x39fe94: 0x80535dc  j           func_14D770
    ctx->pc = 0x39FE94u;
    ctx->pc = 0x39FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE94u;
    // 0x39fe98: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D770u;
    sub_0014D770_0x14d770(rdram, ctx, runtime); return;
    ctx->pc = 0x39FE9Cu;
}

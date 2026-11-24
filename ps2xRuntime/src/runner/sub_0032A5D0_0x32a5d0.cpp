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

// Function: sub_0032A5D0
// Address: 0x32a5d0 - 0x32a5ec
void sub_0032A5D0_0x32a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A5D0_0x32a5d0");
#endif

    ctx->pc = 0x32a5d0u;

    // 0x32a5d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32a5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a5d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32a5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a5d8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x32a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x32a5dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a5e0: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x32a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x32a5e4: 0x80535dc  j           func_14D770
    ctx->pc = 0x32A5E4u;
    ctx->pc = 0x32A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5E4u;
    // 0x32a5e8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D770u;
    sub_0014D770_0x14d770(rdram, ctx, runtime); return;
    ctx->pc = 0x32A5ECu;
}

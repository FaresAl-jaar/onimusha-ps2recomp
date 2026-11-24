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

// Function: sub_002728D0
// Address: 0x2728d0 - 0x2728e8
void sub_002728D0_0x2728d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002728D0_0x2728d0");
#endif

    ctx->pc = 0x2728d0u;

    // 0x2728d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2728d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2728d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728d8: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2728d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2728dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2728dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728e0: 0x809ca40  j           func_272900
    ctx->pc = 0x2728E0u;
    ctx->pc = 0x2728E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728E0u;
    // 0x2728e4: 0x24840810  addiu       $a0, $a0, 0x810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272900u;
    sub_00272900_0x272900(rdram, ctx, runtime); return;
    ctx->pc = 0x2728E8u;
}

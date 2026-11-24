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

// Function: sub_00329A90
// Address: 0x329a90 - 0x329aac
void sub_00329A90_0x329a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329A90_0x329a90");
#endif

    ctx->pc = 0x329a90u;

    // 0x329a90: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x329a90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x329a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a98: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x329a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x329a9c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x329a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x329aa0: 0xa080000f  sb          $zero, 0xF($a0)
    ctx->pc = 0x329aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x329aa4: 0x8049590  j           func_125640
    ctx->pc = 0x329AA4u;
    ctx->pc = 0x329AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329AA4u;
    // 0x329aa8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x329AACu;
}

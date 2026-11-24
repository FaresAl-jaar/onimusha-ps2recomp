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

// Function: sub_002CA050
// Address: 0x2ca050 - 0x2ca064
void sub_002CA050_0x2ca050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA050_0x2ca050");
#endif

    ctx->pc = 0x2ca050u;

    // 0x2ca050: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2ca050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2ca054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca058: 0x24845ef0  addiu       $a0, $a0, 0x5EF0
    ctx->pc = 0x2ca058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24304));
    // 0x2ca05c: 0x8049590  j           func_125640
    ctx->pc = 0x2CA05Cu;
    ctx->pc = 0x2CA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA05Cu;
    // 0x2ca060: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x2CA064u;
}

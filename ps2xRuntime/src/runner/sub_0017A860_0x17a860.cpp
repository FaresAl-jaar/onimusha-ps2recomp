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

// Function: sub_0017A860
// Address: 0x17a860 - 0x17a874
void sub_0017A860_0x17a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A860_0x17a860");
#endif

    ctx->pc = 0x17a860u;

    // 0x17a860: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x17a860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x17a864: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17a864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a868: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x17a868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x17a86c: 0x80c9a00  j           func_326800
    ctx->pc = 0x17A86Cu;
    ctx->pc = 0x17A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A86Cu;
    // 0x17a870: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326800u;
    sub_00326800_0x326800(rdram, ctx, runtime); return;
    ctx->pc = 0x17A874u;
}

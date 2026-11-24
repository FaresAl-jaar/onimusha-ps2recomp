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

// Function: sub_0020C9C0
// Address: 0x20c9c0 - 0x20c9d8
void sub_0020C9C0_0x20c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C9C0_0x20c9c0");
#endif

    ctx->pc = 0x20c9c0u;

    // 0x20c9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c9d0: 0x808dc9c  j           func_237270
    ctx->pc = 0x20C9D0u;
    ctx->pc = 0x20C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9D0u;
    // 0x20c9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237270u;
    sub_00237270_0x237270(rdram, ctx, runtime); return;
    ctx->pc = 0x20C9D8u;
}

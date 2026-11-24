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

// Function: sub_00206540
// Address: 0x206540 - 0x206554
void sub_00206540_0x206540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206540_0x206540");
#endif

    ctx->pc = 0x206540u;

    // 0x206540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20654c: 0x8081956  j           func_206558
    ctx->pc = 0x20654Cu;
    ctx->pc = 0x206550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20654Cu;
    // 0x206550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206558u;
    sub_00206558_0x206558(rdram, ctx, runtime); return;
    ctx->pc = 0x206554u;
}

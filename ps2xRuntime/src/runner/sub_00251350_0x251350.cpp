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

// Function: sub_00251350
// Address: 0x251350 - 0x25136c
void sub_00251350_0x251350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251350_0x251350");
#endif

    ctx->pc = 0x251350u;

    // 0x251350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x251354: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x251358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25135c: 0x2484ec60  addiu       $a0, $a0, -0x13A0
    ctx->pc = 0x25135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962272));
    // 0x251360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251364: 0x8093f46  j           func_24FD18
    ctx->pc = 0x251364u;
    ctx->pc = 0x251368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251364u;
    // 0x251368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD18u;
    sub_0024FD18_0x24fd18(rdram, ctx, runtime); return;
    ctx->pc = 0x25136Cu;
}

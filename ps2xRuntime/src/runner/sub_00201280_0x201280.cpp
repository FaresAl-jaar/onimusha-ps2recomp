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

// Function: sub_00201280
// Address: 0x201280 - 0x201294
void sub_00201280_0x201280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201280_0x201280");
#endif

    ctx->pc = 0x201280u;

    // 0x201280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20128c: 0x807d380  j           func_1F4E00
    ctx->pc = 0x20128Cu;
    ctx->pc = 0x201290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20128Cu;
    // 0x201290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E00u;
    sub_001F4E00_0x1f4e00(rdram, ctx, runtime); return;
    ctx->pc = 0x201294u;
}

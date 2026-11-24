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

// Function: sub_00238B08
// Address: 0x238b08 - 0x238b1c
void sub_00238B08_0x238b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238B08_0x238b08");
#endif

    ctx->pc = 0x238b08u;

    // 0x238b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238b14: 0x808b536  j           func_22D4D8
    ctx->pc = 0x238B14u;
    ctx->pc = 0x238B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B14u;
    // 0x238b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x238B1Cu;
}

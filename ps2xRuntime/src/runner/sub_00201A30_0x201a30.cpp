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

// Function: sub_00201A30
// Address: 0x201a30 - 0x201a44
void sub_00201A30_0x201a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201A30_0x201a30");
#endif

    ctx->pc = 0x201a30u;

    // 0x201a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201a3c: 0x808efaa  j           func_23BEA8
    ctx->pc = 0x201A3Cu;
    ctx->pc = 0x201A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A3Cu;
    // 0x201a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEA8u;
    sub_0023BEA8_0x23bea8(rdram, ctx, runtime); return;
    ctx->pc = 0x201A44u;
}

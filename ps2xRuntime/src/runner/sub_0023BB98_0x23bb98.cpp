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

// Function: sub_0023BB98
// Address: 0x23bb98 - 0x23bbac
void sub_0023BB98_0x23bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BB98_0x23bb98");
#endif

    ctx->pc = 0x23bb98u;

    // 0x23bb98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bb9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bba4: 0x808d5dc  j           func_235770
    ctx->pc = 0x23BBA4u;
    ctx->pc = 0x23BBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BBA4u;
    // 0x23bba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235770u;
    sub_00235770_0x235770(rdram, ctx, runtime); return;
    ctx->pc = 0x23BBACu;
}

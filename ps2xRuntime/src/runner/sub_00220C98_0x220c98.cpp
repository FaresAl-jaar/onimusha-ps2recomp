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

// Function: sub_00220C98
// Address: 0x220c98 - 0x220cac
void sub_00220C98_0x220c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220C98_0x220c98");
#endif

    ctx->pc = 0x220c98u;

    // 0x220c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220ca4: 0x807d36e  j           func_1F4DB8
    ctx->pc = 0x220CA4u;
    ctx->pc = 0x220CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220CA4u;
    // 0x220ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DB8u;
    sub_001F4DB8_0x1f4db8(rdram, ctx, runtime); return;
    ctx->pc = 0x220CACu;
}

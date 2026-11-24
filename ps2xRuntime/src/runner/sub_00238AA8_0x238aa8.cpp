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

// Function: sub_00238AA8
// Address: 0x238aa8 - 0x238abc
void sub_00238AA8_0x238aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238AA8_0x238aa8");
#endif

    ctx->pc = 0x238aa8u;

    // 0x238aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ab4: 0x808b528  j           func_22D4A0
    ctx->pc = 0x238AB4u;
    ctx->pc = 0x238AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AB4u;
    // 0x238ab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    sub_0022D4A0_0x22d4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x238ABCu;
}

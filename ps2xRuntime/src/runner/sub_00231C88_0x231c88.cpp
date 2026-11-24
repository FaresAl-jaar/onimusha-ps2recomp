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

// Function: sub_00231C88
// Address: 0x231c88 - 0x231c9c
void sub_00231C88_0x231c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231C88_0x231c88");
#endif

    ctx->pc = 0x231c88u;

    // 0x231c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231c8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231c94: 0x808e150  j           func_238540
    ctx->pc = 0x231C94u;
    ctx->pc = 0x231C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C94u;
    // 0x231c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    sub_00238540_0x238540(rdram, ctx, runtime); return;
    ctx->pc = 0x231C9Cu;
}

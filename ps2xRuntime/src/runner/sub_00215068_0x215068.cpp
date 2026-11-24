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

// Function: sub_00215068
// Address: 0x215068 - 0x21507c
void sub_00215068_0x215068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215068_0x215068");
#endif

    ctx->pc = 0x215068u;

    // 0x215068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21506c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21506cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215074: 0x8085420  j           func_215080
    ctx->pc = 0x215074u;
    ctx->pc = 0x215078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215074u;
    // 0x215078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215080u;
    sub_00215080_0x215080(rdram, ctx, runtime); return;
    ctx->pc = 0x21507Cu;
}

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

// Function: sub_00215228
// Address: 0x215228 - 0x215240
void sub_00215228_0x215228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215228_0x215228");
#endif

    ctx->pc = 0x215228u;

    // 0x215228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21522c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215230: 0x8c851fcc  lw          $a1, 0x1FCC($a0)
    ctx->pc = 0x215230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8140)));
    // 0x215234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215238: 0x808408e  j           func_210238
    ctx->pc = 0x215238u;
    ctx->pc = 0x21523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215238u;
    // 0x21523c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    sub_00210238_0x210238(rdram, ctx, runtime); return;
    ctx->pc = 0x215240u;
}

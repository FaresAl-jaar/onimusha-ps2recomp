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

// Function: sub_00127238
// Address: 0x127238 - 0x127258
void sub_00127238_0x127238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127238_0x127238");
#endif

    ctx->pc = 0x127238u;

    // 0x127238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12723c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12723cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127244: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x127244u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x127248: 0x8de46048  lw          $a0, 0x6048($t7)
    ctx->pc = 0x127248u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x406048u));
    // 0x12724c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12724cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127250: 0x8049c36  j           func_1270D8
    ctx->pc = 0x127250u;
    ctx->pc = 0x127254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127250u;
    // 0x127254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1270D8u;
    sub_001270D8_0x1270d8(rdram, ctx, runtime); return;
    ctx->pc = 0x127258u;
}

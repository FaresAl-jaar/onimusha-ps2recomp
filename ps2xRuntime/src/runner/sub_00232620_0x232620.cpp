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

// Function: sub_00232620
// Address: 0x232620 - 0x232638
void sub_00232620_0x232620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232620_0x232620");
#endif

    ctx->pc = 0x232620u;

    // 0x232620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232624: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x232624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23262c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232630: 0x808baa4  j           func_22EA90
    ctx->pc = 0x232630u;
    ctx->pc = 0x232634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232630u;
    // 0x232634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x232638u;
}

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

// Function: sub_00235718
// Address: 0x235718 - 0x23572c
void sub_00235718_0x235718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235718_0x235718");
#endif

    ctx->pc = 0x235718u;

    // 0x235718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23571c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235724: 0x8093e86  j           func_24FA18
    ctx->pc = 0x235724u;
    ctx->pc = 0x235728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235724u;
    // 0x235728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FA18u;
    sub_0024FA18_0x24fa18(rdram, ctx, runtime); return;
    ctx->pc = 0x23572Cu;
}

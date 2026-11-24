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

// Function: sub_0022FBE0
// Address: 0x22fbe0 - 0x22fbf4
void sub_0022FBE0_0x22fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FBE0_0x22fbe0");
#endif

    ctx->pc = 0x22fbe0u;

    // 0x22fbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22fbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22fbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fbe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fbec: 0x808bf0c  j           func_22FC30
    ctx->pc = 0x22FBECu;
    ctx->pc = 0x22FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FBECu;
    // 0x22fbf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FC30u;
    sub_0022FC30_0x22fc30(rdram, ctx, runtime); return;
    ctx->pc = 0x22FBF4u;
}

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

// Function: sub_00206F68
// Address: 0x206f68 - 0x206f7c
void sub_00206F68_0x206f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206F68_0x206f68");
#endif

    ctx->pc = 0x206f68u;

    // 0x206f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206f74: 0x808d2a8  j           func_234AA0
    ctx->pc = 0x206F74u;
    ctx->pc = 0x206F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F74u;
    // 0x206f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234AA0u;
    sub_00234AA0_0x234aa0(rdram, ctx, runtime); return;
    ctx->pc = 0x206F7Cu;
}

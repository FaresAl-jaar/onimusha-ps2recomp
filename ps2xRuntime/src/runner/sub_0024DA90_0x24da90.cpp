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

// Function: sub_0024DA90
// Address: 0x24da90 - 0x24daa8
void sub_0024DA90_0x24da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DA90_0x24da90");
#endif

    ctx->pc = 0x24da90u;

    // 0x24da90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24da90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24da94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24da98: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x24da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x24da9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24da9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24daa0: 0x8093484  j           func_24D210
    ctx->pc = 0x24DAA0u;
    ctx->pc = 0x24DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DAA0u;
    // 0x24daa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D210u;
    sub_0024D210_0x24d210(rdram, ctx, runtime); return;
    ctx->pc = 0x24DAA8u;
}

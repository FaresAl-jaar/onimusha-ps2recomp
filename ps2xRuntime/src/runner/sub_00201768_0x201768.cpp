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

// Function: sub_00201768
// Address: 0x201768 - 0x201780
void sub_00201768_0x201768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201768_0x201768");
#endif

    ctx->pc = 0x201768u;

    // 0x201768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20176c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20176cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201778: 0x80805e6  j           func_201798
    ctx->pc = 0x201778u;
    ctx->pc = 0x20177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201778u;
    // 0x20177c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    sub_00201798_0x201798(rdram, ctx, runtime); return;
    ctx->pc = 0x201780u;
}

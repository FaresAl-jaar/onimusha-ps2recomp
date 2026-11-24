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

// Function: sub_001FAE00
// Address: 0x1fae00 - 0x1fae14
void sub_001FAE00_0x1fae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAE00_0x1fae00");
#endif

    ctx->pc = 0x1fae00u;

    // 0x1fae00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fae04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fae08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fae08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fae0c: 0x807eb68  j           func_1FADA0
    ctx->pc = 0x1FAE0Cu;
    ctx->pc = 0x1FAE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE0Cu;
    // 0x1fae10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    sub_001FADA0_0x1fada0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FAE14u;
}

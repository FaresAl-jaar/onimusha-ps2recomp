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

// Function: sub_00201588
// Address: 0x201588 - 0x20159c
void sub_00201588_0x201588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201588_0x201588");
#endif

    ctx->pc = 0x201588u;

    // 0x201588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20158c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201594: 0x8080568  j           func_2015A0
    ctx->pc = 0x201594u;
    ctx->pc = 0x201598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201594u;
    // 0x201598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    sub_002015A0_0x2015a0(rdram, ctx, runtime); return;
    ctx->pc = 0x20159Cu;
}

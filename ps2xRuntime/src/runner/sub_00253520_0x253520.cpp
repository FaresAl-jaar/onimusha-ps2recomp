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

// Function: sub_00253520
// Address: 0x253520 - 0x253538
void sub_00253520_0x253520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253520_0x253520");
#endif

    ctx->pc = 0x253520u;

    // 0x253520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253524: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x253524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25352c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25352cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253530: 0x8094d4e  j           func_253538
    ctx->pc = 0x253530u;
    ctx->pc = 0x253534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253530u;
    // 0x253534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253538u;
    sub_00253538_0x253538(rdram, ctx, runtime); return;
    ctx->pc = 0x253538u;
}

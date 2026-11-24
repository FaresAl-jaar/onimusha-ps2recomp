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

// Function: sub_00233288
// Address: 0x233288 - 0x23329c
void sub_00233288_0x233288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233288_0x233288");
#endif

    ctx->pc = 0x233288u;

    // 0x233288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23328c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233294: 0x8094e50  j           func_253940
    ctx->pc = 0x233294u;
    ctx->pc = 0x233298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233294u;
    // 0x233298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253940u;
    sub_00253940_0x253940(rdram, ctx, runtime); return;
    ctx->pc = 0x23329Cu;
}

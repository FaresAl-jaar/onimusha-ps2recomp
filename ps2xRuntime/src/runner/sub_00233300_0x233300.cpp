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

// Function: sub_00233300
// Address: 0x233300 - 0x233314
void sub_00233300_0x233300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233300_0x233300");
#endif

    ctx->pc = 0x233300u;

    // 0x233300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23330c: 0x8094e6e  j           func_2539B8
    ctx->pc = 0x23330Cu;
    ctx->pc = 0x233310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23330Cu;
    // 0x233310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539B8u;
    sub_002539B8_0x2539b8(rdram, ctx, runtime); return;
    ctx->pc = 0x233314u;
}

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

// Function: sub_00253940
// Address: 0x253940 - 0x253958
void sub_00253940_0x253940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253940_0x253940");
#endif

    ctx->pc = 0x253940u;

    // 0x253940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253944: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x253944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25394c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25394cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253950: 0x8094dec  j           func_2537B0
    ctx->pc = 0x253950u;
    ctx->pc = 0x253954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253950u;
    // 0x253954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2537B0u;
    sub_002537B0_0x2537b0(rdram, ctx, runtime); return;
    ctx->pc = 0x253958u;
}

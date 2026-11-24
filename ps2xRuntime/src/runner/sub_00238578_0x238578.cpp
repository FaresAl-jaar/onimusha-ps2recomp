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

// Function: sub_00238578
// Address: 0x238578 - 0x23858c
void sub_00238578_0x238578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238578_0x238578");
#endif

    ctx->pc = 0x238578u;

    // 0x238578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23857c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238584: 0x809159a  j           func_245668
    ctx->pc = 0x238584u;
    ctx->pc = 0x238588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238584u;
    // 0x238588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245668u;
    sub_00245668_0x245668(rdram, ctx, runtime); return;
    ctx->pc = 0x23858Cu;
}

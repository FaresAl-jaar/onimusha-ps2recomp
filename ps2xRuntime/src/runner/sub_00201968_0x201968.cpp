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

// Function: sub_00201968
// Address: 0x201968 - 0x20197c
void sub_00201968_0x201968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201968_0x201968");
#endif

    ctx->pc = 0x201968u;

    // 0x201968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20196c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20196cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201974: 0x808e6f4  j           func_239BD0
    ctx->pc = 0x201974u;
    ctx->pc = 0x201978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201974u;
    // 0x201978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239BD0u;
    sub_00239BD0_0x239bd0(rdram, ctx, runtime); return;
    ctx->pc = 0x20197Cu;
}

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

// Function: sub_00235278
// Address: 0x235278 - 0x23528c
void sub_00235278_0x235278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235278_0x235278");
#endif

    ctx->pc = 0x235278u;

    // 0x235278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23527c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235284: 0x80936c4  j           func_24DB10
    ctx->pc = 0x235284u;
    ctx->pc = 0x235288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235284u;
    // 0x235288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB10u;
    sub_0024DB10_0x24db10(rdram, ctx, runtime); return;
    ctx->pc = 0x23528Cu;
}

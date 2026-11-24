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

// Function: sub_0020BF80
// Address: 0x20bf80 - 0x20bf94
void sub_0020BF80_0x20bf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BF80_0x20bf80");
#endif

    ctx->pc = 0x20bf80u;

    // 0x20bf80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bf84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20bf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20bf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bf8c: 0x8083014  j           func_20C050
    ctx->pc = 0x20BF8Cu;
    ctx->pc = 0x20BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF8Cu;
    // 0x20bf90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C050u;
    sub_0020C050_0x20c050(rdram, ctx, runtime); return;
    ctx->pc = 0x20BF94u;
}

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

// Function: sub_001FD548
// Address: 0x1fd548 - 0x1fd55c
void sub_001FD548_0x1fd548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD548_0x1fd548");
#endif

    ctx->pc = 0x1fd548u;

    // 0x1fd548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd554: 0x807f558  j           func_1FD560
    ctx->pc = 0x1FD554u;
    ctx->pc = 0x1FD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD554u;
    // 0x1fd558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD560u;
    sub_001FD560_0x1fd560(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD55Cu;
}

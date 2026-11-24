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

// Function: sub_0012D640
// Address: 0x12d640 - 0x12d658
void sub_0012D640_0x12d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D640_0x12d640");
#endif

    ctx->pc = 0x12d640u;

    // 0x12d640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12d644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d650: 0x804b596  j           func_12D658
    ctx->pc = 0x12D650u;
    ctx->pc = 0x12D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D650u;
    // 0x12d654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D658u;
    sub_0012D658_0x12d658(rdram, ctx, runtime); return;
    ctx->pc = 0x12D658u;
}

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

// Function: sub_0022F388
// Address: 0x22f388 - 0x22f3b0
void sub_0022F388_0x22f388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F388_0x22f388");
#endif

    ctx->pc = 0x22f388u;

    // 0x22f388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f38c: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x22f38cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x22f390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f394: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x22f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x22f398: 0x2508ce8f  addiu       $t0, $t0, -0x3171
    ctx->pc = 0x22f398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954639));
    // 0x22f39c: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x22f39cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x22f3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f3a4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x22f3a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x22f3a8: 0x808bd8c  j           func_22F630
    ctx->pc = 0x22F3A8u;
    ctx->pc = 0x22F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3A8u;
    // 0x22f3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F630u;
    sub_0022F630_0x22f630(rdram, ctx, runtime); return;
    ctx->pc = 0x22F3B0u;
}

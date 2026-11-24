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

// Function: sub_002221E8
// Address: 0x2221e8 - 0x222204
void sub_002221E8_0x2221e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002221E8_0x2221e8");
#endif

    ctx->pc = 0x2221e8u;

    // 0x2221e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2221e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2221ec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2221ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2221f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2221f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2221f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2221f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2221fc: 0x8088892  j           func_222248
    ctx->pc = 0x2221FCu;
    ctx->pc = 0x222200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221FCu;
    // 0x222200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222248u;
    sub_00222248_0x222248(rdram, ctx, runtime); return;
    ctx->pc = 0x222204u;
}

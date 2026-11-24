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

// Function: sub_00238FF0
// Address: 0x238ff0 - 0x239004
void sub_00238FF0_0x238ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238FF0_0x238ff0");
#endif

    ctx->pc = 0x238ff0u;

    // 0x238ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ffc: 0x808d600  j           func_235800
    ctx->pc = 0x238FFCu;
    ctx->pc = 0x239000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FFCu;
    // 0x239000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235800u;
    sub_00235800_0x235800(rdram, ctx, runtime); return;
    ctx->pc = 0x239004u;
}

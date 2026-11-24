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

// Function: sub_00238AC0
// Address: 0x238ac0 - 0x238ad4
void sub_00238AC0_0x238ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238AC0_0x238ac0");
#endif

    ctx->pc = 0x238ac0u;

    // 0x238ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238acc: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x238ACCu;
    ctx->pc = 0x238AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238ACCu;
    // 0x238ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x238AD4u;
}

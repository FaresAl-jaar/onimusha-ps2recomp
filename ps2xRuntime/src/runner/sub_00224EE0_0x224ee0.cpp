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

// Function: sub_00224EE0
// Address: 0x224ee0 - 0x224ef4
void sub_00224EE0_0x224ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224EE0_0x224ee0");
#endif

    ctx->pc = 0x224ee0u;

    // 0x224ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224eec: 0x80893be  j           func_224EF8
    ctx->pc = 0x224EECu;
    ctx->pc = 0x224EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224EECu;
    // 0x224ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF8u;
    sub_00224EF8_0x224ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x224EF4u;
}

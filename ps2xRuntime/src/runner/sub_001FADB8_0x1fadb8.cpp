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

// Function: sub_001FADB8
// Address: 0x1fadb8 - 0x1fadcc
void sub_001FADB8_0x1fadb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FADB8_0x1fadb8");
#endif

    ctx->pc = 0x1fadb8u;

    // 0x1fadb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fadb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fadbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fadbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fadc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fadc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fadc4: 0x8049522  j           func_125488
    ctx->pc = 0x1FADC4u;
    ctx->pc = 0x1FADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADC4u;
    // 0x1fadc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    sub_00125488_0x125488(rdram, ctx, runtime); return;
    ctx->pc = 0x1FADCCu;
}

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

// Function: sub_0023ABE8
// Address: 0x23abe8 - 0x23ac00
void sub_0023ABE8_0x23abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ABE8_0x23abe8");
#endif

    ctx->pc = 0x23abe8u;

    // 0x23abe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23abe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23abec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23abecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23abf0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23abf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23abf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23abf8: 0x808db8c  j           func_236E30
    ctx->pc = 0x23ABF8u;
    ctx->pc = 0x23ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ABF8u;
    // 0x23abfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E30u;
    sub_00236E30_0x236e30(rdram, ctx, runtime); return;
    ctx->pc = 0x23AC00u;
}

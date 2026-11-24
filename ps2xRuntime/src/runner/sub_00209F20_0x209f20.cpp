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

// Function: sub_00209F20
// Address: 0x209f20 - 0x209f38
void sub_00209F20_0x209f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F20_0x209f20");
#endif

    ctx->pc = 0x209f20u;

    // 0x209f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209f28: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x209f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x209f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209f30: 0x80895f0  j           func_2257C0
    ctx->pc = 0x209F30u;
    ctx->pc = 0x209F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F30u;
    // 0x209f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257C0u;
    sub_002257C0_0x2257c0(rdram, ctx, runtime); return;
    ctx->pc = 0x209F38u;
}

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

// Function: sub_00209F50
// Address: 0x209f50 - 0x209f68
void sub_00209F50_0x209f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F50_0x209f50");
#endif

    ctx->pc = 0x209f50u;

    // 0x209f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209f58: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x209f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x209f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209f60: 0x80895f6  j           func_2257D8
    ctx->pc = 0x209F60u;
    ctx->pc = 0x209F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F60u;
    // 0x209f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    sub_002257D8_0x2257d8(rdram, ctx, runtime); return;
    ctx->pc = 0x209F68u;
}

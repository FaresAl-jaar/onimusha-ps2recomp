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

// Function: sub_00209F38
// Address: 0x209f38 - 0x209f50
void sub_00209F38_0x209f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F38_0x209f38");
#endif

    ctx->pc = 0x209f38u;

    // 0x209f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209f40: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x209f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x209f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209f48: 0x80895f2  j           func_2257C8
    ctx->pc = 0x209F48u;
    ctx->pc = 0x209F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F48u;
    // 0x209f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257C8u;
    sub_002257C8_0x2257c8(rdram, ctx, runtime); return;
    ctx->pc = 0x209F50u;
}

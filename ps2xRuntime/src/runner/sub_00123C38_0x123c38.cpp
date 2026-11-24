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

// Function: sub_00123C38
// Address: 0x123c38 - 0x123c54
void sub_00123C38_0x123c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123C38_0x123c38");
#endif

    ctx->pc = 0x123c38u;

    // 0x123c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123c3c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x123c3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x123c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123c44: 0x8de46048  lw          $a0, 0x6048($t7)
    ctx->pc = 0x123c44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x406048u));
    // 0x123c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c4c: 0x8048f06  j           func_123C18
    ctx->pc = 0x123C4Cu;
    ctx->pc = 0x123C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C4Cu;
    // 0x123c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123C18u;
    sub_00123C18_0x123c18(rdram, ctx, runtime); return;
    ctx->pc = 0x123C54u;
}

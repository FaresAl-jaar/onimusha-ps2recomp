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

// Function: sub_001A3280
// Address: 0x1a3280 - 0x1a329c
void sub_001A3280_0x1a3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3280_0x1a3280");
#endif

    ctx->pc = 0x1a3280u;

    // 0x1a3280: 0xaf86877c  sw          $a2, -0x7884($gp)
    ctx->pc = 0x1a3280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 6));
    // 0x1a3284: 0xaf878780  sw          $a3, -0x7880($gp)
    ctx->pc = 0x1a3284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 7));
    // 0x1a3288: 0xa3888784  sb          $t0, -0x787C($gp)
    ctx->pc = 0x1a3288u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936452), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a328c: 0xa3898788  sb          $t1, -0x7878($gp)
    ctx->pc = 0x1a328cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936456), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a3290: 0xa38a878c  sb          $t2, -0x7874($gp)
    ctx->pc = 0x1a3290u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936460), (uint8_t)GPR_U32(ctx, 10));
    // 0x1a3294: 0x8068bbc  j           func_1A2EF0
    ctx->pc = 0x1A3294u;
    ctx->pc = 0x1A3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3294u;
    // 0x1a3298: 0xa38b8790  sb          $t3, -0x7870($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936464), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2EF0u;
    sub_001A2EF0_0x1a2ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A329Cu;
}

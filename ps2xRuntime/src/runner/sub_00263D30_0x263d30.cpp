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

// Function: sub_00263D30
// Address: 0x263d30 - 0x263d58
void sub_00263D30_0x263d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263D30_0x263d30");
#endif

    ctx->pc = 0x263d30u;

    // 0x263d30: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x263d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x263d34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x263d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263d38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x263d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263d3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x263d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x263d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x263d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x263d44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x263D44u;
    {
        const bool branch_taken_0x263d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263d44) {
            ctx->pc = 0x263D50u;
            goto label_263d50;
        }
    }
    ctx->pc = 0x263D4Cu;
    // 0x263d4c: 0xa08007d4  sb          $zero, 0x7D4($a0)
    ctx->pc = 0x263d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2004), (uint8_t)GPR_U32(ctx, 0));
label_263d50:
    // 0x263d50: 0x80a638c  j           func_298E30
    ctx->pc = 0x263D50u;
    ctx->pc = 0x298E30u;
    sub_00298E30_0x298e30(rdram, ctx, runtime); return;
    ctx->pc = 0x263D58u;
}

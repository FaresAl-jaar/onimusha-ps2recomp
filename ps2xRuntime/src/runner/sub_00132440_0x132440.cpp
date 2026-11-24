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

// Function: sub_00132440
// Address: 0x132440 - 0x13245c
void sub_00132440_0x132440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132440_0x132440");
#endif

    ctx->pc = 0x132440u;

    // 0x132440: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x132440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x132444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x132444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132448: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x132448u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x13244c: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x13244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x132450: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x132450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x132454: 0x8043800  j           func_10E000
    ctx->pc = 0x132454u;
    ctx->pc = 0x132458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132454u;
    // 0x132458: 0x8c84019c  lw          $a0, 0x19C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    sub_0010E000_0x10e000(rdram, ctx, runtime); return;
    ctx->pc = 0x13245Cu;
}

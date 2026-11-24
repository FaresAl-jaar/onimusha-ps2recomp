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

// Function: sub_0067EF20
// Address: 0x67ef20 - 0x67ef30
void sub_0067EF20_0x67ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0067EF20_0x67ef20");
#endif

    ctx->pc = 0x67ef20u;

    // 0x67ef20: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x67ef20u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x67ef24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x67ef24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x67ef28: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x67ef28u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x67ef2c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x67ef2cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x67ef30u;
}

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

// Function: sub_0067CA70
// Address: 0x67ca70 - 0x67ca84
void sub_0067CA70_0x67ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0067CA70_0x67ca70");
#endif

    ctx->pc = 0x67ca70u;

    // 0x67ca70: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x67ca70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
    // 0x67ca74: 0x28  mfsa        $zero
    ctx->pc = 0x67ca74u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x67ca78: 0x29  mtsa        $zero
    ctx->pc = 0x67ca78u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x67ca7c: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x67ca7cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x67ca80: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x67ca80u;
    
    ctx->pc = 0x67ca84u;
}

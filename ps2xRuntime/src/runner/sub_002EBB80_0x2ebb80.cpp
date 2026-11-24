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

// Function: sub_002EBB80
// Address: 0x2ebb80 - 0x2ebb98
void sub_002EBB80_0x2ebb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBB80_0x2ebb80");
#endif

    ctx->pc = 0x2ebb80u;

    // 0x2ebb80: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2ebb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2ebb84: 0x24860298  addiu       $a2, $a0, 0x298
    ctx->pc = 0x2ebb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 664));
    // 0x2ebb88: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2ebb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ebb8c: 0x2408010c  addiu       $t0, $zero, 0x10C
    ctx->pc = 0x2ebb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x2ebb90: 0x80baef0  j           func_2EBBC0
    ctx->pc = 0x2EBB90u;
    ctx->pc = 0x2EBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB90u;
    // 0x2ebb94: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBBC0u;
    sub_002EBBC0_0x2ebbc0(rdram, ctx, runtime); return;
    ctx->pc = 0x2EBB98u;
}

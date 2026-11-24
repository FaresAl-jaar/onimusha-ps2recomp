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

// Function: sub_003ABDE0
// Address: 0x3abde0 - 0x3abdf0
void sub_003ABDE0_0x3abde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABDE0_0x3abde0");
#endif

    ctx->pc = 0x3abde0u;

    // 0x3abde0: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x3abde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x3abde4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x3abde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x3abde8: 0x809aebc  j           func_26BAF0
    ctx->pc = 0x3ABDE8u;
    ctx->pc = 0x3ABDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDE8u;
    // 0x3abdec: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BAF0u;
    sub_0026BAF0_0x26baf0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABDF0u;
}

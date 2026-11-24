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

// Function: sub_001302F0
// Address: 0x1302f0 - 0x13031c
void sub_001302F0_0x1302f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001302F0_0x1302f0");
#endif

    ctx->pc = 0x1302f0u;

    // 0x1302f0: 0x71182  srl         $v0, $a3, 6
    ctx->pc = 0x1302f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x1302f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1302f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1302f8: 0x9027cea4  lbu         $a3, -0x315C($at)
    ctx->pc = 0x1302f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1302fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1302fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130300: 0x71a80  sll         $v1, $a3, 10
    ctx->pc = 0x130300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x130304: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x130304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x130308: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x130308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13030c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x130310: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x130310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130314: 0x805e480  j           func_179200
    ctx->pc = 0x130314u;
    ctx->pc = 0x130318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130314u;
    // 0x130318: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    sub_00179200_0x179200(rdram, ctx, runtime); return;
    ctx->pc = 0x13031Cu;
}

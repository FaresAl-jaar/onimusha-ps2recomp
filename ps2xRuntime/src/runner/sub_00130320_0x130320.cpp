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

// Function: sub_00130320
// Address: 0x130320 - 0x130350
void sub_00130320_0x130320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130320_0x130320");
#endif

    ctx->pc = 0x130320u;

    // 0x130320: 0x71182  srl         $v0, $a3, 6
    ctx->pc = 0x130320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x130324: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130328: 0x9027cea4  lbu         $a3, -0x315C($at)
    ctx->pc = 0x130328u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x13032c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13032cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130330: 0x71a80  sll         $v1, $a3, 10
    ctx->pc = 0x130330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x130334: 0x34018030  ori         $at, $zero, 0x8030
    ctx->pc = 0x130334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x130338: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x130338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13033c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13033cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x130340: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x130340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x130344: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x130344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130348: 0x805e480  j           func_179200
    ctx->pc = 0x130348u;
    ctx->pc = 0x13034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130348u;
    // 0x13034c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    sub_00179200_0x179200(rdram, ctx, runtime); return;
    ctx->pc = 0x130350u;
}

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

// Function: sub_00151570
// Address: 0x151570 - 0x151594
void sub_00151570_0x151570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151570_0x151570");
#endif

    ctx->pc = 0x151570u;

    // 0x151570: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x151570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x151574: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x151574u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x151578: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x151578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x15157c: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x15157cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x151580: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x151580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x151584: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x151584u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x151588: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x151588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15158c: 0x8052330  j           func_148CC0
    ctx->pc = 0x15158Cu;
    ctx->pc = 0x151590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15158Cu;
    // 0x151590: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    sub_00148CC0_0x148cc0(rdram, ctx, runtime); return;
    ctx->pc = 0x151594u;
}

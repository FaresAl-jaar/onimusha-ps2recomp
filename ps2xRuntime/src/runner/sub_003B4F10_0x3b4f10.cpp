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

// Function: sub_003B4F10
// Address: 0x3b4f10 - 0x3b4f28
void sub_003B4F10_0x3b4f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4F10_0x3b4f10");
#endif

    ctx->pc = 0x3b4f10u;

    // 0x3b4f10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b4f14: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x3b4f14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b4f18: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x3b4f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b4f1c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b4f20: 0x80957a0  j           func_255E80
    ctx->pc = 0x3B4F20u;
    ctx->pc = 0x3B4F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F20u;
    // 0x3b4f24: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    sub_00255E80_0x255e80(rdram, ctx, runtime); return;
    ctx->pc = 0x3B4F28u;
}

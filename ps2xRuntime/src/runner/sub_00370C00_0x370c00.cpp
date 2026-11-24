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

// Function: sub_00370C00
// Address: 0x370c00 - 0x370c10
void sub_00370C00_0x370c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370C00_0x370c00");
#endif

    ctx->pc = 0x370c00u;

    // 0x370c00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x370c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370c04: 0x0  nop
    ctx->pc = 0x370c04u;
    // NOP
    // 0x370c08: 0x0  nop
    ctx->pc = 0x370c08u;
    // NOP
    // 0x370c0c: 0x0  nop
    ctx->pc = 0x370c0cu;
    // NOP
    ctx->pc = 0x370c10u;
}

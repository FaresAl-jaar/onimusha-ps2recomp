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

// Function: sub_003D85F0
// Address: 0x3d85f0 - 0x3d85f8
void sub_003D85F0_0x3d85f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D85F0_0x3d85f0");
#endif

    ctx->pc = 0x3d85f0u;

    // 0x3d85f0: 0x80f6180  j           func_3D8600
    ctx->pc = 0x3D85F0u;
    ctx->pc = 0x3D85F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D85F0u;
    // 0x3d85f4: 0xa0802bd8  sb          $zero, 0x2BD8($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 11224), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8600u;
    sub_003D8600_0x3d8600(rdram, ctx, runtime); return;
    ctx->pc = 0x3D85F8u;
}

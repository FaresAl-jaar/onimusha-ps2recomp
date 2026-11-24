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

// Function: sub_00337890
// Address: 0x337890 - 0x337898
void sub_00337890_0x337890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337890_0x337890");
#endif

    ctx->pc = 0x337890u;

    // 0x337890: 0x80cde28  j           func_3378A0
    ctx->pc = 0x337890u;
    ctx->pc = 0x337894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337890u;
    // 0x337894: 0xa4850000  sh          $a1, 0x0($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3378A0u;
    sub_003378A0_0x3378a0(rdram, ctx, runtime); return;
    ctx->pc = 0x337898u;
}

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

// Function: sub_00133D00
// Address: 0x133d00 - 0x133d0c
void sub_00133D00_0x133d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133D00_0x133d00");
#endif

    ctx->pc = 0x133d00u;

    // 0x133d00: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x133d00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x133d04: 0x804cf44  j           func_133D10
    ctx->pc = 0x133D04u;
    ctx->pc = 0x133D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D04u;
    // 0x133d08: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133D10u;
    sub_00133D10_0x133d10(rdram, ctx, runtime); return;
    ctx->pc = 0x133D0Cu;
}

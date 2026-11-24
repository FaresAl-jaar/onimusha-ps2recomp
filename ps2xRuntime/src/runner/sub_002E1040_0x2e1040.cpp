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

// Function: sub_002E1040
// Address: 0x2e1040 - 0x2e1054
void sub_002E1040_0x2e1040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1040_0x2e1040");
#endif

    ctx->pc = 0x2e1040u;

    // 0x2e1040: 0xa0800031  sb          $zero, 0x31($a0)
    ctx->pc = 0x2e1040u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1044: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2e1044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1048: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e1048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e104c: 0x807cc14  j           func_1F3050
    ctx->pc = 0x2E104Cu;
    ctx->pc = 0x2E1050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E104Cu;
    // 0x2e1050: 0x2484a790  addiu       $a0, $a0, -0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3050u;
    sub_001F3050_0x1f3050(rdram, ctx, runtime); return;
    ctx->pc = 0x2E1054u;
}

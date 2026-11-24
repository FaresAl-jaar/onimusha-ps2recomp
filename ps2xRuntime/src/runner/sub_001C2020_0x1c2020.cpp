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

// Function: sub_001C2020
// Address: 0x1c2020 - 0x1c2054
void sub_001C2020_0x1c2020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2020_0x1c2020");
#endif

    ctx->pc = 0x1c2020u;

    // 0x1c2020: 0x8c877840  lw          $a3, 0x7840($a0)
    ctx->pc = 0x1c2020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c2024: 0x94e3000e  lhu         $v1, 0xE($a3)
    ctx->pc = 0x1c2024u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x1c2028: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c2028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c202c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c202cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c2030: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x1c2030u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c2034: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c2034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c2038: 0x94640010  lhu         $a0, 0x10($v1)
    ctx->pc = 0x1c2038u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c203c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1c203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c2040: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1c2040u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c2044: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c2044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c2048: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1c2048u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1c204c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C204Cu;
        // 0x1c2050: 0xfc650008  sd          $a1, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2054u;
}

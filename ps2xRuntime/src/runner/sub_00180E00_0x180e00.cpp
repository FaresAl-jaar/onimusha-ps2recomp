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

// Function: sub_00180E00
// Address: 0x180e00 - 0x180e34
void sub_00180E00_0x180e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180E00_0x180e00");
#endif

    ctx->pc = 0x180e00u;

    // 0x180e00: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x180e04: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x180e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x180e08: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x180e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x180e0c: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x180e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x180e10: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x180e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x180e14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180E14u;
    {
        const bool branch_taken_0x180e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180e14) {
            ctx->pc = 0x180E28u;
            goto label_180e28;
        }
    }
    ctx->pc = 0x180E1Cu;
    // 0x180e1c: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x180e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x180e20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180E20u;
    {
        const bool branch_taken_0x180e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E20u;
        // 0x180e24: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e20) {
            ctx->pc = 0x180E2Cu;
            goto label_180e2c;
        }
    }
    ctx->pc = 0x180E28u;
label_180e28:
    // 0x180e28: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x180e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_180e2c:
    // 0x180e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x180E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E34u;
}

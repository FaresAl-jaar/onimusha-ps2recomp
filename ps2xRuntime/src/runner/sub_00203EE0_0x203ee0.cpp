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

// Function: sub_00203EE0
// Address: 0x203ee0 - 0x203f14
void sub_00203EE0_0x203ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203EE0_0x203ee0");
#endif

    ctx->pc = 0x203ee0u;

    // 0x203ee0: 0x248401ec  addiu       $a0, $a0, 0x1EC
    ctx->pc = 0x203ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
    // 0x203ee4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x203ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x203ee8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x203ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x203eec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x203eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x203ef0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x203ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x203ef4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203EF4u;
    {
        const bool branch_taken_0x203ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EF4u;
        // 0x203ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ef4) {
            ctx->pc = 0x203F0Cu;
            goto label_203f0c;
        }
    }
    ctx->pc = 0x203EFCu;
    // 0x203efc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x203efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x203f00: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x203f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x203f04: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x203f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x203f08: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x203f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_203f0c:
    // 0x203f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x203F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F0Cu;
        // 0x203f10: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203F14u;
}

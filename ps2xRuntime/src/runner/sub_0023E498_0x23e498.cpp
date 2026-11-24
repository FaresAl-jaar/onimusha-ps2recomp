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

// Function: sub_0023E498
// Address: 0x23e498 - 0x23e4c8
void sub_0023E498_0x23e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E498_0x23e498");
#endif

    ctx->pc = 0x23e498u;

    // 0x23e498: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23e49c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E49Cu;
    {
        const bool branch_taken_0x23e49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E49Cu;
        // 0x23e4a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e49c) {
            ctx->pc = 0x23E4C0u;
            goto label_23e4c0;
        }
    }
    ctx->pc = 0x23E4A4u;
    // 0x23e4a4: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x23e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x23e4a8: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x23e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x23e4ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e4b0: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x23e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x23e4b4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x23e4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x23e4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23E4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4B8u;
        // 0x23e4bc: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E4C0u;
label_23e4c0:
    // 0x23e4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x23E4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4C0u;
        // 0x23e4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E4C8u;
}

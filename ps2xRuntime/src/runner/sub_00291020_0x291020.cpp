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

// Function: sub_00291020
// Address: 0x291020 - 0x29103c
void sub_00291020_0x291020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291020_0x291020");
#endif

    ctx->pc = 0x291020u;

    // 0x291020: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291020u;
    {
        const bool branch_taken_0x291020 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x291024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291020u;
        // 0x291024: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291020) {
            ctx->pc = 0x291034u;
            goto label_291034;
        }
    }
    ctx->pc = 0x291028u;
    // 0x291028: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x291028u;
    {
        const bool branch_taken_0x291028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291028) {
            ctx->pc = 0x291034u;
            goto label_291034;
        }
    }
    ctx->pc = 0x291030u;
    // 0x291030: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x291030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
label_291034:
    // 0x291034: 0x3e00008  jr          $ra
    ctx->pc = 0x291034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291034u;
        // 0x291038: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29103Cu;
}

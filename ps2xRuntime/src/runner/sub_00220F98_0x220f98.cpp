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

// Function: sub_00220F98
// Address: 0x220f98 - 0x220fa8
void sub_00220F98_0x220f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220F98_0x220f98");
#endif

    ctx->pc = 0x220f98u;

    // 0x220f98: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x220f98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x220f9c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x220f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x220fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x220FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220FA0u;
        // 0x220fa4: 0xac850d30  sw          $a1, 0xD30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220FA8u;
}

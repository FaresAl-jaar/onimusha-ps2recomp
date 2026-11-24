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

// Function: sub_003293F0
// Address: 0x3293f0 - 0x329418
void sub_003293F0_0x3293f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003293F0_0x3293f0");
#endif

    ctx->pc = 0x3293f0u;

    // 0x3293f0: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x3293f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3293f4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3293f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3293f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3293f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3293fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3293fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x329400: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x329400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x329404: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x329404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x329408: 0x246397c0  addiu       $v1, $v1, -0x6840
    ctx->pc = 0x329408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940608));
    // 0x32940c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x329410: 0x3e00008  jr          $ra
    ctx->pc = 0x329410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329410u;
        // 0x329414: 0xaf838b68  sw          $v1, -0x7498($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329418u;
}

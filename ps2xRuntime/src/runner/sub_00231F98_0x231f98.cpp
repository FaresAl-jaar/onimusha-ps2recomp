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

// Function: sub_00231F98
// Address: 0x231f98 - 0x231fb4
void sub_00231F98_0x231f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231F98_0x231f98");
#endif

    ctx->pc = 0x231f98u;

    // 0x231f98: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x231f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x231f9c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x231f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231fa0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x231fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x231fa4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x231fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x231fa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x231fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x231fac: 0x3e00008  jr          $ra
    ctx->pc = 0x231FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FACu;
        // 0x231fb0: 0xa4a3000e  sh          $v1, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231FB4u;
}

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

// Function: sub_00351940
// Address: 0x351940 - 0x351954
void sub_00351940_0x351940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351940_0x351940");
#endif

    ctx->pc = 0x351940u;

    // 0x351940: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x351940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x351944: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x351944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x351948: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x351948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35194c: 0x3e00008  jr          $ra
    ctx->pc = 0x35194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35194Cu;
        // 0x351950: 0xa023a0bd  sb          $v1, -0x5F43($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942909), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351954u;
}

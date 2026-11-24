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

// Function: sub_00256960
// Address: 0x256960 - 0x256988
void sub_00256960_0x256960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256960_0x256960");
#endif

    ctx->pc = 0x256960u;

    // 0x256960: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x256960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256968: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x256968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x25696c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x25696cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x256970: 0xa0a3002f  sb          $v1, 0x2F($a1)
    ctx->pc = 0x256970u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x256974: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x256974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256978: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x256978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25697c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x25697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x256980: 0x3e00008  jr          $ra
    ctx->pc = 0x256980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256980u;
        // 0x256984: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256988u;
}

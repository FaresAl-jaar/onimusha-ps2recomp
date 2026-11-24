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

// Function: sub_00685C40
// Address: 0x685c40 - 0x685c84
void sub_00685C40_0x685c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685C40_0x685c40");
#endif

    switch (ctx->pc) {
        case 0x685c60u: goto label_685c60;
        default: break;
    }

    ctx->pc = 0x685c40u;

    // 0x685c40: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x685c40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x685c44: 0x24c610c0  addiu       $a2, $a2, 0x10C0
    ctx->pc = 0x685c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4288));
    // 0x685c48: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x685c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x685c4c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x685c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x685c50: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x685c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x685c54: 0x24a55fd0  addiu       $a1, $a1, 0x5FD0
    ctx->pc = 0x685c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24528));
    // 0x685c58: 0x24845ff0  addiu       $a0, $a0, 0x5FF0
    ctx->pc = 0x685c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24560));
    // 0x685c5c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x685c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
label_685c60:
    // 0x685c60: 0xacc50144  sw          $a1, 0x144($a2)
    ctx->pc = 0x685c60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 324), GPR_U32(ctx, 5));
    // 0x685c64: 0xacc40144  sw          $a0, 0x144($a2)
    ctx->pc = 0x685c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 324), GPR_U32(ctx, 4));
    // 0x685c68: 0x24c60160  addiu       $a2, $a2, 0x160
    ctx->pc = 0x685c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x685c6c: 0x0  nop
    ctx->pc = 0x685c6cu;
    // NOP
    // 0x685c70: 0x0  nop
    ctx->pc = 0x685c70u;
    // NOP
    // 0x685c74: 0x14c3fffa  bne         $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x685C74u;
    {
        const bool branch_taken_0x685c74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x685c74) {
            ctx->pc = 0x685C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_685c60;
        }
    }
    ctx->pc = 0x685C7Cu;
    // 0x685c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x685C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685C84u;
}

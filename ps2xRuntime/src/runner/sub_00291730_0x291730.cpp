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

// Function: sub_00291730
// Address: 0x291730 - 0x29174c
void sub_00291730_0x291730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291730_0x291730");
#endif

    ctx->pc = 0x291730u;

    // 0x291730: 0x9083011c  lbu         $v1, 0x11C($a0)
    ctx->pc = 0x291730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x291734: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x291734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x291738: 0xa083011c  sb          $v1, 0x11C($a0)
    ctx->pc = 0x291738u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x29173c: 0x94830030  lhu         $v1, 0x30($a0)
    ctx->pc = 0x29173cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x291740: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x291740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x291744: 0x3e00008  jr          $ra
    ctx->pc = 0x291744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291744u;
        // 0x291748: 0xa4830030  sh          $v1, 0x30($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29174Cu;
}

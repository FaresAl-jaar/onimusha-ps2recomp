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

// Function: sub_0025E9E0
// Address: 0x25e9e0 - 0x25ea04
void sub_0025E9E0_0x25e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E9E0_0x25e9e0");
#endif

    ctx->pc = 0x25e9e0u;

    // 0x25e9e0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x25e9e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25e9e4: 0x7c830070  sq          $v1, 0x70($a0)
    ctx->pc = 0x25e9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 3));
    // 0x25e9e8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x25e9e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x25e9ec: 0x7c830080  sq          $v1, 0x80($a0)
    ctx->pc = 0x25e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
    // 0x25e9f0: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x25e9f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x25e9f4: 0x7c830090  sq          $v1, 0x90($a0)
    ctx->pc = 0x25e9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 3));
    // 0x25e9f8: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x25e9f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x25e9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x25E9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9FCu;
        // 0x25ea00: 0x7c8300a0  sq          $v1, 0xA0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EA04u;
}

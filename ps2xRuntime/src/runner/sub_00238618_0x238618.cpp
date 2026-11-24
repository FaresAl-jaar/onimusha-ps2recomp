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

// Function: sub_00238618
// Address: 0x238618 - 0x238644
void sub_00238618_0x238618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238618_0x238618");
#endif

    switch (ctx->pc) {
        case 0x238630u: goto label_238630;
        default: break;
    }

    ctx->pc = 0x238618u;

    // 0x238618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23861c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23861cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238620: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238624: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x238624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x238628: 0xc0910f8  jal         func_2443E0
    ctx->pc = 0x238628u;
    SET_GPR_U32(ctx, 31, 0x238630u);
    ctx->pc = 0x23862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238628u;
    // 0x23862c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2443E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2443E0u, 0x238628u, 0x238630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238630u;
label_238630:
    // 0x238630: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x238630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x238634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23863c: 0x3e00008  jr          $ra
    ctx->pc = 0x23863Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23863Cu;
        // 0x238640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23863Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238644u;
}

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

// Function: sub_00238238
// Address: 0x238238 - 0x238264
void sub_00238238_0x238238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238238_0x238238");
#endif

    switch (ctx->pc) {
        case 0x23824cu: goto label_23824c;
        default: break;
    }

    ctx->pc = 0x238238u;

    // 0x238238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23823c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238240: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x238240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x238244: 0xc08ddae  jal         func_2376B8
    ctx->pc = 0x238244u;
    SET_GPR_U32(ctx, 31, 0x23824Cu);
    ctx->pc = 0x238248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238244u;
    // 0x238248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2376B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2376B8u, 0x238244u, 0x23824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23824Cu;
label_23824c:
    // 0x23824c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23824cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x238250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238258: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23825c: 0x3e00008  jr          $ra
    ctx->pc = 0x23825Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23825Cu;
        // 0x238260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23825Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238264u;
}

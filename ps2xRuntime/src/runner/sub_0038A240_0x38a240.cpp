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

// Function: sub_0038A240
// Address: 0x38a240 - 0x38a26c
void sub_0038A240_0x38a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A240_0x38a240");
#endif

    switch (ctx->pc) {
        case 0x38a258u: goto label_38a258;
        case 0x38a260u: goto label_38a260;
        default: break;
    }

    ctx->pc = 0x38a240u;

    // 0x38a240: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38a240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a244: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a248: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38a248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38a24c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a250: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x38A250u;
    SET_GPR_U32(ctx, 31, 0x38A258u);
    ctx->pc = 0x38A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A250u;
    // 0x38a254: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x38A250u, 0x38A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A258u;
label_38a258:
    // 0x38a258: 0xc0e289c  jal         func_38A270
    ctx->pc = 0x38A258u;
    SET_GPR_U32(ctx, 31, 0x38A260u);
    ctx->pc = 0x38A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A258u;
    // 0x38a25c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A270u, 0x38A258u, 0x38A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A260u;
label_38a260:
    // 0x38a260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a264: 0x3e00008  jr          $ra
    ctx->pc = 0x38A264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A264u;
        // 0x38a268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A26Cu;
}

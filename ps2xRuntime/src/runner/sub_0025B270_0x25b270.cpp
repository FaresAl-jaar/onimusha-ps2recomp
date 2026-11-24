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

// Function: sub_0025B270
// Address: 0x25b270 - 0x25b298
void sub_0025B270_0x25b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B270_0x25b270");
#endif

    switch (ctx->pc) {
        case 0x25b288u: goto label_25b288;
        default: break;
    }

    ctx->pc = 0x25b270u;

    // 0x25b270: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x25b270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25b274: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25b278: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25b27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b280: 0xc07b9b0  jal         func_1EE6C0
    ctx->pc = 0x25B280u;
    SET_GPR_U32(ctx, 31, 0x25B288u);
    ctx->pc = 0x25B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B280u;
    // 0x25b284: 0x24460050  addiu       $a2, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE6C0u, 0x25B280u, 0x25B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B288u;
label_25b288:
    // 0x25b288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b28c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25b28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25b290: 0x3e00008  jr          $ra
    ctx->pc = 0x25B290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B290u;
        // 0x25b294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B298u;
}

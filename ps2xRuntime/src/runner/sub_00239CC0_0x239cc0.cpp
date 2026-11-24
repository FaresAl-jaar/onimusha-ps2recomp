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

// Function: sub_00239CC0
// Address: 0x239cc0 - 0x239cf8
void sub_00239CC0_0x239cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239CC0_0x239cc0");
#endif

    switch (ctx->pc) {
        case 0x239cd4u: goto label_239cd4;
        case 0x239cdcu: goto label_239cdc;
        case 0x239ce4u: goto label_239ce4;
        default: break;
    }

    ctx->pc = 0x239cc0u;

    // 0x239cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x239cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x239ccc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x239CCCu;
    SET_GPR_U32(ctx, 31, 0x239CD4u);
    ctx->pc = 0x239CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CCCu;
    // 0x239cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x239CCCu, 0x239CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CD4u;
label_239cd4:
    // 0x239cd4: 0xc08e73e  jal         func_239CF8
    ctx->pc = 0x239CD4u;
    SET_GPR_U32(ctx, 31, 0x239CDCu);
    ctx->pc = 0x239CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CD4u;
    // 0x239cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CF8u, 0x239CD4u, 0x239CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CDCu;
label_239cdc:
    // 0x239cdc: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x239CDCu;
    SET_GPR_U32(ctx, 31, 0x239CE4u);
    ctx->pc = 0x239CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CDCu;
    // 0x239ce0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x239CDCu, 0x239CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CE4u;
label_239ce4:
    // 0x239ce4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x239ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239ce8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x239ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x239CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CF0u;
        // 0x239cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239CF8u;
}

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

// Function: sub_0023E1E0
// Address: 0x23e1e0 - 0x23e218
void sub_0023E1E0_0x23e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E1E0_0x23e1e0");
#endif

    switch (ctx->pc) {
        case 0x23e1f4u: goto label_23e1f4;
        case 0x23e1fcu: goto label_23e1fc;
        case 0x23e204u: goto label_23e204;
        default: break;
    }

    ctx->pc = 0x23e1e0u;

    // 0x23e1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e1e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23e1ec: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23E1ECu;
    SET_GPR_U32(ctx, 31, 0x23E1F4u);
    ctx->pc = 0x23E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1ECu;
    // 0x23e1f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23E1ECu, 0x23E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1F4u;
label_23e1f4:
    // 0x23e1f4: 0xc08f886  jal         func_23E218
    ctx->pc = 0x23E1F4u;
    SET_GPR_U32(ctx, 31, 0x23E1FCu);
    ctx->pc = 0x23E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1F4u;
    // 0x23e1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E218u, 0x23E1F4u, 0x23E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1FCu;
label_23e1fc:
    // 0x23e1fc: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23E1FCu;
    SET_GPR_U32(ctx, 31, 0x23E204u);
    ctx->pc = 0x23E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1FCu;
    // 0x23e200: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23E1FCu, 0x23E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E204u;
label_23e204:
    // 0x23e204: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23e204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e208: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23e208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e210: 0x3e00008  jr          $ra
    ctx->pc = 0x23E210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E210u;
        // 0x23e214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E218u;
}

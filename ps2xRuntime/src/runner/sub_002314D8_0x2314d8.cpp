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

// Function: sub_002314D8
// Address: 0x2314d8 - 0x231510
void sub_002314D8_0x2314d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002314D8_0x2314d8");
#endif

    switch (ctx->pc) {
        case 0x2314ecu: goto label_2314ec;
        case 0x2314f4u: goto label_2314f4;
        case 0x2314fcu: goto label_2314fc;
        default: break;
    }

    ctx->pc = 0x2314d8u;

    // 0x2314d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2314d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2314dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2314dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2314e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2314e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2314e4: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x2314E4u;
    SET_GPR_U32(ctx, 31, 0x2314ECu);
    ctx->pc = 0x2314E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314E4u;
    // 0x2314e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x2314E4u, 0x2314ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314ECu;
label_2314ec:
    // 0x2314ec: 0xc08c544  jal         func_231510
    ctx->pc = 0x2314ECu;
    SET_GPR_U32(ctx, 31, 0x2314F4u);
    ctx->pc = 0x2314F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314ECu;
    // 0x2314f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x2314ECu, 0x2314F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314F4u;
label_2314f4:
    // 0x2314f4: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x2314F4u;
    SET_GPR_U32(ctx, 31, 0x2314FCu);
    ctx->pc = 0x2314F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314F4u;
    // 0x2314f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x2314F4u, 0x2314FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314FCu;
label_2314fc:
    // 0x2314fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2314fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231508: 0x3e00008  jr          $ra
    ctx->pc = 0x231508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231508u;
        // 0x23150c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231510u;
}

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

// Function: sub_0020ABD0
// Address: 0x20abd0 - 0x20abf4
void sub_0020ABD0_0x20abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ABD0_0x20abd0");
#endif

    switch (ctx->pc) {
        case 0x20abe8u: goto label_20abe8;
        default: break;
    }

    ctx->pc = 0x20abd0u;

    // 0x20abd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20abd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20abd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abd8: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x20abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20abdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20abe0: 0xc082b0a  jal         func_20AC28
    ctx->pc = 0x20ABE0u;
    SET_GPR_U32(ctx, 31, 0x20ABE8u);
    ctx->pc = 0x20ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABE0u;
    // 0x20abe4: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x20ABE0u, 0x20ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABE8u;
label_20abe8:
    // 0x20abe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20abe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20abec: 0x3e00008  jr          $ra
    ctx->pc = 0x20ABECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABECu;
        // 0x20abf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ABECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ABF4u;
}

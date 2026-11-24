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

// Function: sub_0020AB80
// Address: 0x20ab80 - 0x20aba4
void sub_0020AB80_0x20ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AB80_0x20ab80");
#endif

    switch (ctx->pc) {
        case 0x20ab98u: goto label_20ab98;
        default: break;
    }

    ctx->pc = 0x20ab80u;

    // 0x20ab80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ab84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20ab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ab88: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x20ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20ab8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20ab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20ab90: 0xc082afe  jal         func_20ABF8
    ctx->pc = 0x20AB90u;
    SET_GPR_U32(ctx, 31, 0x20AB98u);
    ctx->pc = 0x20AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB90u;
    // 0x20ab94: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ABF8u, 0x20AB90u, 0x20AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB98u;
label_20ab98:
    // 0x20ab98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20ab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ab9c: 0x3e00008  jr          $ra
    ctx->pc = 0x20AB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB9Cu;
        // 0x20aba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ABA4u;
}

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

// Function: sub_002A43D0
// Address: 0x2a43d0 - 0x2a4408
void sub_002A43D0_0x2a43d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A43D0_0x2a43d0");
#endif

    switch (ctx->pc) {
        case 0x2a43fcu: goto label_2a43fc;
        default: break;
    }

    ctx->pc = 0x2a43d0u;

    // 0x2a43d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a43d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a43d4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a43d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a43d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a43dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a43dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43e0: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x2a43e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
    // 0x2a43e4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2a43e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43e8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2a43e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43ec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2a43ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43f0: 0x8f888128  lw          $t0, -0x7ED8($gp)
    ctx->pc = 0x2a43f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x2a43f4: 0xc0a1f20  jal         func_287C80
    ctx->pc = 0x2A43F4u;
    SET_GPR_U32(ctx, 31, 0x2A43FCu);
    ctx->pc = 0x2A43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43F4u;
    // 0x2a43f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C80u, 0x2A43F4u, 0x2A43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43FCu;
label_2a43fc:
    // 0x2a43fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a43fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4400: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4400u;
        // 0x2a4404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4408u;
}

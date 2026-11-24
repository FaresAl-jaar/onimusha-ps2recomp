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

// Function: sub_002759D0
// Address: 0x2759d0 - 0x275a04
void sub_002759D0_0x2759d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002759D0_0x2759d0");
#endif

    switch (ctx->pc) {
        case 0x2759e0u: goto label_2759e0;
        case 0x2759f4u: goto label_2759f4;
        default: break;
    }

    ctx->pc = 0x2759d0u;

    // 0x2759d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2759d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2759d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2759d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2759d8: 0xc096c80  jal         func_25B200
    ctx->pc = 0x2759D8u;
    SET_GPR_U32(ctx, 31, 0x2759E0u);
    ctx->pc = 0x2759DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2759D8u;
    // 0x2759dc: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x2759D8u, 0x2759E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2759E0u;
label_2759e0:
    // 0x2759e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2759e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2759E4u;
    {
        const bool branch_taken_0x2759e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759e4) {
            ctx->pc = 0x2759F8u;
            goto label_2759f8;
        }
    }
    ctx->pc = 0x2759ECu;
    // 0x2759ec: 0xc09d570  jal         func_2755C0
    ctx->pc = 0x2759ECu;
    SET_GPR_U32(ctx, 31, 0x2759F4u);
    ctx->pc = 0x2755C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755C0u, 0x2759ECu, 0x2759F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2759F4u;
label_2759f4:
    // 0x2759f4: 0x0  nop
    ctx->pc = 0x2759f4u;
    // NOP
label_2759f8:
    // 0x2759f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2759f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2759fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2759FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759FCu;
        // 0x275a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2759FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275A04u;
}

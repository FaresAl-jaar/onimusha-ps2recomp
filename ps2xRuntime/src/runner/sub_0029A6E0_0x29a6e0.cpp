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

// Function: sub_0029A6E0
// Address: 0x29a6e0 - 0x29a714
void sub_0029A6E0_0x29a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A6E0_0x29a6e0");
#endif

    switch (ctx->pc) {
        case 0x29a708u: goto label_29a708;
        default: break;
    }

    ctx->pc = 0x29a6e0u;

    // 0x29a6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a6e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29a6ec: 0x908329d0  lbu         $v1, 0x29D0($a0)
    ctx->pc = 0x29a6ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x29a6f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A6F0u;
    {
        const bool branch_taken_0x29a6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6F0u;
        // 0x29a6f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6f0) {
            ctx->pc = 0x29A700u;
            goto label_29a700;
        }
    }
    ctx->pc = 0x29A6F8u;
    // 0x29a6f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29A6F8u;
    {
        const bool branch_taken_0x29a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6F8u;
        // 0x29a6fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6f8) {
            ctx->pc = 0x29A70Cu;
            goto label_29a70c;
        }
    }
    ctx->pc = 0x29A700u;
label_29a700:
    // 0x29a700: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x29A700u;
    SET_GPR_U32(ctx, 31, 0x29A708u);
    ctx->pc = 0x29A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A700u;
    // 0x29a704: 0x8c8429c0  lw          $a0, 0x29C0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x29A700u, 0x29A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A708u;
label_29a708:
    // 0x29a708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a70c:
    // 0x29a70c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A70Cu;
        // 0x29a710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A714u;
}

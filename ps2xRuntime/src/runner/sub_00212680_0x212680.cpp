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

// Function: sub_00212680
// Address: 0x212680 - 0x2126a4
void sub_00212680_0x212680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212680_0x212680");
#endif

    switch (ctx->pc) {
        case 0x212694u: goto label_212694;
        default: break;
    }

    ctx->pc = 0x212680u;

    // 0x212680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212684: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x212684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21268c: 0xc084068  jal         func_2101A0
    ctx->pc = 0x21268Cu;
    SET_GPR_U32(ctx, 31, 0x212694u);
    ctx->pc = 0x212690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21268Cu;
    // 0x212690: 0x8c851f44  lw          $a1, 0x1F44($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8004)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101A0u, 0x21268Cu, 0x212694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212694u;
label_212694:
    // 0x212694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x212694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21269c: 0x3e00008  jr          $ra
    ctx->pc = 0x21269Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2126A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21269Cu;
        // 0x2126a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21269Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2126A4u;
}

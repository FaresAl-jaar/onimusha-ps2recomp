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

// Function: sub_00275990
// Address: 0x275990 - 0x2759c4
void sub_00275990_0x275990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275990_0x275990");
#endif

    switch (ctx->pc) {
        case 0x2759a0u: goto label_2759a0;
        case 0x2759b4u: goto label_2759b4;
        default: break;
    }

    ctx->pc = 0x275990u;

    // 0x275990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275998: 0xc096c80  jal         func_25B200
    ctx->pc = 0x275998u;
    SET_GPR_U32(ctx, 31, 0x2759A0u);
    ctx->pc = 0x27599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275998u;
    // 0x27599c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x275998u, 0x2759A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2759A0u;
label_2759a0:
    // 0x2759a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2759a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2759A4u;
    {
        const bool branch_taken_0x2759a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2759A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759A4u;
        // 0x2759a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759a4) {
            ctx->pc = 0x2759B8u;
            goto label_2759b8;
        }
    }
    ctx->pc = 0x2759ACu;
    // 0x2759ac: 0xc09d56c  jal         func_2755B0
    ctx->pc = 0x2759ACu;
    SET_GPR_U32(ctx, 31, 0x2759B4u);
    ctx->pc = 0x2755B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755B0u, 0x2759ACu, 0x2759B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2759B4u;
label_2759b4:
    // 0x2759b4: 0x0  nop
    ctx->pc = 0x2759b4u;
    // NOP
label_2759b8:
    // 0x2759b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2759b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2759bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2759BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2759C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759BCu;
        // 0x2759c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2759BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2759C4u;
}

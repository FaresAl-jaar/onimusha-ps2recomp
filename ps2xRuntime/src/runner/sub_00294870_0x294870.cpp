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

// Function: sub_00294870
// Address: 0x294870 - 0x2948b0
void sub_00294870_0x294870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294870_0x294870");
#endif

    switch (ctx->pc) {
        case 0x294888u: goto label_294888;
        case 0x294890u: goto label_294890;
        case 0x294898u: goto label_294898;
        case 0x2948a0u: goto label_2948a0;
        default: break;
    }

    ctx->pc = 0x294870u;

    // 0x294870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29487c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29487cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294880: 0xc0c0860  jal         func_302180
    ctx->pc = 0x294880u;
    SET_GPR_U32(ctx, 31, 0x294888u);
    ctx->pc = 0x294884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294880u;
    // 0x294884: 0x8c842988  lw          $a0, 0x2988($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x294880u, 0x294888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294888u;
label_294888:
    // 0x294888: 0xc0c0860  jal         func_302180
    ctx->pc = 0x294888u;
    SET_GPR_U32(ctx, 31, 0x294890u);
    ctx->pc = 0x29488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294888u;
    // 0x29488c: 0x8e04298c  lw          $a0, 0x298C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10636)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x294888u, 0x294890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294890u;
label_294890:
    // 0x294890: 0xc0c0860  jal         func_302180
    ctx->pc = 0x294890u;
    SET_GPR_U32(ctx, 31, 0x294898u);
    ctx->pc = 0x294894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294890u;
    // 0x294894: 0x8e042990  lw          $a0, 0x2990($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10640)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x294890u, 0x294898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294898u;
label_294898:
    // 0x294898: 0xc0c0860  jal         func_302180
    ctx->pc = 0x294898u;
    SET_GPR_U32(ctx, 31, 0x2948A0u);
    ctx->pc = 0x29489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294898u;
    // 0x29489c: 0x8e042994  lw          $a0, 0x2994($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x294898u, 0x2948A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948A0u;
label_2948a0:
    // 0x2948a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2948a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2948a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2948a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2948a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2948A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2948ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948A8u;
        // 0x2948ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2948A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2948B0u;
}

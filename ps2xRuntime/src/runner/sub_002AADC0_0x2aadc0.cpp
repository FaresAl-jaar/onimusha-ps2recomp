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

// Function: sub_002AADC0
// Address: 0x2aadc0 - 0x2aae00
void sub_002AADC0_0x2aadc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AADC0_0x2aadc0");
#endif

    switch (ctx->pc) {
        case 0x2aadf4u: goto label_2aadf4;
        default: break;
    }

    ctx->pc = 0x2aadc0u;

    // 0x2aadc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aadc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aadc4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2aadc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadc8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2aadc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aadccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aadd0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2aadd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadd4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2aadd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2aadd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aadd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaddc: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x2aaddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x2aade0: 0x3445f814  ori         $a1, $v0, 0xF814
    ctx->pc = 0x2aade0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63508);
    // 0x2aade4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2aade4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aade8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2aade8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aadec: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AADECu;
    SET_GPR_U32(ctx, 31, 0x2AADF4u);
    ctx->pc = 0x2AADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AADECu;
    // 0x2aadf0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AADECu, 0x2AADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AADF4u;
label_2aadf4:
    // 0x2aadf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aadf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aadf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AADF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AADF8u;
        // 0x2aadfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AADF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAE00u;
}

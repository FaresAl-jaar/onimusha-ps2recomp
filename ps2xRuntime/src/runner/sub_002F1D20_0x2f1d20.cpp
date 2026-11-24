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

// Function: sub_002F1D20
// Address: 0x2f1d20 - 0x2f1d64
void sub_002F1D20_0x2f1d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1D20_0x2f1d20");
#endif

    switch (ctx->pc) {
        case 0x2f1d58u: goto label_2f1d58;
        default: break;
    }

    ctx->pc = 0x2f1d20u;

    // 0x2f1d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1d24: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1d2c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2f1d2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d30: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x2f1d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
    // 0x2f1d34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d38: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d3c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2f1d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d40: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2f1d40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d44: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2f1d44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d48: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f1d48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d50: 0xc0e3e44  jal         func_38F910
    ctx->pc = 0x2F1D50u;
    SET_GPR_U32(ctx, 31, 0x2F1D58u);
    ctx->pc = 0x2F1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D50u;
    // 0x2f1d54: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F910u, 0x2F1D50u, 0x2F1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D58u;
label_2f1d58:
    // 0x2f1d58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D5Cu;
        // 0x2f1d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1D64u;
}

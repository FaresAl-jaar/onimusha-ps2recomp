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

// Function: sub_0020EAA0
// Address: 0x20eaa0 - 0x20eae8
void sub_0020EAA0_0x20eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EAA0_0x20eaa0");
#endif

    switch (ctx->pc) {
        case 0x20eab8u: goto label_20eab8;
        case 0x20ead8u: goto label_20ead8;
        default: break;
    }

    ctx->pc = 0x20eaa0u;

    // 0x20eaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20eaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20eaa4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20eaa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20eaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20eaac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20eaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20eab0: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20EAB0u;
    SET_GPR_U32(ctx, 31, 0x20EAB8u);
    ctx->pc = 0x20EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAB0u;
    // 0x20eab4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20EAB0u, 0x20EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAB8u;
label_20eab8:
    // 0x20eab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20eab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eabc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20eac0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x20eac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20eac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20eac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EAC8u;
    {
        const bool branch_taken_0x20eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAC8u;
        // 0x20eacc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eac8) {
            ctx->pc = 0x20EAD8u;
            goto label_20ead8;
        }
    }
    ctx->pc = 0x20EAD0u;
    // 0x20ead0: 0xc0888d6  jal         func_222358
    ctx->pc = 0x20EAD0u;
    SET_GPR_U32(ctx, 31, 0x20EAD8u);
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x20EAD0u, 0x20EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAD8u;
label_20ead8:
    // 0x20ead8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ead8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eadc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20eadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eae0: 0x3e00008  jr          $ra
    ctx->pc = 0x20EAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAE0u;
        // 0x20eae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EAE8u;
}

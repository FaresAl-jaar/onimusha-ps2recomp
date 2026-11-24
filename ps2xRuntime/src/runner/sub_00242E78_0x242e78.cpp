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

// Function: sub_00242E78
// Address: 0x242e78 - 0x242ebc
void sub_00242E78_0x242e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242E78_0x242e78");
#endif

    switch (ctx->pc) {
        case 0x242e8cu: goto label_242e8c;
        case 0x242e98u: goto label_242e98;
        case 0x242ea4u: goto label_242ea4;
        default: break;
    }

    ctx->pc = 0x242e78u;

    // 0x242e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242e80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x242e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x242e84: 0xc090b14  jal         func_242C50
    ctx->pc = 0x242E84u;
    SET_GPR_U32(ctx, 31, 0x242E8Cu);
    ctx->pc = 0x242E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E84u;
    // 0x242e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242C50u, 0x242E84u, 0x242E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E8Cu;
label_242e8c:
    // 0x242e8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x242e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x242e90: 0xc08fa08  jal         func_23E820
    ctx->pc = 0x242E90u;
    SET_GPR_U32(ctx, 31, 0x242E98u);
    ctx->pc = 0x242E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E90u;
    // 0x242e94: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E820u, 0x242E90u, 0x242E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E98u;
label_242e98:
    // 0x242e98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x242e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242e9c: 0xc08fccc  jal         func_23F330
    ctx->pc = 0x242E9Cu;
    SET_GPR_U32(ctx, 31, 0x242EA4u);
    ctx->pc = 0x242EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E9Cu;
    // 0x242ea0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F330u, 0x242E9Cu, 0x242EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242EA4u;
label_242ea4:
    // 0x242ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242ea8: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x242ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x242eac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x242EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EB4u;
        // 0x242eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242EBCu;
}

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

// Function: sub_0017E2B0
// Address: 0x17e2b0 - 0x17e318
void sub_0017E2B0_0x17e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E2B0_0x17e2b0");
#endif

    switch (ctx->pc) {
        case 0x17e2d0u: goto label_17e2d0;
        case 0x17e2e4u: goto label_17e2e4;
        case 0x17e2f8u: goto label_17e2f8;
        default: break;
    }

    ctx->pc = 0x17e2b0u;

    // 0x17e2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e2bc: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x17e2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e2c0: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x17E2C0u;
    {
        const bool branch_taken_0x17e2c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e2c0) {
            ctx->pc = 0x17E300u;
            goto label_17e300;
        }
    }
    ctx->pc = 0x17E2C8u;
    // 0x17e2c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17E2C8u;
    {
        const bool branch_taken_0x17e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e2c8) {
            ctx->pc = 0x17E308u;
            goto label_17e308;
        }
    }
    ctx->pc = 0x17E2D0u;
label_17e2d0:
    // 0x17e2d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17e2d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E2D4u;
    {
        const bool branch_taken_0x17e2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2D4u;
        // 0x17e2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2d4) {
            ctx->pc = 0x17E2F0u;
            goto label_17e2f0;
        }
    }
    ctx->pc = 0x17E2DCu;
    // 0x17e2dc: 0xc05f880  jal         func_17E200
    ctx->pc = 0x17E2DCu;
    SET_GPR_U32(ctx, 31, 0x17E2E4u);
    ctx->pc = 0x17E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E200u, 0x17E2DCu, 0x17E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E2E4u;
label_17e2e4:
    // 0x17e2e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17E2E4u;
    {
        const bool branch_taken_0x17e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e2e4) {
            ctx->pc = 0x17E2F8u;
            goto label_17e2f8;
        }
    }
    ctx->pc = 0x17E2ECu;
    // 0x17e2ec: 0x0  nop
    ctx->pc = 0x17e2ecu;
    // NOP
label_17e2f0:
    // 0x17e2f0: 0xc05f780  jal         func_17DE00
    ctx->pc = 0x17E2F0u;
    SET_GPR_U32(ctx, 31, 0x17E2F8u);
    ctx->pc = 0x17E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E2F0u;
    // 0x17e2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DE00u, 0x17E2F0u, 0x17E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E2F8u;
label_17e2f8:
    // 0x17e2f8: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x17e2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17e2fc: 0x0  nop
    ctx->pc = 0x17e2fcu;
    // NOP
label_17e300:
    // 0x17e300: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17E300u;
    {
        const bool branch_taken_0x17e300 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e300) {
            ctx->pc = 0x17E2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e2d0;
        }
    }
    ctx->pc = 0x17E308u;
label_17e308:
    // 0x17e308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e30c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e310: 0x3e00008  jr          $ra
    ctx->pc = 0x17E310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E310u;
        // 0x17e314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E318u;
}

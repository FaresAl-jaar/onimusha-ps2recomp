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

// Function: sub_002E1E90
// Address: 0x2e1e90 - 0x2e1ef8
void sub_002E1E90_0x2e1e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1E90_0x2e1e90");
#endif

    switch (ctx->pc) {
        case 0x2e1eb0u: goto label_2e1eb0;
        case 0x2e1ec8u: goto label_2e1ec8;
        case 0x2e1ed0u: goto label_2e1ed0;
        default: break;
    }

    ctx->pc = 0x2e1e90u;

    // 0x2e1e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e1e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e1e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1ea0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e1ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1ea4: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2e1ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2e1ea8: 0x26107190  addiu       $s0, $s0, 0x7190
    ctx->pc = 0x2e1ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29072));
    // 0x2e1eac: 0x0  nop
    ctx->pc = 0x2e1eacu;
    // NOP
label_2e1eb0:
    // 0x2e1eb0: 0x92030031  lbu         $v1, 0x31($s0)
    ctx->pc = 0x2e1eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x2e1eb4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1EB4u;
    {
        const bool branch_taken_0x2e1eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EB4u;
        // 0x2e1eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1eb4) {
            ctx->pc = 0x2E1ED0u;
            goto label_2e1ed0;
        }
    }
    ctx->pc = 0x2E1EBCu;
    // 0x2e1ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e1ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1ec0: 0xc0b87e4  jal         func_2E1F90
    ctx->pc = 0x2E1EC0u;
    SET_GPR_U32(ctx, 31, 0x2E1EC8u);
    ctx->pc = 0x2E1EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1EC0u;
    // 0x2e1ec4: 0xaf908ab0  sw          $s0, -0x7550($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1F90u, 0x2E1EC0u, 0x2E1EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1EC8u;
label_2e1ec8:
    // 0x2e1ec8: 0xc0b8410  jal         func_2E1040
    ctx->pc = 0x2E1EC8u;
    SET_GPR_U32(ctx, 31, 0x2E1ED0u);
    ctx->pc = 0x2E1ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1EC8u;
    // 0x2e1ecc: 0x8f848ab0  lw          $a0, -0x7550($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1040u, 0x2E1EC8u, 0x2E1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1ED0u;
label_2e1ed0:
    // 0x2e1ed0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e1ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e1ed4: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x2e1ed4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e1ed8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E1ED8u;
    {
        const bool branch_taken_0x2e1ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1ED8u;
        // 0x2e1edc: 0x261006c0  addiu       $s0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ed8) {
            ctx->pc = 0x2E1EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1eb0;
        }
    }
    ctx->pc = 0x2E1EE0u;
    // 0x2e1ee0: 0xaf808ab0  sw          $zero, -0x7550($gp)
    ctx->pc = 0x2e1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 0));
    // 0x2e1ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EF0u;
        // 0x2e1ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1EF8u;
}

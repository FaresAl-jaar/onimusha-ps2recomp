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

// Function: sub_002E20E0
// Address: 0x2e20e0 - 0x2e2170
void sub_002E20E0_0x2e20e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E20E0_0x2e20e0");
#endif

    switch (ctx->pc) {
        case 0x2e2110u: goto label_2e2110;
        case 0x2e2138u: goto label_2e2138;
        case 0x2e2140u: goto label_2e2140;
        default: break;
    }

    ctx->pc = 0x2e20e0u;

    // 0x2e20e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e20e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e20e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e20e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e20e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e20ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e20ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e20f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e20f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e20f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e20f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e20f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e20fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2100: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2e2100u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2e2104: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2e2104u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e2108: 0x26317190  addiu       $s1, $s1, 0x7190
    ctx->pc = 0x2e2108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29072));
    // 0x2e210c: 0x0  nop
    ctx->pc = 0x2e210cu;
    // NOP
label_2e2110:
    // 0x2e2110: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x2e2110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2e2114: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E2114u;
    {
        const bool branch_taken_0x2e2114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e2114) {
            ctx->pc = 0x2E2140u;
            goto label_2e2140;
        }
    }
    ctx->pc = 0x2E211Cu;
    // 0x2e211c: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x2e211cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x2e2120: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2120u;
    {
        const bool branch_taken_0x2e2120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2120u;
        // 0x2e2124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2120) {
            ctx->pc = 0x2E2140u;
            goto label_2e2140;
        }
    }
    ctx->pc = 0x2E2128u;
    // 0x2e2128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e2128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e212c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e212cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2130: 0xc0b885c  jal         func_2E2170
    ctx->pc = 0x2E2130u;
    SET_GPR_U32(ctx, 31, 0x2E2138u);
    ctx->pc = 0x2E2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2130u;
    // 0x2e2134: 0xaf918ab0  sw          $s1, -0x7550($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2170u, 0x2E2130u, 0x2E2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2138u;
label_2e2138:
    // 0x2e2138: 0xc0b8410  jal         func_2E1040
    ctx->pc = 0x2E2138u;
    SET_GPR_U32(ctx, 31, 0x2E2140u);
    ctx->pc = 0x2E213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2138u;
    // 0x2e213c: 0x8f848ab0  lw          $a0, -0x7550($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1040u, 0x2E2138u, 0x2E2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2140u;
label_2e2140:
    // 0x2e2140: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e2140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e2144: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x2e2144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e2148: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E2148u;
    {
        const bool branch_taken_0x2e2148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2148u;
        // 0x2e214c: 0x263106c0  addiu       $s1, $s1, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2148) {
            ctx->pc = 0x2E2110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2110;
        }
    }
    ctx->pc = 0x2E2150u;
    // 0x2e2150: 0xaf808ab0  sw          $zero, -0x7550($gp)
    ctx->pc = 0x2e2150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 0));
    // 0x2e2154: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e2154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e2158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e2158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e215c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e215cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2168: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2168u;
        // 0x2e216c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2170u;
}

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

// Function: sub_001A74D0
// Address: 0x1a74d0 - 0x1a7560
void sub_001A74D0_0x1a74d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A74D0_0x1a74d0");
#endif

    switch (ctx->pc) {
        case 0x1a74f0u: goto label_1a74f0;
        case 0x1a7508u: goto label_1a7508;
        case 0x1a7528u: goto label_1a7528;
        case 0x1a7534u: goto label_1a7534;
        default: break;
    }

    ctx->pc = 0x1a74d0u;

    // 0x1a74d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a74d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a74d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a74d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a74d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a74d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a74dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a74dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a74e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a74e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a74e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a74e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a74e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a74ec: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a74ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a74f0:
    // 0x1a74f0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1a74f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a74f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A74F4u;
    {
        const bool branch_taken_0x1a74f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74f4) {
            ctx->pc = 0x1A7510u;
            goto label_1a7510;
        }
    }
    ctx->pc = 0x1A74FCu;
    // 0x1a74fc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1a74fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a7500: 0xc069d18  jal         func_1A7460
    ctx->pc = 0x1A7500u;
    SET_GPR_U32(ctx, 31, 0x1A7508u);
    ctx->pc = 0x1A7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7500u;
    // 0x1a7504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7460u, 0x1A7500u, 0x1A7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7508u;
label_1a7508:
    // 0x1a7508: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a7508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1a750c: 0x0  nop
    ctx->pc = 0x1a750cu;
    // NOP
label_1a7510:
    // 0x1a7510: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a7510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a7514: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x1a7514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a7518: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A7518u;
    {
        const bool branch_taken_0x1a7518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7518u;
        // 0x1a751c: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7518) {
            ctx->pc = 0x1A74F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a74f0;
        }
    }
    ctx->pc = 0x1A7520u;
    // 0x1a7520: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a7520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7524: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a7524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7528:
    // 0x1a7528: 0x8e257808  lw          $a1, 0x7808($s1)
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30728)));
    // 0x1a752c: 0xc069d18  jal         func_1A7460
    ctx->pc = 0x1A752Cu;
    SET_GPR_U32(ctx, 31, 0x1A7534u);
    ctx->pc = 0x1A7530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A752Cu;
    // 0x1a7530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7460u, 0x1A752Cu, 0x1A7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7534u;
label_1a7534:
    // 0x1a7534: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a7534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a7538: 0xae207808  sw          $zero, 0x7808($s1)
    ctx->pc = 0x1a7538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30728), GPR_U32(ctx, 0));
    // 0x1a753c: 0x2e430005  sltiu       $v1, $s2, 0x5
    ctx->pc = 0x1a753cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a7540: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A7540u;
    {
        const bool branch_taken_0x1a7540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7540u;
        // 0x1a7544: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7540) {
            ctx->pc = 0x1A7528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7528;
        }
    }
    ctx->pc = 0x1A7548u;
    // 0x1a7548: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a7548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a754c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a754cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7558: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7558u;
        // 0x1a755c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7560u;
}

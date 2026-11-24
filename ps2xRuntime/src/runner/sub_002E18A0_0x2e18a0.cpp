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

// Function: sub_002E18A0
// Address: 0x2e18a0 - 0x2e1914
void sub_002E18A0_0x2e18a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E18A0_0x2e18a0");
#endif

    switch (ctx->pc) {
        case 0x2e18d8u: goto label_2e18d8;
        case 0x2e18ecu: goto label_2e18ec;
        default: break;
    }

    ctx->pc = 0x2e18a0u;

    // 0x2e18a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e18a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e18a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e18a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e18a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e18a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e18ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e18acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e18b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e18b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e18b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e18b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e18b8: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2e18b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e18bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e18bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e18c0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E18C0u;
    {
        const bool branch_taken_0x2e18c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e18c0) {
            ctx->pc = 0x2E1900u;
            goto label_2e1900;
        }
    }
    ctx->pc = 0x2E18C8u;
    // 0x2e18c8: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x2e18c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x2e18cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e18ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18d0: 0x26107190  addiu       $s0, $s0, 0x7190
    ctx->pc = 0x2e18d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29072));
    // 0x2e18d4: 0x0  nop
    ctx->pc = 0x2e18d4u;
    // NOP
label_2e18d8:
    // 0x2e18d8: 0x92030031  lbu         $v1, 0x31($s0)
    ctx->pc = 0x2e18d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x2e18dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E18DCu;
    {
        const bool branch_taken_0x2e18dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18DCu;
        // 0x2e18e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18dc) {
            ctx->pc = 0x2E18F0u;
            goto label_2e18f0;
        }
    }
    ctx->pc = 0x2E18E4u;
    // 0x2e18e4: 0xc0b8424  jal         func_2E1090
    ctx->pc = 0x2E18E4u;
    SET_GPR_U32(ctx, 31, 0x2E18ECu);
    ctx->pc = 0x2E18E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E18E4u;
    // 0x2e18e8: 0xaf908ab4  sw          $s0, -0x754C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937268), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1090u, 0x2E18E4u, 0x2E18ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E18ECu;
label_2e18ec:
    // 0x2e18ec: 0xaf808ab4  sw          $zero, -0x754C($gp)
    ctx->pc = 0x2e18ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937268), GPR_U32(ctx, 0));
label_2e18f0:
    // 0x2e18f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e18f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e18f4: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x2e18f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e18f8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E18F8u;
    {
        const bool branch_taken_0x2e18f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18F8u;
        // 0x2e18fc: 0x261006c0  addiu       $s0, $s0, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18f8) {
            ctx->pc = 0x2E18D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e18d8;
        }
    }
    ctx->pc = 0x2E1900u;
label_2e1900:
    // 0x2e1900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e1900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e190c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E190Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E190Cu;
        // 0x2e1910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E190Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1914u;
}

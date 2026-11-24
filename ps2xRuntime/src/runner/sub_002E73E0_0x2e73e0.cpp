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

// Function: sub_002E73E0
// Address: 0x2e73e0 - 0x2e744c
void sub_002E73E0_0x2e73e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E73E0_0x2e73e0");
#endif

    switch (ctx->pc) {
        case 0x2e7420u: goto label_2e7420;
        case 0x2e7430u: goto label_2e7430;
        case 0x2e7440u: goto label_2e7440;
        default: break;
    }

    ctx->pc = 0x2e73e0u;

    // 0x2e73e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e73e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e73e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e73e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e73e8: 0x9082065c  lbu         $v0, 0x65C($a0)
    ctx->pc = 0x2e73e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2e73ec: 0x2442ff7c  addiu       $v0, $v0, -0x84
    ctx->pc = 0x2e73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967164));
    // 0x2e73f0: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x2e73f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e73f4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E73F4u;
    {
        const bool branch_taken_0x2e73f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73F4u;
        // 0x2e73f8: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73f4) {
            ctx->pc = 0x2E7438u;
            goto label_2e7438;
        }
    }
    ctx->pc = 0x2E73FCu;
    // 0x2e73fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e7400: 0x24637b60  addiu       $v1, $v1, 0x7B60
    ctx->pc = 0x2e7400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31584));
    // 0x2e7404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e7408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e7408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e740c: 0x400008  jr          $v0
    ctx->pc = 0x2E740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7418u: goto label_2e7418;
            case 0x2E7428u: goto label_2e7428;
            case 0x2E7438u: goto label_2e7438;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E740Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E7414u;
    // 0x2e7414: 0x0  nop
    ctx->pc = 0x2e7414u;
    // NOP
label_2e7418:
    // 0x2e7418: 0xc0a048c  jal         func_281230
    ctx->pc = 0x2E7418u;
    SET_GPR_U32(ctx, 31, 0x2E7420u);
    ctx->pc = 0x281230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281230u, 0x2E7418u, 0x2E7420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7420u;
label_2e7420:
    // 0x2e7420: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7420u;
    {
        const bool branch_taken_0x2e7420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7420) {
            ctx->pc = 0x2E7440u;
            goto label_2e7440;
        }
    }
    ctx->pc = 0x2E7428u;
label_2e7428:
    // 0x2e7428: 0xc0b9cbc  jal         func_2E72F0
    ctx->pc = 0x2E7428u;
    SET_GPR_U32(ctx, 31, 0x2E7430u);
    ctx->pc = 0x2E72F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E72F0u, 0x2E7428u, 0x2E7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7430u;
label_2e7430:
    // 0x2e7430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7430u;
    {
        const bool branch_taken_0x2e7430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7430) {
            ctx->pc = 0x2E7440u;
            goto label_2e7440;
        }
    }
    ctx->pc = 0x2E7438u;
label_2e7438:
    // 0x2e7438: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x2E7438u;
    SET_GPR_U32(ctx, 31, 0x2E7440u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x2E7438u, 0x2E7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7440u;
label_2e7440:
    // 0x2e7440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7444: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7444u;
        // 0x2e7448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E744Cu;
}

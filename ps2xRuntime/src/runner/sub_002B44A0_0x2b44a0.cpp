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

// Function: sub_002B44A0
// Address: 0x2b44a0 - 0x2b4554
void sub_002B44A0_0x2b44a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B44A0_0x2b44a0");
#endif

    switch (ctx->pc) {
        case 0x2b44d8u: goto label_2b44d8;
        case 0x2b44e8u: goto label_2b44e8;
        case 0x2b44f8u: goto label_2b44f8;
        case 0x2b4508u: goto label_2b4508;
        case 0x2b4518u: goto label_2b4518;
        case 0x2b4528u: goto label_2b4528;
        case 0x2b4538u: goto label_2b4538;
        case 0x2b4548u: goto label_2b4548;
        default: break;
    }

    ctx->pc = 0x2b44a0u;

    // 0x2b44a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b44a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b44a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b44a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b44a8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2b44a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b44ac: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x2b44acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2b44b0: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B44B0u;
    {
        const bool branch_taken_0x2b44b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44B0u;
        // 0x2b44b4: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44b0) {
            ctx->pc = 0x2B4548u;
            goto label_2b4548;
        }
    }
    ctx->pc = 0x2B44B8u;
    // 0x2b44b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b44bc: 0x24c67330  addiu       $a2, $a2, 0x7330
    ctx->pc = 0x2b44bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29488));
    // 0x2b44c0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b44c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b44c8: 0x600008  jr          $v1
    ctx->pc = 0x2B44C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B44D0u: goto label_2b44d0;
            case 0x2B44E0u: goto label_2b44e0;
            case 0x2B44F0u: goto label_2b44f0;
            case 0x2B4500u: goto label_2b4500;
            case 0x2B4510u: goto label_2b4510;
            case 0x2B4520u: goto label_2b4520;
            case 0x2B4530u: goto label_2b4530;
            case 0x2B4540u: goto label_2b4540;
            case 0x2B4548u: goto label_2b4548;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B44C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B44D0u;
label_2b44d0:
    // 0x2b44d0: 0xc0ac5e0  jal         func_2B1780
    ctx->pc = 0x2B44D0u;
    SET_GPR_U32(ctx, 31, 0x2B44D8u);
    ctx->pc = 0x2B44D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44D0u;
    // 0x2b44d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1780u, 0x2B44D0u, 0x2B44D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44D8u;
label_2b44d8:
    // 0x2b44d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2B44D8u;
    {
        const bool branch_taken_0x2b44d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b44d8) {
            ctx->pc = 0x2B4548u;
            goto label_2b4548;
        }
    }
    ctx->pc = 0x2B44E0u;
label_2b44e0:
    // 0x2b44e0: 0xc0ac78c  jal         func_2B1E30
    ctx->pc = 0x2B44E0u;
    SET_GPR_U32(ctx, 31, 0x2B44E8u);
    ctx->pc = 0x2B44E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44E0u;
    // 0x2b44e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1E30u, 0x2B44E0u, 0x2B44E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44E8u;
label_2b44e8:
    // 0x2b44e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B44E8u;
    {
        const bool branch_taken_0x2b44e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b44e8) {
            ctx->pc = 0x2B4548u;
            goto label_2b4548;
        }
    }
    ctx->pc = 0x2B44F0u;
label_2b44f0:
    // 0x2b44f0: 0xc0ac864  jal         func_2B2190
    ctx->pc = 0x2B44F0u;
    SET_GPR_U32(ctx, 31, 0x2B44F8u);
    ctx->pc = 0x2B44F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44F0u;
    // 0x2b44f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2190u, 0x2B44F0u, 0x2B44F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44F8u;
label_2b44f8:
    // 0x2b44f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2B44F8u;
    {
        const bool branch_taken_0x2b44f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b44f8) {
            ctx->pc = 0x2B4548u;
            goto label_2b4548;
        }
    }
    ctx->pc = 0x2B4500u;
label_2b4500:
    // 0x2b4500: 0xc0ac910  jal         func_2B2440
    ctx->pc = 0x2B4500u;
    SET_GPR_U32(ctx, 31, 0x2B4508u);
    ctx->pc = 0x2B4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4500u;
    // 0x2b4504: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2440u, 0x2B4500u, 0x2B4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4508u;
label_2b4508:
    // 0x2b4508: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B4508u;
    {
        const bool branch_taken_0x2b4508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4508) {
            ctx->pc = 0x2B4548u;
            goto label_2b4548;
        }
    }
    ctx->pc = 0x2B4510u;
label_2b4510:
    // 0x2b4510: 0xc0acc5c  jal         func_2B3170
    ctx->pc = 0x2B4510u;
    SET_GPR_U32(ctx, 31, 0x2B4518u);
    ctx->pc = 0x2B3170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3170u, 0x2B4510u, 0x2B4518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4518u;
label_2b4518:
    // 0x2b4518: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B4518u;
    {
        const bool branch_taken_0x2b4518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4518) {
            ctx->pc = 0x2B4548u;
            goto label_2b4548;
        }
    }
    ctx->pc = 0x2B4520u;
label_2b4520:
    // 0x2b4520: 0xc0ac964  jal         func_2B2590
    ctx->pc = 0x2B4520u;
    SET_GPR_U32(ctx, 31, 0x2B4528u);
    ctx->pc = 0x2B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2590u, 0x2B4520u, 0x2B4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4528u;
label_2b4528:
    // 0x2b4528: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4528u;
    {
        const bool branch_taken_0x2b4528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4528) {
            ctx->pc = 0x2B4548u;
            goto label_2b4548;
        }
    }
    ctx->pc = 0x2B4530u;
label_2b4530:
    // 0x2b4530: 0xc0acfe4  jal         func_2B3F90
    ctx->pc = 0x2B4530u;
    SET_GPR_U32(ctx, 31, 0x2B4538u);
    ctx->pc = 0x2B3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F90u, 0x2B4530u, 0x2B4538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4538u;
label_2b4538:
    // 0x2b4538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4538u;
    {
        const bool branch_taken_0x2b4538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4538) {
            ctx->pc = 0x2B4548u;
            goto label_2b4548;
        }
    }
    ctx->pc = 0x2B4540u;
label_2b4540:
    // 0x2b4540: 0xc0ad05c  jal         func_2B4170
    ctx->pc = 0x2B4540u;
    SET_GPR_U32(ctx, 31, 0x2B4548u);
    ctx->pc = 0x2B4170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4170u, 0x2B4540u, 0x2B4548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4548u;
label_2b4548:
    // 0x2b4548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b454c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B454Cu;
        // 0x2b4550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B454Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4554u;
}

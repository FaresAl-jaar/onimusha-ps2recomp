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

// Function: sub_003664C0
// Address: 0x3664c0 - 0x3665b0
void sub_003664C0_0x3664c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003664C0_0x3664c0");
#endif

    switch (ctx->pc) {
        case 0x3664d4u: goto label_3664d4;
        case 0x3664e4u: goto label_3664e4;
        case 0x3664ecu: goto label_3664ec;
        case 0x3664f4u: goto label_3664f4;
        case 0x3664fcu: goto label_3664fc;
        case 0x366520u: goto label_366520;
        case 0x366528u: goto label_366528;
        case 0x366530u: goto label_366530;
        case 0x366538u: goto label_366538;
        case 0x36654cu: goto label_36654c;
        case 0x366558u: goto label_366558;
        case 0x366564u: goto label_366564;
        case 0x366570u: goto label_366570;
        case 0x36657cu: goto label_36657c;
        case 0x366588u: goto label_366588;
        case 0x366594u: goto label_366594;
        case 0x3665a0u: goto label_3665a0;
        default: break;
    }

    ctx->pc = 0x3664c0u;

    // 0x3664c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3664c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3664c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3664c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3664c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3664c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3664cc: 0xc0c0858  jal         func_302160
    ctx->pc = 0x3664CCu;
    SET_GPR_U32(ctx, 31, 0x3664D4u);
    ctx->pc = 0x3664D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664CCu;
    // 0x3664d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x3664CCu, 0x3664D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664D4u;
label_3664d4:
    // 0x3664d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3664D4u;
    {
        const bool branch_taken_0x3664d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3664d4) {
            ctx->pc = 0x366508u;
            goto label_366508;
        }
    }
    ctx->pc = 0x3664DCu;
    // 0x3664dc: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3664DCu;
    SET_GPR_U32(ctx, 31, 0x3664E4u);
    ctx->pc = 0x3664E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664DCu;
    // 0x3664e0: 0x8e040594  lw          $a0, 0x594($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3664DCu, 0x3664E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664E4u;
label_3664e4:
    // 0x3664e4: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3664E4u;
    SET_GPR_U32(ctx, 31, 0x3664ECu);
    ctx->pc = 0x3664E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664E4u;
    // 0x3664e8: 0x8e040598  lw          $a0, 0x598($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3664E4u, 0x3664ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664ECu;
label_3664ec:
    // 0x3664ec: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3664ECu;
    SET_GPR_U32(ctx, 31, 0x3664F4u);
    ctx->pc = 0x3664F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664ECu;
    // 0x3664f0: 0x8e04059c  lw          $a0, 0x59C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3664ECu, 0x3664F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664F4u;
label_3664f4:
    // 0x3664f4: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3664F4u;
    SET_GPR_U32(ctx, 31, 0x3664FCu);
    ctx->pc = 0x3664F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664F4u;
    // 0x3664f8: 0x8e0405a0  lw          $a0, 0x5A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3664F4u, 0x3664FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664FCu;
label_3664fc:
    // 0x3664fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3664FCu;
    {
        const bool branch_taken_0x3664fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3664fc) {
            ctx->pc = 0x3665A0u;
            goto label_3665a0;
        }
    }
    ctx->pc = 0x366504u;
    // 0x366504: 0x0  nop
    ctx->pc = 0x366504u;
    // NOP
label_366508:
    // 0x366508: 0x8c4206ac  lw          $v0, 0x6AC($v0)
    ctx->pc = 0x366508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x36650c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x36650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x366510: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x366510u;
    {
        const bool branch_taken_0x366510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366510) {
            ctx->pc = 0x366540u;
            goto label_366540;
        }
    }
    ctx->pc = 0x366518u;
    // 0x366518: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x366518u;
    SET_GPR_U32(ctx, 31, 0x366520u);
    ctx->pc = 0x36651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366518u;
    // 0x36651c: 0x8e040594  lw          $a0, 0x594($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x366518u, 0x366520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366520u;
label_366520:
    // 0x366520: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x366520u;
    SET_GPR_U32(ctx, 31, 0x366528u);
    ctx->pc = 0x366524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366520u;
    // 0x366524: 0x8e040598  lw          $a0, 0x598($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x366520u, 0x366528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366528u;
label_366528:
    // 0x366528: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x366528u;
    SET_GPR_U32(ctx, 31, 0x366530u);
    ctx->pc = 0x36652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366528u;
    // 0x36652c: 0x8e04059c  lw          $a0, 0x59C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x366528u, 0x366530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366530u;
label_366530:
    // 0x366530: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x366530u;
    SET_GPR_U32(ctx, 31, 0x366538u);
    ctx->pc = 0x366534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366530u;
    // 0x366534: 0x8e0405a0  lw          $a0, 0x5A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x366530u, 0x366538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366538u;
label_366538:
    // 0x366538: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x366538u;
    {
        const bool branch_taken_0x366538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366538) {
            ctx->pc = 0x3665A0u;
            goto label_3665a0;
        }
    }
    ctx->pc = 0x366540u;
label_366540:
    // 0x366540: 0x8e050594  lw          $a1, 0x594($s0)
    ctx->pc = 0x366540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1428)));
    // 0x366544: 0xc0c0844  jal         func_302110
    ctx->pc = 0x366544u;
    SET_GPR_U32(ctx, 31, 0x36654Cu);
    ctx->pc = 0x366548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366544u;
    // 0x366548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x366544u, 0x36654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36654Cu;
label_36654c:
    // 0x36654c: 0x8e050598  lw          $a1, 0x598($s0)
    ctx->pc = 0x36654cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x366550: 0xc0c0844  jal         func_302110
    ctx->pc = 0x366550u;
    SET_GPR_U32(ctx, 31, 0x366558u);
    ctx->pc = 0x366554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366550u;
    // 0x366554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x366550u, 0x366558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366558u;
label_366558:
    // 0x366558: 0x8e05059c  lw          $a1, 0x59C($s0)
    ctx->pc = 0x366558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
    // 0x36655c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x36655Cu;
    SET_GPR_U32(ctx, 31, 0x366564u);
    ctx->pc = 0x366560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36655Cu;
    // 0x366560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x36655Cu, 0x366564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366564u;
label_366564:
    // 0x366564: 0x8e0505a0  lw          $a1, 0x5A0($s0)
    ctx->pc = 0x366564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x366568: 0xc0c0844  jal         func_302110
    ctx->pc = 0x366568u;
    SET_GPR_U32(ctx, 31, 0x366570u);
    ctx->pc = 0x36656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366568u;
    // 0x36656c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x366568u, 0x366570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366570u;
label_366570:
    // 0x366570: 0x8e040594  lw          $a0, 0x594($s0)
    ctx->pc = 0x366570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1428)));
    // 0x366574: 0xc096c7c  jal         func_25B1F0
    ctx->pc = 0x366574u;
    SET_GPR_U32(ctx, 31, 0x36657Cu);
    ctx->pc = 0x366578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366574u;
    // 0x366578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B1F0u, 0x366574u, 0x36657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36657Cu;
label_36657c:
    // 0x36657c: 0x8e040598  lw          $a0, 0x598($s0)
    ctx->pc = 0x36657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x366580: 0xc096c7c  jal         func_25B1F0
    ctx->pc = 0x366580u;
    SET_GPR_U32(ctx, 31, 0x366588u);
    ctx->pc = 0x366584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366580u;
    // 0x366584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B1F0u, 0x366580u, 0x366588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366588u;
label_366588:
    // 0x366588: 0x8e04059c  lw          $a0, 0x59C($s0)
    ctx->pc = 0x366588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
    // 0x36658c: 0xc096c7c  jal         func_25B1F0
    ctx->pc = 0x36658Cu;
    SET_GPR_U32(ctx, 31, 0x366594u);
    ctx->pc = 0x366590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36658Cu;
    // 0x366590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B1F0u, 0x36658Cu, 0x366594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366594u;
label_366594:
    // 0x366594: 0x8e0405a0  lw          $a0, 0x5A0($s0)
    ctx->pc = 0x366594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
    // 0x366598: 0xc096c7c  jal         func_25B1F0
    ctx->pc = 0x366598u;
    SET_GPR_U32(ctx, 31, 0x3665A0u);
    ctx->pc = 0x36659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366598u;
    // 0x36659c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B1F0u, 0x366598u, 0x3665A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3665A0u;
label_3665a0:
    // 0x3665a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3665a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3665a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3665a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3665a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3665A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3665ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3665A8u;
        // 0x3665ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3665A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3665B0u;
}

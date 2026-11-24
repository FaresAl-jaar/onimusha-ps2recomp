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

// Function: sub_001E7510
// Address: 0x1e7510 - 0x1e75c4
void sub_001E7510_0x1e7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7510_0x1e7510");
#endif

    switch (ctx->pc) {
        case 0x1e7510u: goto label_1e7510;
        case 0x1e7514u: goto label_1e7514;
        case 0x1e7518u: goto label_1e7518;
        case 0x1e751cu: goto label_1e751c;
        case 0x1e7520u: goto label_1e7520;
        case 0x1e7524u: goto label_1e7524;
        case 0x1e7528u: goto label_1e7528;
        case 0x1e752cu: goto label_1e752c;
        case 0x1e7530u: goto label_1e7530;
        case 0x1e7534u: goto label_1e7534;
        case 0x1e7538u: goto label_1e7538;
        case 0x1e753cu: goto label_1e753c;
        case 0x1e7540u: goto label_1e7540;
        case 0x1e7544u: goto label_1e7544;
        case 0x1e7548u: goto label_1e7548;
        case 0x1e754cu: goto label_1e754c;
        case 0x1e7550u: goto label_1e7550;
        case 0x1e7554u: goto label_1e7554;
        case 0x1e7558u: goto label_1e7558;
        case 0x1e755cu: goto label_1e755c;
        case 0x1e7560u: goto label_1e7560;
        case 0x1e7564u: goto label_1e7564;
        case 0x1e7568u: goto label_1e7568;
        case 0x1e756cu: goto label_1e756c;
        case 0x1e7570u: goto label_1e7570;
        case 0x1e7574u: goto label_1e7574;
        case 0x1e7578u: goto label_1e7578;
        case 0x1e757cu: goto label_1e757c;
        case 0x1e7580u: goto label_1e7580;
        case 0x1e7584u: goto label_1e7584;
        case 0x1e7588u: goto label_1e7588;
        case 0x1e758cu: goto label_1e758c;
        case 0x1e7590u: goto label_1e7590;
        case 0x1e7594u: goto label_1e7594;
        case 0x1e7598u: goto label_1e7598;
        case 0x1e759cu: goto label_1e759c;
        case 0x1e75a0u: goto label_1e75a0;
        case 0x1e75a4u: goto label_1e75a4;
        case 0x1e75a8u: goto label_1e75a8;
        case 0x1e75acu: goto label_1e75ac;
        case 0x1e75b0u: goto label_1e75b0;
        case 0x1e75b4u: goto label_1e75b4;
        case 0x1e75b8u: goto label_1e75b8;
        case 0x1e75bcu: goto label_1e75bc;
        case 0x1e75c0u: goto label_1e75c0;
        default: break;
    }

    ctx->pc = 0x1e7510u;

label_1e7510:
    // 0x1e7510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e7514:
    // 0x1e7514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e7518:
    // 0x1e7518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e751c:
    // 0x1e751c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7520:
    // 0x1e7520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7524:
    // 0x1e7524: 0xc078684  jal         func_1E1A10
label_1e7528:
    if (ctx->pc == 0x1E7528u) {
        ctx->pc = 0x1E7528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7524u;
        // 0x1e7528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E752Cu;
        goto label_1e752c;
    }
    ctx->pc = 0x1E7524u;
    SET_GPR_U32(ctx, 31, 0x1E752Cu);
    ctx->pc = 0x1E7528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7524u;
    // 0x1e7528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E7524u, 0x1E752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E752Cu;
label_1e752c:
    // 0x1e752c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1e752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e7530:
    // 0x1e7530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7534:
    // 0x1e7534: 0xc076bec  jal         func_1DAFB0
label_1e7538:
    if (ctx->pc == 0x1E7538u) {
        ctx->pc = 0x1E7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7534u;
        // 0x1e7538: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E753Cu;
        goto label_1e753c;
    }
    ctx->pc = 0x1E7534u;
    SET_GPR_U32(ctx, 31, 0x1E753Cu);
    ctx->pc = 0x1E7538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7534u;
    // 0x1e7538: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E7534u, 0x1E753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E753Cu;
label_1e753c:
    // 0x1e753c: 0x7a220060  lq          $v0, 0x60($s1)
    ctx->pc = 0x1e753cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 96)));
label_1e7540:
    // 0x1e7540: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1e7540u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_1e7544:
    // 0x1e7544: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1e7544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7548:
    // 0x1e7548: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1e7548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_1e754c:
    // 0x1e754c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1e754cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
label_1e7550:
    // 0x1e7550: 0xa2200074  sb          $zero, 0x74($s1)
    ctx->pc = 0x1e7550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 0));
label_1e7554:
    // 0x1e7554: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x1e7554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_1e7558:
    // 0x1e7558: 0x92240031  lbu         $a0, 0x31($s1)
    ctx->pc = 0x1e7558u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_1e755c:
    // 0x1e755c: 0x92250033  lbu         $a1, 0x33($s1)
    ctx->pc = 0x1e755cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
label_1e7560:
    // 0x1e7560: 0xc0b3068  jal         func_2CC1A0
label_1e7564:
    if (ctx->pc == 0x1E7564u) {
        ctx->pc = 0x1E7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7560u;
        // 0x1e7564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7568u;
        goto label_1e7568;
    }
    ctx->pc = 0x1E7560u;
    SET_GPR_U32(ctx, 31, 0x1E7568u);
    ctx->pc = 0x1E7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7560u;
    // 0x1e7564: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC1A0u, 0x1E7560u, 0x1E7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7568u;
label_1e7568:
    // 0x1e7568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e7568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e756c:
    // 0x1e756c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e7570:
    if (ctx->pc == 0x1E7570u) {
        ctx->pc = 0x1E7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E756Cu;
        // 0x1e7570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7574u;
        goto label_1e7574;
    }
    ctx->pc = 0x1E756Cu;
    {
        const bool branch_taken_0x1e756c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E756Cu;
        // 0x1e7570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e756c) {
            ctx->pc = 0x1E7590u;
            goto label_1e7590;
        }
    }
    ctx->pc = 0x1E7574u;
label_1e7574:
    // 0x1e7574: 0xc0a6c8c  jal         func_29B230
label_1e7578:
    if (ctx->pc == 0x1E7578u) {
        ctx->pc = 0x1E757Cu;
        goto label_1e757c;
    }
    ctx->pc = 0x1E7574u;
    SET_GPR_U32(ctx, 31, 0x1E757Cu);
    ctx->pc = 0x29B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B230u, 0x1E7574u, 0x1E757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E757Cu;
label_1e757c:
    // 0x1e757c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e7580:
    // 0x1e7580: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1e7580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e7584:
    // 0x1e7584: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e7584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e7588:
    // 0x1e7588: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e758c:
    if (ctx->pc == 0x1E758Cu) {
        ctx->pc = 0x1E758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7588u;
        // 0x1e758c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7590u;
        goto label_1e7590;
    }
    ctx->pc = 0x1E7588u;
    {
        const bool branch_taken_0x1e7588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7588u;
        // 0x1e758c: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7588) {
            ctx->pc = 0x1E75A8u;
            goto label_1e75a8;
        }
    }
    ctx->pc = 0x1E7590u;
label_1e7590:
    // 0x1e7590: 0x8e390020  lw          $t9, 0x20($s1)
    ctx->pc = 0x1e7590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1e7594:
    // 0x1e7594: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e7594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e7598:
    // 0x1e7598: 0x320f809  jalr        $t9
label_1e759c:
    if (ctx->pc == 0x1E759Cu) {
        ctx->pc = 0x1E759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7598u;
        // 0x1e759c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E75A0u;
        goto label_1e75a0;
    }
    ctx->pc = 0x1E7598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E75A0u);
        ctx->pc = 0x1E759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7598u;
        // 0x1e759c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7598u, 0x1E75A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E75A0u;
label_1e75a0:
    // 0x1e75a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e75a4:
    if (ctx->pc == 0x1E75A4u) {
        ctx->pc = 0x1E75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75A0u;
        // 0x1e75a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E75A8u;
        goto label_1e75a8;
    }
    ctx->pc = 0x1E75A0u;
    {
        const bool branch_taken_0x1e75a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75A0u;
        // 0x1e75a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75a0) {
            ctx->pc = 0x1E75B0u;
            goto label_1e75b0;
        }
    }
    ctx->pc = 0x1E75A8u;
label_1e75a8:
    // 0x1e75a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e75ac:
    // 0x1e75ac: 0x0  nop
    ctx->pc = 0x1e75acu;
    // NOP
label_1e75b0:
    // 0x1e75b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e75b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e75b4:
    // 0x1e75b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e75b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e75b8:
    // 0x1e75b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e75b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e75bc:
    // 0x1e75bc: 0x3e00008  jr          $ra
label_1e75c0:
    if (ctx->pc == 0x1E75C0u) {
        ctx->pc = 0x1E75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75BCu;
        // 0x1e75c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E75C4u;
        goto label_fallthrough_0x1e75bc;
    }
    ctx->pc = 0x1E75BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75BCu;
        // 0x1e75c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E75BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e75bc:
    ctx->pc = 0x1E75C4u;
}

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

// Function: sub_00244508
// Address: 0x244508 - 0x2445d4
void sub_00244508_0x244508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244508_0x244508");
#endif

    switch (ctx->pc) {
        case 0x244508u: goto label_244508;
        case 0x24450cu: goto label_24450c;
        case 0x244510u: goto label_244510;
        case 0x244514u: goto label_244514;
        case 0x244518u: goto label_244518;
        case 0x24451cu: goto label_24451c;
        case 0x244520u: goto label_244520;
        case 0x244524u: goto label_244524;
        case 0x244528u: goto label_244528;
        case 0x24452cu: goto label_24452c;
        case 0x244530u: goto label_244530;
        case 0x244534u: goto label_244534;
        case 0x244538u: goto label_244538;
        case 0x24453cu: goto label_24453c;
        case 0x244540u: goto label_244540;
        case 0x244544u: goto label_244544;
        case 0x244548u: goto label_244548;
        case 0x24454cu: goto label_24454c;
        case 0x244550u: goto label_244550;
        case 0x244554u: goto label_244554;
        case 0x244558u: goto label_244558;
        case 0x24455cu: goto label_24455c;
        case 0x244560u: goto label_244560;
        case 0x244564u: goto label_244564;
        case 0x244568u: goto label_244568;
        case 0x24456cu: goto label_24456c;
        case 0x244570u: goto label_244570;
        case 0x244574u: goto label_244574;
        case 0x244578u: goto label_244578;
        case 0x24457cu: goto label_24457c;
        case 0x244580u: goto label_244580;
        case 0x244584u: goto label_244584;
        case 0x244588u: goto label_244588;
        case 0x24458cu: goto label_24458c;
        case 0x244590u: goto label_244590;
        case 0x244594u: goto label_244594;
        case 0x244598u: goto label_244598;
        case 0x24459cu: goto label_24459c;
        case 0x2445a0u: goto label_2445a0;
        case 0x2445a4u: goto label_2445a4;
        case 0x2445a8u: goto label_2445a8;
        case 0x2445acu: goto label_2445ac;
        case 0x2445b0u: goto label_2445b0;
        case 0x2445b4u: goto label_2445b4;
        case 0x2445b8u: goto label_2445b8;
        case 0x2445bcu: goto label_2445bc;
        case 0x2445c0u: goto label_2445c0;
        case 0x2445c4u: goto label_2445c4;
        case 0x2445c8u: goto label_2445c8;
        case 0x2445ccu: goto label_2445cc;
        case 0x2445d0u: goto label_2445d0;
        default: break;
    }

    ctx->pc = 0x244508u;

label_244508:
    // 0x244508: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x244508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_24450c:
    // 0x24450c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x24450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_244510:
    // 0x244510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244514:
    // 0x244514: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x244514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_244518:
    // 0x244518: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x244518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24451c:
    // 0x24451c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x24451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_244520:
    // 0x244520: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_244524:
    if (ctx->pc == 0x244524u) {
        ctx->pc = 0x244524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244520u;
        // 0x244524: 0xffbf0278  sd          $ra, 0x278($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244528u;
        goto label_244528;
    }
    ctx->pc = 0x244520u;
    {
        const bool branch_taken_0x244520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x244524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244520u;
        // 0x244524: 0xffbf0278  sd          $ra, 0x278($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244520) {
            ctx->pc = 0x244538u;
            goto label_244538;
        }
    }
    ctx->pc = 0x244528u;
label_244528:
    // 0x244528: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24452c:
    // 0x24452c: 0x10000020  b           . + 4 + (0x20 << 2)
label_244530:
    if (ctx->pc == 0x244530u) {
        ctx->pc = 0x244530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24452Cu;
        // 0x244530: 0x2484bf40  addiu       $a0, $a0, -0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244534u;
        goto label_244534;
    }
    ctx->pc = 0x24452Cu;
    {
        const bool branch_taken_0x24452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24452Cu;
        // 0x244530: 0x2484bf40  addiu       $a0, $a0, -0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24452c) {
            ctx->pc = 0x2445B0u;
            goto label_2445b0;
        }
    }
    ctx->pc = 0x244534u;
label_244534:
    // 0x244534: 0x0  nop
    ctx->pc = 0x244534u;
    // NOP
label_244538:
    // 0x244538: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x244538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_24453c:
    // 0x24453c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24453cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244540:
    // 0x244540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244544:
    // 0x244544: 0xc090fbe  jal         func_243EF8
label_244548:
    if (ctx->pc == 0x244548u) {
        ctx->pc = 0x244548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244544u;
        // 0x244548: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24454Cu;
        goto label_24454c;
    }
    ctx->pc = 0x244544u;
    SET_GPR_U32(ctx, 31, 0x24454Cu);
    ctx->pc = 0x244548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244544u;
    // 0x244548: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x244544u, 0x24454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24454Cu;
label_24454c:
    // 0x24454c: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x24454cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_244550:
    // 0x244550: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_244554:
    if (ctx->pc == 0x244554u) {
        ctx->pc = 0x244554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244550u;
        // 0x244554: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244558u;
        goto label_244558;
    }
    ctx->pc = 0x244550u;
    {
        const bool branch_taken_0x244550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244550u;
        // 0x244554: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244550) {
            ctx->pc = 0x244568u;
            goto label_244568;
        }
    }
    ctx->pc = 0x244558u;
label_244558:
    // 0x244558: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24455c:
    // 0x24455c: 0x10000014  b           . + 4 + (0x14 << 2)
label_244560:
    if (ctx->pc == 0x244560u) {
        ctx->pc = 0x244560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24455Cu;
        // 0x244560: 0x2484bf40  addiu       $a0, $a0, -0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244564u;
        goto label_244564;
    }
    ctx->pc = 0x24455Cu;
    {
        const bool branch_taken_0x24455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24455Cu;
        // 0x244560: 0x2484bf40  addiu       $a0, $a0, -0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24455c) {
            ctx->pc = 0x2445B0u;
            goto label_2445b0;
        }
    }
    ctx->pc = 0x244564u;
label_244564:
    // 0x244564: 0x0  nop
    ctx->pc = 0x244564u;
    // NOP
label_244568:
    // 0x244568: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24456c:
    // 0x24456c: 0xc090f2c  jal         func_243CB0
label_244570:
    if (ctx->pc == 0x244570u) {
        ctx->pc = 0x244570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24456Cu;
        // 0x244570: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244574u;
        goto label_244574;
    }
    ctx->pc = 0x24456Cu;
    SET_GPR_U32(ctx, 31, 0x244574u);
    ctx->pc = 0x244570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24456Cu;
    // 0x244570: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CB0u, 0x24456Cu, 0x244574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244574u;
label_244574:
    // 0x244574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244578:
    // 0x244578: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_24457c:
    if (ctx->pc == 0x24457Cu) {
        ctx->pc = 0x24457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244578u;
        // 0x24457c: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244580u;
        goto label_244580;
    }
    ctx->pc = 0x244578u;
    {
        const bool branch_taken_0x244578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x244578) {
            ctx->pc = 0x24457Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244578u;
            // 0x24457c: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244590u;
            goto label_244590;
        }
    }
    ctx->pc = 0x244580u;
label_244580:
    // 0x244580: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244584:
    // 0x244584: 0xc090d8a  jal         func_243628
label_244588:
    if (ctx->pc == 0x244588u) {
        ctx->pc = 0x244588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244584u;
        // 0x244588: 0x2484bf98  addiu       $a0, $a0, -0x4068 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24458Cu;
        goto label_24458c;
    }
    ctx->pc = 0x244584u;
    SET_GPR_U32(ctx, 31, 0x24458Cu);
    ctx->pc = 0x244588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244584u;
    // 0x244588: 0x2484bf98  addiu       $a0, $a0, -0x4068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244584u, 0x24458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24458Cu;
label_24458c:
    // 0x24458c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x24458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_244590:
    // 0x244590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_244594:
    if (ctx->pc == 0x244594u) {
        ctx->pc = 0x244594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244590u;
        // 0x244594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244598u;
        goto label_244598;
    }
    ctx->pc = 0x244590u;
    {
        const bool branch_taken_0x244590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244590u;
        // 0x244594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244590) {
            ctx->pc = 0x2445A8u;
            goto label_2445a8;
        }
    }
    ctx->pc = 0x244598u;
label_244598:
    // 0x244598: 0x40f809  jalr        $v0
label_24459c:
    if (ctx->pc == 0x24459Cu) {
        ctx->pc = 0x24459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244598u;
        // 0x24459c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445A0u;
        goto label_2445a0;
    }
    ctx->pc = 0x244598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2445A0u);
        ctx->pc = 0x24459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244598u;
        // 0x24459c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244598u, 0x2445A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2445A0u;
label_2445a0:
    // 0x2445a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2445a4:
    if (ctx->pc == 0x2445A4u) {
        ctx->pc = 0x2445A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445A0u;
        // 0x2445a4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445A8u;
        goto label_2445a8;
    }
    ctx->pc = 0x2445A0u;
    {
        const bool branch_taken_0x2445a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445A0u;
        // 0x2445a4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445a0) {
            ctx->pc = 0x2445C0u;
            goto label_2445c0;
        }
    }
    ctx->pc = 0x2445A8u;
label_2445a8:
    // 0x2445a8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2445a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2445ac:
    // 0x2445ac: 0x2484bfc0  addiu       $a0, $a0, -0x4040
    ctx->pc = 0x2445acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950848));
label_2445b0:
    // 0x2445b0: 0xc090d8a  jal         func_243628
label_2445b4:
    if (ctx->pc == 0x2445B4u) {
        ctx->pc = 0x2445B8u;
        goto label_2445b8;
    }
    ctx->pc = 0x2445B0u;
    SET_GPR_U32(ctx, 31, 0x2445B8u);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2445B0u, 0x2445B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2445B8u;
label_2445b8:
    // 0x2445b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2445b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2445bc:
    // 0x2445bc: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x2445bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_2445c0:
    // 0x2445c0: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x2445c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_2445c4:
    // 0x2445c4: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x2445c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_2445c8:
    // 0x2445c8: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x2445c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_2445cc:
    // 0x2445cc: 0x3e00008  jr          $ra
label_2445d0:
    if (ctx->pc == 0x2445D0u) {
        ctx->pc = 0x2445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445CCu;
        // 0x2445d0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445D4u;
        goto label_fallthrough_0x2445cc;
    }
    ctx->pc = 0x2445CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445CCu;
        // 0x2445d0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2445CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2445cc:
    ctx->pc = 0x2445D4u;
}

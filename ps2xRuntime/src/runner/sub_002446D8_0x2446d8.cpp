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

// Function: sub_002446D8
// Address: 0x2446d8 - 0x244818
void sub_002446D8_0x2446d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002446D8_0x2446d8");
#endif

    switch (ctx->pc) {
        case 0x2446d8u: goto label_2446d8;
        case 0x2446dcu: goto label_2446dc;
        case 0x2446e0u: goto label_2446e0;
        case 0x2446e4u: goto label_2446e4;
        case 0x2446e8u: goto label_2446e8;
        case 0x2446ecu: goto label_2446ec;
        case 0x2446f0u: goto label_2446f0;
        case 0x2446f4u: goto label_2446f4;
        case 0x2446f8u: goto label_2446f8;
        case 0x2446fcu: goto label_2446fc;
        case 0x244700u: goto label_244700;
        case 0x244704u: goto label_244704;
        case 0x244708u: goto label_244708;
        case 0x24470cu: goto label_24470c;
        case 0x244710u: goto label_244710;
        case 0x244714u: goto label_244714;
        case 0x244718u: goto label_244718;
        case 0x24471cu: goto label_24471c;
        case 0x244720u: goto label_244720;
        case 0x244724u: goto label_244724;
        case 0x244728u: goto label_244728;
        case 0x24472cu: goto label_24472c;
        case 0x244730u: goto label_244730;
        case 0x244734u: goto label_244734;
        case 0x244738u: goto label_244738;
        case 0x24473cu: goto label_24473c;
        case 0x244740u: goto label_244740;
        case 0x244744u: goto label_244744;
        case 0x244748u: goto label_244748;
        case 0x24474cu: goto label_24474c;
        case 0x244750u: goto label_244750;
        case 0x244754u: goto label_244754;
        case 0x244758u: goto label_244758;
        case 0x24475cu: goto label_24475c;
        case 0x244760u: goto label_244760;
        case 0x244764u: goto label_244764;
        case 0x244768u: goto label_244768;
        case 0x24476cu: goto label_24476c;
        case 0x244770u: goto label_244770;
        case 0x244774u: goto label_244774;
        case 0x244778u: goto label_244778;
        case 0x24477cu: goto label_24477c;
        case 0x244780u: goto label_244780;
        case 0x244784u: goto label_244784;
        case 0x244788u: goto label_244788;
        case 0x24478cu: goto label_24478c;
        case 0x244790u: goto label_244790;
        case 0x244794u: goto label_244794;
        case 0x244798u: goto label_244798;
        case 0x24479cu: goto label_24479c;
        case 0x2447a0u: goto label_2447a0;
        case 0x2447a4u: goto label_2447a4;
        case 0x2447a8u: goto label_2447a8;
        case 0x2447acu: goto label_2447ac;
        case 0x2447b0u: goto label_2447b0;
        case 0x2447b4u: goto label_2447b4;
        case 0x2447b8u: goto label_2447b8;
        case 0x2447bcu: goto label_2447bc;
        case 0x2447c0u: goto label_2447c0;
        case 0x2447c4u: goto label_2447c4;
        case 0x2447c8u: goto label_2447c8;
        case 0x2447ccu: goto label_2447cc;
        case 0x2447d0u: goto label_2447d0;
        case 0x2447d4u: goto label_2447d4;
        case 0x2447d8u: goto label_2447d8;
        case 0x2447dcu: goto label_2447dc;
        case 0x2447e0u: goto label_2447e0;
        case 0x2447e4u: goto label_2447e4;
        case 0x2447e8u: goto label_2447e8;
        case 0x2447ecu: goto label_2447ec;
        case 0x2447f0u: goto label_2447f0;
        case 0x2447f4u: goto label_2447f4;
        case 0x2447f8u: goto label_2447f8;
        case 0x2447fcu: goto label_2447fc;
        case 0x244800u: goto label_244800;
        case 0x244804u: goto label_244804;
        case 0x244808u: goto label_244808;
        case 0x24480cu: goto label_24480c;
        case 0x244810u: goto label_244810;
        case 0x244814u: goto label_244814;
        default: break;
    }

    ctx->pc = 0x2446d8u;

label_2446d8:
    // 0x2446d8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_2446dc:
    // 0x2446dc: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x2446dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
label_2446e0:
    // 0x2446e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2446e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2446e4:
    // 0x2446e4: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x2446e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
label_2446e8:
    // 0x2446e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2446e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2446ec:
    // 0x2446ec: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x2446ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
label_2446f0:
    // 0x2446f0: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x2446f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
label_2446f4:
    // 0x2446f4: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x2446f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
label_2446f8:
    // 0x2446f8: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x2446f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
label_2446fc:
    // 0x2446fc: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x2446fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
label_244700:
    // 0x244700: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_244704:
    if (ctx->pc == 0x244704u) {
        ctx->pc = 0x244704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244700u;
        // 0x244704: 0xffbf0168  sd          $ra, 0x168($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244708u;
        goto label_244708;
    }
    ctx->pc = 0x244700u;
    {
        const bool branch_taken_0x244700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x244704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244700u;
        // 0x244704: 0xffbf0168  sd          $ra, 0x168($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244700) {
            ctx->pc = 0x244714u;
            goto label_244714;
        }
    }
    ctx->pc = 0x244708u;
label_244708:
    // 0x244708: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x244708u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_24470c:
    // 0x24470c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_244710:
    if (ctx->pc == 0x244710u) {
        ctx->pc = 0x244714u;
        goto label_244714;
    }
    ctx->pc = 0x24470Cu;
    {
        const bool branch_taken_0x24470c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24470c) {
            ctx->pc = 0x244738u;
            goto label_244738;
        }
    }
    ctx->pc = 0x244714u;
label_244714:
    // 0x244714: 0xc091010  jal         func_244040
label_244718:
    if (ctx->pc == 0x244718u) {
        ctx->pc = 0x244718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244714u;
        // 0x244718: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24471Cu;
        goto label_24471c;
    }
    ctx->pc = 0x244714u;
    SET_GPR_U32(ctx, 31, 0x24471Cu);
    ctx->pc = 0x244718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244714u;
    // 0x244718: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x244714u, 0x24471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24471Cu;
label_24471c:
    // 0x24471c: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x24471cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_244720:
    // 0x244720: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_244724:
    if (ctx->pc == 0x244724u) {
        ctx->pc = 0x244728u;
        goto label_244728;
    }
    ctx->pc = 0x244720u;
    {
        const bool branch_taken_0x244720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244720) {
            ctx->pc = 0x244750u;
            goto label_244750;
        }
    }
    ctx->pc = 0x244728u;
label_244728:
    // 0x244728: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24472c:
    // 0x24472c: 0x10000028  b           . + 4 + (0x28 << 2)
label_244730:
    if (ctx->pc == 0x244730u) {
        ctx->pc = 0x244730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24472Cu;
        // 0x244730: 0x2484c038  addiu       $a0, $a0, -0x3FC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244734u;
        goto label_244734;
    }
    ctx->pc = 0x24472Cu;
    {
        const bool branch_taken_0x24472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24472Cu;
        // 0x244730: 0x2484c038  addiu       $a0, $a0, -0x3FC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24472c) {
            ctx->pc = 0x2447D0u;
            goto label_2447d0;
        }
    }
    ctx->pc = 0x244734u;
label_244734:
    // 0x244734: 0x0  nop
    ctx->pc = 0x244734u;
    // NOP
label_244738:
    // 0x244738: 0xc049f18  jal         func_127C60
label_24473c:
    if (ctx->pc == 0x24473Cu) {
        ctx->pc = 0x244740u;
        goto label_244740;
    }
    ctx->pc = 0x244738u;
    SET_GPR_U32(ctx, 31, 0x244740u);
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x244738u, 0x244740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244740u;
label_244740:
    // 0x244740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x244740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244744:
    // 0x244744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244748:
    // 0x244748: 0xc049522  jal         func_125488
label_24474c:
    if (ctx->pc == 0x24474Cu) {
        ctx->pc = 0x24474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244748u;
        // 0x24474c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244750u;
        goto label_244750;
    }
    ctx->pc = 0x244748u;
    SET_GPR_U32(ctx, 31, 0x244750u);
    ctx->pc = 0x24474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244748u;
    // 0x24474c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x244748u, 0x244750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244750u;
label_244750:
    // 0x244750: 0xc049f18  jal         func_127C60
label_244754:
    if (ctx->pc == 0x244754u) {
        ctx->pc = 0x244754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244750u;
        // 0x244754: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244758u;
        goto label_244758;
    }
    ctx->pc = 0x244750u;
    SET_GPR_U32(ctx, 31, 0x244758u);
    ctx->pc = 0x244754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244750u;
    // 0x244754: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x244750u, 0x244758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244758u;
label_244758:
    // 0x244758: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x244758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24475c:
    // 0x24475c: 0x5e400004  bgtzl       $s2, . + 4 + (0x4 << 2)
label_244760:
    if (ctx->pc == 0x244760u) {
        ctx->pc = 0x244760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24475Cu;
        // 0x244760: 0x3c020088  lui         $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244764u;
        goto label_244764;
    }
    ctx->pc = 0x24475Cu;
    {
        const bool branch_taken_0x24475c = (GPR_S64(ctx, 18) > 0);
        if (branch_taken_0x24475c) {
            ctx->pc = 0x244760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24475Cu;
            // 0x244760: 0x3c020088  lui         $v0, 0x88 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244770u;
            goto label_244770;
        }
    }
    ctx->pc = 0x244764u;
label_244764:
    // 0x244764: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244768:
    // 0x244768: 0x10000019  b           . + 4 + (0x19 << 2)
label_24476c:
    if (ctx->pc == 0x24476Cu) {
        ctx->pc = 0x24476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244768u;
        // 0x24476c: 0x2484c038  addiu       $a0, $a0, -0x3FC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244770u;
        goto label_244770;
    }
    ctx->pc = 0x244768u;
    {
        const bool branch_taken_0x244768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244768u;
        // 0x24476c: 0x2484c038  addiu       $a0, $a0, -0x3FC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244768) {
            ctx->pc = 0x2447D0u;
            goto label_2447d0;
        }
    }
    ctx->pc = 0x244770u;
label_244770:
    // 0x244770: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x244770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244774:
    // 0x244774: 0x24535f44  addiu       $s3, $v0, 0x5F44
    ctx->pc = 0x244774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24388));
label_244778:
    // 0x244778: 0x3c160067  lui         $s6, 0x67
    ctx->pc = 0x244778u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)103 << 16));
label_24477c:
    // 0x24477c: 0x2675fffc  addiu       $s5, $s3, -0x4
    ctx->pc = 0x24477cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_244780:
    // 0x244780: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x244780u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_244784:
    // 0x244784: 0x0  nop
    ctx->pc = 0x244784u;
    // NOP
label_244788:
    // 0x244788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x244788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24478c:
    // 0x24478c: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x24478cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_244790:
    // 0x244790: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x244790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_244794:
    // 0x244794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244798:
    // 0x244798: 0xc049fd2  jal         func_127F48
label_24479c:
    if (ctx->pc == 0x24479Cu) {
        ctx->pc = 0x24479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244798u;
        // 0x24479c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447A0u;
        goto label_2447a0;
    }
    ctx->pc = 0x244798u;
    SET_GPR_U32(ctx, 31, 0x2447A0u);
    ctx->pc = 0x24479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244798u;
    // 0x24479c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x244798u, 0x2447A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447A0u;
label_2447a0:
    // 0x2447a0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2447a4:
    if (ctx->pc == 0x2447A4u) {
        ctx->pc = 0x2447A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447A0u;
        // 0x2447a4: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447A8u;
        goto label_2447a8;
    }
    ctx->pc = 0x2447A0u;
    {
        const bool branch_taken_0x2447a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2447a0) {
            ctx->pc = 0x2447A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2447A0u;
            // 0x2447a4: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2447E4u;
            goto label_2447e4;
        }
    }
    ctx->pc = 0x2447A8u;
label_2447a8:
    // 0x2447a8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2447a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2447ac:
    // 0x2447ac: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2447b0:
    if (ctx->pc == 0x2447B0u) {
        ctx->pc = 0x2447B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447ACu;
        // 0x2447b0: 0x26c4c060  addiu       $a0, $s6, -0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447B4u;
        goto label_2447b4;
    }
    ctx->pc = 0x2447ACu;
    {
        const bool branch_taken_0x2447ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447ACu;
        // 0x2447b0: 0x26c4c060  addiu       $a0, $s6, -0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447ac) {
            ctx->pc = 0x2447D0u;
            goto label_2447d0;
        }
    }
    ctx->pc = 0x2447B4u;
label_2447b4:
    // 0x2447b4: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x2447b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2447b8:
    // 0x2447b8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2447bc:
    if (ctx->pc == 0x2447BCu) {
        ctx->pc = 0x2447BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447B8u;
        // 0x2447bc: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447C0u;
        goto label_2447c0;
    }
    ctx->pc = 0x2447B8u;
    {
        const bool branch_taken_0x2447b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2447b8) {
            ctx->pc = 0x2447BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2447B8u;
            // 0x2447bc: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2447E4u;
            goto label_2447e4;
        }
    }
    ctx->pc = 0x2447C0u;
label_2447c0:
    // 0x2447c0: 0x200f809  jalr        $s0
label_2447c4:
    if (ctx->pc == 0x2447C4u) {
        ctx->pc = 0x2447C8u;
        goto label_2447c8;
    }
    ctx->pc = 0x2447C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2447C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2447C0u, 0x2447C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2447C8u;
label_2447c8:
    // 0x2447c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2447cc:
    if (ctx->pc == 0x2447CCu) {
        ctx->pc = 0x2447CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447C8u;
        // 0x2447cc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447D0u;
        goto label_2447d0;
    }
    ctx->pc = 0x2447C8u;
    {
        const bool branch_taken_0x2447c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447C8u;
        // 0x2447cc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447c8) {
            ctx->pc = 0x2447E0u;
            goto label_2447e0;
        }
    }
    ctx->pc = 0x2447D0u;
label_2447d0:
    // 0x2447d0: 0xc090d8a  jal         func_243628
label_2447d4:
    if (ctx->pc == 0x2447D4u) {
        ctx->pc = 0x2447D8u;
        goto label_2447d8;
    }
    ctx->pc = 0x2447D0u;
    SET_GPR_U32(ctx, 31, 0x2447D8u);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2447D0u, 0x2447D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447D8u;
label_2447d8:
    // 0x2447d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2447dc:
    if (ctx->pc == 0x2447DCu) {
        ctx->pc = 0x2447DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447D8u;
        // 0x2447dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447E0u;
        goto label_2447e0;
    }
    ctx->pc = 0x2447D8u;
    {
        const bool branch_taken_0x2447d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447D8u;
        // 0x2447dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447d8) {
            ctx->pc = 0x2447F0u;
            goto label_2447f0;
        }
    }
    ctx->pc = 0x2447E0u;
label_2447e0:
    // 0x2447e0: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x2447e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_2447e4:
    // 0x2447e4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2447e8:
    if (ctx->pc == 0x2447E8u) {
        ctx->pc = 0x2447E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E4u;
        // 0x2447e8: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447ECu;
        goto label_2447ec;
    }
    ctx->pc = 0x2447E4u;
    {
        const bool branch_taken_0x2447e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2447E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E4u;
        // 0x2447e8: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447e4) {
            ctx->pc = 0x244788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244788;
        }
    }
    ctx->pc = 0x2447ECu;
label_2447ec:
    // 0x2447ec: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2447ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2447f0:
    // 0x2447f0: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x2447f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_2447f4:
    // 0x2447f4: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x2447f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_2447f8:
    // 0x2447f8: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x2447f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2447fc:
    // 0x2447fc: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x2447fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_244800:
    // 0x244800: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x244800u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_244804:
    // 0x244804: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x244804u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_244808:
    // 0x244808: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x244808u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_24480c:
    // 0x24480c: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x24480cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_244810:
    // 0x244810: 0x3e00008  jr          $ra
label_244814:
    if (ctx->pc == 0x244814u) {
        ctx->pc = 0x244814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244810u;
        // 0x244814: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244818u;
        goto label_fallthrough_0x244810;
    }
    ctx->pc = 0x244810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244810u;
        // 0x244814: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244810:
    ctx->pc = 0x244818u;
}

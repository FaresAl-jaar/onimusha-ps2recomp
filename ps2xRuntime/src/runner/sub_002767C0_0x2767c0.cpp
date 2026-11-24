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

// Function: sub_002767C0
// Address: 0x2767c0 - 0x276930
void sub_002767C0_0x2767c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002767C0_0x2767c0");
#endif

    switch (ctx->pc) {
        case 0x2767f0u: goto label_2767f0;
        case 0x276800u: goto label_276800;
        case 0x276814u: goto label_276814;
        case 0x276834u: goto label_276834;
        case 0x276858u: goto label_276858;
        case 0x276860u: goto label_276860;
        case 0x276888u: goto label_276888;
        case 0x2768ccu: goto label_2768cc;
        default: break;
    }

    ctx->pc = 0x2767c0u;

    // 0x2767c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2767c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2767c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2767c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2767c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2767c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2767cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2767ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2767d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2767d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2767d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2767d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2767d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2767dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2767dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2767e0: 0x3c11008c  lui         $s1, 0x8C
    ctx->pc = 0x2767e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)140 << 16));
    // 0x2767e4: 0xaf808900  sw          $zero, -0x7700($gp)
    ctx->pc = 0x2767e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936832), GPR_U32(ctx, 0));
    // 0x2767e8: 0x263108f0  addiu       $s1, $s1, 0x8F0
    ctx->pc = 0x2767e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2288));
    // 0x2767ec: 0x27b0007c  addiu       $s0, $sp, 0x7C
    ctx->pc = 0x2767ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_2767f0:
    // 0x2767f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2767f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2767f4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2767f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2767f8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2767F8u;
    SET_GPR_U32(ctx, 31, 0x276800u);
    ctx->pc = 0x2767FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2767F8u;
    // 0x2767fc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2767F8u, 0x276800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276800u;
label_276800:
    // 0x276800: 0x8f858900  lw          $a1, -0x7700($gp)
    ctx->pc = 0x276800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x276804: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x276804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x276808: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x276808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27680c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x27680Cu;
    SET_GPR_U32(ctx, 31, 0x276814u);
    ctx->pc = 0x276810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27680Cu;
    // 0x276810: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x27680Cu, 0x276814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276814u;
label_276814:
    // 0x276814: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x276814u;
    {
        const bool branch_taken_0x276814 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x276818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276814u;
        // 0x276818: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276814) {
            ctx->pc = 0x276900u;
            goto label_276900;
        }
    }
    ctx->pc = 0x27681Cu;
    // 0x27681c: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x27681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x276820: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x276820u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x276824: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x276824u;
    {
        const bool branch_taken_0x276824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276824u;
        // 0x276828: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276824) {
            ctx->pc = 0x276840u;
            goto label_276840;
        }
    }
    ctx->pc = 0x27682Cu;
    // 0x27682c: 0xc09d9b4  jal         func_2766D0
    ctx->pc = 0x27682Cu;
    SET_GPR_U32(ctx, 31, 0x276834u);
    ctx->pc = 0x2766D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766D0u, 0x27682Cu, 0x276834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276834u;
label_276834:
    // 0x276834: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x276834u;
    {
        const bool branch_taken_0x276834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276834) {
            ctx->pc = 0x276900u;
            goto label_276900;
        }
    }
    ctx->pc = 0x27683Cu;
    // 0x27683c: 0x0  nop
    ctx->pc = 0x27683cu;
    // NOP
label_276840:
    // 0x276840: 0x82642903  lb          $a0, 0x2903($s3)
    ctx->pc = 0x276840u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10499)));
    // 0x276844: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x276844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x276848: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x276848u;
    {
        const bool branch_taken_0x276848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276848u;
        // 0x27684c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276848) {
            ctx->pc = 0x276900u;
            goto label_276900;
        }
    }
    ctx->pc = 0x276850u;
    // 0x276850: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x276850u;
    SET_GPR_U32(ctx, 31, 0x276858u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x276850u, 0x276858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276858u;
label_276858:
    // 0x276858: 0xc096ff4  jal         func_25BFD0
    ctx->pc = 0x276858u;
    SET_GPR_U32(ctx, 31, 0x276860u);
    ctx->pc = 0x27685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276858u;
    // 0x27685c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFD0u, 0x276858u, 0x276860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276860u;
label_276860:
    // 0x276860: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x276860u;
    {
        const bool branch_taken_0x276860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276860) {
            ctx->pc = 0x276900u;
            goto label_276900;
        }
    }
    ctx->pc = 0x276868u;
    // 0x276868: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x276868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x27686c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x27686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x276870: 0x92632901  lbu         $v1, 0x2901($s3)
    ctx->pc = 0x276870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10497)));
    // 0x276874: 0x26662910  addiu       $a2, $s3, 0x2910
    ctx->pc = 0x276874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 10512));
    // 0x276878: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x276878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x27687c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x27687cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x276880: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x276880u;
    SET_GPR_U32(ctx, 31, 0x276888u);
    ctx->pc = 0x276884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276880u;
    // 0x276884: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x276880u, 0x276888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276888u;
label_276888:
    // 0x276888: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x276888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27688c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27688cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x276890: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x276890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x276894: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x276894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x276898: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x276898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x27689c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27689cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768a0: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x2768a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x2768a4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2768a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2768a8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x2768a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2768ac: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2768acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2768b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2768b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2768b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2768b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768bc: 0x7e622920  sq          $v0, 0x2920($s3)
    ctx->pc = 0x2768bcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 10528), GPR_VEC(ctx, 2));
    // 0x2768c0: 0x926208e8  lbu         $v0, 0x8E8($s3)
    ctx->pc = 0x2768c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x2768c4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2768C4u;
    SET_GPR_U32(ctx, 31, 0x2768CCu);
    ctx->pc = 0x2768C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2768C4u;
    // 0x2768c8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2768C4u, 0x2768CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768CCu;
label_2768cc:
    // 0x2768cc: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2768CCu;
    {
        const bool branch_taken_0x2768cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2768cc) {
            ctx->pc = 0x2768E0u;
            goto label_2768e0;
        }
    }
    ctx->pc = 0x2768D4u;
    // 0x2768d4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2768d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2768d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2768D8u;
    {
        const bool branch_taken_0x2768d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2768DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768D8u;
        // 0x2768dc: 0xaf838900  sw          $v1, -0x7700($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768d8) {
            ctx->pc = 0x276900u;
            goto label_276900;
        }
    }
    ctx->pc = 0x2768E0u;
label_2768e0:
    // 0x2768e0: 0x92432902  lbu         $v1, 0x2902($s2)
    ctx->pc = 0x2768e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10498)));
    // 0x2768e4: 0x92642902  lbu         $a0, 0x2902($s3)
    ctx->pc = 0x2768e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10498)));
    // 0x2768e8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2768e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2768ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2768ECu;
    {
        const bool branch_taken_0x2768ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2768ec) {
            ctx->pc = 0x276900u;
            goto label_276900;
        }
    }
    ctx->pc = 0x2768F4u;
    // 0x2768f4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2768f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2768f8: 0xaf838900  sw          $v1, -0x7700($gp)
    ctx->pc = 0x2768f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936832), GPR_U32(ctx, 3));
    // 0x2768fc: 0x0  nop
    ctx->pc = 0x2768fcu;
    // NOP
label_276900:
    // 0x276900: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x276900u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x276904: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x276904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x276908: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x276908u;
    {
        const bool branch_taken_0x276908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276908u;
        // 0x27690c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276908) {
            ctx->pc = 0x2767F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2767f0;
        }
    }
    ctx->pc = 0x276910u;
    // 0x276910: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x276910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276914: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x276914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276918: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x276918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27691c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27691cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276920: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x276920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276924: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x276924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276928: 0x3e00008  jr          $ra
    ctx->pc = 0x276928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276928u;
        // 0x27692c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276930u;
}

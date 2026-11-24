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

// Function: sub_002473E0
// Address: 0x2473e0 - 0x247490
void sub_002473E0_0x2473e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002473E0_0x2473e0");
#endif

    switch (ctx->pc) {
        case 0x2473e0u: goto label_2473e0;
        case 0x2473e4u: goto label_2473e4;
        case 0x2473e8u: goto label_2473e8;
        case 0x2473ecu: goto label_2473ec;
        case 0x2473f0u: goto label_2473f0;
        case 0x2473f4u: goto label_2473f4;
        case 0x2473f8u: goto label_2473f8;
        case 0x2473fcu: goto label_2473fc;
        case 0x247400u: goto label_247400;
        case 0x247404u: goto label_247404;
        case 0x247408u: goto label_247408;
        case 0x24740cu: goto label_24740c;
        case 0x247410u: goto label_247410;
        case 0x247414u: goto label_247414;
        case 0x247418u: goto label_247418;
        case 0x24741cu: goto label_24741c;
        case 0x247420u: goto label_247420;
        case 0x247424u: goto label_247424;
        case 0x247428u: goto label_247428;
        case 0x24742cu: goto label_24742c;
        case 0x247430u: goto label_247430;
        case 0x247434u: goto label_247434;
        case 0x247438u: goto label_247438;
        case 0x24743cu: goto label_24743c;
        case 0x247440u: goto label_247440;
        case 0x247444u: goto label_247444;
        case 0x247448u: goto label_247448;
        case 0x24744cu: goto label_24744c;
        case 0x247450u: goto label_247450;
        case 0x247454u: goto label_247454;
        case 0x247458u: goto label_247458;
        case 0x24745cu: goto label_24745c;
        case 0x247460u: goto label_247460;
        case 0x247464u: goto label_247464;
        case 0x247468u: goto label_247468;
        case 0x24746cu: goto label_24746c;
        case 0x247470u: goto label_247470;
        case 0x247474u: goto label_247474;
        case 0x247478u: goto label_247478;
        case 0x24747cu: goto label_24747c;
        case 0x247480u: goto label_247480;
        case 0x247484u: goto label_247484;
        case 0x247488u: goto label_247488;
        case 0x24748cu: goto label_24748c;
        default: break;
    }

    ctx->pc = 0x2473e0u;

label_2473e0:
    // 0x2473e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2473e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2473e4:
    // 0x2473e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2473e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2473e8:
    // 0x2473e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2473e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2473ec:
    // 0x2473ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2473ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2473f0:
    // 0x2473f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2473f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2473f4:
    // 0x2473f4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_2473f8:
    if (ctx->pc == 0x2473F8u) {
        ctx->pc = 0x2473F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473F4u;
        // 0x2473f8: 0x2c830002  sltiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473FCu;
        goto label_2473fc;
    }
    ctx->pc = 0x2473F4u;
    {
        const bool branch_taken_0x2473f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2473F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473F4u;
        // 0x2473f8: 0x2c830002  sltiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473f4) {
            ctx->pc = 0x247418u;
            goto label_247418;
        }
    }
    ctx->pc = 0x2473FCu;
label_2473fc:
    // 0x2473fc: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_247400:
    if (ctx->pc == 0x247400u) {
        ctx->pc = 0x247400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473FCu;
        // 0x247400: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247404u;
        goto label_247404;
    }
    ctx->pc = 0x2473FCu;
    {
        const bool branch_taken_0x2473fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x247400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473FCu;
        // 0x247400: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473fc) {
            ctx->pc = 0x247480u;
            goto label_247480;
        }
    }
    ctx->pc = 0x247404u;
label_247404:
    // 0x247404: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x247404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_247408:
    // 0x247408: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_24740c:
    if (ctx->pc == 0x24740Cu) {
        ctx->pc = 0x24740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247408u;
        // 0x24740c: 0x2482fc00  addiu       $v0, $a0, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247410u;
        goto label_247410;
    }
    ctx->pc = 0x247408u;
    {
        const bool branch_taken_0x247408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247408u;
        // 0x24740c: 0x2482fc00  addiu       $v0, $a0, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247408) {
            ctx->pc = 0x247438u;
            goto label_247438;
        }
    }
    ctx->pc = 0x247410u;
label_247410:
    // 0x247410: 0x1000000d  b           . + 4 + (0xD << 2)
label_247414:
    if (ctx->pc == 0x247414u) {
        ctx->pc = 0x247414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247410u;
        // 0x247414: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247418u;
        goto label_247418;
    }
    ctx->pc = 0x247410u;
    {
        const bool branch_taken_0x247410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247410u;
        // 0x247414: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247410) {
            ctx->pc = 0x247448u;
            goto label_247448;
        }
    }
    ctx->pc = 0x247418u;
label_247418:
    // 0x247418: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x247418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24741c:
    // 0x24741c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x24741cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_247420:
    // 0x247420: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x247420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_247424:
    // 0x247424: 0xc091da8  jal         func_2476A0
label_247428:
    if (ctx->pc == 0x247428u) {
        ctx->pc = 0x247428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247424u;
        // 0x247428: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24742Cu;
        goto label_24742c;
    }
    ctx->pc = 0x247424u;
    SET_GPR_U32(ctx, 31, 0x24742Cu);
    ctx->pc = 0x247428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247424u;
    // 0x247428: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2476A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2476A0u, 0x247424u, 0x24742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24742Cu;
label_24742c:
    // 0x24742c: 0x10000013  b           . + 4 + (0x13 << 2)
label_247430:
    if (ctx->pc == 0x247430u) {
        ctx->pc = 0x247430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24742Cu;
        // 0x247430: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247434u;
        goto label_247434;
    }
    ctx->pc = 0x24742Cu;
    {
        const bool branch_taken_0x24742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24742Cu;
        // 0x247430: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24742c) {
            ctx->pc = 0x24747Cu;
            goto label_24747c;
        }
    }
    ctx->pc = 0x247434u;
label_247434:
    // 0x247434: 0x0  nop
    ctx->pc = 0x247434u;
    // NOP
label_247438:
    // 0x247438: 0xc091e0e  jal         func_247838
label_24743c:
    if (ctx->pc == 0x24743Cu) {
        ctx->pc = 0x24743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247438u;
        // 0x24743c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247440u;
        goto label_247440;
    }
    ctx->pc = 0x247438u;
    SET_GPR_U32(ctx, 31, 0x247440u);
    ctx->pc = 0x24743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247438u;
    // 0x24743c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247838u, 0x247438u, 0x247440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247440u;
label_247440:
    // 0x247440: 0x1000000f  b           . + 4 + (0xF << 2)
label_247444:
    if (ctx->pc == 0x247444u) {
        ctx->pc = 0x247444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247440u;
        // 0x247444: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247448u;
        goto label_247448;
    }
    ctx->pc = 0x247440u;
    {
        const bool branch_taken_0x247440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247440u;
        // 0x247444: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247440) {
            ctx->pc = 0x247480u;
            goto label_247480;
        }
    }
    ctx->pc = 0x247448u;
label_247448:
    // 0x247448: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x247448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_24744c:
    // 0x24744c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_247450:
    if (ctx->pc == 0x247450u) {
        ctx->pc = 0x247450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24744Cu;
        // 0x247450: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247454u;
        goto label_247454;
    }
    ctx->pc = 0x24744Cu;
    {
        const bool branch_taken_0x24744c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24744Cu;
        // 0x247450: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24744c) {
            ctx->pc = 0x247480u;
            goto label_247480;
        }
    }
    ctx->pc = 0x247454u;
label_247454:
    // 0x247454: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_247458:
    // 0x247458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24745c:
    // 0x24745c: 0x8c42fc50  lw          $v0, -0x3B0($v0)
    ctx->pc = 0x24745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966352)));
label_247460:
    // 0x247460: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_247464:
    if (ctx->pc == 0x247464u) {
        ctx->pc = 0x247464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247460u;
        // 0x247464: 0x63082  srl         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247468u;
        goto label_247468;
    }
    ctx->pc = 0x247460u;
    {
        const bool branch_taken_0x247460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247460u;
        // 0x247464: 0x63082  srl         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247460) {
            ctx->pc = 0x24747Cu;
            goto label_24747c;
        }
    }
    ctx->pc = 0x247468u;
label_247468:
    // 0x247468: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x247468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
label_24746c:
    // 0x24746c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_247470:
    // 0x247470: 0x8c84fd50  lw          $a0, -0x2B0($a0)
    ctx->pc = 0x247470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966608)));
label_247474:
    // 0x247474: 0x40f809  jalr        $v0
label_247478:
    if (ctx->pc == 0x247478u) {
        ctx->pc = 0x247478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247474u;
        // 0x247478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24747Cu;
        goto label_24747c;
    }
    ctx->pc = 0x247474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24747Cu);
        ctx->pc = 0x247478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247474u;
        // 0x247478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247474u, 0x24747Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24747Cu;
label_24747c:
    // 0x24747c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24747cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247480:
    // 0x247480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247484:
    // 0x247484: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_247488:
    // 0x247488: 0x3e00008  jr          $ra
label_24748c:
    if (ctx->pc == 0x24748Cu) {
        ctx->pc = 0x24748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247488u;
        // 0x24748c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247490u;
        goto label_fallthrough_0x247488;
    }
    ctx->pc = 0x247488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247488u;
        // 0x24748c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x247488:
    ctx->pc = 0x247490u;
}

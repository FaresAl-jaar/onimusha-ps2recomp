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

// Function: sub_00114620
// Address: 0x114620 - 0x1147d8
void sub_00114620_0x114620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114620_0x114620");
#endif

    switch (ctx->pc) {
        case 0x114660u: goto label_114660;
        case 0x114678u: goto label_114678;
        case 0x1146a0u: goto label_1146a0;
        case 0x114714u: goto label_114714;
        case 0x114754u: goto label_114754;
        case 0x114764u: goto label_114764;
        case 0x11476cu: goto label_11476c;
        case 0x114780u: goto label_114780;
        case 0x114790u: goto label_114790;
        case 0x1147a0u: goto label_1147a0;
        case 0x1147a8u: goto label_1147a8;
        default: break;
    }

    ctx->pc = 0x114620u;

    // 0x114620: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x114620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x114624: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114628: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11462c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11462cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114630: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x114630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x114634: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x114634u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114638: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11463c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x11463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x114640: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x114640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x114644: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x114644u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x114648: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11464c: 0x26f2ec80  addiu       $s2, $s7, -0x1380
    ctx->pc = 0x11464cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962304));
    // 0x114650: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x114654: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114658: 0xc044b50  jal         func_112D40
    ctx->pc = 0x114658u;
    SET_GPR_U32(ctx, 31, 0x114660u);
    ctx->pc = 0x11465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114658u;
    // 0x11465c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x114658u, 0x114660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114660u;
label_114660:
    // 0x114660: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x114660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x114664: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x114664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x114668: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114668u;
    {
        const bool branch_taken_0x114668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114668) {
            ctx->pc = 0x11466Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114668u;
            // 0x11466c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11467Cu;
            goto label_11467c;
        }
    }
    ctx->pc = 0x114670u;
    // 0x114670: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x114670u;
    SET_GPR_U32(ctx, 31, 0x114678u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x114670u, 0x114678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114678u;
label_114678:
    // 0x114678: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x114678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11467c:
    // 0x11467c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11467cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114680: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114684: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x114684u;
    {
        const bool branch_taken_0x114684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114684u;
        // 0x114688: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114684) {
            ctx->pc = 0x1146CCu;
            goto label_1146cc;
        }
    }
    ctx->pc = 0x11468Cu;
    // 0x11468c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x11468cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x114690: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114694: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x114694u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x114698: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x114698u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x11469c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11469cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1146a0:
    // 0x1146a0: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1146a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1146a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1146A4u;
    {
        const bool branch_taken_0x1146a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146A4u;
        // 0x1146a8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146a4) {
            ctx->pc = 0x1146DCu;
            goto label_1146dc;
        }
    }
    ctx->pc = 0x1146ACu;
    // 0x1146ac: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1146acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1146b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1146b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1146b4: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x1146b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1146b8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1146b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1146bc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1146BCu;
    {
        const bool branch_taken_0x1146bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1146bc) {
            ctx->pc = 0x1146C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1146BCu;
            // 0x1146c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1146A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1146a0;
        }
    }
    ctx->pc = 0x1146C4u;
    // 0x1146c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1146C4u;
    {
        const bool branch_taken_0x1146c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146C4u;
        // 0x1146c8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146c4) {
            ctx->pc = 0x1146E0u;
            goto label_1146e0;
        }
    }
    ctx->pc = 0x1146CCu;
label_1146cc:
    // 0x1146cc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1146ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1146d0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1146d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1146d4: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x1146d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x1146d8: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x1146d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
label_1146dc:
    // 0x1146dc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1146dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1146e0:
    // 0x1146e0: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1146E0u;
    {
        const bool branch_taken_0x1146e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1146e0) {
            ctx->pc = 0x1146E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1146E0u;
            // 0x1146e4: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1146F4u;
            goto label_1146f4;
        }
    }
    ctx->pc = 0x1146E8u;
    // 0x1146e8: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1146e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1146ec: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1146ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1146f0: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1146f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_1146f4:
    // 0x1146f4: 0x24a327e0  addiu       $v1, $a1, 0x27E0
    ctx->pc = 0x1146f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10208));
    // 0x1146f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1146f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1146fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1146fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114700: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x114700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x114704: 0x2694f8c0  addiu       $s4, $s4, -0x740
    ctx->pc = 0x114704u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965440));
    // 0x114708: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x114708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x11470c: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x11470Cu;
    SET_GPR_U32(ctx, 31, 0x114714u);
    ctx->pc = 0x114710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11470Cu;
    // 0x114710: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x11470Cu, 0x114714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114714u;
label_114714:
    // 0x114714: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114718: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x114718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x11471c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114720: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x114720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x114724: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x114724u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x114728: 0x26a40380  addiu       $a0, $s5, 0x380
    ctx->pc = 0x114728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 896));
    // 0x11472c: 0x26e7ec80  addiu       $a3, $s7, -0x1380
    ctx->pc = 0x11472cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962304));
    // 0x114730: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x114730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x114734: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114738: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x114738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11473c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114744: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x114744u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114748: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11474c: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x11474Cu;
    SET_GPR_U32(ctx, 31, 0x114754u);
    ctx->pc = 0x114750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11474Cu;
    // 0x114750: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x11474Cu, 0x114754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114754u;
label_114754:
    // 0x114754: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114754u;
    {
        const bool branch_taken_0x114754 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x114758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114754u;
        // 0x114758: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114754) {
            ctx->pc = 0x114774u;
            goto label_114774;
        }
    }
    ctx->pc = 0x11475Cu;
    // 0x11475c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x11475Cu;
    SET_GPR_U32(ctx, 31, 0x114764u);
    ctx->pc = 0x114760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11475Cu;
    // 0x114760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x11475Cu, 0x114764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114764u;
label_114764:
    // 0x114764: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114764u;
    SET_GPR_U32(ctx, 31, 0x11476Cu);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114764u, 0x11476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11476Cu;
label_11476c:
    // 0x11476c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11476Cu;
    {
        const bool branch_taken_0x11476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11476Cu;
        // 0x114770: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11476c) {
            ctx->pc = 0x1147ACu;
            goto label_1147ac;
        }
    }
    ctx->pc = 0x114774u;
label_114774:
    // 0x114774: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x114774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x114778: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114778u;
    SET_GPR_U32(ctx, 31, 0x114780u);
    ctx->pc = 0x11477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114778u;
    // 0x11477c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114778u, 0x114780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114780u;
label_114780:
    // 0x114780: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114780u;
    {
        const bool branch_taken_0x114780 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114780) {
            ctx->pc = 0x114798u;
            goto label_114798;
        }
    }
    ctx->pc = 0x114788u;
    // 0x114788: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114788u;
    SET_GPR_U32(ctx, 31, 0x114790u);
    ctx->pc = 0x11478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114788u;
    // 0x11478c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114788u, 0x114790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114790u;
label_114790:
    // 0x114790: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114790u;
    {
        const bool branch_taken_0x114790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114790u;
        // 0x114794: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114790) {
            ctx->pc = 0x1147ACu;
            goto label_1147ac;
        }
    }
    ctx->pc = 0x114798u;
label_114798:
    // 0x114798: 0xc043808  jal         func_10E020
    ctx->pc = 0x114798u;
    SET_GPR_U32(ctx, 31, 0x1147A0u);
    ctx->pc = 0x11479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114798u;
    // 0x11479c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x114798u, 0x1147A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147A0u;
label_1147a0:
    // 0x1147a0: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1147A0u;
    SET_GPR_U32(ctx, 31, 0x1147A8u);
    ctx->pc = 0x1147A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147A0u;
    // 0x1147a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1147A0u, 0x1147A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1147A8u;
label_1147a8:
    // 0x1147a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1147a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1147ac:
    // 0x1147ac: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1147acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1147b0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1147b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1147b4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1147b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1147b8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1147b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1147bc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1147bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1147c0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1147c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1147c4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1147c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1147c8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1147c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1147cc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1147ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1147d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1147D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147D0u;
        // 0x1147d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1147D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1147D8u;
}

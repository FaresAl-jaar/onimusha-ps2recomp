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

// Function: sub_00114450
// Address: 0x114450 - 0x114600
void sub_00114450_0x114450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114450_0x114450");
#endif

    switch (ctx->pc) {
        case 0x114490u: goto label_114490;
        case 0x1144a8u: goto label_1144a8;
        case 0x1144d0u: goto label_1144d0;
        case 0x11453cu: goto label_11453c;
        case 0x11457cu: goto label_11457c;
        case 0x11458cu: goto label_11458c;
        case 0x114594u: goto label_114594;
        case 0x1145a8u: goto label_1145a8;
        case 0x1145b8u: goto label_1145b8;
        case 0x1145c8u: goto label_1145c8;
        case 0x1145d0u: goto label_1145d0;
        default: break;
    }

    ctx->pc = 0x114450u;

    // 0x114450: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x114450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x114454: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114458: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11445c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x11445cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114464: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x114464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x114468: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11446c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11446cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114470: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x114470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x114474: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x114474u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x114478: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11447c: 0x26f3ec80  addiu       $s3, $s7, -0x1380
    ctx->pc = 0x11447cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962304));
    // 0x114480: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x114484: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x114488: 0xc044b50  jal         func_112D40
    ctx->pc = 0x114488u;
    SET_GPR_U32(ctx, 31, 0x114490u);
    ctx->pc = 0x11448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114488u;
    // 0x11448c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x114488u, 0x114490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114490u;
label_114490:
    // 0x114490: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x114490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x114494: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x114494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x114498: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114498u;
    {
        const bool branch_taken_0x114498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114498) {
            ctx->pc = 0x11449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114498u;
            // 0x11449c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1144ACu;
            goto label_1144ac;
        }
    }
    ctx->pc = 0x1144A0u;
    // 0x1144a0: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x1144A0u;
    SET_GPR_U32(ctx, 31, 0x1144A8u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x1144A0u, 0x1144A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144A8u;
label_1144a8:
    // 0x1144a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1144a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1144ac:
    // 0x1144ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1144acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144b0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1144b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1144b4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1144B4u;
    {
        const bool branch_taken_0x1144b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144B4u;
        // 0x1144b8: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144b4) {
            ctx->pc = 0x1144FCu;
            goto label_1144fc;
        }
    }
    ctx->pc = 0x1144BCu;
    // 0x1144bc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1144bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1144c0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1144c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1144c4: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x1144c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x1144c8: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x1144c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x1144cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1144ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1144d0:
    // 0x1144d0: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1144d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1144d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1144D4u;
    {
        const bool branch_taken_0x1144d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144D4u;
        // 0x1144d8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144d4) {
            ctx->pc = 0x11450Cu;
            goto label_11450c;
        }
    }
    ctx->pc = 0x1144DCu;
    // 0x1144dc: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1144dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1144e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1144e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1144e4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1144e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1144e8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1144e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1144ec: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1144ECu;
    {
        const bool branch_taken_0x1144ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1144ec) {
            ctx->pc = 0x1144F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1144ECu;
            // 0x1144f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1144D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1144d0;
        }
    }
    ctx->pc = 0x1144F4u;
    // 0x1144f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1144F4u;
    {
        const bool branch_taken_0x1144f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144F4u;
        // 0x1144f8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144f4) {
            ctx->pc = 0x114510u;
            goto label_114510;
        }
    }
    ctx->pc = 0x1144FCu;
label_1144fc:
    // 0x1144fc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1144fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x114500: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x114500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114504: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x114504u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
    // 0x114508: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x114508u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
label_11450c:
    // 0x11450c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_114510:
    // 0x114510: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114510u;
    {
        const bool branch_taken_0x114510 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x114514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114510u;
        // 0x114514: 0x24a227c8  addiu       $v0, $a1, 0x27C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 10184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114510) {
            ctx->pc = 0x114520u;
            goto label_114520;
        }
    }
    ctx->pc = 0x114518u;
    // 0x114518: 0xa260040b  sb          $zero, 0x40B($s3)
    ctx->pc = 0x114518u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x11451c: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x11451cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_114520:
    // 0x114520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114524: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x114524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x114528: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11452c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x11452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x114530: 0x2694f8c0  addiu       $s4, $s4, -0x740
    ctx->pc = 0x114530u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965440));
    // 0x114534: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x114534u;
    SET_GPR_U32(ctx, 31, 0x11453Cu);
    ctx->pc = 0x114538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114534u;
    // 0x114538: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x114534u, 0x11453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11453Cu;
label_11453c:
    // 0x11453c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11453cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114540: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x114540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x114544: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114548: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x114548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x11454c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x11454cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x114550: 0x26a40380  addiu       $a0, $s5, 0x380
    ctx->pc = 0x114550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 896));
    // 0x114554: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x114554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114558: 0x26e7ec80  addiu       $a3, $s7, -0x1380
    ctx->pc = 0x114558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962304));
    // 0x11455c: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x11455cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x114560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114564: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114568: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x114568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11456c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11456cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114570: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114574: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x114574u;
    SET_GPR_U32(ctx, 31, 0x11457Cu);
    ctx->pc = 0x114578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114574u;
    // 0x114578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x114574u, 0x11457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11457Cu;
label_11457c:
    // 0x11457c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11457Cu;
    {
        const bool branch_taken_0x11457c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x114580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11457Cu;
        // 0x114580: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11457c) {
            ctx->pc = 0x11459Cu;
            goto label_11459c;
        }
    }
    ctx->pc = 0x114584u;
    // 0x114584: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114584u;
    SET_GPR_U32(ctx, 31, 0x11458Cu);
    ctx->pc = 0x114588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114584u;
    // 0x114588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114584u, 0x11458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11458Cu;
label_11458c:
    // 0x11458c: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x11458Cu;
    SET_GPR_U32(ctx, 31, 0x114594u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x11458Cu, 0x114594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114594u;
label_114594:
    // 0x114594: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114594u;
    {
        const bool branch_taken_0x114594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114594u;
        // 0x114598: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114594) {
            ctx->pc = 0x1145D4u;
            goto label_1145d4;
        }
    }
    ctx->pc = 0x11459Cu;
label_11459c:
    // 0x11459c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x11459cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1145a0: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1145A0u;
    SET_GPR_U32(ctx, 31, 0x1145A8u);
    ctx->pc = 0x1145A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145A0u;
    // 0x1145a4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1145A0u, 0x1145A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145A8u;
label_1145a8:
    // 0x1145a8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1145A8u;
    {
        const bool branch_taken_0x1145a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1145a8) {
            ctx->pc = 0x1145C0u;
            goto label_1145c0;
        }
    }
    ctx->pc = 0x1145B0u;
    // 0x1145b0: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1145B0u;
    SET_GPR_U32(ctx, 31, 0x1145B8u);
    ctx->pc = 0x1145B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145B0u;
    // 0x1145b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1145B0u, 0x1145B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145B8u;
label_1145b8:
    // 0x1145b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1145B8u;
    {
        const bool branch_taken_0x1145b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145B8u;
        // 0x1145bc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145b8) {
            ctx->pc = 0x1145D4u;
            goto label_1145d4;
        }
    }
    ctx->pc = 0x1145C0u;
label_1145c0:
    // 0x1145c0: 0xc043808  jal         func_10E020
    ctx->pc = 0x1145C0u;
    SET_GPR_U32(ctx, 31, 0x1145C8u);
    ctx->pc = 0x1145C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145C0u;
    // 0x1145c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x1145C0u, 0x1145C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145C8u;
label_1145c8:
    // 0x1145c8: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1145C8u;
    SET_GPR_U32(ctx, 31, 0x1145D0u);
    ctx->pc = 0x1145CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145C8u;
    // 0x1145cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1145C8u, 0x1145D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145D0u;
label_1145d0:
    // 0x1145d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1145d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1145d4:
    // 0x1145d4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1145d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1145d8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1145d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1145dc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1145dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1145e0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1145e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1145e4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1145e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1145e8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1145e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1145ec: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1145ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1145f0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1145f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1145f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1145f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1145f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1145F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1145FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145F8u;
        // 0x1145fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1145F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114600u;
}

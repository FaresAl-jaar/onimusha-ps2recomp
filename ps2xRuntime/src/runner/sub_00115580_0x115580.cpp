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

// Function: sub_00115580
// Address: 0x115580 - 0x11572c
void sub_00115580_0x115580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115580_0x115580");
#endif

    switch (ctx->pc) {
        case 0x1155bcu: goto label_1155bc;
        case 0x1155d4u: goto label_1155d4;
        case 0x115600u: goto label_115600;
        case 0x11566cu: goto label_11566c;
        case 0x1156acu: goto label_1156ac;
        case 0x1156bcu: goto label_1156bc;
        case 0x1156c4u: goto label_1156c4;
        case 0x1156d8u: goto label_1156d8;
        case 0x1156e8u: goto label_1156e8;
        case 0x1156f8u: goto label_1156f8;
        case 0x115700u: goto label_115700;
        default: break;
    }

    ctx->pc = 0x115580u;

    // 0x115580: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x115580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x115584: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x115584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x115588: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x115588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11558c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11558cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115590: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x115590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x115594: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x115594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115598: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11559c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x11559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1155a0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1155a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1155a4: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x1155a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x1155a8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1155a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1155ac: 0x26d0ec80  addiu       $s0, $s6, -0x1380
    ctx->pc = 0x1155acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962304));
    // 0x1155b0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1155b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1155b4: 0xc044b50  jal         func_112D40
    ctx->pc = 0x1155B4u;
    SET_GPR_U32(ctx, 31, 0x1155BCu);
    ctx->pc = 0x1155B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155B4u;
    // 0x1155b8: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x1155B4u, 0x1155BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155BCu;
label_1155bc:
    // 0x1155bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1155bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1155c0: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x1155c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x1155c4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1155C4u;
    {
        const bool branch_taken_0x1155c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1155c4) {
            ctx->pc = 0x1155C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1155C4u;
            // 0x1155c8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1155D8u;
            goto label_1155d8;
        }
    }
    ctx->pc = 0x1155CCu;
    // 0x1155cc: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x1155CCu;
    SET_GPR_U32(ctx, 31, 0x1155D4u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x1155CCu, 0x1155D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155D4u;
label_1155d4:
    // 0x1155d4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1155d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1155d8:
    // 0x1155d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1155d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1155dc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1155dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1155e0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1155E0u;
    {
        const bool branch_taken_0x1155e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1155E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155E0u;
        // 0x1155e4: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155e0) {
            ctx->pc = 0x11562Cu;
            goto label_11562c;
        }
    }
    ctx->pc = 0x1155E8u;
    // 0x1155e8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x1155e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x1155ec: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1155ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1155f0: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x1155f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x1155f4: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x1155f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
    // 0x1155f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1155f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1155fc: 0x0  nop
    ctx->pc = 0x1155fcu;
    // NOP
label_115600:
    // 0x115600: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x115600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x115604: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x115604u;
    {
        const bool branch_taken_0x115604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115604u;
        // 0x115608: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115604) {
            ctx->pc = 0x11563Cu;
            goto label_11563c;
        }
    }
    ctx->pc = 0x11560Cu;
    // 0x11560c: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x11560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x115610: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115614: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x115614u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x115618: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11561c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11561Cu;
    {
        const bool branch_taken_0x11561c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11561c) {
            ctx->pc = 0x115620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11561Cu;
            // 0x115620: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115600;
        }
    }
    ctx->pc = 0x115624u;
    // 0x115624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115624u;
    {
        const bool branch_taken_0x115624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115624u;
        // 0x115628: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115624) {
            ctx->pc = 0x115640u;
            goto label_115640;
        }
    }
    ctx->pc = 0x11562Cu;
label_11562c:
    // 0x11562c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x11562cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x115630: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x115630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115634: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x115634u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x115638: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x115638u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
label_11563c:
    // 0x11563c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_115640:
    // 0x115640: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x115640u;
    {
        const bool branch_taken_0x115640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x115640) {
            ctx->pc = 0x115644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115640u;
            // 0x115644: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115648u;
            goto label_115648;
        }
    }
    ctx->pc = 0x115648u;
label_115648:
    // 0x115648: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x115648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x11564c: 0x24c328a0  addiu       $v1, $a2, 0x28A0
    ctx->pc = 0x11564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 10400));
    // 0x115650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115654: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115658: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x115658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11565c: 0x2673f8c0  addiu       $s3, $s3, -0x740
    ctx->pc = 0x11565cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965440));
    // 0x115660: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x115660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x115664: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x115664u;
    SET_GPR_U32(ctx, 31, 0x11566Cu);
    ctx->pc = 0x115668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115664u;
    // 0x115668: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x115664u, 0x11566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11566Cu;
label_11566c:
    // 0x11566c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11566cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115670: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x115670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x115674: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115678: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x115678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x11567c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x11567cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x115680: 0x26840380  addiu       $a0, $s4, 0x380
    ctx->pc = 0x115680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 896));
    // 0x115684: 0x26c7ec80  addiu       $a3, $s6, -0x1380
    ctx->pc = 0x115684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962304));
    // 0x115688: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x115688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x11568c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11568cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115694: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115698: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x115698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x11569c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x11569cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156a0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1156a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1156a4: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x1156A4u;
    SET_GPR_U32(ctx, 31, 0x1156ACu);
    ctx->pc = 0x1156A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156A4u;
    // 0x1156a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x1156A4u, 0x1156ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156ACu;
label_1156ac:
    // 0x1156ac: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1156ACu;
    {
        const bool branch_taken_0x1156ac = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1156B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156ACu;
        // 0x1156b0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156ac) {
            ctx->pc = 0x1156CCu;
            goto label_1156cc;
        }
    }
    ctx->pc = 0x1156B4u;
    // 0x1156b4: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1156B4u;
    SET_GPR_U32(ctx, 31, 0x1156BCu);
    ctx->pc = 0x1156B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156B4u;
    // 0x1156b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1156B4u, 0x1156BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156BCu;
label_1156bc:
    // 0x1156bc: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1156BCu;
    SET_GPR_U32(ctx, 31, 0x1156C4u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1156BCu, 0x1156C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156C4u;
label_1156c4:
    // 0x1156c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1156C4u;
    {
        const bool branch_taken_0x1156c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1156C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156C4u;
        // 0x1156c8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156c4) {
            ctx->pc = 0x115704u;
            goto label_115704;
        }
    }
    ctx->pc = 0x1156CCu;
label_1156cc:
    // 0x1156cc: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1156ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1156d0: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1156D0u;
    SET_GPR_U32(ctx, 31, 0x1156D8u);
    ctx->pc = 0x1156D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156D0u;
    // 0x1156d4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1156D0u, 0x1156D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156D8u;
label_1156d8:
    // 0x1156d8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1156D8u;
    {
        const bool branch_taken_0x1156d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1156d8) {
            ctx->pc = 0x1156F0u;
            goto label_1156f0;
        }
    }
    ctx->pc = 0x1156E0u;
    // 0x1156e0: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1156E0u;
    SET_GPR_U32(ctx, 31, 0x1156E8u);
    ctx->pc = 0x1156E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156E0u;
    // 0x1156e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1156E0u, 0x1156E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156E8u;
label_1156e8:
    // 0x1156e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1156E8u;
    {
        const bool branch_taken_0x1156e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1156ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156E8u;
        // 0x1156ec: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156e8) {
            ctx->pc = 0x115704u;
            goto label_115704;
        }
    }
    ctx->pc = 0x1156F0u;
label_1156f0:
    // 0x1156f0: 0xc043808  jal         func_10E020
    ctx->pc = 0x1156F0u;
    SET_GPR_U32(ctx, 31, 0x1156F8u);
    ctx->pc = 0x1156F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156F0u;
    // 0x1156f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x1156F0u, 0x1156F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156F8u;
label_1156f8:
    // 0x1156f8: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x1156F8u;
    SET_GPR_U32(ctx, 31, 0x115700u);
    ctx->pc = 0x1156FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156F8u;
    // 0x1156fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x1156F8u, 0x115700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115700u;
label_115700:
    // 0x115700: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_115704:
    // 0x115704: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x115704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x115708: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x115708u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11570c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x11570cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115710: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x115710u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115714: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115718: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x115718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11571c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x11571cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115720: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x115720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115724: 0x3e00008  jr          $ra
    ctx->pc = 0x115724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115724u;
        // 0x115728: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11572Cu;
}

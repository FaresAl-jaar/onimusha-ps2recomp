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

// Function: sub_00272590
// Address: 0x272590 - 0x2727b0
void sub_00272590_0x272590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272590_0x272590");
#endif

    switch (ctx->pc) {
        case 0x2725d4u: goto label_2725d4;
        case 0x272638u: goto label_272638;
        case 0x272690u: goto label_272690;
        case 0x2726ccu: goto label_2726cc;
        case 0x272710u: goto label_272710;
        case 0x272740u: goto label_272740;
        case 0x272774u: goto label_272774;
        case 0x27278cu: goto label_27278c;
        case 0x27279cu: goto label_27279c;
        default: break;
    }

    ctx->pc = 0x272590u;

    // 0x272590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272594: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x272594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x272598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27259c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27259cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2725a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2725a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2725a4: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x2725a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2725a8: 0x10830075  beq         $a0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x2725A8u;
    {
        const bool branch_taken_0x2725a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2725ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725A8u;
        // 0x2725ac: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725a8) {
            ctx->pc = 0x272780u;
            goto label_272780;
        }
    }
    ctx->pc = 0x2725B0u;
    // 0x2725b0: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2725B0u;
    {
        const bool branch_taken_0x2725b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2725b0) {
            ctx->pc = 0x272718u;
            goto label_272718;
        }
    }
    ctx->pc = 0x2725B8u;
    // 0x2725b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2725B8u;
    {
        const bool branch_taken_0x2725b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2725b8) {
            ctx->pc = 0x2725C8u;
            goto label_2725c8;
        }
    }
    ctx->pc = 0x2725C0u;
    // 0x2725c0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2725C0u;
    {
        const bool branch_taken_0x2725c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2725c0) {
            ctx->pc = 0x2727A0u;
            goto label_2727a0;
        }
    }
    ctx->pc = 0x2725C8u;
label_2725c8:
    // 0x2725c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2725c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2725cc: 0xc063d48  jal         func_18F520
    ctx->pc = 0x2725CCu;
    SET_GPR_U32(ctx, 31, 0x2725D4u);
    ctx->pc = 0x2725D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2725CCu;
    // 0x2725d0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x2725CCu, 0x2725D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725D4u;
label_2725d4:
    // 0x2725d4: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2725D4u;
    {
        const bool branch_taken_0x2725d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2725d4) {
            ctx->pc = 0x2727A0u;
            goto label_2727a0;
        }
    }
    ctx->pc = 0x2725DCu;
    // 0x2725dc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2725dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2725e0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2725E0u;
    {
        const bool branch_taken_0x2725e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725E0u;
        // 0x2725e4: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725e0) {
            ctx->pc = 0x272640u;
            goto label_272640;
        }
    }
    ctx->pc = 0x2725E8u;
    // 0x2725e8: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x2725e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x2725ec: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2725ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2725f0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2725F0u;
    {
        const bool branch_taken_0x2725f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2725f0) {
            ctx->pc = 0x272640u;
            goto label_272640;
        }
    }
    ctx->pc = 0x2725F8u;
    // 0x2725f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2725f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2725fc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2725fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272600: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x272600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x272604: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x272604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272608: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x272608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27260c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x27260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x272610: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272614: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x272614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x272618: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x27261c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27261cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272620: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272628: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272628u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27262c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27262cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272630: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272630u;
    SET_GPR_U32(ctx, 31, 0x272638u);
    ctx->pc = 0x272634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272630u;
    // 0x272634: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272630u, 0x272638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272638u;
label_272638:
    // 0x272638: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x272638u;
    {
        const bool branch_taken_0x272638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272638) {
            ctx->pc = 0x2727A0u;
            goto label_2727a0;
        }
    }
    ctx->pc = 0x272640u;
label_272640:
    // 0x272640: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x272640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x272644: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x272644u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x272648: 0x30836000  andi        $v1, $a0, 0x6000
    ctx->pc = 0x272648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24576);
    // 0x27264c: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x27264Cu;
    {
        const bool branch_taken_0x27264c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27264c) {
            ctx->pc = 0x2727A0u;
            goto label_2727a0;
        }
    }
    ctx->pc = 0x272654u;
    // 0x272654: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x272654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x272658: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x272658u;
    {
        const bool branch_taken_0x272658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272658u;
        // 0x27265c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272658) {
            ctx->pc = 0x272698u;
            goto label_272698;
        }
    }
    ctx->pc = 0x272660u;
    // 0x272660: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272664: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272668: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x27266c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x27266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x272670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272674: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x272678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27267c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27267cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272680: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272684: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272684u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272688: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272688u;
    SET_GPR_U32(ctx, 31, 0x272690u);
    ctx->pc = 0x27268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272688u;
    // 0x27268c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272688u, 0x272690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272690u;
label_272690:
    // 0x272690: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x272690u;
    {
        const bool branch_taken_0x272690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272690) {
            ctx->pc = 0x2726D0u;
            goto label_2726d0;
        }
    }
    ctx->pc = 0x272698u;
label_272698:
    // 0x272698: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27269c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2726a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2726a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2726a4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2726a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2726a8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2726a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2726ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2726acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726b0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x2726b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x2726b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2726b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2726b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2726bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2726c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726c4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2726C4u;
    SET_GPR_U32(ctx, 31, 0x2726CCu);
    ctx->pc = 0x2726C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2726C4u;
    // 0x2726c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2726C4u, 0x2726CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2726CCu;
label_2726cc:
    // 0x2726cc: 0x0  nop
    ctx->pc = 0x2726ccu;
    // NOP
label_2726d0:
    // 0x2726d0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x2726d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2726d4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x2726d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x2726d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2726d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2726dc: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x2726dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2726e0: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x2726e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2726e4: 0x9023fee8  lbu         $v1, -0x118($at)
    ctx->pc = 0x2726e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92FEE8u));
    // 0x2726e8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2726e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2726ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2726ECu;
    {
        const bool branch_taken_0x2726ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2726F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726ECu;
        // 0x2726f0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726ec) {
            ctx->pc = 0x272700u;
            goto label_272700;
        }
    }
    ctx->pc = 0x2726F4u;
    // 0x2726f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2726F4u;
    {
        const bool branch_taken_0x2726f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726F4u;
        // 0x2726f8: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726f4) {
            ctx->pc = 0x2727A0u;
            goto label_2727a0;
        }
    }
    ctx->pc = 0x2726FCu;
    // 0x2726fc: 0x0  nop
    ctx->pc = 0x2726fcu;
    // NOP
label_272700:
    // 0x272700: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x272700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x272704: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x272704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x272708: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x272708u;
    SET_GPR_U32(ctx, 31, 0x272710u);
    ctx->pc = 0x27270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272708u;
    // 0x27270c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x272708u, 0x272710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272710u;
label_272710:
    // 0x272710: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x272710u;
    {
        const bool branch_taken_0x272710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272710) {
            ctx->pc = 0x2727A0u;
            goto label_2727a0;
        }
    }
    ctx->pc = 0x272718u;
label_272718:
    // 0x272718: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x272718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27271c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27271cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272720: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x272720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x272724: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x272724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x272728: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x272728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27272c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27272cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272738: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x272738u;
    SET_GPR_U32(ctx, 31, 0x272740u);
    ctx->pc = 0x27273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272738u;
    // 0x27273c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x272738u, 0x272740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272740u;
label_272740:
    // 0x272740: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272744: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272748: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x27274c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x27274cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272750: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x272750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x272754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272758: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x27275c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27275cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272764: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272764u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272768: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272768u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27276c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x27276Cu;
    SET_GPR_U32(ctx, 31, 0x272774u);
    ctx->pc = 0x272770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27276Cu;
    // 0x272770: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x27276Cu, 0x272774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272774u;
label_272774:
    // 0x272774: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x272774u;
    {
        const bool branch_taken_0x272774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272774) {
            ctx->pc = 0x2727A0u;
            goto label_2727a0;
        }
    }
    ctx->pc = 0x27277Cu;
    // 0x27277c: 0x0  nop
    ctx->pc = 0x27277cu;
    // NOP
label_272780:
    // 0x272780: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272784: 0xc063d48  jal         func_18F520
    ctx->pc = 0x272784u;
    SET_GPR_U32(ctx, 31, 0x27278Cu);
    ctx->pc = 0x272788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272784u;
    // 0x272788: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x272784u, 0x27278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27278Cu;
label_27278c:
    // 0x27278c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27278Cu;
    {
        const bool branch_taken_0x27278c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27278Cu;
        // 0x272790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27278c) {
            ctx->pc = 0x2727A0u;
            goto label_2727a0;
        }
    }
    ctx->pc = 0x272794u;
    // 0x272794: 0xc09c910  jal         func_272440
    ctx->pc = 0x272794u;
    SET_GPR_U32(ctx, 31, 0x27279Cu);
    ctx->pc = 0x272440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272440u, 0x272794u, 0x27279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27279Cu;
label_27279c:
    // 0x27279c: 0x0  nop
    ctx->pc = 0x27279cu;
    // NOP
label_2727a0:
    // 0x2727a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2727a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2727a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2727a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2727a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2727A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2727ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727A8u;
        // 0x2727ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2727A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2727B0u;
}

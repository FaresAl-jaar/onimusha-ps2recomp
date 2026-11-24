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

// Function: sub_00398350
// Address: 0x398350 - 0x398748
void sub_00398350_0x398350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398350_0x398350");
#endif

    switch (ctx->pc) {
        case 0x39837cu: goto label_39837c;
        case 0x3983d4u: goto label_3983d4;
        case 0x398418u: goto label_398418;
        case 0x398420u: goto label_398420;
        case 0x39848cu: goto label_39848c;
        case 0x3984c8u: goto label_3984c8;
        case 0x39852cu: goto label_39852c;
        case 0x398548u: goto label_398548;
        case 0x398550u: goto label_398550;
        case 0x398560u: goto label_398560;
        case 0x398568u: goto label_398568;
        case 0x398590u: goto label_398590;
        case 0x3985acu: goto label_3985ac;
        case 0x3985e0u: goto label_3985e0;
        case 0x3985e8u: goto label_3985e8;
        case 0x39860cu: goto label_39860c;
        case 0x398640u: goto label_398640;
        case 0x398660u: goto label_398660;
        case 0x39866cu: goto label_39866c;
        case 0x398684u: goto label_398684;
        case 0x398694u: goto label_398694;
        case 0x3986a4u: goto label_3986a4;
        case 0x3986d8u: goto label_3986d8;
        case 0x3986e8u: goto label_3986e8;
        case 0x3986fcu: goto label_3986fc;
        case 0x398708u: goto label_398708;
        case 0x398714u: goto label_398714;
        case 0x398724u: goto label_398724;
        case 0x398738u: goto label_398738;
        default: break;
    }

    ctx->pc = 0x398350u;

    // 0x398350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x398354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x398358: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x398358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39835c: 0x90850023  lbu         $a1, 0x23($a0)
    ctx->pc = 0x39835cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x398360: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x398360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x398364: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x398364u;
    {
        const bool branch_taken_0x398364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x398368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398364u;
        // 0x398368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398364) {
            ctx->pc = 0x398380u;
            goto label_398380;
        }
    }
    ctx->pc = 0x39836Cu;
    // 0x39836c: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x39836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x398370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398374: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x398374u;
    SET_GPR_U32(ctx, 31, 0x39837Cu);
    ctx->pc = 0x398378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398374u;
    // 0x398378: 0xa2020023  sb          $v0, 0x23($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x398374u, 0x39837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39837Cu;
label_39837c:
    // 0x39837c: 0x0  nop
    ctx->pc = 0x39837cu;
    // NOP
label_398380:
    // 0x398380: 0x92040021  lbu         $a0, 0x21($s0)
    ctx->pc = 0x398380u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x398384: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x398384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x398388: 0x108300e9  beq         $a0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x398388u;
    {
        const bool branch_taken_0x398388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x39838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398388u;
        // 0x39838c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398388) {
            ctx->pc = 0x398730u;
            goto label_398730;
        }
    }
    ctx->pc = 0x398390u;
    // 0x398390: 0x108300b9  beq         $a0, $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x398390u;
    {
        const bool branch_taken_0x398390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x398390) {
            ctx->pc = 0x398678u;
            goto label_398678;
        }
    }
    ctx->pc = 0x398398u;
    // 0x398398: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x398398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x39839c: 0x108300aa  beq         $a0, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x39839Cu;
    {
        const bool branch_taken_0x39839c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3983A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39839Cu;
        // 0x3983a0: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39839c) {
            ctx->pc = 0x398648u;
            goto label_398648;
        }
    }
    ctx->pc = 0x3983A4u;
    // 0x3983a4: 0x1083006e  beq         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x3983A4u;
    {
        const bool branch_taken_0x3983a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3983a4) {
            ctx->pc = 0x398560u;
            goto label_398560;
        }
    }
    ctx->pc = 0x3983ACu;
    // 0x3983ac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3983acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3983b0: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x3983B0u;
    {
        const bool branch_taken_0x3983b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3983b0) {
            ctx->pc = 0x3984D0u;
            goto label_3984d0;
        }
    }
    ctx->pc = 0x3983B8u;
    // 0x3983b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3983B8u;
    {
        const bool branch_taken_0x3983b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3983b8) {
            ctx->pc = 0x3983C8u;
            goto label_3983c8;
        }
    }
    ctx->pc = 0x3983C0u;
    // 0x3983c0: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x3983C0u;
    {
        const bool branch_taken_0x3983c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3983c0) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x3983C8u;
label_3983c8:
    // 0x3983c8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3983c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3983cc: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x3983CCu;
    SET_GPR_U32(ctx, 31, 0x3983D4u);
    ctx->pc = 0x3983D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3983CCu;
    // 0x3983d0: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x3983CCu, 0x3983D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3983D4u;
label_3983d4:
    // 0x3983d4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3983d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3983d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3983d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3983dc: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3983DCu;
    {
        const bool branch_taken_0x3983dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3983E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983DCu;
        // 0x3983e0: 0x8c241284  lw          $a0, 0x1284($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983dc) {
            ctx->pc = 0x398428u;
            goto label_398428;
        }
    }
    ctx->pc = 0x3983E4u;
    // 0x3983e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3983e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3983e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3983e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3983ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3983ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3983f0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3983f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3983f4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3983f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3983f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3983f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3983fc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3983fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x398400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x398404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x398408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39840c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39840cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398410: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x398410u;
    SET_GPR_U32(ctx, 31, 0x398418u);
    ctx->pc = 0x398414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398410u;
    // 0x398414: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x398410u, 0x398418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398418u;
label_398418:
    // 0x398418: 0xc0e5dd4  jal         func_397750
    ctx->pc = 0x398418u;
    SET_GPR_U32(ctx, 31, 0x398420u);
    ctx->pc = 0x39841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398418u;
    // 0x39841c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397750u, 0x398418u, 0x398420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398420u;
label_398420:
    // 0x398420: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x398420u;
    {
        const bool branch_taken_0x398420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398420) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x398428u;
label_398428:
    // 0x398428: 0x108000c3  beqz        $a0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x398428u;
    {
        const bool branch_taken_0x398428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398428u;
        // 0x39842c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398428) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x398430u;
    // 0x398430: 0x144300c1  bne         $v0, $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x398430u;
    {
        const bool branch_taken_0x398430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x398430) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x398438u;
    // 0x398438: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x398438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39843c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x39843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x398440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x398440u;
    {
        const bool branch_taken_0x398440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398440) {
            ctx->pc = 0x398450u;
            goto label_398450;
        }
    }
    ctx->pc = 0x398448u;
    // 0x398448: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x398448u;
    {
        const bool branch_taken_0x398448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x398448) {
            ctx->pc = 0x398498u;
            goto label_398498;
        }
    }
    ctx->pc = 0x398450u;
label_398450:
    // 0x398450: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x398450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x398454: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x398454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x398458: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x398458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39845c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x398460: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x398460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x398464: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x398464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x398468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39846c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x39846cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x398470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398474: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x398474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x398478: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x398478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39847c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39847cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398480: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x398480u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398484: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x398484u;
    SET_GPR_U32(ctx, 31, 0x39848Cu);
    ctx->pc = 0x398488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398484u;
    // 0x398488: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x398484u, 0x39848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39848Cu;
label_39848c:
    // 0x39848c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x39848Cu;
    {
        const bool branch_taken_0x39848c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39848c) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x398494u;
    // 0x398494: 0x0  nop
    ctx->pc = 0x398494u;
    // NOP
label_398498:
    // 0x398498: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x398498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39849c: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x39849cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3984a0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3984a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3984a4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3984a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3984a8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3984a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3984ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3984acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3984b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3984b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3984b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3984b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3984b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3984b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3984bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3984bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3984c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3984C0u;
    SET_GPR_U32(ctx, 31, 0x3984C8u);
    ctx->pc = 0x3984C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3984C0u;
    // 0x3984c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3984C0u, 0x3984C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3984C8u;
label_3984c8:
    // 0x3984c8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3984C8u;
    {
        const bool branch_taken_0x3984c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3984c8) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x3984D0u;
label_3984d0:
    // 0x3984d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3984d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3984d4: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x3984d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x3984d8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3984d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3984dc: 0x8c251284  lw          $a1, 0x1284($at)
    ctx->pc = 0x3984dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x911284u));
    // 0x3984e0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3984e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3984e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3984e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3984e8: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3984e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3984ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3984ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3984f0: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x3984f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3984f4: 0xa60301ae  sh          $v1, 0x1AE($s0)
    ctx->pc = 0x3984f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 430), (uint16_t)GPR_U32(ctx, 3));
    // 0x3984f8: 0xa60201b0  sh          $v0, 0x1B0($s0)
    ctx->pc = 0x3984f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 432), (uint16_t)GPR_U32(ctx, 2));
    // 0x3984fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3984fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x398500: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x398500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x398504: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x398504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x398508: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x398508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x39850c: 0x31e7e  dsrl32      $v1, $v1, 25
    ctx->pc = 0x39850cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 25));
    // 0x398510: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x398510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x398514: 0xa60201b2  sh          $v0, 0x1B2($s0)
    ctx->pc = 0x398514u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 434), (uint16_t)GPR_U32(ctx, 2));
    // 0x398518: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x398518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39851c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x39851cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x398520: 0x960501ae  lhu         $a1, 0x1AE($s0)
    ctx->pc = 0x398520u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 430)));
    // 0x398524: 0xc0bd30c  jal         func_2F4C30
    ctx->pc = 0x398524u;
    SET_GPR_U32(ctx, 31, 0x39852Cu);
    ctx->pc = 0x398528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398524u;
    // 0x398528: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C30u, 0x398524u, 0x39852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39852Cu;
label_39852c:
    // 0x39852c: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x39852cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x398530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398534: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x398534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x398538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39853c: 0x820701b2  lb          $a3, 0x1B2($s0)
    ctx->pc = 0x39853cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x398540: 0xc0dbf88  jal         func_36FE20
    ctx->pc = 0x398540u;
    SET_GPR_U32(ctx, 31, 0x398548u);
    ctx->pc = 0x398544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398540u;
    // 0x398544: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE20u, 0x398540u, 0x398548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398548u;
label_398548:
    // 0x398548: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x398548u;
    SET_GPR_U32(ctx, 31, 0x398550u);
    ctx->pc = 0x39854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398548u;
    // 0x39854c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x398548u, 0x398550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398550u;
label_398550:
    // 0x398550: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398558: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x398558u;
    SET_GPR_U32(ctx, 31, 0x398560u);
    ctx->pc = 0x39855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398558u;
    // 0x39855c: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x398558u, 0x398560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398560u;
label_398560:
    // 0x398560: 0xc0dbf98  jal         func_36FE60
    ctx->pc = 0x398560u;
    SET_GPR_U32(ctx, 31, 0x398568u);
    ctx->pc = 0x398564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398560u;
    // 0x398564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE60u, 0x398560u, 0x398568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398568u;
label_398568:
    // 0x398568: 0x82030115  lb          $v1, 0x115($s0)
    ctx->pc = 0x398568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 277)));
    // 0x39856c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x39856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x398570: 0x34450023  ori         $a1, $v0, 0x23
    ctx->pc = 0x398570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35);
    // 0x398574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398578: 0xa60301b0  sh          $v1, 0x1B0($s0)
    ctx->pc = 0x398578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 432), (uint16_t)GPR_U32(ctx, 3));
    // 0x39857c: 0x960301b0  lhu         $v1, 0x1B0($s0)
    ctx->pc = 0x39857cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x398580: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x398580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x398584: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x398584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x398588: 0xc0dc804  jal         func_372010
    ctx->pc = 0x398588u;
    SET_GPR_U32(ctx, 31, 0x398590u);
    ctx->pc = 0x39858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398588u;
    // 0x39858c: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x398588u, 0x398590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398590u;
label_398590:
    // 0x398590: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x398590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x398594: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x398594u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x398598: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x398598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x39859c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39859Cu;
    {
        const bool branch_taken_0x39859c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39859c) {
            ctx->pc = 0x3985F0u;
            goto label_3985f0;
        }
    }
    ctx->pc = 0x3985A4u;
    // 0x3985a4: 0xc0dbf90  jal         func_36FE40
    ctx->pc = 0x3985A4u;
    SET_GPR_U32(ctx, 31, 0x3985ACu);
    ctx->pc = 0x3985A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3985A4u;
    // 0x3985a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE40u, 0x3985A4u, 0x3985ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3985ACu;
label_3985ac:
    // 0x3985ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3985acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3985b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3985b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3985b4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3985b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3985b8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3985b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3985bc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3985bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3985c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3985c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3985c4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3985c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3985c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3985c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3985cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3985ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3985d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3985d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3985d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3985d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3985d8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3985D8u;
    SET_GPR_U32(ctx, 31, 0x3985E0u);
    ctx->pc = 0x3985DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3985D8u;
    // 0x3985dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3985D8u, 0x3985E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3985E0u;
label_3985e0:
    // 0x3985e0: 0xc0e60a0  jal         func_398280
    ctx->pc = 0x3985E0u;
    SET_GPR_U32(ctx, 31, 0x3985E8u);
    ctx->pc = 0x3985E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3985E0u;
    // 0x3985e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398280u, 0x3985E0u, 0x3985E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3985E8u;
label_3985e8:
    // 0x3985e8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3985E8u;
    {
        const bool branch_taken_0x3985e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3985e8) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x3985F0u;
label_3985f0:
    // 0x3985f0: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x3985f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x3985f4: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3985F4u;
    {
        const bool branch_taken_0x3985f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3985f4) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x3985FCu;
    // 0x3985fc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3985fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x398600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398604: 0xc0dbf90  jal         func_36FE40
    ctx->pc = 0x398604u;
    SET_GPR_U32(ctx, 31, 0x39860Cu);
    ctx->pc = 0x398608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398604u;
    // 0x398608: 0xa2020021  sb          $v0, 0x21($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE40u, 0x398604u, 0x39860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39860Cu;
label_39860c:
    // 0x39860c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x398610: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x398610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x398614: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x398614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x398618: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x398618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39861c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x39861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x398620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398624: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x398624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x398628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39862c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39862cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398630: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x398630u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398634: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x398634u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398638: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x398638u;
    SET_GPR_U32(ctx, 31, 0x398640u);
    ctx->pc = 0x39863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398638u;
    // 0x39863c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x398638u, 0x398640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398640u;
label_398640:
    // 0x398640: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x398640u;
    {
        const bool branch_taken_0x398640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398640) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x398648u;
label_398648:
    // 0x398648: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x398648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x39864c: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x39864cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x398650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398654: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x398654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x398658: 0xc0dc804  jal         func_372010
    ctx->pc = 0x398658u;
    SET_GPR_U32(ctx, 31, 0x398660u);
    ctx->pc = 0x39865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398658u;
    // 0x39865c: 0x34450027  ori         $a1, $v0, 0x27 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x398658u, 0x398660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398660u;
label_398660:
    // 0x398660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398664: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x398664u;
    SET_GPR_U32(ctx, 31, 0x39866Cu);
    ctx->pc = 0x398668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398664u;
    // 0x398668: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x398664u, 0x39866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39866Cu;
label_39866c:
    // 0x39866c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x39866Cu;
    {
        const bool branch_taken_0x39866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39866c) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x398674u;
    // 0x398674: 0x0  nop
    ctx->pc = 0x398674u;
    // NOP
label_398678:
    // 0x398678: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x398678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x39867c: 0xc095150  jal         func_254540
    ctx->pc = 0x39867Cu;
    SET_GPR_U32(ctx, 31, 0x398684u);
    ctx->pc = 0x398680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39867Cu;
    // 0x398680: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x39867Cu, 0x398684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398684u;
label_398684:
    // 0x398684: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x398684u;
    {
        const bool branch_taken_0x398684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398684u;
        // 0x398688: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398684) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x39868Cu;
    // 0x39868c: 0xc095154  jal         func_254550
    ctx->pc = 0x39868Cu;
    SET_GPR_U32(ctx, 31, 0x398694u);
    ctx->pc = 0x398690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39868Cu;
    // 0x398690: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x39868Cu, 0x398694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398694u;
label_398694:
    // 0x398694: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398694u;
    {
        const bool branch_taken_0x398694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398694u;
        // 0x398698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398694) {
            ctx->pc = 0x3986B0u;
            goto label_3986b0;
        }
    }
    ctx->pc = 0x39869Cu;
    // 0x39869c: 0xc0e60a0  jal         func_398280
    ctx->pc = 0x39869Cu;
    SET_GPR_U32(ctx, 31, 0x3986A4u);
    ctx->pc = 0x398280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398280u, 0x39869Cu, 0x3986A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986A4u;
label_3986a4:
    // 0x3986a4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3986A4u;
    {
        const bool branch_taken_0x3986a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3986a4) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x3986ACu;
    // 0x3986ac: 0x0  nop
    ctx->pc = 0x3986acu;
    // NOP
label_3986b0:
    // 0x3986b0: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x3986b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x3986b4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3986b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3986b8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3986b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3986bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3986bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3986c0: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x3986c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x3986c4: 0x8c221284  lw          $v0, 0x1284($at)
    ctx->pc = 0x3986c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x911284u));
    // 0x3986c8: 0x960601b0  lhu         $a2, 0x1B0($s0)
    ctx->pc = 0x3986c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x3986cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3986ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3986d0: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x3986D0u;
    SET_GPR_U32(ctx, 31, 0x3986D8u);
    ctx->pc = 0x3986D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986D0u;
    // 0x3986d4: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x3986D0u, 0x3986D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986D8u;
label_3986d8:
    // 0x3986d8: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x3986d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x3986dc: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3986dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3986e0: 0xc0bd2a8  jal         func_2F4AA0
    ctx->pc = 0x3986E0u;
    SET_GPR_U32(ctx, 31, 0x3986E8u);
    ctx->pc = 0x3986E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986E0u;
    // 0x3986e4: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4AA0u, 0x3986E0u, 0x3986E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986E8u;
label_3986e8:
    // 0x3986e8: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3986e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3986ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3986ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3986f0: 0x34450028  ori         $a1, $v0, 0x28
    ctx->pc = 0x3986f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
    // 0x3986f4: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x3986F4u;
    SET_GPR_U32(ctx, 31, 0x3986FCu);
    ctx->pc = 0x3986F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3986F4u;
    // 0x3986f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x3986F4u, 0x3986FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3986FCu;
label_3986fc:
    // 0x3986fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3986fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398700: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x398700u;
    SET_GPR_U32(ctx, 31, 0x398708u);
    ctx->pc = 0x398704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398700u;
    // 0x398704: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x398700u, 0x398708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398708u;
label_398708:
    // 0x398708: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x39870c: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x39870Cu;
    SET_GPR_U32(ctx, 31, 0x398714u);
    ctx->pc = 0x398710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39870Cu;
    // 0x398710: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x39870Cu, 0x398714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398714u;
label_398714:
    // 0x398714: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39871c: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x39871Cu;
    SET_GPR_U32(ctx, 31, 0x398724u);
    ctx->pc = 0x398720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39871Cu;
    // 0x398720: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x39871Cu, 0x398724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398724u;
label_398724:
    // 0x398724: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x398724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x398728: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x398728u;
    {
        const bool branch_taken_0x398728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398728u;
        // 0x39872c: 0xa60301ae  sh          $v1, 0x1AE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 430), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398728) {
            ctx->pc = 0x398738u;
            goto label_398738;
        }
    }
    ctx->pc = 0x398730u;
label_398730:
    // 0x398730: 0xc0e60a0  jal         func_398280
    ctx->pc = 0x398730u;
    SET_GPR_U32(ctx, 31, 0x398738u);
    ctx->pc = 0x398734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398730u;
    // 0x398734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398280u, 0x398730u, 0x398738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398738u;
label_398738:
    // 0x398738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x398738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39873c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39873cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398740: 0x3e00008  jr          $ra
    ctx->pc = 0x398740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398740u;
        // 0x398744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398748u;
}

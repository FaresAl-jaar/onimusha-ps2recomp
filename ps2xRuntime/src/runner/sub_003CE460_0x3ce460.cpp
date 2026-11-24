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

// Function: sub_003CE460
// Address: 0x3ce460 - 0x3cea1c
void sub_003CE460_0x3ce460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CE460_0x3ce460");
#endif

    switch (ctx->pc) {
        case 0x3ce4b8u: goto label_3ce4b8;
        case 0x3ce4c8u: goto label_3ce4c8;
        case 0x3ce508u: goto label_3ce508;
        case 0x3ce530u: goto label_3ce530;
        case 0x3ce558u: goto label_3ce558;
        case 0x3ce568u: goto label_3ce568;
        case 0x3ce578u: goto label_3ce578;
        case 0x3ce640u: goto label_3ce640;
        case 0x3ce65cu: goto label_3ce65c;
        case 0x3ce680u: goto label_3ce680;
        case 0x3ce690u: goto label_3ce690;
        case 0x3ce6d4u: goto label_3ce6d4;
        case 0x3ce6ecu: goto label_3ce6ec;
        case 0x3ce6fcu: goto label_3ce6fc;
        case 0x3ce70cu: goto label_3ce70c;
        case 0x3ce72cu: goto label_3ce72c;
        case 0x3ce770u: goto label_3ce770;
        case 0x3ce790u: goto label_3ce790;
        case 0x3ce848u: goto label_3ce848;
        case 0x3ce860u: goto label_3ce860;
        case 0x3ce878u: goto label_3ce878;
        case 0x3ce8b0u: goto label_3ce8b0;
        case 0x3ce8e0u: goto label_3ce8e0;
        case 0x3ce8f0u: goto label_3ce8f0;
        case 0x3ce95cu: goto label_3ce95c;
        case 0x3cea08u: goto label_3cea08;
        default: break;
    }

    ctx->pc = 0x3ce460u;

    // 0x3ce460: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ce460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3ce464: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ce464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ce468: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ce468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ce46c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ce46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ce470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ce470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce474: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x3ce474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3ce478: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3ce478u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3ce47c: 0x10200162  beqz        $at, . + 4 + (0x162 << 2)
    ctx->pc = 0x3CE47Cu;
    {
        const bool branch_taken_0x3ce47c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE47Cu;
        // 0x3ce480: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce47c) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE484u;
    // 0x3ce484: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3ce484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3ce488: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ce488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ce48c: 0x24a53050  addiu       $a1, $a1, 0x3050
    ctx->pc = 0x3ce48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12368));
    // 0x3ce490: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ce490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3ce494: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ce494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ce498: 0x600008  jr          $v1
    ctx->pc = 0x3CE498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CE4A0u: goto label_3ce4a0;
            case 0x3CE4D8u: goto label_3ce4d8;
            case 0x3CE4F8u: goto label_3ce4f8;
            case 0x3CE648u: goto label_3ce648;
            case 0x3CE6B0u: goto label_3ce6b0;
            case 0x3CE850u: goto label_3ce850;
            case 0x3CE8D0u: goto label_3ce8d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE498u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CE4A0u;
label_3ce4a0:
    // 0x3ce4a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CE4A0u;
    {
        const bool branch_taken_0x3ce4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce4a0) {
            ctx->pc = 0x3CE4C0u;
            goto label_3ce4c0;
        }
    }
    ctx->pc = 0x3CE4A8u;
    // 0x3ce4a8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3ce4a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3ce4ac: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3ce4acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3ce4b0: 0xc0aa538  jal         func_2A94E0
    ctx->pc = 0x3CE4B0u;
    SET_GPR_U32(ctx, 31, 0x3CE4B8u);
    ctx->pc = 0x3CE4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE4B0u;
    // 0x3ce4b4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A94E0u, 0x3CE4B0u, 0x3CE4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE4B8u;
label_3ce4b8:
    // 0x3ce4b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3CE4B8u;
    {
        const bool branch_taken_0x3ce4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE4B8u;
        // 0x3ce4bc: 0xae220560  sw          $v0, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce4b8) {
            ctx->pc = 0x3CE4C8u;
            goto label_3ce4c8;
        }
    }
    ctx->pc = 0x3CE4C0u;
label_3ce4c0:
    // 0x3ce4c0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE4C0u;
    SET_GPR_U32(ctx, 31, 0x3CE4C8u);
    ctx->pc = 0x3CE4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE4C0u;
    // 0x3ce4c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE4C0u, 0x3CE4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE4C8u;
label_3ce4c8:
    // 0x3ce4c8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3ce4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3ce4cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ce4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ce4d0: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x3CE4D0u;
    {
        const bool branch_taken_0x3ce4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE4D0u;
        // 0x3ce4d4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce4d0) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE4D8u;
label_3ce4d8:
    // 0x3ce4d8: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3ce4d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3ce4dc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3ce4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ce4e0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3ce4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ce4e4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3ce4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ce4e8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3ce4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ce4ec: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3ce4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3ce4f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ce4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ce4f4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3ce4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3ce4f8:
    // 0x3ce4f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CE4F8u;
    {
        const bool branch_taken_0x3ce4f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE4F8u;
        // 0x3ce4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce4f8) {
            ctx->pc = 0x3CE510u;
            goto label_3ce510;
        }
    }
    ctx->pc = 0x3CE500u;
    // 0x3ce500: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE500u;
    SET_GPR_U32(ctx, 31, 0x3CE508u);
    ctx->pc = 0x3CE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE500u;
    // 0x3ce504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE500u, 0x3CE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE508u;
label_3ce508:
    // 0x3ce508: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x3CE508u;
    {
        const bool branch_taken_0x3ce508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce508) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE510u;
label_3ce510:
    // 0x3ce510: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CE510u;
    {
        const bool branch_taken_0x3ce510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce510) {
            ctx->pc = 0x3CE538u;
            goto label_3ce538;
        }
    }
    ctx->pc = 0x3CE518u;
    // 0x3ce518: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3ce518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3ce51c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3ce51cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ce520: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CE520u;
    {
        const bool branch_taken_0x3ce520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE520u;
        // 0x3ce524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce520) {
            ctx->pc = 0x3CE538u;
            goto label_3ce538;
        }
    }
    ctx->pc = 0x3CE528u;
    // 0x3ce528: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE528u;
    SET_GPR_U32(ctx, 31, 0x3CE530u);
    ctx->pc = 0x3CE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE528u;
    // 0x3ce52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE528u, 0x3CE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE530u;
label_3ce530:
    // 0x3ce530: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x3CE530u;
    {
        const bool branch_taken_0x3ce530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce530) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE538u;
label_3ce538:
    // 0x3ce538: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3ce538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3ce53c: 0x9223056a  lbu         $v1, 0x56A($s1)
    ctx->pc = 0x3ce53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1386)));
    // 0x3ce540: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3ce540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3ce544: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x3ce544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3ce548: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3ce548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3ce54c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3ce54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3ce550: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3CE550u;
    SET_GPR_U32(ctx, 31, 0x3CE558u);
    ctx->pc = 0x3CE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE550u;
    // 0x3ce554: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3CE550u, 0x3CE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE558u;
label_3ce558:
    // 0x3ce558: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3ce558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3ce55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce560: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3CE560u;
    SET_GPR_U32(ctx, 31, 0x3CE568u);
    ctx->pc = 0x3CE564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE560u;
    // 0x3ce564: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3CE560u, 0x3CE568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE568u;
label_3ce568:
    // 0x3ce568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CE568u;
    {
        const bool branch_taken_0x3ce568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE568u;
        // 0x3ce56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce568) {
            ctx->pc = 0x3CE578u;
            goto label_3ce578;
        }
    }
    ctx->pc = 0x3CE570u;
    // 0x3ce570: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE570u;
    SET_GPR_U32(ctx, 31, 0x3CE578u);
    ctx->pc = 0x3CE574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE570u;
    // 0x3ce574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE570u, 0x3CE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE578u;
label_3ce578:
    // 0x3ce578: 0x9223053a  lbu         $v1, 0x53A($s1)
    ctx->pc = 0x3ce578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
    // 0x3ce57c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CE57Cu;
    {
        const bool branch_taken_0x3ce57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce57c) {
            ctx->pc = 0x3CE598u;
            goto label_3ce598;
        }
    }
    ctx->pc = 0x3CE584u;
    // 0x3ce584: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3ce584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3ce588: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ce588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ce58c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x3CE58Cu;
    {
        const bool branch_taken_0x3ce58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE58Cu;
        // 0x3ce590: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce58c) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE594u;
    // 0x3ce594: 0x0  nop
    ctx->pc = 0x3ce594u;
    // NOP
label_3ce598:
    // 0x3ce598: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3ce598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3ce59c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE59Cu;
    {
        const bool branch_taken_0x3ce59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE59Cu;
        // 0x3ce5a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce59c) {
            ctx->pc = 0x3CE5B0u;
            goto label_3ce5b0;
        }
    }
    ctx->pc = 0x3CE5A4u;
    // 0x3ce5a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3CE5A4u;
    {
        const bool branch_taken_0x3ce5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce5a4) {
            ctx->pc = 0x3CE630u;
            goto label_3ce630;
        }
    }
    ctx->pc = 0x3CE5ACu;
    // 0x3ce5ac: 0x0  nop
    ctx->pc = 0x3ce5acu;
    // NOP
label_3ce5b0:
    // 0x3ce5b0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3ce5b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce5b4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3ce5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3ce5b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ce5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ce5bc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3ce5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce5c0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3ce5c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3ce5c4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CE5C4u;
    {
        const bool branch_taken_0x3ce5c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ce5c4) {
            ctx->pc = 0x3CE600u;
            goto label_3ce600;
        }
    }
    ctx->pc = 0x3CE5CCu;
    // 0x3ce5cc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3ce5ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce5d0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3ce5d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3ce5d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3CE5D4u;
    {
        const bool branch_taken_0x3ce5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE5D4u;
        // 0x3ce5d8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce5d4) {
            ctx->pc = 0x3CE628u;
            goto label_3ce628;
        }
    }
    ctx->pc = 0x3CE5DCu;
    // 0x3ce5dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce5e0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3ce5e0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ce5e4: 0x0  nop
    ctx->pc = 0x3ce5e4u;
    // NOP
    // 0x3ce5e8: 0x0  nop
    ctx->pc = 0x3ce5e8u;
    // NOP
    // 0x3ce5ec: 0x2010  mfhi        $a0
    ctx->pc = 0x3ce5ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3ce5f0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3ce5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce5f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CE5F4u;
    {
        const bool branch_taken_0x3ce5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE5F4u;
        // 0x3ce5f8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce5f4) {
            ctx->pc = 0x3CE628u;
            goto label_3ce628;
        }
    }
    ctx->pc = 0x3CE5FCu;
    // 0x3ce5fc: 0x0  nop
    ctx->pc = 0x3ce5fcu;
    // NOP
label_3ce600:
    // 0x3ce600: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3ce600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce604: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3ce604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3ce608: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CE608u;
    {
        const bool branch_taken_0x3ce608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ce608) {
            ctx->pc = 0x3CE628u;
            goto label_3ce628;
        }
    }
    ctx->pc = 0x3CE610u;
    // 0x3ce610: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3ce610u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce618: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3ce618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ce61c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE61Cu;
    {
        const bool branch_taken_0x3ce61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE61Cu;
        // 0x3ce620: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce61c) {
            ctx->pc = 0x3CE630u;
            goto label_3ce630;
        }
    }
    ctx->pc = 0x3CE624u;
    // 0x3ce624: 0x0  nop
    ctx->pc = 0x3ce624u;
    // NOP
label_3ce628:
    // 0x3ce628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce62c: 0x0  nop
    ctx->pc = 0x3ce62cu;
    // NOP
label_3ce630:
    // 0x3ce630: 0x146000f5  bnez        $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x3CE630u;
    {
        const bool branch_taken_0x3ce630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE630u;
        // 0x3ce634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce630) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE638u;
    // 0x3ce638: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE638u;
    SET_GPR_U32(ctx, 31, 0x3CE640u);
    ctx->pc = 0x3CE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE638u;
    // 0x3ce63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE638u, 0x3CE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE640u;
label_3ce640:
    // 0x3ce640: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x3CE640u;
    {
        const bool branch_taken_0x3ce640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce640) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE648u;
label_3ce648:
    // 0x3ce648: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3CE648u;
    {
        const bool branch_taken_0x3ce648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce648) {
            ctx->pc = 0x3CE688u;
            goto label_3ce688;
        }
    }
    ctx->pc = 0x3CE650u;
    // 0x3ce650: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3ce650u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3ce654: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3CE654u;
    SET_GPR_U32(ctx, 31, 0x3CE65Cu);
    ctx->pc = 0x3CE658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE654u;
    // 0x3ce658: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3CE654u, 0x3CE65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE65Cu;
label_3ce65c:
    // 0x3ce65c: 0x92230569  lbu         $v1, 0x569($s1)
    ctx->pc = 0x3ce65cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1385)));
    // 0x3ce660: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ce660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ce664: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x3ce664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3ce668: 0x24423044  addiu       $v0, $v0, 0x3044
    ctx->pc = 0x3ce668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12356));
    // 0x3ce66c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ce66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ce670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ce670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ce674: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3ce674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ce678: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3CE678u;
    SET_GPR_U32(ctx, 31, 0x3CE680u);
    ctx->pc = 0x3CE67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE678u;
    // 0x3ce67c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3CE678u, 0x3CE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE680u;
label_3ce680:
    // 0x3ce680: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3CE680u;
    {
        const bool branch_taken_0x3ce680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce680) {
            ctx->pc = 0x3CE690u;
            goto label_3ce690;
        }
    }
    ctx->pc = 0x3CE688u;
label_3ce688:
    // 0x3ce688: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE688u;
    SET_GPR_U32(ctx, 31, 0x3CE690u);
    ctx->pc = 0x3CE68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE688u;
    // 0x3ce68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE688u, 0x3CE690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE690u;
label_3ce690:
    // 0x3ce690: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3ce690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3ce694: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3ce694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ce698: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3ce698u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ce69c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3ce69cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ce6a0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3ce6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ce6a4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3ce6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3ce6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ce6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ce6ac: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3ce6acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3ce6b0:
    // 0x3ce6b0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ce6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ce6b4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3ce6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3ce6b8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3ce6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3ce6bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ce6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ce6c0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3ce6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3ce6c4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3ce6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ce6c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3ce6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3ce6cc: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3CE6CCu;
    SET_GPR_U32(ctx, 31, 0x3CE6D4u);
    ctx->pc = 0x3CE6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE6CCu;
    // 0x3ce6d0: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3CE6CCu, 0x3CE6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE6D4u;
label_3ce6d4:
    // 0x3ce6d4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3ce6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3ce6d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ce6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ce6dc: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3ce6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3ce6e0: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3ce6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3ce6e4: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3CE6E4u;
    SET_GPR_U32(ctx, 31, 0x3CE6ECu);
    ctx->pc = 0x3CE6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE6E4u;
    // 0x3ce6e8: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3CE6E4u, 0x3CE6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE6ECu;
label_3ce6ec:
    // 0x3ce6ec: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3ce6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3ce6f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce6f4: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3CE6F4u;
    SET_GPR_U32(ctx, 31, 0x3CE6FCu);
    ctx->pc = 0x3CE6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE6F4u;
    // 0x3ce6f8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3CE6F4u, 0x3CE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE6FCu;
label_3ce6fc:
    // 0x3ce6fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE6FCu;
    {
        const bool branch_taken_0x3ce6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE6FCu;
        // 0x3ce700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce6fc) {
            ctx->pc = 0x3CE710u;
            goto label_3ce710;
        }
    }
    ctx->pc = 0x3CE704u;
    // 0x3ce704: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE704u;
    SET_GPR_U32(ctx, 31, 0x3CE70Cu);
    ctx->pc = 0x3CE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE704u;
    // 0x3ce708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE704u, 0x3CE70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE70Cu;
label_3ce70c:
    // 0x3ce70c: 0x0  nop
    ctx->pc = 0x3ce70cu;
    // NOP
label_3ce710:
    // 0x3ce710: 0x92260568  lbu         $a2, 0x568($s1)
    ctx->pc = 0x3ce710u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3ce714: 0xc62c0564  lwc1        $f12, 0x564($s1)
    ctx->pc = 0x3ce714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ce718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce71c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3ce71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ce720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce724: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3CE724u;
    SET_GPR_U32(ctx, 31, 0x3CE72Cu);
    ctx->pc = 0x3CE728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE724u;
    // 0x3ce728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3CE724u, 0x3CE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE72Cu;
label_3ce72c:
    // 0x3ce72c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CE72Cu;
    {
        const bool branch_taken_0x3ce72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce72c) {
            ctx->pc = 0x3CE748u;
            goto label_3ce748;
        }
    }
    ctx->pc = 0x3CE734u;
    // 0x3ce734: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3ce734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3ce738: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ce738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ce73c: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x3CE73Cu;
    {
        const bool branch_taken_0x3ce73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE73Cu;
        // 0x3ce740: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce73c) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE744u;
    // 0x3ce744: 0x0  nop
    ctx->pc = 0x3ce744u;
    // NOP
label_3ce748:
    // 0x3ce748: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ce748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ce74c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3ce74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3ce750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce754: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3ce754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3ce758: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3ce758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3ce75c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3ce75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ce760: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x3ce760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ce764: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3ce764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce768: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3CE768u;
    SET_GPR_U32(ctx, 31, 0x3CE770u);
    ctx->pc = 0x3CE76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE768u;
    // 0x3ce76c: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3CE768u, 0x3CE770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE770u;
label_3ce770:
    // 0x3ce770: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3CE770u;
    {
        const bool branch_taken_0x3ce770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce770) {
            ctx->pc = 0x3CE7A0u;
            goto label_3ce7a0;
        }
    }
    ctx->pc = 0x3CE778u;
    // 0x3ce778: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3ce778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3ce77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce780: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3ce780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x3ce784: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3ce784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3ce788: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3CE788u;
    SET_GPR_U32(ctx, 31, 0x3CE790u);
    ctx->pc = 0x3CE78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE788u;
    // 0x3ce78c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3CE788u, 0x3CE790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE790u;
label_3ce790:
    // 0x3ce790: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3ce790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3ce794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ce794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ce798: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3CE798u;
    {
        const bool branch_taken_0x3ce798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE798u;
        // 0x3ce79c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce798) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE7A0u;
label_3ce7a0:
    // 0x3ce7a0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3ce7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3ce7a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE7A4u;
    {
        const bool branch_taken_0x3ce7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE7A4u;
        // 0x3ce7a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce7a4) {
            ctx->pc = 0x3CE7B8u;
            goto label_3ce7b8;
        }
    }
    ctx->pc = 0x3CE7ACu;
    // 0x3ce7ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3CE7ACu;
    {
        const bool branch_taken_0x3ce7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce7ac) {
            ctx->pc = 0x3CE838u;
            goto label_3ce838;
        }
    }
    ctx->pc = 0x3CE7B4u;
    // 0x3ce7b4: 0x0  nop
    ctx->pc = 0x3ce7b4u;
    // NOP
label_3ce7b8:
    // 0x3ce7b8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3ce7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce7bc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3ce7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3ce7c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ce7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ce7c4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3ce7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce7c8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3ce7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3ce7cc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CE7CCu;
    {
        const bool branch_taken_0x3ce7cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ce7cc) {
            ctx->pc = 0x3CE808u;
            goto label_3ce808;
        }
    }
    ctx->pc = 0x3CE7D4u;
    // 0x3ce7d4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3ce7d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce7d8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3ce7d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3ce7dc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3CE7DCu;
    {
        const bool branch_taken_0x3ce7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE7DCu;
        // 0x3ce7e0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce7dc) {
            ctx->pc = 0x3CE830u;
            goto label_3ce830;
        }
    }
    ctx->pc = 0x3CE7E4u;
    // 0x3ce7e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce7e8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3ce7e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ce7ec: 0x0  nop
    ctx->pc = 0x3ce7ecu;
    // NOP
    // 0x3ce7f0: 0x0  nop
    ctx->pc = 0x3ce7f0u;
    // NOP
    // 0x3ce7f4: 0x2010  mfhi        $a0
    ctx->pc = 0x3ce7f4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3ce7f8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3ce7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce7fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CE7FCu;
    {
        const bool branch_taken_0x3ce7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE7FCu;
        // 0x3ce800: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce7fc) {
            ctx->pc = 0x3CE830u;
            goto label_3ce830;
        }
    }
    ctx->pc = 0x3CE804u;
    // 0x3ce804: 0x0  nop
    ctx->pc = 0x3ce804u;
    // NOP
label_3ce808:
    // 0x3ce808: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3ce808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce80c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3ce80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3ce810: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CE810u;
    {
        const bool branch_taken_0x3ce810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ce810) {
            ctx->pc = 0x3CE830u;
            goto label_3ce830;
        }
    }
    ctx->pc = 0x3CE818u;
    // 0x3ce818: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3ce818u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce81c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce820: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3ce820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ce824: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE824u;
    {
        const bool branch_taken_0x3ce824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE824u;
        // 0x3ce828: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce824) {
            ctx->pc = 0x3CE838u;
            goto label_3ce838;
        }
    }
    ctx->pc = 0x3CE82Cu;
    // 0x3ce82c: 0x0  nop
    ctx->pc = 0x3ce82cu;
    // NOP
label_3ce830:
    // 0x3ce830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce834: 0x0  nop
    ctx->pc = 0x3ce834u;
    // NOP
label_3ce838:
    // 0x3ce838: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x3CE838u;
    {
        const bool branch_taken_0x3ce838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE838u;
        // 0x3ce83c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce838) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE840u;
    // 0x3ce840: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE840u;
    SET_GPR_U32(ctx, 31, 0x3CE848u);
    ctx->pc = 0x3CE844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE840u;
    // 0x3ce844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE840u, 0x3CE848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE848u;
label_3ce848:
    // 0x3ce848: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3CE848u;
    {
        const bool branch_taken_0x3ce848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce848) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CE850u;
label_3ce850:
    // 0x3ce850: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3ce850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3ce854: 0xa2220568  sb          $v0, 0x568($s1)
    ctx->pc = 0x3ce854u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1384), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ce858: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3CE858u;
    SET_GPR_U32(ctx, 31, 0x3CE860u);
    ctx->pc = 0x3CE85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE858u;
    // 0x3ce85c: 0x8e240560  lw          $a0, 0x560($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3CE858u, 0x3CE860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE860u;
label_3ce860:
    // 0x3ce860: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3CE860u;
    {
        const bool branch_taken_0x3ce860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE860u;
        // 0x3ce864: 0xae200560  sw          $zero, 0x560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce860) {
            ctx->pc = 0x3CE8B0u;
            goto label_3ce8b0;
        }
    }
    ctx->pc = 0x3CE868u;
    // 0x3ce868: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3ce868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3ce86c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3ce86cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3ce870: 0xc0aa548  jal         func_2A9520
    ctx->pc = 0x3CE870u;
    SET_GPR_U32(ctx, 31, 0x3CE878u);
    ctx->pc = 0x3CE874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE870u;
    // 0x3ce874: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9520u, 0x3CE870u, 0x3CE878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE878u;
label_3ce878:
    // 0x3ce878: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x3ce878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
    // 0x3ce87c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ce87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3ce880: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3ce880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3ce884: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x3ce884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x3ce888: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ce888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3ce88c: 0x34454f02  ori         $a1, $v0, 0x4F02
    ctx->pc = 0x3ce88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20226);
    // 0x3ce890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ce890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce894: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3ce894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3ce898: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ce898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce89c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ce89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce8a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ce8a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce8a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ce8a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce8a8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CE8A8u;
    SET_GPR_U32(ctx, 31, 0x3CE8B0u);
    ctx->pc = 0x3CE8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE8A8u;
    // 0x3ce8ac: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CE8A8u, 0x3CE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE8B0u;
label_3ce8b0:
    // 0x3ce8b0: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x3ce8b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x3ce8b4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3ce8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ce8b8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3ce8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ce8bc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3ce8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ce8c0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3ce8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ce8c4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3ce8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3ce8c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ce8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ce8cc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3ce8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3ce8d0:
    // 0x3ce8d0: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3ce8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3ce8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce8d8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3CE8D8u;
    SET_GPR_U32(ctx, 31, 0x3CE8E0u);
    ctx->pc = 0x3CE8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE8D8u;
    // 0x3ce8dc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3CE8D8u, 0x3CE8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE8E0u;
label_3ce8e0:
    // 0x3ce8e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CE8E0u;
    {
        const bool branch_taken_0x3ce8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE8E0u;
        // 0x3ce8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce8e0) {
            ctx->pc = 0x3CE8F0u;
            goto label_3ce8f0;
        }
    }
    ctx->pc = 0x3CE8E8u;
    // 0x3ce8e8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CE8E8u;
    SET_GPR_U32(ctx, 31, 0x3CE8F0u);
    ctx->pc = 0x3CE8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE8E8u;
    // 0x3ce8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CE8E8u, 0x3CE8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE8F0u;
label_3ce8f0:
    // 0x3ce8f0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3ce8f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce8f4: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3CE8F4u;
    {
        const bool branch_taken_0x3ce8f4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3CE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE8F4u;
        // 0x3ce8f8: 0x28610005  slti        $at, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce8f4) {
            ctx->pc = 0x3CE960u;
            goto label_3ce960;
        }
    }
    ctx->pc = 0x3CE8FCu;
    // 0x3ce8fc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3CE8FCu;
    {
        const bool branch_taken_0x3ce8fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce8fc) {
            ctx->pc = 0x3CE960u;
            goto label_3ce960;
        }
    }
    ctx->pc = 0x3CE904u;
    // 0x3ce904: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3ce904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3ce908: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x3ce908u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ce90c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3ce90cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3ce910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce914: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3ce914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ce918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce91c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3ce91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3ce920: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x3ce920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x3ce924: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3ce924u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3ce928: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3ce928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3ce92c: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x3ce92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x3ce930: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3ce930u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3ce934: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3ce934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3ce938: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3ce938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x3ce93c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3ce93cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3ce940: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3ce940u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3ce944: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3ce944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3ce948: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3ce948u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3ce94c: 0x92260568  lbu         $a2, 0x568($s1)
    ctx->pc = 0x3ce94cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x3ce950: 0xc62c0564  lwc1        $f12, 0x564($s1)
    ctx->pc = 0x3ce950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ce954: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3CE954u;
    SET_GPR_U32(ctx, 31, 0x3CE95Cu);
    ctx->pc = 0x3CE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE954u;
    // 0x3ce958: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3CE954u, 0x3CE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE95Cu;
label_3ce95c:
    // 0x3ce95c: 0x0  nop
    ctx->pc = 0x3ce95cu;
    // NOP
label_3ce960:
    // 0x3ce960: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3ce960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3ce964: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE964u;
    {
        const bool branch_taken_0x3ce964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE964u;
        // 0x3ce968: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce964) {
            ctx->pc = 0x3CE978u;
            goto label_3ce978;
        }
    }
    ctx->pc = 0x3CE96Cu;
    // 0x3ce96c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3CE96Cu;
    {
        const bool branch_taken_0x3ce96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce96c) {
            ctx->pc = 0x3CE9F8u;
            goto label_3ce9f8;
        }
    }
    ctx->pc = 0x3CE974u;
    // 0x3ce974: 0x0  nop
    ctx->pc = 0x3ce974u;
    // NOP
label_3ce978:
    // 0x3ce978: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3ce978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce97c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3ce97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3ce980: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ce980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ce984: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3ce984u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce988: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3ce988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3ce98c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CE98Cu;
    {
        const bool branch_taken_0x3ce98c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ce98c) {
            ctx->pc = 0x3CE9C8u;
            goto label_3ce9c8;
        }
    }
    ctx->pc = 0x3CE994u;
    // 0x3ce994: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3ce994u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce998: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3ce998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3ce99c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3CE99Cu;
    {
        const bool branch_taken_0x3ce99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE99Cu;
        // 0x3ce9a0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce99c) {
            ctx->pc = 0x3CE9F0u;
            goto label_3ce9f0;
        }
    }
    ctx->pc = 0x3CE9A4u;
    // 0x3ce9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce9a8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3ce9a8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ce9ac: 0x0  nop
    ctx->pc = 0x3ce9acu;
    // NOP
    // 0x3ce9b0: 0x0  nop
    ctx->pc = 0x3ce9b0u;
    // NOP
    // 0x3ce9b4: 0x2010  mfhi        $a0
    ctx->pc = 0x3ce9b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3ce9b8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3ce9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce9bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CE9BCu;
    {
        const bool branch_taken_0x3ce9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE9BCu;
        // 0x3ce9c0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9bc) {
            ctx->pc = 0x3CE9F0u;
            goto label_3ce9f0;
        }
    }
    ctx->pc = 0x3CE9C4u;
    // 0x3ce9c4: 0x0  nop
    ctx->pc = 0x3ce9c4u;
    // NOP
label_3ce9c8:
    // 0x3ce9c8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3ce9c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3ce9cc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3ce9ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3ce9d0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CE9D0u;
    {
        const bool branch_taken_0x3ce9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ce9d0) {
            ctx->pc = 0x3CE9F0u;
            goto label_3ce9f0;
        }
    }
    ctx->pc = 0x3CE9D8u;
    // 0x3ce9d8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3ce9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ce9dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce9e0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3ce9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ce9e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE9E4u;
    {
        const bool branch_taken_0x3ce9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE9E4u;
        // 0x3ce9e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9e4) {
            ctx->pc = 0x3CE9F8u;
            goto label_3ce9f8;
        }
    }
    ctx->pc = 0x3CE9ECu;
    // 0x3ce9ec: 0x0  nop
    ctx->pc = 0x3ce9ecu;
    // NOP
label_3ce9f0:
    // 0x3ce9f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ce9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ce9f4: 0x0  nop
    ctx->pc = 0x3ce9f4u;
    // NOP
label_3ce9f8:
    // 0x3ce9f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CE9F8u;
    {
        const bool branch_taken_0x3ce9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE9F8u;
        // 0x3ce9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9f8) {
            ctx->pc = 0x3CEA08u;
            goto label_3cea08;
        }
    }
    ctx->pc = 0x3CEA00u;
    // 0x3cea00: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CEA00u;
    SET_GPR_U32(ctx, 31, 0x3CEA08u);
    ctx->pc = 0x3CEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEA00u;
    // 0x3cea04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CEA00u, 0x3CEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEA08u;
label_3cea08:
    // 0x3cea08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cea08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cea0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cea0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cea10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cea10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cea14: 0x3e00008  jr          $ra
    ctx->pc = 0x3CEA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEA14u;
        // 0x3cea18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CEA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CEA1Cu;
}

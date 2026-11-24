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

// Function: sub_0039E3F0
// Address: 0x39e3f0 - 0x39e684
void sub_0039E3F0_0x39e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E3F0_0x39e3f0");
#endif

    switch (ctx->pc) {
        case 0x39e408u: goto label_39e408;
        case 0x39e420u: goto label_39e420;
        case 0x39e480u: goto label_39e480;
        case 0x39e4acu: goto label_39e4ac;
        case 0x39e4d8u: goto label_39e4d8;
        case 0x39e4f4u: goto label_39e4f4;
        case 0x39e5b8u: goto label_39e5b8;
        case 0x39e5c8u: goto label_39e5c8;
        case 0x39e5fcu: goto label_39e5fc;
        case 0x39e618u: goto label_39e618;
        case 0x39e628u: goto label_39e628;
        case 0x39e638u: goto label_39e638;
        case 0x39e648u: goto label_39e648;
        case 0x39e658u: goto label_39e658;
        case 0x39e668u: goto label_39e668;
        case 0x39e670u: goto label_39e670;
        default: break;
    }

    ctx->pc = 0x39e3f0u;

    // 0x39e3f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39e3f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39e3f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39e3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x39e3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39e3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e400: 0xc0e7858  jal         func_39E160
    ctx->pc = 0x39E400u;
    SET_GPR_U32(ctx, 31, 0x39E408u);
    ctx->pc = 0x39E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E400u;
    // 0x39e404: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E160u, 0x39E400u, 0x39E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E408u;
label_39e408:
    // 0x39e408: 0x8e2206ac  lw          $v0, 0x6AC($s1)
    ctx->pc = 0x39e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x39e40c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x39e40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x39e410: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E410u;
    {
        const bool branch_taken_0x39e410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E410u;
        // 0x39e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e410) {
            ctx->pc = 0x39E420u;
            goto label_39e420;
        }
    }
    ctx->pc = 0x39E418u;
    // 0x39e418: 0xc0e78c4  jal         func_39E310
    ctx->pc = 0x39E418u;
    SET_GPR_U32(ctx, 31, 0x39E420u);
    ctx->pc = 0x39E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E310u, 0x39E418u, 0x39E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E420u;
label_39e420:
    // 0x39e420: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x39e420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x39e424: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x39e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x39e428: 0x1062008d  beq         $v1, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x39E428u;
    {
        const bool branch_taken_0x39e428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E428u;
        // 0x39e42c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e428) {
            ctx->pc = 0x39E660u;
            goto label_39e660;
        }
    }
    ctx->pc = 0x39E430u;
    // 0x39e430: 0x10620087  beq         $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x39E430u;
    {
        const bool branch_taken_0x39e430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39e430) {
            ctx->pc = 0x39E650u;
            goto label_39e650;
        }
    }
    ctx->pc = 0x39E438u;
    // 0x39e438: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x39e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x39e43c: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x39E43Cu;
    {
        const bool branch_taken_0x39e43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E43Cu;
        // 0x39e440: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e43c) {
            ctx->pc = 0x39E640u;
            goto label_39e640;
        }
    }
    ctx->pc = 0x39E444u;
    // 0x39e444: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x39E444u;
    {
        const bool branch_taken_0x39e444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39e444) {
            ctx->pc = 0x39E630u;
            goto label_39e630;
        }
    }
    ctx->pc = 0x39E44Cu;
    // 0x39e44c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x39e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x39e450: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x39E450u;
    {
        const bool branch_taken_0x39e450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E450u;
        // 0x39e454: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e450) {
            ctx->pc = 0x39E620u;
            goto label_39e620;
        }
    }
    ctx->pc = 0x39E458u;
    // 0x39e458: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x39E458u;
    {
        const bool branch_taken_0x39e458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39e458) {
            ctx->pc = 0x39E610u;
            goto label_39e610;
        }
    }
    ctx->pc = 0x39E460u;
    // 0x39e460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e464: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E464u;
    {
        const bool branch_taken_0x39e464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39e464) {
            ctx->pc = 0x39E478u;
            goto label_39e478;
        }
    }
    ctx->pc = 0x39E46Cu;
    // 0x39e46c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x39E46Cu;
    {
        const bool branch_taken_0x39e46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e46c) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E474u;
    // 0x39e474: 0x0  nop
    ctx->pc = 0x39e474u;
    // NOP
label_39e478:
    // 0x39e478: 0xc09759c  jal         func_25D670
    ctx->pc = 0x39E478u;
    SET_GPR_U32(ctx, 31, 0x39E480u);
    ctx->pc = 0x39E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E478u;
    // 0x39e47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D670u, 0x39E478u, 0x39E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E480u;
label_39e480:
    // 0x39e480: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x39E480u;
    {
        const bool branch_taken_0x39e480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e480) {
            ctx->pc = 0x39E500u;
            goto label_39e500;
        }
    }
    ctx->pc = 0x39E488u;
    // 0x39e488: 0x92232bd6  lbu         $v1, 0x2BD6($s1)
    ctx->pc = 0x39e488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11222)));
    // 0x39e48c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39E48Cu;
    {
        const bool branch_taken_0x39e48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e48c) {
            ctx->pc = 0x39E4E0u;
            goto label_39e4e0;
        }
    }
    ctx->pc = 0x39E494u;
    // 0x39e494: 0x92232bec  lbu         $v1, 0x2BEC($s1)
    ctx->pc = 0x39e494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11244)));
    // 0x39e498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e49c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39E49Cu;
    {
        const bool branch_taken_0x39e49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E49Cu;
        // 0x39e4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e49c) {
            ctx->pc = 0x39E4D0u;
            goto label_39e4d0;
        }
    }
    ctx->pc = 0x39E4A4u;
    // 0x39e4a4: 0xc0a483c  jal         func_2920F0
    ctx->pc = 0x39E4A4u;
    SET_GPR_U32(ctx, 31, 0x39E4ACu);
    ctx->pc = 0x39E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E4A4u;
    // 0x39e4a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2920F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920F0u, 0x39E4A4u, 0x39E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E4ACu;
label_39e4ac:
    // 0x39e4ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e4b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e4b4: 0xa2232bd6  sb          $v1, 0x2BD6($s1)
    ctx->pc = 0x39e4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11222), (uint8_t)GPR_U32(ctx, 3));
    // 0x39e4b8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x39e4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x39e4bc: 0xa6202bce  sh          $zero, 0x2BCE($s1)
    ctx->pc = 0x39e4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11214), (uint16_t)GPR_U32(ctx, 0));
    // 0x39e4c0: 0xa2222bec  sb          $v0, 0x2BEC($s1)
    ctx->pc = 0x39e4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11244), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e4c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x39e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x39e4c8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x39E4C8u;
    {
        const bool branch_taken_0x39e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4C8u;
        // 0x39e4cc: 0xac22fd94  sw          $v0, -0x26C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e4c8) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E4D0u;
label_39e4d0:
    // 0x39e4d0: 0xc0e77b8  jal         func_39DEE0
    ctx->pc = 0x39E4D0u;
    SET_GPR_U32(ctx, 31, 0x39E4D8u);
    ctx->pc = 0x39E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E4D0u;
    // 0x39e4d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DEE0u, 0x39E4D0u, 0x39E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E4D8u;
label_39e4d8:
    // 0x39e4d8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x39E4D8u;
    {
        const bool branch_taken_0x39e4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e4d8) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E4E0u;
label_39e4e0:
    // 0x39e4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e4e4: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x39E4E4u;
    {
        const bool branch_taken_0x39e4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4E4u;
        // 0x39e4e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e4e4) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E4ECu;
    // 0x39e4ec: 0xc0e77ec  jal         func_39DFB0
    ctx->pc = 0x39E4ECu;
    SET_GPR_U32(ctx, 31, 0x39E4F4u);
    ctx->pc = 0x39DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DFB0u, 0x39E4ECu, 0x39E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E4F4u;
label_39e4f4:
    // 0x39e4f4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x39E4F4u;
    {
        const bool branch_taken_0x39e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e4f4) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E4FCu;
    // 0x39e4fc: 0x0  nop
    ctx->pc = 0x39e4fcu;
    // NOP
label_39e500:
    // 0x39e500: 0x86232bce  lh          $v1, 0x2BCE($s1)
    ctx->pc = 0x39e500u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11214)));
    // 0x39e504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39e508: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E508u;
    {
        const bool branch_taken_0x39e508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E508u;
        // 0x39e50c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e508) {
            ctx->pc = 0x39E518u;
            goto label_39e518;
        }
    }
    ctx->pc = 0x39E510u;
    // 0x39e510: 0xa6222bce  sh          $v0, 0x2BCE($s1)
    ctx->pc = 0x39e510u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11214), (uint16_t)GPR_U32(ctx, 2));
    // 0x39e514: 0x0  nop
    ctx->pc = 0x39e514u;
    // NOP
label_39e518:
    // 0x39e518: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x39e518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x39e51c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x39e51cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x39e520: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x39e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x39e524: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x39e524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x39e528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39e528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39e52c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39e530: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39e530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39e534: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x39E534u;
    {
        const bool branch_taken_0x39e534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e534) {
            ctx->pc = 0x39E600u;
            goto label_39e600;
        }
    }
    ctx->pc = 0x39E53Cu;
    // 0x39e53c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39e53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39e540: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x39e540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
    // 0x39e544: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x39e544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39e548: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39e548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39e54c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x39e54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39e550: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39e550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39e554: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39e554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39e558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39e55c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39e55cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39e560: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39e560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39e564: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39e564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39e568: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39E568u;
    {
        const bool branch_taken_0x39e568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E568u;
        // 0x39e56c: 0x86242bce  lh          $a0, 0x2BCE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11214)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e568) {
            ctx->pc = 0x39E580u;
            goto label_39e580;
        }
    }
    ctx->pc = 0x39E570u;
    // 0x39e570: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39e570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39e574: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39e574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39e578: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39E578u;
    {
        const bool branch_taken_0x39e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e578) {
            ctx->pc = 0x39E598u;
            goto label_39e598;
        }
    }
    ctx->pc = 0x39E580u;
label_39e580:
    // 0x39e580: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39e580u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39e584: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39e584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39e588: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39e588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39e58c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39e58cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39e590: 0x0  nop
    ctx->pc = 0x39e590u;
    // NOP
    // 0x39e594: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39e594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39e598:
    // 0x39e598: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x39E598u;
    {
        const bool branch_taken_0x39e598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x39E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E598u;
        // 0x39e59c: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e598) {
            ctx->pc = 0x39E600u;
            goto label_39e600;
        }
    }
    ctx->pc = 0x39E5A0u;
    // 0x39e5a0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x39e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39e5a4: 0x2442cab0  addiu       $v0, $v0, -0x3550
    ctx->pc = 0x39e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953648));
    // 0x39e5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5ac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x39e5acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39e5b0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x39E5B0u;
    SET_GPR_U32(ctx, 31, 0x39E5B8u);
    ctx->pc = 0x39E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E5B0u;
    // 0x39e5b4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x39E5B0u, 0x39E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E5B8u;
label_39e5b8:
    // 0x39e5b8: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x39e5b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39e5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39e5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5c0: 0xc0aa1c8  jal         func_2A8720
    ctx->pc = 0x39E5C0u;
    SET_GPR_U32(ctx, 31, 0x39E5C8u);
    ctx->pc = 0x39E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E5C0u;
    // 0x39e5c4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8720u, 0x39E5C0u, 0x39E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E5C8u;
label_39e5c8:
    // 0x39e5c8: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x39e5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x39e5cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39e5d0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x39e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x39e5d4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39e5d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39e5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5dc: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39e5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39e5e0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x39e5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39e5e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39e5e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39e5e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39e5ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39e5f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5f4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39E5F4u;
    SET_GPR_U32(ctx, 31, 0x39E5FCu);
    ctx->pc = 0x39E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E5F4u;
    // 0x39e5f8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39E5F4u, 0x39E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E5FCu;
label_39e5fc:
    // 0x39e5fc: 0x0  nop
    ctx->pc = 0x39e5fcu;
    // NOP
label_39e600:
    // 0x39e600: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x39e600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x39e604: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39e608: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x39E608u;
    {
        const bool branch_taken_0x39e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E608u;
        // 0x39e60c: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e608) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E610u;
label_39e610:
    // 0x39e610: 0xc0e7284  jal         func_39CA10
    ctx->pc = 0x39E610u;
    SET_GPR_U32(ctx, 31, 0x39E618u);
    ctx->pc = 0x39E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E610u;
    // 0x39e614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CA10u, 0x39E610u, 0x39E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E618u;
label_39e618:
    // 0x39e618: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x39E618u;
    {
        const bool branch_taken_0x39e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e618) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E620u;
label_39e620:
    // 0x39e620: 0xc0e7370  jal         func_39CDC0
    ctx->pc = 0x39E620u;
    SET_GPR_U32(ctx, 31, 0x39E628u);
    ctx->pc = 0x39E624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E620u;
    // 0x39e624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CDC0u, 0x39E620u, 0x39E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E628u;
label_39e628:
    // 0x39e628: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39E628u;
    {
        const bool branch_taken_0x39e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e628) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E630u;
label_39e630:
    // 0x39e630: 0xc0e7454  jal         func_39D150
    ctx->pc = 0x39E630u;
    SET_GPR_U32(ctx, 31, 0x39E638u);
    ctx->pc = 0x39E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E630u;
    // 0x39e634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D150u, 0x39E630u, 0x39E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E638u;
label_39e638:
    // 0x39e638: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39E638u;
    {
        const bool branch_taken_0x39e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e638) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E640u;
label_39e640:
    // 0x39e640: 0xc0e7680  jal         func_39DA00
    ctx->pc = 0x39E640u;
    SET_GPR_U32(ctx, 31, 0x39E648u);
    ctx->pc = 0x39E644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E640u;
    // 0x39e644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DA00u, 0x39E640u, 0x39E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E648u;
label_39e648:
    // 0x39e648: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39E648u;
    {
        const bool branch_taken_0x39e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e648) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E650u;
label_39e650:
    // 0x39e650: 0xc0e76a8  jal         func_39DAA0
    ctx->pc = 0x39E650u;
    SET_GPR_U32(ctx, 31, 0x39E658u);
    ctx->pc = 0x39E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E650u;
    // 0x39e654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DAA0u, 0x39E650u, 0x39E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E658u;
label_39e658:
    // 0x39e658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39E658u;
    {
        const bool branch_taken_0x39e658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e658) {
            ctx->pc = 0x39E668u;
            goto label_39e668;
        }
    }
    ctx->pc = 0x39E660u;
label_39e660:
    // 0x39e660: 0xc0e7738  jal         func_39DCE0
    ctx->pc = 0x39E660u;
    SET_GPR_U32(ctx, 31, 0x39E668u);
    ctx->pc = 0x39E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E660u;
    // 0x39e664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DCE0u, 0x39E660u, 0x39E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E668u;
label_39e668:
    // 0x39e668: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x39E668u;
    SET_GPR_U32(ctx, 31, 0x39E670u);
    ctx->pc = 0x39E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E668u;
    // 0x39e66c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x39E668u, 0x39E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E670u;
label_39e670:
    // 0x39e670: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39e670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e674: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39e674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e678: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39e678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e67c: 0x3e00008  jr          $ra
    ctx->pc = 0x39E67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E67Cu;
        // 0x39e680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E684u;
}

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

// Function: sub_00245170
// Address: 0x245170 - 0x245278
void sub_00245170_0x245170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245170_0x245170");
#endif

    switch (ctx->pc) {
        case 0x245170u: goto label_245170;
        case 0x245174u: goto label_245174;
        case 0x245178u: goto label_245178;
        case 0x24517cu: goto label_24517c;
        case 0x245180u: goto label_245180;
        case 0x245184u: goto label_245184;
        case 0x245188u: goto label_245188;
        case 0x24518cu: goto label_24518c;
        case 0x245190u: goto label_245190;
        case 0x245194u: goto label_245194;
        case 0x245198u: goto label_245198;
        case 0x24519cu: goto label_24519c;
        case 0x2451a0u: goto label_2451a0;
        case 0x2451a4u: goto label_2451a4;
        case 0x2451a8u: goto label_2451a8;
        case 0x2451acu: goto label_2451ac;
        case 0x2451b0u: goto label_2451b0;
        case 0x2451b4u: goto label_2451b4;
        case 0x2451b8u: goto label_2451b8;
        case 0x2451bcu: goto label_2451bc;
        case 0x2451c0u: goto label_2451c0;
        case 0x2451c4u: goto label_2451c4;
        case 0x2451c8u: goto label_2451c8;
        case 0x2451ccu: goto label_2451cc;
        case 0x2451d0u: goto label_2451d0;
        case 0x2451d4u: goto label_2451d4;
        case 0x2451d8u: goto label_2451d8;
        case 0x2451dcu: goto label_2451dc;
        case 0x2451e0u: goto label_2451e0;
        case 0x2451e4u: goto label_2451e4;
        case 0x2451e8u: goto label_2451e8;
        case 0x2451ecu: goto label_2451ec;
        case 0x2451f0u: goto label_2451f0;
        case 0x2451f4u: goto label_2451f4;
        case 0x2451f8u: goto label_2451f8;
        case 0x2451fcu: goto label_2451fc;
        case 0x245200u: goto label_245200;
        case 0x245204u: goto label_245204;
        case 0x245208u: goto label_245208;
        case 0x24520cu: goto label_24520c;
        case 0x245210u: goto label_245210;
        case 0x245214u: goto label_245214;
        case 0x245218u: goto label_245218;
        case 0x24521cu: goto label_24521c;
        case 0x245220u: goto label_245220;
        case 0x245224u: goto label_245224;
        case 0x245228u: goto label_245228;
        case 0x24522cu: goto label_24522c;
        case 0x245230u: goto label_245230;
        case 0x245234u: goto label_245234;
        case 0x245238u: goto label_245238;
        case 0x24523cu: goto label_24523c;
        case 0x245240u: goto label_245240;
        case 0x245244u: goto label_245244;
        case 0x245248u: goto label_245248;
        case 0x24524cu: goto label_24524c;
        case 0x245250u: goto label_245250;
        case 0x245254u: goto label_245254;
        case 0x245258u: goto label_245258;
        case 0x24525cu: goto label_24525c;
        case 0x245260u: goto label_245260;
        case 0x245264u: goto label_245264;
        case 0x245268u: goto label_245268;
        case 0x24526cu: goto label_24526c;
        case 0x245270u: goto label_245270;
        case 0x245274u: goto label_245274;
        default: break;
    }

    ctx->pc = 0x245170u;

label_245170:
    // 0x245170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x245170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_245174:
    // 0x245174: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x245174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_245178:
    // 0x245178: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x245178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24517c:
    // 0x24517c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_245180:
    // 0x245180: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x245180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245184:
    // 0x245184: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x245184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_245188:
    // 0x245188: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x245188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24518c:
    // 0x24518c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_245190:
    // 0x245190: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_245194:
    if (ctx->pc == 0x245194u) {
        ctx->pc = 0x245194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245190u;
        // 0x245194: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245198u;
        goto label_245198;
    }
    ctx->pc = 0x245190u;
    {
        const bool branch_taken_0x245190 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245190u;
        // 0x245194: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245190) {
            ctx->pc = 0x2451B0u;
            goto label_2451b0;
        }
    }
    ctx->pc = 0x245198u;
label_245198:
    // 0x245198: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24519c:
    // 0x24519c: 0xc090d8a  jal         func_243628
label_2451a0:
    if (ctx->pc == 0x2451A0u) {
        ctx->pc = 0x2451A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24519Cu;
        // 0x2451a0: 0x2484c5a0  addiu       $a0, $a0, -0x3A60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451A4u;
        goto label_2451a4;
    }
    ctx->pc = 0x24519Cu;
    SET_GPR_U32(ctx, 31, 0x2451A4u);
    ctx->pc = 0x2451A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24519Cu;
    // 0x2451a0: 0x2484c5a0  addiu       $a0, $a0, -0x3A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x24519Cu, 0x2451A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451A4u;
label_2451a4:
    // 0x2451a4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2451a8:
    if (ctx->pc == 0x2451A8u) {
        ctx->pc = 0x2451A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451A4u;
        // 0x2451a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451ACu;
        goto label_2451ac;
    }
    ctx->pc = 0x2451A4u;
    {
        const bool branch_taken_0x2451a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451A4u;
        // 0x2451a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451a4) {
            ctx->pc = 0x24525Cu;
            goto label_24525c;
        }
    }
    ctx->pc = 0x2451ACu;
label_2451ac:
    // 0x2451ac: 0x0  nop
    ctx->pc = 0x2451acu;
    // NOP
label_2451b0:
    // 0x2451b0: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_2451b4:
    if (ctx->pc == 0x2451B4u) {
        ctx->pc = 0x2451B8u;
        goto label_2451b8;
    }
    ctx->pc = 0x2451B0u;
    {
        const bool branch_taken_0x2451b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2451b0) {
            ctx->pc = 0x2451D0u;
            goto label_2451d0;
        }
    }
    ctx->pc = 0x2451B8u;
label_2451b8:
    // 0x2451b8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2451b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2451bc:
    // 0x2451bc: 0xc090d8a  jal         func_243628
label_2451c0:
    if (ctx->pc == 0x2451C0u) {
        ctx->pc = 0x2451C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451BCu;
        // 0x2451c0: 0x2484c5c8  addiu       $a0, $a0, -0x3A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451C4u;
        goto label_2451c4;
    }
    ctx->pc = 0x2451BCu;
    SET_GPR_U32(ctx, 31, 0x2451C4u);
    ctx->pc = 0x2451C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2451BCu;
    // 0x2451c0: 0x2484c5c8  addiu       $a0, $a0, -0x3A38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2451BCu, 0x2451C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451C4u;
label_2451c4:
    // 0x2451c4: 0x10000025  b           . + 4 + (0x25 << 2)
label_2451c8:
    if (ctx->pc == 0x2451C8u) {
        ctx->pc = 0x2451C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451C4u;
        // 0x2451c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451CCu;
        goto label_2451cc;
    }
    ctx->pc = 0x2451C4u;
    {
        const bool branch_taken_0x2451c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451C4u;
        // 0x2451c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451c4) {
            ctx->pc = 0x24525Cu;
            goto label_24525c;
        }
    }
    ctx->pc = 0x2451CCu;
label_2451cc:
    // 0x2451cc: 0x0  nop
    ctx->pc = 0x2451ccu;
    // NOP
label_2451d0:
    // 0x2451d0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_2451d4:
    if (ctx->pc == 0x2451D4u) {
        ctx->pc = 0x2451D8u;
        goto label_2451d8;
    }
    ctx->pc = 0x2451D0u;
    {
        const bool branch_taken_0x2451d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2451d0) {
            ctx->pc = 0x2451F0u;
            goto label_2451f0;
        }
    }
    ctx->pc = 0x2451D8u;
label_2451d8:
    // 0x2451d8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2451d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2451dc:
    // 0x2451dc: 0xc090d8a  jal         func_243628
label_2451e0:
    if (ctx->pc == 0x2451E0u) {
        ctx->pc = 0x2451E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451DCu;
        // 0x2451e0: 0x2484c5f0  addiu       $a0, $a0, -0x3A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451E4u;
        goto label_2451e4;
    }
    ctx->pc = 0x2451DCu;
    SET_GPR_U32(ctx, 31, 0x2451E4u);
    ctx->pc = 0x2451E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2451DCu;
    // 0x2451e0: 0x2484c5f0  addiu       $a0, $a0, -0x3A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2451DCu, 0x2451E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451E4u;
label_2451e4:
    // 0x2451e4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2451e8:
    if (ctx->pc == 0x2451E8u) {
        ctx->pc = 0x2451E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451E4u;
        // 0x2451e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2451ECu;
        goto label_2451ec;
    }
    ctx->pc = 0x2451E4u;
    {
        const bool branch_taken_0x2451e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451E4u;
        // 0x2451e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451e4) {
            ctx->pc = 0x24525Cu;
            goto label_24525c;
        }
    }
    ctx->pc = 0x2451ECu;
label_2451ec:
    // 0x2451ec: 0x0  nop
    ctx->pc = 0x2451ecu;
    // NOP
label_2451f0:
    // 0x2451f0: 0xc090e62  jal         func_243988
label_2451f4:
    if (ctx->pc == 0x2451F4u) {
        ctx->pc = 0x2451F8u;
        goto label_2451f8;
    }
    ctx->pc = 0x2451F0u;
    SET_GPR_U32(ctx, 31, 0x2451F8u);
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x2451F0u, 0x2451F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451F8u;
label_2451f8:
    // 0x2451f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2451f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2451fc:
    // 0x2451fc: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_245200:
    if (ctx->pc == 0x245200u) {
        ctx->pc = 0x245200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451FCu;
        // 0x245200: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245204u;
        goto label_245204;
    }
    ctx->pc = 0x2451FCu;
    {
        const bool branch_taken_0x2451fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2451fc) {
            ctx->pc = 0x245200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2451FCu;
            // 0x245200: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x245204u;
label_245204:
    // 0x245204: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_245208:
    // 0x245208: 0xc090d8a  jal         func_243628
label_24520c:
    if (ctx->pc == 0x24520Cu) {
        ctx->pc = 0x24520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245208u;
        // 0x24520c: 0x2484c618  addiu       $a0, $a0, -0x39E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245210u;
        goto label_245210;
    }
    ctx->pc = 0x245208u;
    SET_GPR_U32(ctx, 31, 0x245210u);
    ctx->pc = 0x24520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245208u;
    // 0x24520c: 0x2484c618  addiu       $a0, $a0, -0x39E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x245208u, 0x245210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245210u;
label_245210:
    // 0x245210: 0x10000012  b           . + 4 + (0x12 << 2)
label_245214:
    if (ctx->pc == 0x245214u) {
        ctx->pc = 0x245214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245210u;
        // 0x245214: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245218u;
        goto label_245218;
    }
    ctx->pc = 0x245210u;
    {
        const bool branch_taken_0x245210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245210u;
        // 0x245214: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245210) {
            ctx->pc = 0x24525Cu;
            goto label_24525c;
        }
    }
    ctx->pc = 0x245218u;
label_245218:
    // 0x245218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24521c:
    // 0x24521c: 0xc049590  jal         func_125640
label_245220:
    if (ctx->pc == 0x245220u) {
        ctx->pc = 0x245220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24521Cu;
        // 0x245220: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245224u;
        goto label_245224;
    }
    ctx->pc = 0x24521Cu;
    SET_GPR_U32(ctx, 31, 0x245224u);
    ctx->pc = 0x245220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24521Cu;
    // 0x245220: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24521Cu, 0x245224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245224u;
label_245224:
    // 0x245224: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x245224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_245228:
    // 0x245228: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x245228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_24522c:
    // 0x24522c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x24522cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_245230:
    // 0x245230: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x245230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_245234:
    // 0x245234: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_245238:
    if (ctx->pc == 0x245238u) {
        ctx->pc = 0x245238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245234u;
        // 0x245238: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24523Cu;
        goto label_24523c;
    }
    ctx->pc = 0x245234u;
    {
        const bool branch_taken_0x245234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245234u;
        // 0x245238: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245234) {
            ctx->pc = 0x245258u;
            goto label_245258;
        }
    }
    ctx->pc = 0x24523Cu;
label_24523c:
    // 0x24523c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24523cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_245240:
    // 0x245240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245244:
    // 0x245244: 0x40f809  jalr        $v0
label_245248:
    if (ctx->pc == 0x245248u) {
        ctx->pc = 0x245248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245244u;
        // 0x245248: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24524Cu;
        goto label_24524c;
    }
    ctx->pc = 0x245244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24524Cu);
        ctx->pc = 0x245248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245244u;
        // 0x245248: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245244u, 0x24524Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24524Cu;
label_24524c:
    // 0x24524c: 0x10000004  b           . + 4 + (0x4 << 2)
label_245250:
    if (ctx->pc == 0x245250u) {
        ctx->pc = 0x245250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24524Cu;
        // 0x245250: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245254u;
        goto label_245254;
    }
    ctx->pc = 0x24524Cu;
    {
        const bool branch_taken_0x24524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24524Cu;
        // 0x245250: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24524c) {
            ctx->pc = 0x245260u;
            goto label_245260;
        }
    }
    ctx->pc = 0x245254u;
label_245254:
    // 0x245254: 0x0  nop
    ctx->pc = 0x245254u;
    // NOP
label_245258:
    // 0x245258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x245258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24525c:
    // 0x24525c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24525cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_245260:
    // 0x245260: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x245260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_245264:
    // 0x245264: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x245264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_245268:
    // 0x245268: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x245268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_24526c:
    // 0x24526c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24526cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_245270:
    // 0x245270: 0x3e00008  jr          $ra
label_245274:
    if (ctx->pc == 0x245274u) {
        ctx->pc = 0x245274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245270u;
        // 0x245274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245278u;
        goto label_fallthrough_0x245270;
    }
    ctx->pc = 0x245270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245270u;
        // 0x245274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245270:
    ctx->pc = 0x245278u;
}

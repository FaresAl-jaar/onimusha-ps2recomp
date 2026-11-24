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

// Function: sub_003A6340
// Address: 0x3a6340 - 0x3a6950
void sub_003A6340_0x3a6340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6340_0x3a6340");
#endif

    switch (ctx->pc) {
        case 0x3a63b0u: goto label_3a63b0;
        case 0x3a63c0u: goto label_3a63c0;
        case 0x3a63e8u: goto label_3a63e8;
        case 0x3a63f8u: goto label_3a63f8;
        case 0x3a6420u: goto label_3a6420;
        case 0x3a6430u: goto label_3a6430;
        case 0x3a6440u: goto label_3a6440;
        case 0x3a6478u: goto label_3a6478;
        case 0x3a64a0u: goto label_3a64a0;
        case 0x3a64b0u: goto label_3a64b0;
        case 0x3a64b8u: goto label_3a64b8;
        case 0x3a6568u: goto label_3a6568;
        case 0x3a6584u: goto label_3a6584;
        case 0x3a65b0u: goto label_3a65b0;
        case 0x3a65c4u: goto label_3a65c4;
        case 0x3a6614u: goto label_3a6614;
        case 0x3a6638u: goto label_3a6638;
        case 0x3a66a8u: goto label_3a66a8;
        case 0x3a66c4u: goto label_3a66c4;
        case 0x3a66e0u: goto label_3a66e0;
        case 0x3a675cu: goto label_3a675c;
        case 0x3a6778u: goto label_3a6778;
        case 0x3a67a0u: goto label_3a67a0;
        case 0x3a67b4u: goto label_3a67b4;
        case 0x3a67e8u: goto label_3a67e8;
        case 0x3a6840u: goto label_3a6840;
        case 0x3a684cu: goto label_3a684c;
        case 0x3a689cu: goto label_3a689c;
        case 0x3a68b4u: goto label_3a68b4;
        case 0x3a68c4u: goto label_3a68c4;
        case 0x3a6934u: goto label_3a6934;
        default: break;
    }

    ctx->pc = 0x3a6340u;

    // 0x3a6340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a6340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a6344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a6344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3a6348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a6348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a634c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a6350: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a6350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6354: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6358: 0x80850007  lb          $a1, 0x7($a0)
    ctx->pc = 0x3a6358u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3a635c: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x3a635cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a6360: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3a6360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a6364: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x3a6364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a6368: 0x2ce10008  sltiu       $at, $a3, 0x8
    ctx->pc = 0x3a6368u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a636c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3a636cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a6370: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3a6370u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a6374: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a6374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a6378: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3a6378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a637c: 0x1020016e  beqz        $at, . + 4 + (0x16E << 2)
    ctx->pc = 0x3A637Cu;
    {
        const bool branch_taken_0x3a637c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A637Cu;
        // 0x3a6380: 0x24710190  addiu       $s1, $v1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a637c) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6384u;
    // 0x3a6384: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3a6384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3a6388: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3a6388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3a638c: 0x24c62820  addiu       $a2, $a2, 0x2820
    ctx->pc = 0x3a638cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10272));
    // 0x3a6390: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3a6390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a6394: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a6394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a6398: 0x600008  jr          $v1
    ctx->pc = 0x3A6398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A63A0u: goto label_3a63a0;
            case 0x3A63D8u: goto label_3a63d8;
            case 0x3A6410u: goto label_3a6410;
            case 0x3A6470u: goto label_3a6470;
            case 0x3A6498u: goto label_3a6498;
            case 0x3A6590u: goto label_3a6590;
            case 0x3A65D0u: goto label_3a65d0;
            case 0x3A6858u: goto label_3a6858;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6398u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A63A0u;
label_3a63a0:
    // 0x3a63a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a63a4: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a63a8: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A63A8u;
    SET_GPR_U32(ctx, 31, 0x3A63B0u);
    ctx->pc = 0x3A63ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A63A8u;
    // 0x3a63ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A63A8u, 0x3A63B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63B0u;
label_3a63b0:
    // 0x3a63b0: 0x1c400161  bgtz        $v0, . + 4 + (0x161 << 2)
    ctx->pc = 0x3A63B0u;
    {
        const bool branch_taken_0x3a63b0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63B0u;
        // 0x3a63b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63b0) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A63B8u;
    // 0x3a63b8: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A63B8u;
    SET_GPR_U32(ctx, 31, 0x3A63C0u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A63B8u, 0x3A63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63C0u;
label_3a63c0:
    // 0x3a63c0: 0x440015d  bltz        $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x3A63C0u;
    {
        const bool branch_taken_0x3a63c0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a63c0) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A63C8u;
    // 0x3a63c8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3a63c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a63cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a63d0: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x3A63D0u;
    {
        const bool branch_taken_0x3a63d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63D0u;
        // 0x3a63d4: 0xa2430002  sb          $v1, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63d0) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A63D8u;
label_3a63d8:
    // 0x3a63d8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a63d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a63dc: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a63dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a63e0: 0xc052aa4  jal         func_14AA90
    ctx->pc = 0x3A63E0u;
    SET_GPR_U32(ctx, 31, 0x3A63E8u);
    ctx->pc = 0x3A63E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A63E0u;
    // 0x3a63e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA90u, 0x3A63E0u, 0x3A63E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63E8u;
label_3a63e8:
    // 0x3a63e8: 0x1c400153  bgtz        $v0, . + 4 + (0x153 << 2)
    ctx->pc = 0x3A63E8u;
    {
        const bool branch_taken_0x3a63e8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A63ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A63E8u;
        // 0x3a63ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a63e8) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A63F0u;
    // 0x3a63f0: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A63F0u;
    SET_GPR_U32(ctx, 31, 0x3A63F8u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A63F0u, 0x3A63F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A63F8u;
label_3a63f8:
    // 0x3a63f8: 0x440014f  bltz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x3A63F8u;
    {
        const bool branch_taken_0x3a63f8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a63f8) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6400u;
    // 0x3a6400: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3a6400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a6404: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6408: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x3A6408u;
    {
        const bool branch_taken_0x3a6408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6408u;
        // 0x3a640c: 0xa2430002  sb          $v1, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6408) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6410u;
label_3a6410:
    // 0x3a6410: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a6410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a6414: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a6414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a6418: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x3A6418u;
    SET_GPR_U32(ctx, 31, 0x3A6420u);
    ctx->pc = 0x3A641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6418u;
    // 0x3a641c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x3A6418u, 0x3A6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6420u;
label_3a6420:
    // 0x3a6420: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x3A6420u;
    {
        const bool branch_taken_0x3a6420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6420u;
        // 0x3a6424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6420) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6428u;
    // 0x3a6428: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3A6428u;
    SET_GPR_U32(ctx, 31, 0x3A6430u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3A6428u, 0x3A6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6430u;
label_3a6430:
    // 0x3a6430: 0x4400141  bltz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x3A6430u;
    {
        const bool branch_taken_0x3a6430 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6430u;
        // 0x3a6434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6430) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6438u;
    // 0x3a6438: 0xc0eb678  jal         func_3AD9E0
    ctx->pc = 0x3A6438u;
    SET_GPR_U32(ctx, 31, 0x3A6440u);
    ctx->pc = 0x3AD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD9E0u, 0x3A6438u, 0x3A6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6440u;
label_3a6440:
    // 0x3a6440: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6440u;
    {
        const bool branch_taken_0x3a6440 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3a6440) {
            ctx->pc = 0x3A6460u;
            goto label_3a6460;
        }
    }
    ctx->pc = 0x3A6448u;
    // 0x3a6448: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3a6448u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a644c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6450: 0xa243000a  sb          $v1, 0xA($s2)
    ctx->pc = 0x3a6450u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a6454: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a6454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a6458: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x3A6458u;
    {
        const bool branch_taken_0x3a6458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6458u;
        // 0x3a645c: 0xa6430014  sh          $v1, 0x14($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6458) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6460u;
label_3a6460:
    // 0x3a6460: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3a6460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a6464: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6468: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x3A6468u;
    {
        const bool branch_taken_0x3a6468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6468u;
        // 0x3a646c: 0xa2430002  sb          $v1, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6468) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6470u;
label_3a6470:
    // 0x3a6470: 0xc0eaac4  jal         func_3AAB10
    ctx->pc = 0x3A6470u;
    SET_GPR_U32(ctx, 31, 0x3A6478u);
    ctx->pc = 0x3AAB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAB10u, 0x3A6470u, 0x3A6478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6478u;
label_3a6478:
    // 0x3a6478: 0x1040012f  beqz        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x3A6478u;
    {
        const bool branch_taken_0x3a6478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6478) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6480u;
    // 0x3a6480: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3a6480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a6484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6488: 0xa2430002  sb          $v1, 0x2($s2)
    ctx->pc = 0x3a6488u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a648c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x3A648Cu;
    {
        const bool branch_taken_0x3a648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A648Cu;
        // 0x3a6490: 0xa2400008  sb          $zero, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a648c) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6494u;
    // 0x3a6494: 0x0  nop
    ctx->pc = 0x3a6494u;
    // NOP
label_3a6498:
    // 0x3a6498: 0xc0eab50  jal         func_3AAD40
    ctx->pc = 0x3A6498u;
    SET_GPR_U32(ctx, 31, 0x3A64A0u);
    ctx->pc = 0x3AAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAD40u, 0x3A6498u, 0x3A64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64A0u;
label_3a64a0:
    // 0x3a64a0: 0x10400125  beqz        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x3A64A0u;
    {
        const bool branch_taken_0x3a64a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64A0u;
        // 0x3a64a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64a0) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A64A8u;
    // 0x3a64a8: 0xc0eaf18  jal         func_3ABC60
    ctx->pc = 0x3A64A8u;
    SET_GPR_U32(ctx, 31, 0x3A64B0u);
    ctx->pc = 0x3A64ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A64A8u;
    // 0x3a64ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABC60u, 0x3A64A8u, 0x3A64B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64B0u;
label_3a64b0:
    // 0x3a64b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a64b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a64b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a64b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a64b8:
    // 0x3a64b8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A64B8u;
    {
        const bool branch_taken_0x3a64b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a64b8) {
            ctx->pc = 0x3A64D0u;
            goto label_3a64d0;
        }
    }
    ctx->pc = 0x3A64C0u;
    // 0x3a64c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a64c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a64c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A64C4u;
    {
        const bool branch_taken_0x3a64c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a64c4) {
            ctx->pc = 0x3A64D0u;
            goto label_3a64d0;
        }
    }
    ctx->pc = 0x3A64CCu;
    // 0x3a64cc: 0xa2460008  sb          $a2, 0x8($s2)
    ctx->pc = 0x3a64ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 6));
label_3a64d0:
    // 0x3a64d0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3a64d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a64d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a64d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a64d8: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x3a64d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a64dc: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x3a64dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x3a64e0: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x3a64e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x3a64e4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A64E4u;
    {
        const bool branch_taken_0x3a64e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64E4u;
        // 0x3a64e8: 0x3090ffff  andi        $s0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64e4) {
            ctx->pc = 0x3A64B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a64b8;
        }
    }
    ctx->pc = 0x3A64ECu;
    // 0x3a64ec: 0x82440058  lb          $a0, 0x58($s2)
    ctx->pc = 0x3a64ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x3a64f0: 0x82430007  lb          $v1, 0x7($s2)
    ctx->pc = 0x3a64f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x3a64f4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3A64F4u;
    {
        const bool branch_taken_0x3a64f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a64f4) {
            ctx->pc = 0x3A6530u;
            goto label_3a6530;
        }
    }
    ctx->pc = 0x3A64FCu;
    // 0x3a64fc: 0x82440059  lb          $a0, 0x59($s2)
    ctx->pc = 0x3a64fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 89)));
    // 0x3a6500: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a6500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a6504: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a6504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a6508: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3a6508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3a650c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3a650cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3a6510: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3a6510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a6514: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6514u;
    {
        const bool branch_taken_0x3a6514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6514) {
            ctx->pc = 0x3A6528u;
            goto label_3a6528;
        }
    }
    ctx->pc = 0x3A651Cu;
    // 0x3a651c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A651Cu;
    {
        const bool branch_taken_0x3a651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A651Cu;
        // 0x3a6520: 0xa2440008  sb          $a0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a651c) {
            ctx->pc = 0x3A6530u;
            goto label_3a6530;
        }
    }
    ctx->pc = 0x3A6524u;
    // 0x3a6524: 0x0  nop
    ctx->pc = 0x3a6524u;
    // NOP
label_3a6528:
    // 0x3a6528: 0xa2400059  sb          $zero, 0x59($s2)
    ctx->pc = 0x3a6528u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a652c: 0x0  nop
    ctx->pc = 0x3a652cu;
    // NOP
label_3a6530:
    // 0x3a6530: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6530u;
    {
        const bool branch_taken_0x3a6530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6530) {
            ctx->pc = 0x3A6550u;
            goto label_3a6550;
        }
    }
    ctx->pc = 0x3A6538u;
    // 0x3a6538: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3a6538u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a653c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6540: 0xa243000a  sb          $v1, 0xA($s2)
    ctx->pc = 0x3a6540u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a6544: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a6544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a6548: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x3A6548u;
    {
        const bool branch_taken_0x3a6548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6548u;
        // 0x3a654c: 0xa6430014  sh          $v1, 0x14($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6548) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6550u;
label_3a6550:
    // 0x3a6550: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3a6550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a6554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a6558: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x3a6558u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a655c: 0x82450008  lb          $a1, 0x8($s2)
    ctx->pc = 0x3a655cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a6560: 0xc0eaf7c  jal         func_3ABDF0
    ctx->pc = 0x3A6560u;
    SET_GPR_U32(ctx, 31, 0x3A6568u);
    ctx->pc = 0x3A6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6560u;
    // 0x3a6564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABDF0u, 0x3A6560u, 0x3A6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6568u;
label_3a6568:
    // 0x3a6568: 0x82430008  lb          $v1, 0x8($s2)
    ctx->pc = 0x3a6568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a656c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a656cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6570: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a6570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a6574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a6574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a6578: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a6578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a657c: 0xc0eb124  jal         func_3AC490
    ctx->pc = 0x3A657Cu;
    SET_GPR_U32(ctx, 31, 0x3A6584u);
    ctx->pc = 0x3A6580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A657Cu;
    // 0x3a6580: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC490u, 0x3A657Cu, 0x3A6584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6584u;
label_3a6584:
    // 0x3a6584: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x3A6584u;
    {
        const bool branch_taken_0x3a6584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6584) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A658Cu;
    // 0x3a658c: 0x0  nop
    ctx->pc = 0x3a658cu;
    // NOP
label_3a6590:
    // 0x3a6590: 0x86430016  lh          $v1, 0x16($s2)
    ctx->pc = 0x3a6590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
    // 0x3a6594: 0x146000e8  bnez        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x3A6594u;
    {
        const bool branch_taken_0x3a6594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6594) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A659Cu;
    // 0x3a659c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x3a659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3a65a0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a65a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a65a4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a65a8: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A65A8u;
    SET_GPR_U32(ctx, 31, 0x3A65B0u);
    ctx->pc = 0x3A65ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A65A8u;
    // 0x3a65ac: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A65A8u, 0x3A65B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A65B0u;
label_3a65b0:
    // 0x3a65b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a65b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a65b4: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x3a65b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3a65b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a65b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a65bc: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A65BCu;
    SET_GPR_U32(ctx, 31, 0x3A65C4u);
    ctx->pc = 0x3A65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A65BCu;
    // 0x3a65c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A65BCu, 0x3A65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A65C4u;
label_3a65c4:
    // 0x3a65c4: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x3A65C4u;
    {
        const bool branch_taken_0x3a65c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a65c4) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A65CCu;
    // 0x3a65cc: 0x0  nop
    ctx->pc = 0x3a65ccu;
    // NOP
label_3a65d0:
    // 0x3a65d0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3a65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a65d4: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3a65d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a65d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a65dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a65e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a65e4: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a65e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a65ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a65f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a65f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A65F4u;
    {
        const bool branch_taken_0x3a65f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a65f4) {
            ctx->pc = 0x3A6620u;
            goto label_3a6620;
        }
    }
    ctx->pc = 0x3A65FCu;
    // 0x3a65fc: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x3a65fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6600: 0xa240000a  sb          $zero, 0xA($s2)
    ctx->pc = 0x3a6600u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6604: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x3a6604u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6608: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3a6608u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a660c: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A660Cu;
    SET_GPR_U32(ctx, 31, 0x3A6614u);
    ctx->pc = 0x3A6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A660Cu;
    // 0x3a6610: 0x82450007  lb          $a1, 0x7($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A660Cu, 0x3A6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6614u;
label_3a6614:
    // 0x3a6614: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x3A6614u;
    {
        const bool branch_taken_0x3a6614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6614) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A661Cu;
    // 0x3a661c: 0x0  nop
    ctx->pc = 0x3a661cu;
    // NOP
label_3a6620:
    // 0x3a6620: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3a6620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3a6624: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3a6624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3a6628: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3a6628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3a662c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a662cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a6630: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A6630u;
    {
        const bool branch_taken_0x3a6630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6630u;
        // 0x3a6634: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6630) {
            ctx->pc = 0x3A66C8u;
            goto label_3a66c8;
        }
    }
    ctx->pc = 0x3A6638u;
label_3a6638:
    // 0x3a6638: 0x82420008  lb          $v0, 0x8($s2)
    ctx->pc = 0x3a6638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a663c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A663Cu;
    {
        const bool branch_taken_0x3a663c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a663c) {
            ctx->pc = 0x3A6648u;
            goto label_3a6648;
        }
    }
    ctx->pc = 0x3A6644u;
    // 0x3a6644: 0xa2440008  sb          $a0, 0x8($s2)
    ctx->pc = 0x3a6644u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 4));
label_3a6648:
    // 0x3a6648: 0x82420008  lb          $v0, 0x8($s2)
    ctx->pc = 0x3a6648u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a664c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a6650: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x3a6650u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6654: 0x82430008  lb          $v1, 0x8($s2)
    ctx->pc = 0x3a6654u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a6658: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a6658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a665c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a6660: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a6660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6664: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a6664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a6668: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3a6668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a666c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a666cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a6670: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a6670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a6674: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3A6674u;
    {
        const bool branch_taken_0x3a6674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6674u;
        // 0x3a6678: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6674) {
            ctx->pc = 0x3A6638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6638;
        }
    }
    ctx->pc = 0x3A667Cu;
    // 0x3a667c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a667cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a6680: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a6680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a6684: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a6684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a6688: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3a6688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3a668c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a668cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6694: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a6694u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a6698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a669c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a669cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a66a0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A66A0u;
    SET_GPR_U32(ctx, 31, 0x3A66A8u);
    ctx->pc = 0x3A66A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A66A0u;
    // 0x3a66a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A66A0u, 0x3A66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A66A8u;
label_3a66a8:
    // 0x3a66a8: 0x82430008  lb          $v1, 0x8($s2)
    ctx->pc = 0x3a66a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a66ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a66acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a66b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a66b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a66b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a66bc: 0xc0eb124  jal         func_3AC490
    ctx->pc = 0x3A66BCu;
    SET_GPR_U32(ctx, 31, 0x3A66C4u);
    ctx->pc = 0x3A66C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A66BCu;
    // 0x3a66c0: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC490u, 0x3A66BCu, 0x3A66C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A66C4u;
label_3a66c4:
    // 0x3a66c4: 0x0  nop
    ctx->pc = 0x3a66c4u;
    // NOP
label_3a66c8:
    // 0x3a66c8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3a66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3a66cc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3a66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3a66d0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3a66d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x3a66d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a66d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a66d8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A66D8u;
    {
        const bool branch_taken_0x3a66d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a66d8) {
            ctx->pc = 0x3A6778u;
            goto label_3a6778;
        }
    }
    ctx->pc = 0x3A66E0u;
label_3a66e0:
    // 0x3a66e0: 0x82420008  lb          $v0, 0x8($s2)
    ctx->pc = 0x3a66e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a66e4: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x3a66e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a66e8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A66E8u;
    {
        const bool branch_taken_0x3a66e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a66e8) {
            ctx->pc = 0x3A6700u;
            goto label_3a6700;
        }
    }
    ctx->pc = 0x3A66F0u;
    // 0x3a66f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a66f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A66F4u;
    {
        const bool branch_taken_0x3a66f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66F4u;
        // 0x3a66f8: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a66f4) {
            ctx->pc = 0x3A6708u;
            goto label_3a6708;
        }
    }
    ctx->pc = 0x3A66FCu;
    // 0x3a66fc: 0x0  nop
    ctx->pc = 0x3a66fcu;
    // NOP
label_3a6700:
    // 0x3a6700: 0xa2400008  sb          $zero, 0x8($s2)
    ctx->pc = 0x3a6700u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6704: 0x0  nop
    ctx->pc = 0x3a6704u;
    // NOP
label_3a6708:
    // 0x3a6708: 0x82430008  lb          $v1, 0x8($s2)
    ctx->pc = 0x3a6708u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a670c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a670cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a6710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a6710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a6714: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a6714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6718: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a6718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a671c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3a671cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6720: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a6720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a6724: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a6724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a6728: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3A6728u;
    {
        const bool branch_taken_0x3a6728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6728u;
        // 0x3a672c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6728) {
            ctx->pc = 0x3A66E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a66e0;
        }
    }
    ctx->pc = 0x3A6730u;
    // 0x3a6730: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a6730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a6734: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a6734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a6738: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a6738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a673c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3a673cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3a6740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a6740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a6748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a674c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a674cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6750: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a6750u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6754: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A6754u;
    SET_GPR_U32(ctx, 31, 0x3A675Cu);
    ctx->pc = 0x3A6758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6754u;
    // 0x3a6758: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A6754u, 0x3A675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A675Cu;
label_3a675c:
    // 0x3a675c: 0x82430008  lb          $v1, 0x8($s2)
    ctx->pc = 0x3a675cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3a6760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6764: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a6764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a6768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a6768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a676c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a676cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6770: 0xc0eb124  jal         func_3AC490
    ctx->pc = 0x3A6770u;
    SET_GPR_U32(ctx, 31, 0x3A6778u);
    ctx->pc = 0x3A6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6770u;
    // 0x3a6774: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC490u, 0x3A6770u, 0x3A6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6778u;
label_3a6778:
    // 0x3a6778: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3a6778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3a677c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3a677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3a6780: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A6780u;
    {
        const bool branch_taken_0x3a6780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6780) {
            ctx->pc = 0x3A67F0u;
            goto label_3a67f0;
        }
    }
    ctx->pc = 0x3A6788u;
    // 0x3a6788: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x3a6788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3a678c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a678cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a6790: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a6790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a6794: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a6794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a6798: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A6798u;
    SET_GPR_U32(ctx, 31, 0x3A67A0u);
    ctx->pc = 0x3A679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6798u;
    // 0x3a679c: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A6798u, 0x3A67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67A0u;
label_3a67a0:
    // 0x3a67a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a67a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67a4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3a67a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3a67a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a67a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a67ac: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A67ACu;
    SET_GPR_U32(ctx, 31, 0x3A67B4u);
    ctx->pc = 0x3A67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67ACu;
    // 0x3a67b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A67ACu, 0x3A67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67B4u;
label_3a67b4:
    // 0x3a67b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a67b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a67b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a67bc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a67bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a67c0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a67c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a67c4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3a67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3a67c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a67c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67cc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a67ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a67d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a67d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a67d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a67d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a67dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a67e0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A67E0u;
    SET_GPR_U32(ctx, 31, 0x3A67E8u);
    ctx->pc = 0x3A67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67E0u;
    // 0x3a67e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A67E0u, 0x3A67E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67E8u;
label_3a67e8:
    // 0x3a67e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3A67E8u;
    {
        const bool branch_taken_0x3a67e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a67e8) {
            ctx->pc = 0x3A6840u;
            goto label_3a6840;
        }
    }
    ctx->pc = 0x3A67F0u;
label_3a67f0:
    // 0x3a67f0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3a67f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3a67f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A67F4u;
    {
        const bool branch_taken_0x3a67f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a67f4) {
            ctx->pc = 0x3A6840u;
            goto label_3a6840;
        }
    }
    ctx->pc = 0x3A67FCu;
    // 0x3a67fc: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x3a67fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6800: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a6800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6804: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x3a6804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6808: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a6808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a680c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6810: 0xa6400016  sh          $zero, 0x16($s2)
    ctx->pc = 0x3a6810u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a6814: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a6814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a6818: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a6818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a681c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3a681cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3a6820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a6820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6824: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a6824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a6828: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a682c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a682cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6830: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a6830u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6834: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a6834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6838: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A6838u;
    SET_GPR_U32(ctx, 31, 0x3A6840u);
    ctx->pc = 0x3A683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6838u;
    // 0x3a683c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A6838u, 0x3A6840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6840u;
label_3a6840:
    // 0x3a6840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6844: 0xc0eb300  jal         func_3ACC00
    ctx->pc = 0x3A6844u;
    SET_GPR_U32(ctx, 31, 0x3A684Cu);
    ctx->pc = 0x3A6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6844u;
    // 0x3a6848: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC00u, 0x3A6844u, 0x3A684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A684Cu;
label_3a684c:
    // 0x3a684c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3A684Cu;
    {
        const bool branch_taken_0x3a684c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a684c) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A6854u;
    // 0x3a6854: 0x0  nop
    ctx->pc = 0x3a6854u;
    // NOP
label_3a6858:
    // 0x3a6858: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3a6858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a685c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3a685cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a6860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a6860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a6864: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a6864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a6868: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a6868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a686c: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a6870: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a6870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a6874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a6874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a6878: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a6878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a687c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A687Cu;
    {
        const bool branch_taken_0x3a687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a687c) {
            ctx->pc = 0x3A68A8u;
            goto label_3a68a8;
        }
    }
    ctx->pc = 0x3A6884u;
    // 0x3a6884: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x3a6884u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6888: 0xa240000a  sb          $zero, 0xA($s2)
    ctx->pc = 0x3a6888u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a688c: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x3a688cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6890: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3a6890u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6894: 0xc0eb6a8  jal         func_3ADAA0
    ctx->pc = 0x3A6894u;
    SET_GPR_U32(ctx, 31, 0x3A689Cu);
    ctx->pc = 0x3A6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6894u;
    // 0x3a6898: 0x82450007  lb          $a1, 0x7($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA0u, 0x3A6894u, 0x3A689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A689Cu;
label_3a689c:
    // 0x3a689c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3A689Cu;
    {
        const bool branch_taken_0x3a689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a689c) {
            ctx->pc = 0x3A6938u;
            goto label_3a6938;
        }
    }
    ctx->pc = 0x3A68A4u;
    // 0x3a68a4: 0x0  nop
    ctx->pc = 0x3a68a4u;
    // NOP
label_3a68a8:
    // 0x3a68a8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a68a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a68ac: 0xc095150  jal         func_254540
    ctx->pc = 0x3A68ACu;
    SET_GPR_U32(ctx, 31, 0x3A68B4u);
    ctx->pc = 0x3A68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68ACu;
    // 0x3a68b0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A68ACu, 0x3A68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68B4u;
label_3a68b4:
    // 0x3a68b4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A68B4u;
    {
        const bool branch_taken_0x3a68b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A68B4u;
        // 0x3a68b8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a68b4) {
            ctx->pc = 0x3A6928u;
            goto label_3a6928;
        }
    }
    ctx->pc = 0x3A68BCu;
    // 0x3a68bc: 0xc095154  jal         func_254550
    ctx->pc = 0x3A68BCu;
    SET_GPR_U32(ctx, 31, 0x3A68C4u);
    ctx->pc = 0x3A68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A68BCu;
    // 0x3a68c0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3A68BCu, 0x3A68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A68C4u;
label_3a68c4:
    // 0x3a68c4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3a68c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3a68c8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3a68c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3a68cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a68d0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A68D0u;
    {
        const bool branch_taken_0x3a68d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a68d0) {
            ctx->pc = 0x3A6910u;
            goto label_3a6910;
        }
    }
    ctx->pc = 0x3A68D8u;
    // 0x3a68d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a68dc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A68DCu;
    {
        const bool branch_taken_0x3a68dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a68dc) {
            ctx->pc = 0x3A6910u;
            goto label_3a6910;
        }
    }
    ctx->pc = 0x3A68E4u;
    // 0x3a68e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A68E4u;
    {
        const bool branch_taken_0x3a68e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a68e4) {
            ctx->pc = 0x3A68F8u;
            goto label_3a68f8;
        }
    }
    ctx->pc = 0x3A68ECu;
    // 0x3a68ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A68ECu;
    {
        const bool branch_taken_0x3a68ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a68ec) {
            ctx->pc = 0x3A6928u;
            goto label_3a6928;
        }
    }
    ctx->pc = 0x3A68F4u;
    // 0x3a68f4: 0x0  nop
    ctx->pc = 0x3a68f4u;
    // NOP
label_3a68f8:
    // 0x3a68f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a68fc: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x3a68fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6900: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x3a6900u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6904: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3a6904u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6908: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6908u;
    {
        const bool branch_taken_0x3a6908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6908u;
        // 0x3a690c: 0xa240000a  sb          $zero, 0xA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6908) {
            ctx->pc = 0x3A6928u;
            goto label_3a6928;
        }
    }
    ctx->pc = 0x3A6910u;
label_3a6910:
    // 0x3a6910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6914: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x3a6914u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6918: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3a6918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a691c: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x3a691cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6920: 0xa6400016  sh          $zero, 0x16($s2)
    ctx->pc = 0x3a6920u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a6924: 0x0  nop
    ctx->pc = 0x3a6924u;
    // NOP
label_3a6928:
    // 0x3a6928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a692c: 0xc0eb300  jal         func_3ACC00
    ctx->pc = 0x3A692Cu;
    SET_GPR_U32(ctx, 31, 0x3A6934u);
    ctx->pc = 0x3A6930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A692Cu;
    // 0x3a6930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC00u, 0x3A692Cu, 0x3A6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6934u;
label_3a6934:
    // 0x3a6934: 0x0  nop
    ctx->pc = 0x3a6934u;
    // NOP
label_3a6938:
    // 0x3a6938: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a6938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a693c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a693cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a6940: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a6940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a6944: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6948: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6948u;
        // 0x3a694c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6950u;
}

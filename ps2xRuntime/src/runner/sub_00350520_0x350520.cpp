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

// Function: sub_00350520
// Address: 0x350520 - 0x350888
void sub_00350520_0x350520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350520_0x350520");
#endif

    switch (ctx->pc) {
        case 0x350544u: goto label_350544;
        case 0x350620u: goto label_350620;
        case 0x350630u: goto label_350630;
        case 0x35063cu: goto label_35063c;
        case 0x350648u: goto label_350648;
        case 0x350654u: goto label_350654;
        case 0x350668u: goto label_350668;
        case 0x3506ecu: goto label_3506ec;
        case 0x3506f8u: goto label_3506f8;
        case 0x350704u: goto label_350704;
        case 0x350718u: goto label_350718;
        case 0x35074cu: goto label_35074c;
        case 0x350770u: goto label_350770;
        case 0x350784u: goto label_350784;
        case 0x3507a4u: goto label_3507a4;
        case 0x3507d4u: goto label_3507d4;
        case 0x3507ecu: goto label_3507ec;
        case 0x350808u: goto label_350808;
        case 0x35081cu: goto label_35081c;
        case 0x35082cu: goto label_35082c;
        case 0x350848u: goto label_350848;
        case 0x35085cu: goto label_35085c;
        default: break;
    }

    ctx->pc = 0x350520u;

    // 0x350520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x350524: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x350524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x350528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x350528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35052c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35052cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x350530: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x350530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350534: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x350534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35053c: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x35053Cu;
    SET_GPR_U32(ctx, 31, 0x350544u);
    ctx->pc = 0x350540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35053Cu;
    // 0x350540: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x35053Cu, 0x350544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350544u;
label_350544:
    // 0x350544: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350544u;
    {
        const bool branch_taken_0x350544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350544) {
            ctx->pc = 0x350558u;
            goto label_350558;
        }
    }
    ctx->pc = 0x35054Cu;
    // 0x35054c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x35054Cu;
    {
        const bool branch_taken_0x35054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35054Cu;
        // 0x350550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35054c) {
            ctx->pc = 0x350870u;
            goto label_350870;
        }
    }
    ctx->pc = 0x350554u;
    // 0x350554: 0x0  nop
    ctx->pc = 0x350554u;
    // NOP
label_350558:
    // 0x350558: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x350558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35055c: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x35055cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x350560: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x350560u;
    {
        const bool branch_taken_0x350560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x350560) {
            ctx->pc = 0x350570u;
            goto label_350570;
        }
    }
    ctx->pc = 0x350568u;
    // 0x350568: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x350568u;
    {
        const bool branch_taken_0x350568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350568u;
        // 0x35056c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350568) {
            ctx->pc = 0x350590u;
            goto label_350590;
        }
    }
    ctx->pc = 0x350570u;
label_350570:
    // 0x350570: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x350570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x350574: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x350574u;
    {
        const bool branch_taken_0x350574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x350574) {
            ctx->pc = 0x350588u;
            goto label_350588;
        }
    }
    ctx->pc = 0x35057Cu;
    // 0x35057c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35057Cu;
    {
        const bool branch_taken_0x35057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35057Cu;
        // 0x350580: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35057c) {
            ctx->pc = 0x350590u;
            goto label_350590;
        }
    }
    ctx->pc = 0x350584u;
    // 0x350584: 0x0  nop
    ctx->pc = 0x350584u;
    // NOP
label_350588:
    // 0x350588: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x350588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x35058c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35058cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_350590:
    // 0x350590: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x350590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350594: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x350594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x350598: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x350598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x35059c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3505a0: 0x24427c40  addiu       $v0, $v0, 0x7C40
    ctx->pc = 0x3505a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31808));
    // 0x3505a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3505a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3505a8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3505a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3505ac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3505ACu;
    {
        const bool branch_taken_0x3505ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3505ac) {
            ctx->pc = 0x3505C0u;
            goto label_3505c0;
        }
    }
    ctx->pc = 0x3505B4u;
    // 0x3505b4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x3505B4u;
    {
        const bool branch_taken_0x3505b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3505B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505B4u;
        // 0x3505b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505b4) {
            ctx->pc = 0x350870u;
            goto label_350870;
        }
    }
    ctx->pc = 0x3505BCu;
    // 0x3505bc: 0x0  nop
    ctx->pc = 0x3505bcu;
    // NOP
label_3505c0:
    // 0x3505c0: 0x92430029  lbu         $v1, 0x29($s2)
    ctx->pc = 0x3505c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x3505c4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3505c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3505c8: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3505C8u;
    {
        const bool branch_taken_0x3505c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3505CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505C8u;
        // 0x3505cc: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505c8) {
            ctx->pc = 0x350850u;
            goto label_350850;
        }
    }
    ctx->pc = 0x3505D0u;
    // 0x3505d0: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x3505D0u;
    {
        const bool branch_taken_0x3505d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3505d0) {
            ctx->pc = 0x350810u;
            goto label_350810;
        }
    }
    ctx->pc = 0x3505D8u;
    // 0x3505d8: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x3505d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3505dc: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x3505DCu;
    {
        const bool branch_taken_0x3505dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3505E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505DCu;
        // 0x3505e0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505dc) {
            ctx->pc = 0x3507E0u;
            goto label_3507e0;
        }
    }
    ctx->pc = 0x3505E4u;
    // 0x3505e4: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3505E4u;
    {
        const bool branch_taken_0x3505e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3505e4) {
            ctx->pc = 0x350768u;
            goto label_350768;
        }
    }
    ctx->pc = 0x3505ECu;
    // 0x3505ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3505ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3505f0: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3505F0u;
    {
        const bool branch_taken_0x3505f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3505F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3505F0u;
        // 0x3505f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3505f0) {
            ctx->pc = 0x3506E0u;
            goto label_3506e0;
        }
    }
    ctx->pc = 0x3505F8u;
    // 0x3505f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3505F8u;
    {
        const bool branch_taken_0x3505f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3505f8) {
            ctx->pc = 0x350628u;
            goto label_350628;
        }
    }
    ctx->pc = 0x350600u;
    // 0x350600: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x350600u;
    {
        const bool branch_taken_0x350600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350600) {
            ctx->pc = 0x350610u;
            goto label_350610;
        }
    }
    ctx->pc = 0x350608u;
    // 0x350608: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x350608u;
    {
        const bool branch_taken_0x350608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350608) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x350610u;
label_350610:
    // 0x350610: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x350610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x350614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350618: 0xc0d42d8  jal         func_350B60
    ctx->pc = 0x350618u;
    SET_GPR_U32(ctx, 31, 0x350620u);
    ctx->pc = 0x35061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350618u;
    // 0x35061c: 0x3445030f  ori         $a1, $v0, 0x30F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    ctx->in_delay_slot = false;
    ctx->pc = 0x350B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B60u, 0x350618u, 0x350620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350620u;
label_350620:
    // 0x350620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350624: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x350624u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
label_350628:
    // 0x350628: 0xc0d42e8  jal         func_350BA0
    ctx->pc = 0x350628u;
    SET_GPR_U32(ctx, 31, 0x350630u);
    ctx->pc = 0x35062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350628u;
    // 0x35062c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350BA0u, 0x350628u, 0x350630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350630u;
label_350630:
    // 0x350630: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x350630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x350634: 0xc0d3bfc  jal         func_34EFF0
    ctx->pc = 0x350634u;
    SET_GPR_U32(ctx, 31, 0x35063Cu);
    ctx->pc = 0x350638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350634u;
    // 0x350638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EFF0u, 0x350634u, 0x35063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35063Cu;
label_35063c:
    // 0x35063c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35063cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350640: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x350640u;
    SET_GPR_U32(ctx, 31, 0x350648u);
    ctx->pc = 0x350644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350640u;
    // 0x350644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x350640u, 0x350648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350648u;
label_350648:
    // 0x350648: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x350648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35064c: 0xc0d3b58  jal         func_34ED60
    ctx->pc = 0x35064Cu;
    SET_GPR_U32(ctx, 31, 0x350654u);
    ctx->pc = 0x350650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35064Cu;
    // 0x350650: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ED60u, 0x35064Cu, 0x350654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350654u;
label_350654:
    // 0x350654: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x350654u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x350658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35065c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35065cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350660: 0xc0d4234  jal         func_3508D0
    ctx->pc = 0x350660u;
    SET_GPR_U32(ctx, 31, 0x350668u);
    ctx->pc = 0x350664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350660u;
    // 0x350664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3508D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3508D0u, 0x350660u, 0x350668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350668u;
label_350668:
    // 0x350668: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35066c: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x35066Cu;
    {
        const bool branch_taken_0x35066c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x350670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35066Cu;
        // 0x350670: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35066c) {
            ctx->pc = 0x3506D0u;
            goto label_3506d0;
        }
    }
    ctx->pc = 0x350674u;
    // 0x350674: 0x1043007c  beq         $v0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x350674u;
    {
        const bool branch_taken_0x350674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x350674) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x35067Cu;
    // 0x35067c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35067Cu;
    {
        const bool branch_taken_0x35067c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35067c) {
            ctx->pc = 0x350690u;
            goto label_350690;
        }
    }
    ctx->pc = 0x350684u;
    // 0x350684: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x350684u;
    {
        const bool branch_taken_0x350684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350684) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x35068Cu;
    // 0x35068c: 0x0  nop
    ctx->pc = 0x35068cu;
    // NOP
label_350690:
    // 0x350690: 0x9242002c  lbu         $v0, 0x2C($s2)
    ctx->pc = 0x350690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x350694: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x350694u;
    {
        const bool branch_taken_0x350694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x350694) {
            ctx->pc = 0x3506C0u;
            goto label_3506c0;
        }
    }
    ctx->pc = 0x35069Cu;
    // 0x35069c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35069Cu;
    {
        const bool branch_taken_0x35069c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35069c) {
            ctx->pc = 0x3506B0u;
            goto label_3506b0;
        }
    }
    ctx->pc = 0x3506A4u;
    // 0x3506a4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3506A4u;
    {
        const bool branch_taken_0x3506a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3506a4) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x3506ACu;
    // 0x3506ac: 0x0  nop
    ctx->pc = 0x3506acu;
    // NOP
label_3506b0:
    // 0x3506b0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3506b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3506b4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3506B4u;
    {
        const bool branch_taken_0x3506b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3506B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506B4u;
        // 0x3506b8: 0xa2420029  sb          $v0, 0x29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3506b4) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x3506BCu;
    // 0x3506bc: 0x0  nop
    ctx->pc = 0x3506bcu;
    // NOP
label_3506c0:
    // 0x3506c0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3506c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3506c4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3506C4u;
    {
        const bool branch_taken_0x3506c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3506C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506C4u;
        // 0x3506c8: 0xa2420029  sb          $v0, 0x29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3506c4) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x3506CCu;
    // 0x3506cc: 0x0  nop
    ctx->pc = 0x3506ccu;
    // NOP
label_3506d0:
    // 0x3506d0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3506d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3506d4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x3506D4u;
    {
        const bool branch_taken_0x3506d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3506D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506D4u;
        // 0x3506d8: 0xa2420029  sb          $v0, 0x29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3506d4) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x3506DCu;
    // 0x3506dc: 0x0  nop
    ctx->pc = 0x3506dcu;
    // NOP
label_3506e0:
    // 0x3506e0: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x3506e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3506e4: 0xc0d3c34  jal         func_34F0D0
    ctx->pc = 0x3506E4u;
    SET_GPR_U32(ctx, 31, 0x3506ECu);
    ctx->pc = 0x3506E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3506E4u;
    // 0x3506e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F0D0u, 0x3506E4u, 0x3506ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506ECu;
label_3506ec:
    // 0x3506ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3506ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3506f0: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x3506F0u;
    SET_GPR_U32(ctx, 31, 0x3506F8u);
    ctx->pc = 0x3506F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3506F0u;
    // 0x3506f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x3506F0u, 0x3506F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506F8u;
label_3506f8:
    // 0x3506f8: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x3506f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3506fc: 0xc0d3bac  jal         func_34EEB0
    ctx->pc = 0x3506FCu;
    SET_GPR_U32(ctx, 31, 0x350704u);
    ctx->pc = 0x350700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3506FCu;
    // 0x350700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EEB0u, 0x3506FCu, 0x350704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350704u;
label_350704:
    // 0x350704: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x350704u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x350708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35070c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35070cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350710: 0xc0d4234  jal         func_3508D0
    ctx->pc = 0x350710u;
    SET_GPR_U32(ctx, 31, 0x350718u);
    ctx->pc = 0x350714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350710u;
    // 0x350714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3508D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3508D0u, 0x350710u, 0x350718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350718u;
label_350718:
    // 0x350718: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35071c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35071Cu;
    {
        const bool branch_taken_0x35071c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x350720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35071Cu;
        // 0x350720: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35071c) {
            ctx->pc = 0x350758u;
            goto label_350758;
        }
    }
    ctx->pc = 0x350724u;
    // 0x350724: 0x10430050  beq         $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x350724u;
    {
        const bool branch_taken_0x350724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x350724) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x35072Cu;
    // 0x35072c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35072Cu;
    {
        const bool branch_taken_0x35072c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35072c) {
            ctx->pc = 0x350740u;
            goto label_350740;
        }
    }
    ctx->pc = 0x350734u;
    // 0x350734: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x350734u;
    {
        const bool branch_taken_0x350734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350734) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x35073Cu;
    // 0x35073c: 0x0  nop
    ctx->pc = 0x35073cu;
    // NOP
label_350740:
    // 0x350740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350744: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x350744u;
    SET_GPR_U32(ctx, 31, 0x35074Cu);
    ctx->pc = 0x350748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350744u;
    // 0x350748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x350744u, 0x35074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35074Cu;
label_35074c:
    // 0x35074c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x35074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x350750: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x350750u;
    {
        const bool branch_taken_0x350750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350750u;
        // 0x350754: 0xa2420029  sb          $v0, 0x29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350750) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x350758u;
label_350758:
    // 0x350758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35075c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x35075Cu;
    {
        const bool branch_taken_0x35075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35075Cu;
        // 0x350760: 0xa2420029  sb          $v0, 0x29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35075c) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x350764u;
    // 0x350764: 0x0  nop
    ctx->pc = 0x350764u;
    // NOP
label_350768:
    // 0x350768: 0xc0d3518  jal         func_34D460
    ctx->pc = 0x350768u;
    SET_GPR_U32(ctx, 31, 0x350770u);
    ctx->pc = 0x35076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350768u;
    // 0x35076c: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D460u, 0x350768u, 0x350770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350770u;
label_350770:
    // 0x350770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x350770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350774: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x350774u;
    {
        const bool branch_taken_0x350774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x350774) {
            ctx->pc = 0x3507C0u;
            goto label_3507c0;
        }
    }
    ctx->pc = 0x35077Cu;
    // 0x35077c: 0xc0da9fc  jal         func_36A7F0
    ctx->pc = 0x35077Cu;
    SET_GPR_U32(ctx, 31, 0x350784u);
    ctx->pc = 0x350780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35077Cu;
    // 0x350780: 0x920429d0  lbu         $a0, 0x29D0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A7F0u, 0x35077Cu, 0x350784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350784u;
label_350784:
    // 0x350784: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350784u;
    {
        const bool branch_taken_0x350784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350784) {
            ctx->pc = 0x3507B0u;
            goto label_3507b0;
        }
    }
    ctx->pc = 0x35078Cu;
    // 0x35078c: 0x920629d0  lbu         $a2, 0x29D0($s0)
    ctx->pc = 0x35078cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x350790: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x350790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x350794: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x350794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x350798: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x350798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35079c: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x35079Cu;
    SET_GPR_U32(ctx, 31, 0x3507A4u);
    ctx->pc = 0x3507A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35079Cu;
    // 0x3507a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x35079Cu, 0x3507A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507A4u;
label_3507a4:
    // 0x3507a4: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x3507a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3507a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3507A8u;
    {
        const bool branch_taken_0x3507a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3507ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507A8u;
        // 0x3507ac: 0xa2420029  sb          $v0, 0x29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507a8) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x3507B0u;
label_3507b0:
    // 0x3507b0: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x3507b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3507b4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3507B4u;
    {
        const bool branch_taken_0x3507b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3507B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3507B4u;
        // 0x3507b8: 0xa2420029  sb          $v0, 0x29($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3507b4) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x3507BCu;
    // 0x3507bc: 0x0  nop
    ctx->pc = 0x3507bcu;
    // NOP
label_3507c0:
    // 0x3507c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3507c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3507c4: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x3507c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3507c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3507c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3507cc: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x3507CCu;
    SET_GPR_U32(ctx, 31, 0x3507D4u);
    ctx->pc = 0x3507D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3507CCu;
    // 0x3507d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x3507CCu, 0x3507D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507D4u;
label_3507d4:
    // 0x3507d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3507D4u;
    {
        const bool branch_taken_0x3507d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3507d4) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x3507DCu;
    // 0x3507dc: 0x0  nop
    ctx->pc = 0x3507dcu;
    // NOP
label_3507e0:
    // 0x3507e0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3507e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3507e4: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x3507E4u;
    SET_GPR_U32(ctx, 31, 0x3507ECu);
    ctx->pc = 0x3507E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3507E4u;
    // 0x3507e8: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x3507E4u, 0x3507ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507ECu;
label_3507ec:
    // 0x3507ec: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3507ECu;
    {
        const bool branch_taken_0x3507ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3507ec) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x3507F4u;
    // 0x3507f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3507f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3507f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3507fc: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x3507fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x350800: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x350800u;
    SET_GPR_U32(ctx, 31, 0x350808u);
    ctx->pc = 0x350804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350800u;
    // 0x350804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x350800u, 0x350808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350808u;
label_350808:
    // 0x350808: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x350808u;
    {
        const bool branch_taken_0x350808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350808) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x350810u;
label_350810:
    // 0x350810: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x350810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x350814: 0xc0d3be4  jal         func_34EF90
    ctx->pc = 0x350814u;
    SET_GPR_U32(ctx, 31, 0x35081Cu);
    ctx->pc = 0x350818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350814u;
    // 0x350818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EF90u, 0x350814u, 0x35081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35081Cu;
label_35081c:
    // 0x35081c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350824: 0xc0d3a78  jal         func_34E9E0
    ctx->pc = 0x350824u;
    SET_GPR_U32(ctx, 31, 0x35082Cu);
    ctx->pc = 0x350828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350824u;
    // 0x350828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E9E0u, 0x350824u, 0x35082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35082Cu;
label_35082c:
    // 0x35082c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x35082Cu;
    {
        const bool branch_taken_0x35082c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35082c) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x350834u;
    // 0x350834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35083c: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x35083cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x350840: 0xc0d42a4  jal         func_350A90
    ctx->pc = 0x350840u;
    SET_GPR_U32(ctx, 31, 0x350848u);
    ctx->pc = 0x350844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350840u;
    // 0x350844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A90u, 0x350840u, 0x350848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350848u;
label_350848:
    // 0x350848: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x350848u;
    {
        const bool branch_taken_0x350848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350848) {
            ctx->pc = 0x350868u;
            goto label_350868;
        }
    }
    ctx->pc = 0x350850u;
label_350850:
    // 0x350850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x350850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350854: 0xc0d4318  jal         func_350C60
    ctx->pc = 0x350854u;
    SET_GPR_U32(ctx, 31, 0x35085Cu);
    ctx->pc = 0x350858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350854u;
    // 0x350858: 0xa2400029  sb          $zero, 0x29($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C60u, 0x350854u, 0x35085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35085Cu;
label_35085c:
    // 0x35085c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35085Cu;
    {
        const bool branch_taken_0x35085c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35085Cu;
        // 0x350860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35085c) {
            ctx->pc = 0x350870u;
            goto label_350870;
        }
    }
    ctx->pc = 0x350864u;
    // 0x350864: 0x0  nop
    ctx->pc = 0x350864u;
    // NOP
label_350868:
    // 0x350868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35086c: 0x0  nop
    ctx->pc = 0x35086cu;
    // NOP
label_350870:
    // 0x350870: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x350870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x350874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35087c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35087cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350880: 0x3e00008  jr          $ra
    ctx->pc = 0x350880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350880u;
        // 0x350884: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350888u;
}

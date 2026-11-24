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

// Function: sub_001F2540
// Address: 0x1f2540 - 0x1f2734
void sub_001F2540_0x1f2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2540_0x1f2540");
#endif

    switch (ctx->pc) {
        case 0x1f2588u: goto label_1f2588;
        case 0x1f25a8u: goto label_1f25a8;
        case 0x1f25c0u: goto label_1f25c0;
        case 0x1f2608u: goto label_1f2608;
        case 0x1f262cu: goto label_1f262c;
        case 0x1f26f4u: goto label_1f26f4;
        default: break;
    }

    ctx->pc = 0x1f2540u;

    // 0x1f2540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f2544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1f2544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1f2548: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f2548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f254c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2550: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f2550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f2554: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f2558: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f2558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f255c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f2560: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f2560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f2568: 0x9023fc8e  lbu         $v1, -0x372($at)
    ctx->pc = 0x1f2568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x1f256c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F256Cu;
    {
        const bool branch_taken_0x1f256c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F256Cu;
        // 0x1f2570: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f256c) {
            ctx->pc = 0x1F2590u;
            goto label_1f2590;
        }
    }
    ctx->pc = 0x1F2574u;
    // 0x1f2574: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x1f2574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x1f2578: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1f2578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f257c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f257cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2580: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x1F2580u;
    SET_GPR_U32(ctx, 31, 0x1F2588u);
    ctx->pc = 0x1F2584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2580u;
    // 0x1f2584: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x1F2580u, 0x1F2588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2588u;
label_1f2588:
    // 0x1f2588: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f2588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f258c: 0x0  nop
    ctx->pc = 0x1f258cu;
    // NOP
label_1f2590:
    // 0x1f2590: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2590u;
    {
        const bool branch_taken_0x1f2590 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2590u;
        // 0x1f2594: 0x24040097  addiu       $a0, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2590) {
            ctx->pc = 0x1F25B0u;
            goto label_1f25b0;
        }
    }
    ctx->pc = 0x1F2598u;
    // 0x1f2598: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1f2598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f259c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f259cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25a0: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x1F25A0u;
    SET_GPR_U32(ctx, 31, 0x1F25A8u);
    ctx->pc = 0x1F25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25A0u;
    // 0x1f25a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x1F25A0u, 0x1F25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25A8u;
label_1f25a8:
    // 0x1f25a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f25a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25ac: 0x0  nop
    ctx->pc = 0x1f25acu;
    // NOP
label_1f25b0:
    // 0x1f25b0: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1F25B0u;
    {
        const bool branch_taken_0x1f25b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25B0u;
        // 0x1f25b4: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25b0) {
            ctx->pc = 0x1F25E0u;
            goto label_1f25e0;
        }
    }
    ctx->pc = 0x1F25B8u;
    // 0x1f25b8: 0xc054568  jal         func_1515A0
    ctx->pc = 0x1F25B8u;
    SET_GPR_U32(ctx, 31, 0x1F25C0u);
    ctx->pc = 0x1F25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25B8u;
    // 0x1f25bc: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x1F25B8u, 0x1F25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25C0u;
label_1f25c0:
    // 0x1f25c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F25C0u;
    {
        const bool branch_taken_0x1f25c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f25c0) {
            ctx->pc = 0x1F25D8u;
            goto label_1f25d8;
        }
    }
    ctx->pc = 0x1F25C8u;
    // 0x1f25c8: 0x36420420  ori         $v0, $s2, 0x420
    ctx->pc = 0x1f25c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1056);
    // 0x1f25cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F25CCu;
    {
        const bool branch_taken_0x1f25cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25CCu;
        // 0x1f25d0: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25cc) {
            ctx->pc = 0x1F25E0u;
            goto label_1f25e0;
        }
    }
    ctx->pc = 0x1F25D4u;
    // 0x1f25d4: 0x0  nop
    ctx->pc = 0x1f25d4u;
    // NOP
label_1f25d8:
    // 0x1f25d8: 0x36420024  ori         $v0, $s2, 0x24
    ctx->pc = 0x1f25d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)36);
    // 0x1f25dc: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1f25dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f25e0:
    // 0x1f25e0: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
    ctx->pc = 0x1F25E0u;
    {
        const bool branch_taken_0x1f25e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25E0u;
        // 0x1f25e4: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25e0) {
            ctx->pc = 0x1F2710u;
            goto label_1f2710;
        }
    }
    ctx->pc = 0x1F25E8u;
    // 0x1f25e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1f25e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1f25ec: 0x94226ac4  lhu         $v0, 0x6AC4($at)
    ctx->pc = 0x1f25ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x1f25f0: 0x327000ff  andi        $s0, $s3, 0xFF
    ctx->pc = 0x1f25f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1f25f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f25f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25f8: 0x24846090  addiu       $a0, $a0, 0x6090
    ctx->pc = 0x1f25f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24720));
    // 0x1f25fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f2600: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1f2600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x1f2604: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f2604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f2608:
    // 0x1f2608: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1f2608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f260c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F260Cu;
    {
        const bool branch_taken_0x1f260c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F260Cu;
        // 0x1f2610: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f260c) {
            ctx->pc = 0x1F2640u;
            goto label_1f2640;
        }
    }
    ctx->pc = 0x1F2614u;
    // 0x1f2614: 0x90226ca2  lbu         $v0, 0x6CA2($at)
    ctx->pc = 0x1f2614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27810)));
    // 0x1f2618: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f261c: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F261Cu;
    {
        const bool branch_taken_0x1f261c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F261Cu;
        // 0x1f2620: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f261c) {
            ctx->pc = 0x1F2630u;
            goto label_1f2630;
        }
    }
    ctx->pc = 0x1F2624u;
    // 0x1f2624: 0xc0ce640  jal         func_339900
    ctx->pc = 0x1F2624u;
    SET_GPR_U32(ctx, 31, 0x1F262Cu);
    ctx->pc = 0x1F2628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2624u;
    // 0x1f2628: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339900u, 0x1F2624u, 0x1F262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F262Cu;
label_1f262c:
    // 0x1f262c: 0x0  nop
    ctx->pc = 0x1f262cu;
    // NOP
label_1f2630:
    // 0x1f2630: 0x36420008  ori         $v0, $s2, 0x8
    ctx->pc = 0x1f2630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
    // 0x1f2634: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2634u;
    {
        const bool branch_taken_0x1f2634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2634u;
        // 0x1f2638: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2634) {
            ctx->pc = 0x1F2650u;
            goto label_1f2650;
        }
    }
    ctx->pc = 0x1F263Cu;
    // 0x1f263c: 0x0  nop
    ctx->pc = 0x1f263cu;
    // NOP
label_1f2640:
    // 0x1f2640: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f2640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f2644: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x1f2644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f2648: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F2648u;
    {
        const bool branch_taken_0x1f2648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2648u;
        // 0x1f264c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2648) {
            ctx->pc = 0x1F2608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2608;
        }
    }
    ctx->pc = 0x1F2650u;
label_1f2650:
    // 0x1f2650: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1f2650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1f2654: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x1f2654u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1f2658: 0x24020241  addiu       $v0, $zero, 0x241
    ctx->pc = 0x1f2658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x1f265c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F265Cu;
    {
        const bool branch_taken_0x1f265c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F265Cu;
        // 0x1f2660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f265c) {
            ctx->pc = 0x1F2670u;
            goto label_1f2670;
        }
    }
    ctx->pc = 0x1F2664u;
    // 0x1f2664: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F2664u;
    {
        const bool branch_taken_0x1f2664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2664) {
            ctx->pc = 0x1F26A0u;
            goto label_1f26a0;
        }
    }
    ctx->pc = 0x1F266Cu;
    // 0x1f266c: 0x0  nop
    ctx->pc = 0x1f266cu;
    // NOP
label_1f2670:
    // 0x1f2670: 0x24020281  addiu       $v0, $zero, 0x281
    ctx->pc = 0x1f2670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 641));
    // 0x1f2674: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2674u;
    {
        const bool branch_taken_0x1f2674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2674u;
        // 0x1f2678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2674) {
            ctx->pc = 0x1F2688u;
            goto label_1f2688;
        }
    }
    ctx->pc = 0x1F267Cu;
    // 0x1f267c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F267Cu;
    {
        const bool branch_taken_0x1f267c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f267c) {
            ctx->pc = 0x1F26A0u;
            goto label_1f26a0;
        }
    }
    ctx->pc = 0x1F2684u;
    // 0x1f2684: 0x0  nop
    ctx->pc = 0x1f2684u;
    // NOP
label_1f2688:
    // 0x1f2688: 0x240202c7  addiu       $v0, $zero, 0x2C7
    ctx->pc = 0x1f2688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 711));
    // 0x1f268c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F268Cu;
    {
        const bool branch_taken_0x1f268c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F268Cu;
        // 0x1f2690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f268c) {
            ctx->pc = 0x1F26A8u;
            goto label_1f26a8;
        }
    }
    ctx->pc = 0x1F2694u;
    // 0x1f2694: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2694u;
    {
        const bool branch_taken_0x1f2694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2694) {
            ctx->pc = 0x1F26A8u;
            goto label_1f26a8;
        }
    }
    ctx->pc = 0x1F269Cu;
    // 0x1f269c: 0x0  nop
    ctx->pc = 0x1f269cu;
    // NOP
label_1f26a0:
    // 0x1f26a0: 0x36420010  ori         $v0, $s2, 0x10
    ctx->pc = 0x1f26a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
    // 0x1f26a4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1f26a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f26a8:
    // 0x1f26a8: 0x24020182  addiu       $v0, $zero, 0x182
    ctx->pc = 0x1f26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    // 0x1f26ac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F26ACu;
    {
        const bool branch_taken_0x1f26ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26ACu;
        // 0x1f26b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26ac) {
            ctx->pc = 0x1F26C8u;
            goto label_1f26c8;
        }
    }
    ctx->pc = 0x1F26B4u;
    // 0x1f26b4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F26B4u;
    {
        const bool branch_taken_0x1f26b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f26b4) {
            ctx->pc = 0x1F26C8u;
            goto label_1f26c8;
        }
    }
    ctx->pc = 0x1F26BCu;
    // 0x1f26bc: 0x36420200  ori         $v0, $s2, 0x200
    ctx->pc = 0x1f26bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)512);
    // 0x1f26c0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1f26c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f26c4: 0x0  nop
    ctx->pc = 0x1f26c4u;
    // NOP
label_1f26c8:
    // 0x1f26c8: 0x24020182  addiu       $v0, $zero, 0x182
    ctx->pc = 0x1f26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    // 0x1f26cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F26CCu;
    {
        const bool branch_taken_0x1f26cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F26D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26CCu;
        // 0x1f26d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26cc) {
            ctx->pc = 0x1F26E8u;
            goto label_1f26e8;
        }
    }
    ctx->pc = 0x1F26D4u;
    // 0x1f26d4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F26D4u;
    {
        const bool branch_taken_0x1f26d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f26d4) {
            ctx->pc = 0x1F26E8u;
            goto label_1f26e8;
        }
    }
    ctx->pc = 0x1F26DCu;
    // 0x1f26dc: 0x36420040  ori         $v0, $s2, 0x40
    ctx->pc = 0x1f26dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64);
    // 0x1f26e0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1f26e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f26e4: 0x0  nop
    ctx->pc = 0x1f26e4u;
    // NOP
label_1f26e8:
    // 0x1f26e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f26e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26ec: 0xc07c948  jal         func_1F2520
    ctx->pc = 0x1F26ECu;
    SET_GPR_U32(ctx, 31, 0x1F26F4u);
    ctx->pc = 0x1F26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F26ECu;
    // 0x1f26f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2520u, 0x1F26ECu, 0x1F26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26F4u;
label_1f26f4:
    // 0x1f26f4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1f26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f26f8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f26f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f26fc: 0xa0530002  sb          $s3, 0x2($v0)
    ctx->pc = 0x1f26fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x1f2700: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f2700u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2704: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2704u;
    {
        const bool branch_taken_0x1f2704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2704u;
        // 0x1f2708: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2704) {
            ctx->pc = 0x1F2718u;
            goto label_1f2718;
        }
    }
    ctx->pc = 0x1F270Cu;
    // 0x1f270c: 0x0  nop
    ctx->pc = 0x1f270cu;
    // NOP
label_1f2710:
    // 0x1f2710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2714: 0x0  nop
    ctx->pc = 0x1f2714u;
    // NOP
label_1f2718:
    // 0x1f2718: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f2718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f271c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f271cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f2720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f272c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F272Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F272Cu;
        // 0x1f2730: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F272Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2734u;
}

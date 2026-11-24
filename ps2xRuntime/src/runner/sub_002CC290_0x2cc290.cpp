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

// Function: sub_002CC290
// Address: 0x2cc290 - 0x2cc40c
void sub_002CC290_0x2cc290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC290_0x2cc290");
#endif

    switch (ctx->pc) {
        case 0x2cc340u: goto label_2cc340;
        case 0x2cc3dcu: goto label_2cc3dc;
        default: break;
    }

    ctx->pc = 0x2cc290u;

    // 0x2cc290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cc290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cc294: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cc294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cc298: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cc298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cc29c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc2a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cc2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cc2a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc2a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cc2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc2b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cc2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc2b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc2b8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC2B8u;
    {
        const bool branch_taken_0x2cc2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2B8u;
        // 0x2cc2bc: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2b8) {
            ctx->pc = 0x2CC2E0u;
            goto label_2cc2e0;
        }
    }
    ctx->pc = 0x2CC2C0u;
    // 0x2cc2c0: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2cc2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2cc2c4: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x2cc2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2cc2c8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC2C8u;
    {
        const bool branch_taken_0x2cc2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2C8u;
        // 0x2cc2cc: 0x3c02008d  lui         $v0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2c8) {
            ctx->pc = 0x2CC2E0u;
            goto label_2cc2e0;
        }
    }
    ctx->pc = 0x2CC2D0u;
    // 0x2cc2d0: 0x24426bd0  addiu       $v0, $v0, 0x6BD0
    ctx->pc = 0x2cc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
    // 0x2cc2d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc2d8: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x2cc2d8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc2dc: 0x0  nop
    ctx->pc = 0x2cc2dcu;
    // NOP
label_2cc2e0:
    // 0x2cc2e0: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x2cc2e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2cc2e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc2e8: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CC2E8u;
    {
        const bool branch_taken_0x2cc2e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2E8u;
        // 0x2cc2ec: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2e8) {
            ctx->pc = 0x2CC340u;
            goto label_2cc340;
        }
    }
    ctx->pc = 0x2CC2F0u;
    // 0x2cc2f0: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2cc2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2cc2f4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2cc2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cc2f8: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cc2fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2cc2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cc300: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x2cc300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x2cc304: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cc304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc308: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2cc308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc30c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CC30Cu;
    {
        const bool branch_taken_0x2cc30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cc30c) {
            ctx->pc = 0x2CC338u;
            goto label_2cc338;
        }
    }
    ctx->pc = 0x2CC314u;
    // 0x2cc314: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cc314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cc318: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x2cc318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2cc31c: 0x24426c02  addiu       $v0, $v0, 0x6C02
    ctx->pc = 0x2cc31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27650));
    // 0x2cc320: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cc320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc324: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2cc324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc328: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC328u;
    {
        const bool branch_taken_0x2cc328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC328u;
        // 0x2cc32c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc328) {
            ctx->pc = 0x2CC338u;
            goto label_2cc338;
        }
    }
    ctx->pc = 0x2CC330u;
    // 0x2cc330: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2CC330u;
    {
        const bool branch_taken_0x2cc330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc330) {
            ctx->pc = 0x2CC3F0u;
            goto label_2cc3f0;
        }
    }
    ctx->pc = 0x2CC338u;
label_2cc338:
    // 0x2cc338: 0xc0b3394  jal         func_2CCE50
    ctx->pc = 0x2CC338u;
    SET_GPR_U32(ctx, 31, 0x2CC340u);
    ctx->pc = 0x2CC33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC338u;
    // 0x2cc33c: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE50u, 0x2CC338u, 0x2CC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC340u;
label_2cc340:
    // 0x2cc340: 0x326700ff  andi        $a3, $s3, 0xFF
    ctx->pc = 0x2cc340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2cc344: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2cc344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2cc348: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2cc348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2cc34c: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x2cc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
    // 0x2cc350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc354: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2cc354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc358: 0x11000023  beqz        $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CC358u;
    {
        const bool branch_taken_0x2cc358 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC358u;
        // 0x2cc35c: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc358) {
            ctx->pc = 0x2CC3E8u;
            goto label_2cc3e8;
        }
    }
    ctx->pc = 0x2CC360u;
    // 0x2cc360: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CC360u;
    {
        const bool branch_taken_0x2cc360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC360u;
        // 0x2cc364: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc360) {
            ctx->pc = 0x2CC3B0u;
            goto label_2cc3b0;
        }
    }
    ctx->pc = 0x2CC368u;
    // 0x2cc368: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cc368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cc36c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2cc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cc370: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x2cc370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x2cc374: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cc374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc378: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x2cc378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2cc37c: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x2cc37cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cc380: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cc380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cc384: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x2cc384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2cc388: 0x24426c02  addiu       $v0, $v0, 0x6C02
    ctx->pc = 0x2cc388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27650));
    // 0x2cc38c: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x2cc38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2cc390: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x2cc390u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2cc394: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cc394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cc398: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cc398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc39c: 0x24426c04  addiu       $v0, $v0, 0x6C04
    ctx->pc = 0x2cc39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27652));
    // 0x2cc3a0: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x2cc3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cc3a4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2cc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2cc3a8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2cc3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cc3ac: 0x0  nop
    ctx->pc = 0x2cc3acu;
    // NOP
label_2cc3b0:
    // 0x2cc3b0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2cc3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2cc3b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2cc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cc3b8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2cc3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2cc3bc: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x2cc3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cc3c0: 0x27828238  addiu       $v0, $gp, -0x7DC8
    ctx->pc = 0x2cc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
    // 0x2cc3c4: 0x94850018  lhu         $a1, 0x18($a0)
    ctx->pc = 0x2cc3c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2cc3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc3cc: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2cc3ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc3d0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2cc3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2cc3d4: 0xc052d94  jal         func_14B650
    ctx->pc = 0x2CC3D4u;
    SET_GPR_U32(ctx, 31, 0x2CC3DCu);
    ctx->pc = 0x2CC3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC3D4u;
    // 0x2cc3d8: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B650u, 0x2CC3D4u, 0x2CC3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3DCu;
label_2cc3dc:
    // 0x2cc3dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC3DCu;
    {
        const bool branch_taken_0x2cc3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc3dc) {
            ctx->pc = 0x2CC3F0u;
            goto label_2cc3f0;
        }
    }
    ctx->pc = 0x2CC3E4u;
    // 0x2cc3e4: 0x0  nop
    ctx->pc = 0x2cc3e4u;
    // NOP
label_2cc3e8:
    // 0x2cc3e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc3ec: 0x0  nop
    ctx->pc = 0x2cc3ecu;
    // NOP
label_2cc3f0:
    // 0x2cc3f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cc3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc3f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cc3f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc3f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc3f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc404: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC404u;
        // 0x2cc408: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC40Cu;
}

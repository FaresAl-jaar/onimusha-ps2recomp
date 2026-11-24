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

// Function: sub_0033A4B0
// Address: 0x33a4b0 - 0x33a5dc
void sub_0033A4B0_0x33a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A4B0_0x33a4b0");
#endif

    switch (ctx->pc) {
        case 0x33a4e8u: goto label_33a4e8;
        case 0x33a518u: goto label_33a518;
        case 0x33a548u: goto label_33a548;
        case 0x33a568u: goto label_33a568;
        case 0x33a574u: goto label_33a574;
        case 0x33a5bcu: goto label_33a5bc;
        default: break;
    }

    ctx->pc = 0x33a4b0u;

    // 0x33a4b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33a4b4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x33a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x33a4b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33a4bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33a4c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33a4c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33a4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a4cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33a4ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a4d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a4d4: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x33a4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x33a4d8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A4D8u;
    {
        const bool branch_taken_0x33a4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4D8u;
        // 0x33a4dc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4d8) {
            ctx->pc = 0x33A500u;
            goto label_33a500;
        }
    }
    ctx->pc = 0x33A4E0u;
    // 0x33a4e0: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x33A4E0u;
    SET_GPR_U32(ctx, 31, 0x33A4E8u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x33A4E0u, 0x33A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A4E8u;
label_33a4e8:
    // 0x33a4e8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x33a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x33a4ec: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x33a4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x33a4f0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x33a4f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33a4f4: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x33A4F4u;
    {
        const bool branch_taken_0x33a4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a4f4) {
            ctx->pc = 0x33A5C0u;
            goto label_33a5c0;
        }
    }
    ctx->pc = 0x33A4FCu;
    // 0x33a4fc: 0x0  nop
    ctx->pc = 0x33a4fcu;
    // NOP
label_33a500:
    // 0x33a500: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x33a500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x33a504: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x33a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x33a508: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A508u;
    {
        const bool branch_taken_0x33a508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A508u;
        // 0x33a50c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a508) {
            ctx->pc = 0x33A530u;
            goto label_33a530;
        }
    }
    ctx->pc = 0x33A510u;
    // 0x33a510: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x33A510u;
    SET_GPR_U32(ctx, 31, 0x33A518u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x33A510u, 0x33A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A518u;
label_33a518:
    // 0x33a518: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x33a518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x33a51c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x33a51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33a520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A520u;
    {
        const bool branch_taken_0x33a520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a520) {
            ctx->pc = 0x33A530u;
            goto label_33a530;
        }
    }
    ctx->pc = 0x33A528u;
    // 0x33a528: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x33a528u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x33a52c: 0x0  nop
    ctx->pc = 0x33a52cu;
    // NOP
label_33a530:
    // 0x33a530: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x33a530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x33a534: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x33a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x33a538: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A538u;
    {
        const bool branch_taken_0x33a538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a538) {
            ctx->pc = 0x33A560u;
            goto label_33a560;
        }
    }
    ctx->pc = 0x33A540u;
    // 0x33a540: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x33A540u;
    SET_GPR_U32(ctx, 31, 0x33A548u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x33A540u, 0x33A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A548u;
label_33a548:
    // 0x33a548: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x33a548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x33a54c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x33a54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33a550: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A550u;
    {
        const bool branch_taken_0x33a550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a550) {
            ctx->pc = 0x33A560u;
            goto label_33a560;
        }
    }
    ctx->pc = 0x33A558u;
    // 0x33a558: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x33a558u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x33a55c: 0x0  nop
    ctx->pc = 0x33a55cu;
    // NOP
label_33a560:
    // 0x33a560: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x33A560u;
    SET_GPR_U32(ctx, 31, 0x33A568u);
    ctx->pc = 0x33A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A560u;
    // 0x33a564: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x33A560u, 0x33A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A568u;
label_33a568:
    // 0x33a568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a56c: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x33A56Cu;
    SET_GPR_U32(ctx, 31, 0x33A574u);
    ctx->pc = 0x33A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A56Cu;
    // 0x33a570: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x33A56Cu, 0x33A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A574u;
label_33a574:
    // 0x33a574: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x33a574u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x33a578: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x33a578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x33a57c: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x33a57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x33a580: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x33a580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x33a584: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x33a584u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x33a588: 0x24c6dd40  addiu       $a2, $a2, -0x22C0
    ctx->pc = 0x33a588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958400));
    // 0x33a58c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x33a58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x33a590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33a590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33a594: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33a594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33a598: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33a59c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33a5a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33a5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5a4: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x33a5a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a5a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33a5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33a5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33a5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5b4: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x33A5B4u;
    SET_GPR_U32(ctx, 31, 0x33A5BCu);
    ctx->pc = 0x33A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A5B4u;
    // 0x33a5b8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x33A5B4u, 0x33A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A5BCu;
label_33a5bc:
    // 0x33a5bc: 0x0  nop
    ctx->pc = 0x33a5bcu;
    // NOP
label_33a5c0:
    // 0x33a5c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33a5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a5c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33a5c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a5c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33a5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a5cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a5d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x33A5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A5D4u;
        // 0x33a5d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A5DCu;
}

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

// Function: sub_002C4530
// Address: 0x2c4530 - 0x2c4740
void sub_002C4530_0x2c4530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4530_0x2c4530");
#endif

    switch (ctx->pc) {
        case 0x2c45f0u: goto label_2c45f0;
        case 0x2c4610u: goto label_2c4610;
        case 0x2c46f4u: goto label_2c46f4;
        default: break;
    }

    ctx->pc = 0x2c4530u;

    // 0x2c4530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c4534: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c4534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c4538: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c4538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c453c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c4540: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4544: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c4544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c454c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c454cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4554: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c4554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c455c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c455cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c4560: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2c4560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2c4564: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C4564u;
    {
        const bool branch_taken_0x2c4564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4564u;
        // 0x2c4568: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4564) {
            ctx->pc = 0x2C45F8u;
            goto label_2c45f8;
        }
    }
    ctx->pc = 0x2C456Cu;
    // 0x2c456c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c4570: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C4570u;
    {
        const bool branch_taken_0x2c4570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4570u;
        // 0x2c4574: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4570) {
            ctx->pc = 0x2C45E0u;
            goto label_2c45e0;
        }
    }
    ctx->pc = 0x2C4578u;
    // 0x2c4578: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C4578u;
    {
        const bool branch_taken_0x2c4578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4578) {
            ctx->pc = 0x2C45C0u;
            goto label_2c45c0;
        }
    }
    ctx->pc = 0x2C4580u;
    // 0x2c4580: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2c4580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c4584: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4584u;
    {
        const bool branch_taken_0x2c4584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4584u;
        // 0x2c4588: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4584) {
            ctx->pc = 0x2C45A0u;
            goto label_2c45a0;
        }
    }
    ctx->pc = 0x2C458Cu;
    // 0x2c458c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C458Cu;
    {
        const bool branch_taken_0x2c458c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c458c) {
            ctx->pc = 0x2C45A0u;
            goto label_2c45a0;
        }
    }
    ctx->pc = 0x2C4594u;
    // 0x2c4594: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C4594u;
    {
        const bool branch_taken_0x2c4594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4594) {
            ctx->pc = 0x2C4600u;
            goto label_2c4600;
        }
    }
    ctx->pc = 0x2C459Cu;
    // 0x2c459c: 0x0  nop
    ctx->pc = 0x2c459cu;
    // NOP
label_2c45a0:
    // 0x2c45a0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c45a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c45a4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c45a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c45a8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c45ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c45acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c45b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c45b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C45B4u;
    {
        const bool branch_taken_0x2c45b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45B4u;
        // 0x2c45b8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45b4) {
            ctx->pc = 0x2C4600u;
            goto label_2c4600;
        }
    }
    ctx->pc = 0x2C45BCu;
    // 0x2c45bc: 0x0  nop
    ctx->pc = 0x2c45bcu;
    // NOP
label_2c45c0:
    // 0x2c45c0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c45c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c45c4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c45c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c45c8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c45cc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c45ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c45d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c45d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c45d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C45D8u;
    {
        const bool branch_taken_0x2c45d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45D8u;
        // 0x2c45dc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45d8) {
            ctx->pc = 0x2C4600u;
            goto label_2c4600;
        }
    }
    ctx->pc = 0x2C45E0u;
label_2c45e0:
    // 0x2c45e0: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c45e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c45e4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c45e8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C45E8u;
    SET_GPR_U32(ctx, 31, 0x2C45F0u);
    ctx->pc = 0x2C45ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45E8u;
    // 0x2c45ec: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C45E8u, 0x2C45F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45F0u;
label_2c45f0:
    // 0x2c45f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C45F0u;
    {
        const bool branch_taken_0x2c45f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45F0u;
        // 0x2c45f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45f0) {
            ctx->pc = 0x2C4600u;
            goto label_2c4600;
        }
    }
    ctx->pc = 0x2C45F8u;
label_2c45f8:
    // 0x2c45f8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2c45f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45fc: 0x0  nop
    ctx->pc = 0x2c45fcu;
    // NOP
label_2c4600:
    // 0x2c4600: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c4604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4608: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C4608u;
    SET_GPR_U32(ctx, 31, 0x2C4610u);
    ctx->pc = 0x2C460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4608u;
    // 0x2c460c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C4608u, 0x2C4610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4610u;
label_2c4610:
    // 0x2c4610: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C4610u;
    {
        const bool branch_taken_0x2c4610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4610) {
            ctx->pc = 0x2C4658u;
            goto label_2c4658;
        }
    }
    ctx->pc = 0x2C4618u;
    // 0x2c4618: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2c4618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c461c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4620: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C4620u;
    {
        const bool branch_taken_0x2c4620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4620) {
            ctx->pc = 0x2C4658u;
            goto label_2c4658;
        }
    }
    ctx->pc = 0x2C4628u;
    // 0x2c4628: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2c462c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4630: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2c4630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c4634: 0x8e2429c8  lw          $a0, 0x29C8($s1)
    ctx->pc = 0x2c4634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10696)));
    // 0x2c4638: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x2c4638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2c463c: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x2c463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x2c4640: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2c4640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2c4644: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2c4644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c4648: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c4648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c464c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c464cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c4650: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2c4650u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c4654: 0x0  nop
    ctx->pc = 0x2c4654u;
    // NOP
label_2c4658:
    // 0x2c4658: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2c4658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c465c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2c465cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2c4660: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4660u;
    {
        const bool branch_taken_0x2c4660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4660u;
        // 0x2c4664: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4660) {
            ctx->pc = 0x2C4670u;
            goto label_2c4670;
        }
    }
    ctx->pc = 0x2C4668u;
    // 0x2c4668: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c4668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c466c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2c466cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c4670:
    // 0x2c4670: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4670u;
    {
        const bool branch_taken_0x2c4670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4670) {
            ctx->pc = 0x2C4698u;
            goto label_2c4698;
        }
    }
    ctx->pc = 0x2C4678u;
    // 0x2c4678: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c4678u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c467c: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x2c467cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c4680: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x2c4680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2c4684: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x2c4684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c4688: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c4688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c468c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C468Cu;
    {
        const bool branch_taken_0x2c468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c468c) {
            ctx->pc = 0x2C4698u;
            goto label_2c4698;
        }
    }
    ctx->pc = 0x2C4694u;
    // 0x2c4694: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c4694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4698:
    // 0x2c4698: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4698u;
    {
        const bool branch_taken_0x2c4698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4698) {
            ctx->pc = 0x2C4718u;
            goto label_2c4718;
        }
    }
    ctx->pc = 0x2C46A0u;
    // 0x2c46a0: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c46a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c46a4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C46A4u;
    {
        const bool branch_taken_0x2c46a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46A4u;
        // 0x2c46a8: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46a4) {
            ctx->pc = 0x2C4700u;
            goto label_2c4700;
        }
    }
    ctx->pc = 0x2C46ACu;
    // 0x2c46ac: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C46ACu;
    {
        const bool branch_taken_0x2c46ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46ACu;
        // 0x2c46b0: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46ac) {
            ctx->pc = 0x2C46E8u;
            goto label_2c46e8;
        }
    }
    ctx->pc = 0x2C46B4u;
    // 0x2c46b4: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c46b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c46b8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c46b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c46bc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c46c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c46c4: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c46c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c46c8: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c46c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c46cc: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c46ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c46d0: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c46d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c46d4: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c46d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c46d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c46dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c46e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C46E0u;
    {
        const bool branch_taken_0x2c46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46E0u;
        // 0x2c46e4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46e0) {
            ctx->pc = 0x2C4710u;
            goto label_2c4710;
        }
    }
    ctx->pc = 0x2C46E8u;
label_2c46e8:
    // 0x2c46e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c46e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c46ec: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C46ECu;
    SET_GPR_U32(ctx, 31, 0x2C46F4u);
    ctx->pc = 0x2C46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C46ECu;
    // 0x2c46f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C46ECu, 0x2C46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C46F4u;
label_2c46f4:
    // 0x2c46f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C46F4u;
    {
        const bool branch_taken_0x2c46f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c46f4) {
            ctx->pc = 0x2C4708u;
            goto label_2c4708;
        }
    }
    ctx->pc = 0x2C46FCu;
    // 0x2c46fc: 0x0  nop
    ctx->pc = 0x2c46fcu;
    // NOP
label_2c4700:
    // 0x2c4700: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c4700u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c4704: 0x0  nop
    ctx->pc = 0x2c4704u;
    // NOP
label_2c4708:
    // 0x2c4708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c470c: 0x0  nop
    ctx->pc = 0x2c470cu;
    // NOP
label_2c4710:
    // 0x2c4710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4710u;
    {
        const bool branch_taken_0x2c4710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4710) {
            ctx->pc = 0x2C4720u;
            goto label_2c4720;
        }
    }
    ctx->pc = 0x2C4718u;
label_2c4718:
    // 0x2c4718: 0x26420006  addiu       $v0, $s2, 0x6
    ctx->pc = 0x2c4718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x2c471c: 0x0  nop
    ctx->pc = 0x2c471cu;
    // NOP
label_2c4720:
    // 0x2c4720: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c4720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4724: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c4724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4728: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c472c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c472cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4738: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4738u;
        // 0x2c473c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4740u;
}

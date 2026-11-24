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

// Function: sub_002C4740
// Address: 0x2c4740 - 0x2c48e8
void sub_002C4740_0x2c4740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4740_0x2c4740");
#endif

    switch (ctx->pc) {
        case 0x2c47f8u: goto label_2c47f8;
        case 0x2c4818u: goto label_2c4818;
        case 0x2c4828u: goto label_2c4828;
        case 0x2c489cu: goto label_2c489c;
        default: break;
    }

    ctx->pc = 0x2c4740u;

    // 0x2c4740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c4744: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c4744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c4748: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c4748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c474c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c474cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c4750: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4754: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c4758: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c4758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c475c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4760: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c4760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c4768: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c4768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c476c: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2c476cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c4770: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C4770u;
    {
        const bool branch_taken_0x2c4770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4770u;
        // 0x2c4774: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4770) {
            ctx->pc = 0x2C4800u;
            goto label_2c4800;
        }
    }
    ctx->pc = 0x2C4778u;
    // 0x2c4778: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c4778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c477c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C477Cu;
    {
        const bool branch_taken_0x2c477c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C477Cu;
        // 0x2c4780: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c477c) {
            ctx->pc = 0x2C47E8u;
            goto label_2c47e8;
        }
    }
    ctx->pc = 0x2C4784u;
    // 0x2c4784: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C4784u;
    {
        const bool branch_taken_0x2c4784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4784) {
            ctx->pc = 0x2C47C8u;
            goto label_2c47c8;
        }
    }
    ctx->pc = 0x2C478Cu;
    // 0x2c478c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2c478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c4790: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4790u;
    {
        const bool branch_taken_0x2c4790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4790u;
        // 0x2c4794: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4790) {
            ctx->pc = 0x2C47A8u;
            goto label_2c47a8;
        }
    }
    ctx->pc = 0x2C4798u;
    // 0x2c4798: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4798u;
    {
        const bool branch_taken_0x2c4798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4798) {
            ctx->pc = 0x2C47A8u;
            goto label_2c47a8;
        }
    }
    ctx->pc = 0x2C47A0u;
    // 0x2c47a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C47A0u;
    {
        const bool branch_taken_0x2c47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c47a0) {
            ctx->pc = 0x2C4808u;
            goto label_2c4808;
        }
    }
    ctx->pc = 0x2C47A8u;
label_2c47a8:
    // 0x2c47a8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c47a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c47ac: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c47acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c47b0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c47b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c47b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c47bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C47BCu;
    {
        const bool branch_taken_0x2c47bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47BCu;
        // 0x2c47c0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47bc) {
            ctx->pc = 0x2C4808u;
            goto label_2c4808;
        }
    }
    ctx->pc = 0x2C47C4u;
    // 0x2c47c4: 0x0  nop
    ctx->pc = 0x2c47c4u;
    // NOP
label_2c47c8:
    // 0x2c47c8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c47c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c47cc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c47ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c47d0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c47d4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c47d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c47d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c47d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c47dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c47e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C47E0u;
    {
        const bool branch_taken_0x2c47e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47E0u;
        // 0x2c47e4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47e0) {
            ctx->pc = 0x2C4808u;
            goto label_2c4808;
        }
    }
    ctx->pc = 0x2C47E8u;
label_2c47e8:
    // 0x2c47e8: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x2c47e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2c47ec: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c47f0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C47F0u;
    SET_GPR_U32(ctx, 31, 0x2C47F8u);
    ctx->pc = 0x2C47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C47F0u;
    // 0x2c47f4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C47F0u, 0x2C47F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47F8u;
label_2c47f8:
    // 0x2c47f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C47F8u;
    {
        const bool branch_taken_0x2c47f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47F8u;
        // 0x2c47fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47f8) {
            ctx->pc = 0x2C4808u;
            goto label_2c4808;
        }
    }
    ctx->pc = 0x2C4800u;
label_2c4800:
    // 0x2c4800: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2c4800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4804: 0x0  nop
    ctx->pc = 0x2c4804u;
    // NOP
label_2c4808:
    // 0x2c4808: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c4808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c480c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c480cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4810: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C4810u;
    SET_GPR_U32(ctx, 31, 0x2C4818u);
    ctx->pc = 0x2C4814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4810u;
    // 0x2c4814: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C4810u, 0x2C4818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4818u;
label_2c4818:
    // 0x2c4818: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4818u;
    {
        const bool branch_taken_0x2c4818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4818) {
            ctx->pc = 0x2C4838u;
            goto label_2c4838;
        }
    }
    ctx->pc = 0x2C4820u;
    // 0x2c4820: 0xc06039c  jal         func_180E70
    ctx->pc = 0x2C4820u;
    SET_GPR_U32(ctx, 31, 0x2C4828u);
    ctx->pc = 0x2C4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4820u;
    // 0x2c4824: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x2C4820u, 0x2C4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4828u;
label_2c4828:
    // 0x2c4828: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c4828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c482c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x2c482cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4830: 0x43a026  xor         $s4, $v0, $v1
    ctx->pc = 0x2c4830u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2c4834: 0x2e940001  sltiu       $s4, $s4, 0x1
    ctx->pc = 0x2c4834u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c4838:
    // 0x2c4838: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2c4838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2c483c: 0x282a026  xor         $s4, $s4, $v0
    ctx->pc = 0x2c483cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x2c4840: 0x1280001f  beqz        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4840u;
    {
        const bool branch_taken_0x2c4840 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4840) {
            ctx->pc = 0x2C48C0u;
            goto label_2c48c0;
        }
    }
    ctx->pc = 0x2C4848u;
    // 0x2c4848: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c4848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c484c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C484Cu;
    {
        const bool branch_taken_0x2c484c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C484Cu;
        // 0x2c4850: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c484c) {
            ctx->pc = 0x2C48A8u;
            goto label_2c48a8;
        }
    }
    ctx->pc = 0x2C4854u;
    // 0x2c4854: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4854u;
    {
        const bool branch_taken_0x2c4854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4854u;
        // 0x2c4858: 0xa260004f  sb          $zero, 0x4F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4854) {
            ctx->pc = 0x2C4890u;
            goto label_2c4890;
        }
    }
    ctx->pc = 0x2C485Cu;
    // 0x2c485c: 0x92640037  lbu         $a0, 0x37($s3)
    ctx->pc = 0x2c485cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2c4860: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c4860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c4864: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c4864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c4868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c486c: 0xa264004e  sb          $a0, 0x4E($s3)
    ctx->pc = 0x2c486cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4870: 0xa2650037  sb          $a1, 0x37($s3)
    ctx->pc = 0x2c4870u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c4874: 0xa2600032  sb          $zero, 0x32($s3)
    ctx->pc = 0x2c4874u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4878: 0xa263005f  sb          $v1, 0x5F($s3)
    ctx->pc = 0x2c4878u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c487c: 0xa6600080  sh          $zero, 0x80($s3)
    ctx->pc = 0x2c487cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4880: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c4880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c4884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4888: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C4888u;
    {
        const bool branch_taken_0x2c4888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4888u;
        // 0x2c488c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4888) {
            ctx->pc = 0x2C48B8u;
            goto label_2c48b8;
        }
    }
    ctx->pc = 0x2C4890u;
label_2c4890:
    // 0x2c4890: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c4890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4894: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C4894u;
    SET_GPR_U32(ctx, 31, 0x2C489Cu);
    ctx->pc = 0x2C4898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4894u;
    // 0x2c4898: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C4894u, 0x2C489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C489Cu;
label_2c489c:
    // 0x2c489c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C489Cu;
    {
        const bool branch_taken_0x2c489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c489c) {
            ctx->pc = 0x2C48B0u;
            goto label_2c48b0;
        }
    }
    ctx->pc = 0x2C48A4u;
    // 0x2c48a4: 0x0  nop
    ctx->pc = 0x2c48a4u;
    // NOP
label_2c48a8:
    // 0x2c48a8: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c48a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c48ac: 0x0  nop
    ctx->pc = 0x2c48acu;
    // NOP
label_2c48b0:
    // 0x2c48b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c48b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48b4: 0x0  nop
    ctx->pc = 0x2c48b4u;
    // NOP
label_2c48b8:
    // 0x2c48b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C48B8u;
    {
        const bool branch_taken_0x2c48b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c48b8) {
            ctx->pc = 0x2C48C8u;
            goto label_2c48c8;
        }
    }
    ctx->pc = 0x2C48C0u;
label_2c48c0:
    // 0x2c48c0: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x2c48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x2c48c4: 0x0  nop
    ctx->pc = 0x2c48c4u;
    // NOP
label_2c48c8:
    // 0x2c48c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c48c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c48cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c48ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c48d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c48d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c48d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c48d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c48d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c48d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c48dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c48dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c48e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C48E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48E0u;
        // 0x2c48e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C48E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C48E8u;
}

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

// Function: sub_002C5560
// Address: 0x2c5560 - 0x2c5738
void sub_002C5560_0x2c5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5560_0x2c5560");
#endif

    switch (ctx->pc) {
        case 0x2c55e0u: goto label_2c55e0;
        case 0x2c5640u: goto label_2c5640;
        case 0x2c565cu: goto label_2c565c;
        case 0x2c56ecu: goto label_2c56ec;
        default: break;
    }

    ctx->pc = 0x2c5560u;

    // 0x2c5560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c5560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c5564: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c5564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c5568: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c5568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c556c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c556cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c5570: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c5570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c5574: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c5574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c5578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c557c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c557cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5584: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c5584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c558c: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2c558cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c5590: 0x90d10001  lbu         $s1, 0x1($a2)
    ctx->pc = 0x2c5590u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c5594: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C5594u;
    {
        const bool branch_taken_0x2c5594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5594u;
        // 0x2c5598: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5594) {
            ctx->pc = 0x2C5648u;
            goto label_2c5648;
        }
    }
    ctx->pc = 0x2C559Cu;
    // 0x2c559c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c55a0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C55A0u;
    {
        const bool branch_taken_0x2c55a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C55A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55A0u;
        // 0x2c55a4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55a0) {
            ctx->pc = 0x2C5630u;
            goto label_2c5630;
        }
    }
    ctx->pc = 0x2C55A8u;
    // 0x2c55a8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C55A8u;
    {
        const bool branch_taken_0x2c55a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c55a8) {
            ctx->pc = 0x2C5610u;
            goto label_2c5610;
        }
    }
    ctx->pc = 0x2C55B0u;
    // 0x2c55b0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2c55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c55b4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C55B4u;
    {
        const bool branch_taken_0x2c55b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55B4u;
        // 0x2c55b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55b4) {
            ctx->pc = 0x2C55F0u;
            goto label_2c55f0;
        }
    }
    ctx->pc = 0x2C55BCu;
    // 0x2c55bc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C55BCu;
    {
        const bool branch_taken_0x2c55bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c55bc) {
            ctx->pc = 0x2C55F0u;
            goto label_2c55f0;
        }
    }
    ctx->pc = 0x2C55C4u;
    // 0x2c55c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c55c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C55C8u;
    {
        const bool branch_taken_0x2c55c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c55c8) {
            ctx->pc = 0x2C55D8u;
            goto label_2c55d8;
        }
    }
    ctx->pc = 0x2C55D0u;
    // 0x2c55d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C55D0u;
    {
        const bool branch_taken_0x2c55d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c55d0) {
            ctx->pc = 0x2C5650u;
            goto label_2c5650;
        }
    }
    ctx->pc = 0x2C55D8u;
label_2c55d8:
    // 0x2c55d8: 0xc0b2328  jal         func_2C8CA0
    ctx->pc = 0x2C55D8u;
    SET_GPR_U32(ctx, 31, 0x2C55E0u);
    ctx->pc = 0x2C55DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C55D8u;
    // 0x2c55dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8CA0u, 0x2C55D8u, 0x2C55E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55E0u;
label_2c55e0:
    // 0x2c55e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c55e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c55e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C55E4u;
    {
        const bool branch_taken_0x2c55e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55E4u;
        // 0x2c55e8: 0xaf9089e0  sw          $s0, -0x7620($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c55e4) {
            ctx->pc = 0x2C5650u;
            goto label_2c5650;
        }
    }
    ctx->pc = 0x2C55ECu;
    // 0x2c55ec: 0x0  nop
    ctx->pc = 0x2c55ecu;
    // NOP
label_2c55f0:
    // 0x2c55f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c55f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c55f4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c55f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c55f8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c55f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c55fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c55fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c5600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5604: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C5604u;
    {
        const bool branch_taken_0x2c5604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5604u;
        // 0x2c5608: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5604) {
            ctx->pc = 0x2C5650u;
            goto label_2c5650;
        }
    }
    ctx->pc = 0x2C560Cu;
    // 0x2c560c: 0x0  nop
    ctx->pc = 0x2c560cu;
    // NOP
label_2c5610:
    // 0x2c5610: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c5610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c5614: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c5614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c5618: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c561c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c561cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c5620: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c5620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c5624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c5624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5628: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5628u;
    {
        const bool branch_taken_0x2c5628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5628u;
        // 0x2c562c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5628) {
            ctx->pc = 0x2C5650u;
            goto label_2c5650;
        }
    }
    ctx->pc = 0x2C5630u;
label_2c5630:
    // 0x2c5630: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c5630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c5634: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c5634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c5638: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C5638u;
    SET_GPR_U32(ctx, 31, 0x2C5640u);
    ctx->pc = 0x2C563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5638u;
    // 0x2c563c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C5638u, 0x2C5640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5640u;
label_2c5640:
    // 0x2c5640: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5640u;
    {
        const bool branch_taken_0x2c5640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5640u;
        // 0x2c5644: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5640) {
            ctx->pc = 0x2C5650u;
            goto label_2c5650;
        }
    }
    ctx->pc = 0x2C5648u;
label_2c5648:
    // 0x2c5648: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2c5648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c564c: 0x0  nop
    ctx->pc = 0x2c564cu;
    // NOP
label_2c5650:
    // 0x2c5650: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c5650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5654: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C5654u;
    SET_GPR_U32(ctx, 31, 0x2C565Cu);
    ctx->pc = 0x2C5658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5654u;
    // 0x2c5658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C5654u, 0x2C565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C565Cu;
label_2c565c:
    // 0x2c565c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C565Cu;
    {
        const bool branch_taken_0x2c565c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c565c) {
            ctx->pc = 0x2C5690u;
            goto label_2c5690;
        }
    }
    ctx->pc = 0x2C5664u;
    // 0x2c5664: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x2c5664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x2c5668: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2c5668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2c566c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C566Cu;
    {
        const bool branch_taken_0x2c566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C566Cu;
        // 0x2c5670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c566c) {
            ctx->pc = 0x2C5680u;
            goto label_2c5680;
        }
    }
    ctx->pc = 0x2C5674u;
    // 0x2c5674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5674u;
    {
        const bool branch_taken_0x2c5674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5674) {
            ctx->pc = 0x2C5688u;
            goto label_2c5688;
        }
    }
    ctx->pc = 0x2C567Cu;
    // 0x2c567c: 0x0  nop
    ctx->pc = 0x2c567cu;
    // NOP
label_2c5680:
    // 0x2c5680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5684: 0x0  nop
    ctx->pc = 0x2c5684u;
    // NOP
label_2c5688:
    // 0x2c5688: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x2c5688u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x2c568c: 0x0  nop
    ctx->pc = 0x2c568cu;
    // NOP
label_2c5690:
    // 0x2c5690: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C5690u;
    {
        const bool branch_taken_0x2c5690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5690) {
            ctx->pc = 0x2C5710u;
            goto label_2c5710;
        }
    }
    ctx->pc = 0x2C5698u;
    // 0x2c5698: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c5698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c569c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C569Cu;
    {
        const bool branch_taken_0x2c569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C569Cu;
        // 0x2c56a0: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c569c) {
            ctx->pc = 0x2C56F8u;
            goto label_2c56f8;
        }
    }
    ctx->pc = 0x2C56A4u;
    // 0x2c56a4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C56A4u;
    {
        const bool branch_taken_0x2c56a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56A4u;
        // 0x2c56a8: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56a4) {
            ctx->pc = 0x2C56E0u;
            goto label_2c56e0;
        }
    }
    ctx->pc = 0x2C56ACu;
    // 0x2c56ac: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c56acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c56b0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c56b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c56b4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c56b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c56bc: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c56bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c56c0: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c56c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c56c4: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c56c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c56c8: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c56c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c56cc: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c56ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c56d0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c56d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c56d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c56d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C56D8u;
    {
        const bool branch_taken_0x2c56d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56D8u;
        // 0x2c56dc: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56d8) {
            ctx->pc = 0x2C5708u;
            goto label_2c5708;
        }
    }
    ctx->pc = 0x2C56E0u;
label_2c56e0:
    // 0x2c56e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c56e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56e4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C56E4u;
    SET_GPR_U32(ctx, 31, 0x2C56ECu);
    ctx->pc = 0x2C56E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C56E4u;
    // 0x2c56e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C56E4u, 0x2C56ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56ECu;
label_2c56ec:
    // 0x2c56ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C56ECu;
    {
        const bool branch_taken_0x2c56ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c56ec) {
            ctx->pc = 0x2C5700u;
            goto label_2c5700;
        }
    }
    ctx->pc = 0x2C56F4u;
    // 0x2c56f4: 0x0  nop
    ctx->pc = 0x2c56f4u;
    // NOP
label_2c56f8:
    // 0x2c56f8: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c56f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c56fc: 0x0  nop
    ctx->pc = 0x2c56fcu;
    // NOP
label_2c5700:
    // 0x2c5700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5704: 0x0  nop
    ctx->pc = 0x2c5704u;
    // NOP
label_2c5708:
    // 0x2c5708: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5708u;
    {
        const bool branch_taken_0x2c5708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5708) {
            ctx->pc = 0x2C5718u;
            goto label_2c5718;
        }
    }
    ctx->pc = 0x2C5710u;
label_2c5710:
    // 0x2c5710: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2c5710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2c5714: 0x0  nop
    ctx->pc = 0x2c5714u;
    // NOP
label_2c5718:
    // 0x2c5718: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c5718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c571c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c571cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5720: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c572c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c572cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5730: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5730u;
        // 0x2c5734: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5738u;
}

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

// Function: sub_002C1570
// Address: 0x2c1570 - 0x2c1804
void sub_002C1570_0x2c1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1570_0x2c1570");
#endif

    switch (ctx->pc) {
        case 0x2c1618u: goto label_2c1618;
        case 0x2c1634u: goto label_2c1634;
        case 0x2c164cu: goto label_2c164c;
        case 0x2c172cu: goto label_2c172c;
        case 0x2c17b4u: goto label_2c17b4;
        default: break;
    }

    ctx->pc = 0x2c1570u;

    // 0x2c1570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c1574: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c1574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c1578: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c1578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c157c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c1580: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c1580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c1584: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c1584u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1588: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c1588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c158c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c158cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1590: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c1590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c1594: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c1594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c159c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c159cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c15a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c15a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c15a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c15a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c15a8: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c15a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c15ac: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C15ACu;
    {
        const bool branch_taken_0x2c15ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15ACu;
        // 0x2c15b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15ac) {
            ctx->pc = 0x2C1620u;
            goto label_2c1620;
        }
    }
    ctx->pc = 0x2C15B4u;
    // 0x2c15b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c15b8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C15B8u;
    {
        const bool branch_taken_0x2c15b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15B8u;
        // 0x2c15bc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15b8) {
            ctx->pc = 0x2C1608u;
            goto label_2c1608;
        }
    }
    ctx->pc = 0x2C15C0u;
    // 0x2c15c0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C15C0u;
    {
        const bool branch_taken_0x2c15c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c15c0) {
            ctx->pc = 0x2C1600u;
            goto label_2c1600;
        }
    }
    ctx->pc = 0x2C15C8u;
    // 0x2c15c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c15cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C15CCu;
    {
        const bool branch_taken_0x2c15cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c15cc) {
            ctx->pc = 0x2C15E0u;
            goto label_2c15e0;
        }
    }
    ctx->pc = 0x2C15D4u;
    // 0x2c15d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C15D4u;
    {
        const bool branch_taken_0x2c15d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c15d4) {
            ctx->pc = 0x2C1628u;
            goto label_2c1628;
        }
    }
    ctx->pc = 0x2C15DCu;
    // 0x2c15dc: 0x0  nop
    ctx->pc = 0x2c15dcu;
    // NOP
label_2c15e0:
    // 0x2c15e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c15e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c15e4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c15e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c15e8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c15ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c15ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c15f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c15f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C15F4u;
    {
        const bool branch_taken_0x2c15f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15F4u;
        // 0x2c15f8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15f4) {
            ctx->pc = 0x2C1628u;
            goto label_2c1628;
        }
    }
    ctx->pc = 0x2C15FCu;
    // 0x2c15fc: 0x0  nop
    ctx->pc = 0x2c15fcu;
    // NOP
label_2c1600:
    // 0x2c1600: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1600u;
    {
        const bool branch_taken_0x2c1600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1600u;
        // 0x2c1604: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1600) {
            ctx->pc = 0x2C1628u;
            goto label_2c1628;
        }
    }
    ctx->pc = 0x2C1608u;
label_2c1608:
    // 0x2c1608: 0x8ea50088  lw          $a1, 0x88($s5)
    ctx->pc = 0x2c1608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x2c160c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c160cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c1610: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C1610u;
    SET_GPR_U32(ctx, 31, 0x2C1618u);
    ctx->pc = 0x2C1614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1610u;
    // 0x2c1614: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C1610u, 0x2C1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1618u;
label_2c1618:
    // 0x2c1618: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1618u;
    {
        const bool branch_taken_0x2c1618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1618u;
        // 0x2c161c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1618) {
            ctx->pc = 0x2C1628u;
            goto label_2c1628;
        }
    }
    ctx->pc = 0x2C1620u;
label_2c1620:
    // 0x2c1620: 0x8eb1007c  lw          $s1, 0x7C($s5)
    ctx->pc = 0x2c1620u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x2c1624: 0x0  nop
    ctx->pc = 0x2c1624u;
    // NOP
label_2c1628:
    // 0x2c1628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c1628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c162c: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C162Cu;
    SET_GPR_U32(ctx, 31, 0x2C1634u);
    ctx->pc = 0x2C1630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C162Cu;
    // 0x2c1630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C162Cu, 0x2C1634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1634u;
label_2c1634:
    // 0x2c1634: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1634u;
    {
        const bool branch_taken_0x2c1634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1634) {
            ctx->pc = 0x2C1658u;
            goto label_2c1658;
        }
    }
    ctx->pc = 0x2C163Cu;
    // 0x2c163c: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x2c163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2c1640: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x2c1640u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1644: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2C1644u;
    SET_GPR_U32(ctx, 31, 0x2C164Cu);
    ctx->pc = 0x2C1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1644u;
    // 0x2c1648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2C1644u, 0x2C164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C164Cu;
label_2c164c:
    // 0x2c164c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C164Cu;
    {
        const bool branch_taken_0x2c164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C164Cu;
        // 0x2c1650: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c164c) {
            ctx->pc = 0x2C1660u;
            goto label_2c1660;
        }
    }
    ctx->pc = 0x2C1654u;
    // 0x2c1654: 0x0  nop
    ctx->pc = 0x2c1654u;
    // NOP
label_2c1658:
    // 0x2c1658: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2c1658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c165c: 0x0  nop
    ctx->pc = 0x2c165cu;
    // NOP
label_2c1660:
    // 0x2c1660: 0x96650006  lhu         $a1, 0x6($s3)
    ctx->pc = 0x2c1660u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x2c1664: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x2c1664u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c1668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c166c: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x2c166cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2c1670: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x2c1670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x2c1674: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2c1674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2c1678: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1678u;
    {
        const bool branch_taken_0x2c1678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1678u;
        // 0x2c167c: 0xc52825  or          $a1, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1678) {
            ctx->pc = 0x2C16A0u;
            goto label_2c16a0;
        }
    }
    ctx->pc = 0x2C1680u;
    // 0x2c1680: 0x111b00  sll         $v1, $s1, 12
    ctx->pc = 0x2c1680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 12));
    // 0x2c1684: 0x70001b  divu        $zero, $v1, $s0
    ctx->pc = 0x2c1684u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c1688: 0x0  nop
    ctx->pc = 0x2c1688u;
    // NOP
    // 0x2c168c: 0x0  nop
    ctx->pc = 0x2c168cu;
    // NOP
    // 0x2c1690: 0x8812  mflo        $s1
    ctx->pc = 0x2c1690u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2c1694: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C1694u;
    {
        const bool branch_taken_0x2c1694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1694) {
            ctx->pc = 0x2C16C0u;
            goto label_2c16c0;
        }
    }
    ctx->pc = 0x2C169Cu;
    // 0x2c169c: 0x0  nop
    ctx->pc = 0x2c169cu;
    // NOP
label_2c16a0:
    // 0x2c16a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c16a4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C16A4u;
    {
        const bool branch_taken_0x2c16a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c16a4) {
            ctx->pc = 0x2C16C0u;
            goto label_2c16c0;
        }
    }
    ctx->pc = 0x2C16ACu;
    // 0x2c16ac: 0x8e4429c0  lw          $a0, 0x29C0($s2)
    ctx->pc = 0x2c16acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2c16b0: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x2c16b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x2c16b4: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2c16b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c16b8: 0x648823  subu        $s1, $v1, $a0
    ctx->pc = 0x2c16b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c16bc: 0x0  nop
    ctx->pc = 0x2c16bcu;
    // NOP
label_2c16c0:
    // 0x2c16c0: 0x4a10023  bgez        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C16C0u;
    {
        const bool branch_taken_0x2c16c0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2C16C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16C0u;
        // 0x2c16c4: 0x51823  negu        $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16c0) {
            ctx->pc = 0x2C1750u;
            goto label_2c1750;
        }
    }
    ctx->pc = 0x2C16C8u;
    // 0x2c16c8: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x2c16c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c16cc: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C16CCu;
    {
        const bool branch_taken_0x2c16cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c16cc) {
            ctx->pc = 0x2C17D8u;
            goto label_2c17d8;
        }
    }
    ctx->pc = 0x2C16D4u;
    // 0x2c16d4: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2c16d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c16d8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C16D8u;
    {
        const bool branch_taken_0x2c16d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c16d8) {
            ctx->pc = 0x2C1738u;
            goto label_2c1738;
        }
    }
    ctx->pc = 0x2C16E0u;
    // 0x2c16e0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C16E0u;
    {
        const bool branch_taken_0x2c16e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C16E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16E0u;
        // 0x2c16e4: 0xa2a0004f  sb          $zero, 0x4F($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16e0) {
            ctx->pc = 0x2C1720u;
            goto label_2c1720;
        }
    }
    ctx->pc = 0x2C16E8u;
    // 0x2c16e8: 0x92a50037  lbu         $a1, 0x37($s5)
    ctx->pc = 0x2c16e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
    // 0x2c16ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c16ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c16f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c16f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c16f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c16f8: 0xa2a5004e  sb          $a1, 0x4E($s5)
    ctx->pc = 0x2c16f8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c16fc: 0xa2a20037  sb          $v0, 0x37($s5)
    ctx->pc = 0x2c16fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c1700: 0xa2a00032  sb          $zero, 0x32($s5)
    ctx->pc = 0x2c1700u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1704: 0xa2a4005f  sb          $a0, 0x5F($s5)
    ctx->pc = 0x2c1704u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1708: 0xa6a00080  sh          $zero, 0x80($s5)
    ctx->pc = 0x2c1708u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c170c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c1710: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c1710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1714: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C1714u;
    {
        const bool branch_taken_0x2c1714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1714u;
        // 0x2c1718: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1714) {
            ctx->pc = 0x2C1748u;
            goto label_2c1748;
        }
    }
    ctx->pc = 0x2C171Cu;
    // 0x2c171c: 0x0  nop
    ctx->pc = 0x2c171cu;
    // NOP
label_2c1720:
    // 0x2c1720: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c1720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1724: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1724u;
    SET_GPR_U32(ctx, 31, 0x2C172Cu);
    ctx->pc = 0x2C1728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1724u;
    // 0x2c1728: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1724u, 0x2C172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C172Cu;
label_2c172c:
    // 0x2c172c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C172Cu;
    {
        const bool branch_taken_0x2c172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c172c) {
            ctx->pc = 0x2C1740u;
            goto label_2c1740;
        }
    }
    ctx->pc = 0x2C1734u;
    // 0x2c1734: 0x0  nop
    ctx->pc = 0x2c1734u;
    // NOP
label_2c1738:
    // 0x2c1738: 0xa38289d8  sb          $v0, -0x7628($gp)
    ctx->pc = 0x2c1738u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c173c: 0x0  nop
    ctx->pc = 0x2c173cu;
    // NOP
label_2c1740:
    // 0x2c1740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1744: 0x0  nop
    ctx->pc = 0x2c1744u;
    // NOP
label_2c1748:
    // 0x2c1748: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2C1748u;
    {
        const bool branch_taken_0x2c1748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1748) {
            ctx->pc = 0x2C17E0u;
            goto label_2c17e0;
        }
    }
    ctx->pc = 0x2C1750u;
label_2c1750:
    // 0x2c1750: 0xb1082b  sltu        $at, $a1, $s1
    ctx->pc = 0x2c1750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c1754: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C1754u;
    {
        const bool branch_taken_0x2c1754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1754) {
            ctx->pc = 0x2C17D8u;
            goto label_2c17d8;
        }
    }
    ctx->pc = 0x2C175Cu;
    // 0x2c175c: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2c175cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c1760: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C1760u;
    {
        const bool branch_taken_0x2c1760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1760) {
            ctx->pc = 0x2C17C0u;
            goto label_2c17c0;
        }
    }
    ctx->pc = 0x2C1768u;
    // 0x2c1768: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C1768u;
    {
        const bool branch_taken_0x2c1768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1768u;
        // 0x2c176c: 0xa2a0004f  sb          $zero, 0x4F($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1768) {
            ctx->pc = 0x2C17A8u;
            goto label_2c17a8;
        }
    }
    ctx->pc = 0x2C1770u;
    // 0x2c1770: 0x92a50037  lbu         $a1, 0x37($s5)
    ctx->pc = 0x2c1770u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
    // 0x2c1774: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c1774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c1778: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c1778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c177c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c177cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c1780: 0xa2a5004e  sb          $a1, 0x4E($s5)
    ctx->pc = 0x2c1780u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1784: 0xa2a20037  sb          $v0, 0x37($s5)
    ctx->pc = 0x2c1784u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c1788: 0xa2a00032  sb          $zero, 0x32($s5)
    ctx->pc = 0x2c1788u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c178c: 0xa2a4005f  sb          $a0, 0x5F($s5)
    ctx->pc = 0x2c178cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1790: 0xa6a00080  sh          $zero, 0x80($s5)
    ctx->pc = 0x2c1790u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1794: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c1794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c1798: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c1798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c179c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C179Cu;
    {
        const bool branch_taken_0x2c179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C179Cu;
        // 0x2c17a0: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c179c) {
            ctx->pc = 0x2C17D0u;
            goto label_2c17d0;
        }
    }
    ctx->pc = 0x2C17A4u;
    // 0x2c17a4: 0x0  nop
    ctx->pc = 0x2c17a4u;
    // NOP
label_2c17a8:
    // 0x2c17a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c17a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17ac: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C17ACu;
    SET_GPR_U32(ctx, 31, 0x2C17B4u);
    ctx->pc = 0x2C17B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17ACu;
    // 0x2c17b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C17ACu, 0x2C17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17B4u;
label_2c17b4:
    // 0x2c17b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C17B4u;
    {
        const bool branch_taken_0x2c17b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c17b4) {
            ctx->pc = 0x2C17C8u;
            goto label_2c17c8;
        }
    }
    ctx->pc = 0x2C17BCu;
    // 0x2c17bc: 0x0  nop
    ctx->pc = 0x2c17bcu;
    // NOP
label_2c17c0:
    // 0x2c17c0: 0xa38289d8  sb          $v0, -0x7628($gp)
    ctx->pc = 0x2c17c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c17c4: 0x0  nop
    ctx->pc = 0x2c17c4u;
    // NOP
label_2c17c8:
    // 0x2c17c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c17c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17cc: 0x0  nop
    ctx->pc = 0x2c17ccu;
    // NOP
label_2c17d0:
    // 0x2c17d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C17D0u;
    {
        const bool branch_taken_0x2c17d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c17d0) {
            ctx->pc = 0x2C17E0u;
            goto label_2c17e0;
        }
    }
    ctx->pc = 0x2C17D8u;
label_2c17d8:
    // 0x2c17d8: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x2c17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2c17dc: 0x0  nop
    ctx->pc = 0x2c17dcu;
    // NOP
label_2c17e0:
    // 0x2c17e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c17e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c17e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c17e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c17e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c17e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c17ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c17ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c17f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c17f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c17f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c17f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c17f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c17f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c17fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C17FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17FCu;
        // 0x2c1800: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C17FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1804u;
}

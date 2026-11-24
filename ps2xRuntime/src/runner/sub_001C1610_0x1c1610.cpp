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

// Function: sub_001C1610
// Address: 0x1c1610 - 0x1c1750
void sub_001C1610_0x1c1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1610_0x1c1610");
#endif

    ctx->pc = 0x1c1610u;

    // 0x1c1610: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x1c1610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1614: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1614u;
    {
        const bool branch_taken_0x1c1614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1614u;
        // 0x1c1618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1614) {
            ctx->pc = 0x1C1628u;
            goto label_1c1628;
        }
    }
    ctx->pc = 0x1C161Cu;
    // 0x1c161c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1C161Cu;
    {
        const bool branch_taken_0x1c161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c161c) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C1624u;
    // 0x1c1624: 0x0  nop
    ctx->pc = 0x1c1624u;
    // NOP
label_1c1628:
    // 0x1c1628: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x1c1628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c162c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C162Cu;
    {
        const bool branch_taken_0x1c162c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C162Cu;
        // 0x1c1630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c162c) {
            ctx->pc = 0x1C1640u;
            goto label_1c1640;
        }
    }
    ctx->pc = 0x1C1634u;
    // 0x1c1634: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1C1634u;
    {
        const bool branch_taken_0x1c1634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1634) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C163Cu;
    // 0x1c163c: 0x0  nop
    ctx->pc = 0x1c163cu;
    // NOP
label_1c1640:
    // 0x1c1640: 0x28a10005  slti        $at, $a1, 0x5
    ctx->pc = 0x1c1640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c1644: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1644u;
    {
        const bool branch_taken_0x1c1644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1644u;
        // 0x1c1648: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1644) {
            ctx->pc = 0x1C1658u;
            goto label_1c1658;
        }
    }
    ctx->pc = 0x1C164Cu;
    // 0x1c164c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1C164Cu;
    {
        const bool branch_taken_0x1c164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c164c) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C1654u;
    // 0x1c1654: 0x0  nop
    ctx->pc = 0x1c1654u;
    // NOP
label_1c1658:
    // 0x1c1658: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1c1658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c165c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C165Cu;
    {
        const bool branch_taken_0x1c165c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C165Cu;
        // 0x1c1660: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c165c) {
            ctx->pc = 0x1C1670u;
            goto label_1c1670;
        }
    }
    ctx->pc = 0x1C1664u;
    // 0x1c1664: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C1664u;
    {
        const bool branch_taken_0x1c1664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1664) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C166Cu;
    // 0x1c166c: 0x0  nop
    ctx->pc = 0x1c166cu;
    // NOP
label_1c1670:
    // 0x1c1670: 0x28a10011  slti        $at, $a1, 0x11
    ctx->pc = 0x1c1670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c1674: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1674u;
    {
        const bool branch_taken_0x1c1674 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1674u;
        // 0x1c1678: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1674) {
            ctx->pc = 0x1C1688u;
            goto label_1c1688;
        }
    }
    ctx->pc = 0x1C167Cu;
    // 0x1c167c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C167Cu;
    {
        const bool branch_taken_0x1c167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c167c) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C1684u;
    // 0x1c1684: 0x0  nop
    ctx->pc = 0x1c1684u;
    // NOP
label_1c1688:
    // 0x1c1688: 0x28a10021  slti        $at, $a1, 0x21
    ctx->pc = 0x1c1688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1c168c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C168Cu;
    {
        const bool branch_taken_0x1c168c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C168Cu;
        // 0x1c1690: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c168c) {
            ctx->pc = 0x1C16A0u;
            goto label_1c16a0;
        }
    }
    ctx->pc = 0x1C1694u;
    // 0x1c1694: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C1694u;
    {
        const bool branch_taken_0x1c1694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1694) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C169Cu;
    // 0x1c169c: 0x0  nop
    ctx->pc = 0x1c169cu;
    // NOP
label_1c16a0:
    // 0x1c16a0: 0x28a10041  slti        $at, $a1, 0x41
    ctx->pc = 0x1c16a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1c16a4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C16A4u;
    {
        const bool branch_taken_0x1c16a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16A4u;
        // 0x1c16a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16a4) {
            ctx->pc = 0x1C16B8u;
            goto label_1c16b8;
        }
    }
    ctx->pc = 0x1C16ACu;
    // 0x1c16ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C16ACu;
    {
        const bool branch_taken_0x1c16ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c16ac) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C16B4u;
    // 0x1c16b4: 0x0  nop
    ctx->pc = 0x1c16b4u;
    // NOP
label_1c16b8:
    // 0x1c16b8: 0x28a10081  slti        $at, $a1, 0x81
    ctx->pc = 0x1c16b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c16bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C16BCu;
    {
        const bool branch_taken_0x1c16bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16BCu;
        // 0x1c16c0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16bc) {
            ctx->pc = 0x1C16D0u;
            goto label_1c16d0;
        }
    }
    ctx->pc = 0x1C16C4u;
    // 0x1c16c4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1C16C4u;
    {
        const bool branch_taken_0x1c16c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c16c4) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C16CCu;
    // 0x1c16cc: 0x0  nop
    ctx->pc = 0x1c16ccu;
    // NOP
label_1c16d0:
    // 0x1c16d0: 0x28a10101  slti        $at, $a1, 0x101
    ctx->pc = 0x1c16d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x1c16d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C16D4u;
    {
        const bool branch_taken_0x1c16d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16D4u;
        // 0x1c16d8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16d4) {
            ctx->pc = 0x1C16E8u;
            goto label_1c16e8;
        }
    }
    ctx->pc = 0x1C16DCu;
    // 0x1c16dc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C16DCu;
    {
        const bool branch_taken_0x1c16dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c16dc) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C16E4u;
    // 0x1c16e4: 0x0  nop
    ctx->pc = 0x1c16e4u;
    // NOP
label_1c16e8:
    // 0x1c16e8: 0x28a10201  slti        $at, $a1, 0x201
    ctx->pc = 0x1c16e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1c16ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C16ECu;
    {
        const bool branch_taken_0x1c16ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16ECu;
        // 0x1c16f0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16ec) {
            ctx->pc = 0x1C1700u;
            goto label_1c1700;
        }
    }
    ctx->pc = 0x1C16F4u;
    // 0x1c16f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C16F4u;
    {
        const bool branch_taken_0x1c16f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c16f4) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C16FCu;
    // 0x1c16fc: 0x0  nop
    ctx->pc = 0x1c16fcu;
    // NOP
label_1c1700:
    // 0x1c1700: 0x28a10401  slti        $at, $a1, 0x401
    ctx->pc = 0x1c1700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1c1704: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1704u;
    {
        const bool branch_taken_0x1c1704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1704u;
        // 0x1c1708: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1704) {
            ctx->pc = 0x1C1718u;
            goto label_1c1718;
        }
    }
    ctx->pc = 0x1C170Cu;
    // 0x1c170c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C170Cu;
    {
        const bool branch_taken_0x1c170c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c170c) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C1714u;
    // 0x1c1714: 0x0  nop
    ctx->pc = 0x1c1714u;
    // NOP
label_1c1718:
    // 0x1c1718: 0x28a10801  slti        $at, $a1, 0x801
    ctx->pc = 0x1c1718u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x1c171c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C171Cu;
    {
        const bool branch_taken_0x1c171c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C171Cu;
        // 0x1c1720: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c171c) {
            ctx->pc = 0x1C1730u;
            goto label_1c1730;
        }
    }
    ctx->pc = 0x1C1724u;
    // 0x1c1724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1724u;
    {
        const bool branch_taken_0x1c1724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1724) {
            ctx->pc = 0x1C1748u;
            goto label_1c1748;
        }
    }
    ctx->pc = 0x1C172Cu;
    // 0x1c172c: 0x0  nop
    ctx->pc = 0x1c172cu;
    // NOP
label_1c1730:
    // 0x1c1730: 0x28a11001  slti        $at, $a1, 0x1001
    ctx->pc = 0x1c1730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x1c1734: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1734u;
    {
        const bool branch_taken_0x1c1734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1734u;
        // 0x1c1738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1734) {
            ctx->pc = 0x1C1744u;
            goto label_1c1744;
        }
    }
    ctx->pc = 0x1C173Cu;
    // 0x1c173c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C173Cu;
    {
        const bool branch_taken_0x1c173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C173Cu;
        // 0x1c1740: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c173c) {
            ctx->pc = 0x1C1744u;
            goto label_1c1744;
        }
    }
    ctx->pc = 0x1C1744u;
label_1c1744:
    // 0x1c1744: 0x0  nop
    ctx->pc = 0x1c1744u;
    // NOP
label_1c1748:
    // 0x1c1748: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1750u;
}

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

// Function: sub_001E1630
// Address: 0x1e1630 - 0x1e1710
void sub_001E1630_0x1e1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1630_0x1e1630");
#endif

    switch (ctx->pc) {
        case 0x1e1630u: goto label_1e1630;
        case 0x1e1634u: goto label_1e1634;
        case 0x1e1638u: goto label_1e1638;
        case 0x1e163cu: goto label_1e163c;
        case 0x1e1640u: goto label_1e1640;
        case 0x1e1644u: goto label_1e1644;
        case 0x1e1648u: goto label_1e1648;
        case 0x1e164cu: goto label_1e164c;
        case 0x1e1650u: goto label_1e1650;
        case 0x1e1654u: goto label_1e1654;
        case 0x1e1658u: goto label_1e1658;
        case 0x1e165cu: goto label_1e165c;
        case 0x1e1660u: goto label_1e1660;
        case 0x1e1664u: goto label_1e1664;
        case 0x1e1668u: goto label_1e1668;
        case 0x1e166cu: goto label_1e166c;
        case 0x1e1670u: goto label_1e1670;
        case 0x1e1674u: goto label_1e1674;
        case 0x1e1678u: goto label_1e1678;
        case 0x1e167cu: goto label_1e167c;
        case 0x1e1680u: goto label_1e1680;
        case 0x1e1684u: goto label_1e1684;
        case 0x1e1688u: goto label_1e1688;
        case 0x1e168cu: goto label_1e168c;
        case 0x1e1690u: goto label_1e1690;
        case 0x1e1694u: goto label_1e1694;
        case 0x1e1698u: goto label_1e1698;
        case 0x1e169cu: goto label_1e169c;
        case 0x1e16a0u: goto label_1e16a0;
        case 0x1e16a4u: goto label_1e16a4;
        case 0x1e16a8u: goto label_1e16a8;
        case 0x1e16acu: goto label_1e16ac;
        case 0x1e16b0u: goto label_1e16b0;
        case 0x1e16b4u: goto label_1e16b4;
        case 0x1e16b8u: goto label_1e16b8;
        case 0x1e16bcu: goto label_1e16bc;
        case 0x1e16c0u: goto label_1e16c0;
        case 0x1e16c4u: goto label_1e16c4;
        case 0x1e16c8u: goto label_1e16c8;
        case 0x1e16ccu: goto label_1e16cc;
        case 0x1e16d0u: goto label_1e16d0;
        case 0x1e16d4u: goto label_1e16d4;
        case 0x1e16d8u: goto label_1e16d8;
        case 0x1e16dcu: goto label_1e16dc;
        case 0x1e16e0u: goto label_1e16e0;
        case 0x1e16e4u: goto label_1e16e4;
        case 0x1e16e8u: goto label_1e16e8;
        case 0x1e16ecu: goto label_1e16ec;
        case 0x1e16f0u: goto label_1e16f0;
        case 0x1e16f4u: goto label_1e16f4;
        case 0x1e16f8u: goto label_1e16f8;
        case 0x1e16fcu: goto label_1e16fc;
        case 0x1e1700u: goto label_1e1700;
        case 0x1e1704u: goto label_1e1704;
        case 0x1e1708u: goto label_1e1708;
        case 0x1e170cu: goto label_1e170c;
        default: break;
    }

    ctx->pc = 0x1e1630u;

label_1e1630:
    // 0x1e1630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1634:
    // 0x1e1634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1638:
    // 0x1e1638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e163c:
    // 0x1e163c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e1640:
    // 0x1e1640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e1644:
    if (ctx->pc == 0x1E1644u) {
        ctx->pc = 0x1E1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1640u;
        // 0x1e1644: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1648u;
        goto label_1e1648;
    }
    ctx->pc = 0x1E1640u;
    {
        const bool branch_taken_0x1e1640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1640u;
        // 0x1e1644: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1640) {
            ctx->pc = 0x1E1650u;
            goto label_1e1650;
        }
    }
    ctx->pc = 0x1E1648u;
label_1e1648:
    // 0x1e1648: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e164c:
    if (ctx->pc == 0x1E164Cu) {
        ctx->pc = 0x1E164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1648u;
        // 0x1e164c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1650u;
        goto label_1e1650;
    }
    ctx->pc = 0x1E1648u;
    {
        const bool branch_taken_0x1e1648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1648u;
        // 0x1e164c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1648) {
            ctx->pc = 0x1E1700u;
            goto label_1e1700;
        }
    }
    ctx->pc = 0x1E1650u;
label_1e1650:
    // 0x1e1650: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e1650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e1654:
    // 0x1e1654: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e1654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e1658:
    // 0x1e1658: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1e1658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1e165c:
    // 0x1e165c: 0x320f809  jalr        $t9
label_1e1660:
    if (ctx->pc == 0x1E1660u) {
        ctx->pc = 0x1E1664u;
        goto label_1e1664;
    }
    ctx->pc = 0x1E165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E165Cu, 0x1E1664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1664u;
label_1e1664:
    // 0x1e1664: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e1668:
    if (ctx->pc == 0x1E1668u) {
        ctx->pc = 0x1E166Cu;
        goto label_1e166c;
    }
    ctx->pc = 0x1E1664u;
    {
        const bool branch_taken_0x1e1664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1664) {
            ctx->pc = 0x1E1688u;
            goto label_1e1688;
        }
    }
    ctx->pc = 0x1E166Cu;
label_1e166c:
    // 0x1e166c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e166cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1670:
    // 0x1e1670: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e1670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e1674:
    // 0x1e1674: 0x320f809  jalr        $t9
label_1e1678:
    if (ctx->pc == 0x1E1678u) {
        ctx->pc = 0x1E1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1674u;
        // 0x1e1678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E167Cu;
        goto label_1e167c;
    }
    ctx->pc = 0x1E1674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E167Cu);
        ctx->pc = 0x1E1678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1674u;
        // 0x1e1678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1674u, 0x1E167Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E167Cu;
label_1e167c:
    // 0x1e167c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1e1680:
    if (ctx->pc == 0x1E1680u) {
        ctx->pc = 0x1E1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E167Cu;
        // 0x1e1680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1684u;
        goto label_1e1684;
    }
    ctx->pc = 0x1E167Cu;
    {
        const bool branch_taken_0x1e167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E167Cu;
        // 0x1e1680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e167c) {
            ctx->pc = 0x1E1700u;
            goto label_1e1700;
        }
    }
    ctx->pc = 0x1E1684u;
label_1e1684:
    // 0x1e1684: 0x0  nop
    ctx->pc = 0x1e1684u;
    // NOP
label_1e1688:
    // 0x1e1688: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e1688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e168c:
    // 0x1e168c: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x1e168cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e1690:
    // 0x1e1690: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1e1690u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1694:
    // 0x1e1694: 0x8507000a  lh          $a3, 0xA($t0)
    ctx->pc = 0x1e1694u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_1e1698:
    // 0x1e1698: 0x85030008  lh          $v1, 0x8($t0)
    ctx->pc = 0x1e1698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_1e169c:
    // 0x1e169c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1e169cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1e16a0:
    // 0x1e16a0: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1e16a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1e16a4:
    // 0x1e16a4: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1e16a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e16a8:
    // 0x1e16a8: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1e16a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1e16ac:
    // 0x1e16ac: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e16acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e16b0:
    // 0x1e16b0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e16b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e16b4:
    // 0x1e16b4: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e16b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e16b8:
    // 0x1e16b8: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e16b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e16bc:
    // 0x1e16bc: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e16bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e16c0:
    // 0x1e16c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e16c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e16c4:
    // 0x1e16c4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e16c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e16c8:
    // 0x1e16c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e16c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e16cc:
    // 0x1e16cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e16ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e16d0:
    // 0x1e16d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e16d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1e16d4:
    // 0x1e16d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e16d8:
    if (ctx->pc == 0x1E16D8u) {
        ctx->pc = 0x1E16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16D4u;
        // 0x1e16d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E16DCu;
        goto label_1e16dc;
    }
    ctx->pc = 0x1E16D4u;
    {
        const bool branch_taken_0x1e16d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16D4u;
        // 0x1e16d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e16d4) {
            ctx->pc = 0x1E16E8u;
            goto label_1e16e8;
        }
    }
    ctx->pc = 0x1E16DCu;
label_1e16dc:
    // 0x1e16dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e16e0:
    if (ctx->pc == 0x1E16E0u) {
        ctx->pc = 0x1E16E4u;
        goto label_1e16e4;
    }
    ctx->pc = 0x1E16DCu;
    {
        const bool branch_taken_0x1e16dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e16dc) {
            ctx->pc = 0x1E1700u;
            goto label_1e1700;
        }
    }
    ctx->pc = 0x1E16E4u;
label_1e16e4:
    // 0x1e16e4: 0x0  nop
    ctx->pc = 0x1e16e4u;
    // NOP
label_1e16e8:
    // 0x1e16e8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1e16e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e16ec:
    // 0x1e16ec: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1e16ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1e16f0:
    // 0x1e16f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e16f4:
    // 0x1e16f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e16f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e16f8:
    // 0x1e16f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1e16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e16fc:
    // 0x1e16fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e16fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1e1700:
    // 0x1e1700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1704:
    // 0x1e1704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1708:
    // 0x1e1708: 0x3e00008  jr          $ra
label_1e170c:
    if (ctx->pc == 0x1E170Cu) {
        ctx->pc = 0x1E170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1708u;
        // 0x1e170c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1710u;
        goto label_fallthrough_0x1e1708;
    }
    ctx->pc = 0x1E1708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1708u;
        // 0x1e170c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1708:
    ctx->pc = 0x1E1710u;
}

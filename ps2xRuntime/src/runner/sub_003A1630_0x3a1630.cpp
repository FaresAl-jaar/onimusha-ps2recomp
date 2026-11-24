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

// Function: sub_003A1630
// Address: 0x3a1630 - 0x3a2454
void sub_003A1630_0x3a1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1630_0x3a1630");
#endif

    switch (ctx->pc) {
        case 0x3a1744u: goto label_3a1744;
        case 0x3a17b0u: goto label_3a17b0;
        case 0x3a1800u: goto label_3a1800;
        case 0x3a1818u: goto label_3a1818;
        case 0x3a1994u: goto label_3a1994;
        case 0x3a19f8u: goto label_3a19f8;
        case 0x3a1a48u: goto label_3a1a48;
        case 0x3a1a60u: goto label_3a1a60;
        case 0x3a1a84u: goto label_3a1a84;
        case 0x3a1b40u: goto label_3a1b40;
        case 0x3a1b90u: goto label_3a1b90;
        case 0x3a1ba8u: goto label_3a1ba8;
        case 0x3a1c1cu: goto label_3a1c1c;
        case 0x3a1cd0u: goto label_3a1cd0;
        case 0x3a1cf0u: goto label_3a1cf0;
        case 0x3a1d5cu: goto label_3a1d5c;
        case 0x3a1d74u: goto label_3a1d74;
        case 0x3a1e08u: goto label_3a1e08;
        case 0x3a1e48u: goto label_3a1e48;
        case 0x3a1e54u: goto label_3a1e54;
        case 0x3a1e94u: goto label_3a1e94;
        case 0x3a1eb4u: goto label_3a1eb4;
        case 0x3a1ef0u: goto label_3a1ef0;
        case 0x3a1efcu: goto label_3a1efc;
        case 0x3a1f38u: goto label_3a1f38;
        case 0x3a1ff4u: goto label_3a1ff4;
        case 0x3a2034u: goto label_3a2034;
        case 0x3a2040u: goto label_3a2040;
        case 0x3a2080u: goto label_3a2080;
        case 0x3a209cu: goto label_3a209c;
        case 0x3a20d8u: goto label_3a20d8;
        case 0x3a20e4u: goto label_3a20e4;
        case 0x3a2120u: goto label_3a2120;
        case 0x3a2170u: goto label_3a2170;
        case 0x3a21ccu: goto label_3a21cc;
        case 0x3a2218u: goto label_3a2218;
        case 0x3a2274u: goto label_3a2274;
        case 0x3a2280u: goto label_3a2280;
        case 0x3a22dcu: goto label_3a22dc;
        case 0x3a22fcu: goto label_3a22fc;
        case 0x3a2354u: goto label_3a2354;
        case 0x3a2360u: goto label_3a2360;
        case 0x3a23b8u: goto label_3a23b8;
        default: break;
    }

    ctx->pc = 0x3a1630u;

    // 0x3a1630: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3a1630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x3a1634: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a1634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a1638: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a1638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a163c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3a163cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3a1640: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a1640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a1644: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a1644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3a1648: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3a1648u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3a164c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a164cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a1650: 0x1460037b  bnez        $v1, . + 4 + (0x37B << 2)
    ctx->pc = 0x3A1650u;
    {
        const bool branch_taken_0x3a1650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1650u;
        // 0x3a1654: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1650) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1658u;
    // 0x3a1658: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a1658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a165c: 0x14600378  bnez        $v1, . + 4 + (0x378 << 2)
    ctx->pc = 0x3A165Cu;
    {
        const bool branch_taken_0x3a165c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a165c) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1664u;
    // 0x3a1664: 0x8f868c5c  lw          $a2, -0x73A4($gp)
    ctx->pc = 0x3a1664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1668: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a1668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a166c: 0x80c70390  lb          $a3, 0x390($a2)
    ctx->pc = 0x3a166cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 912)));
    // 0x3a1670: 0x10e3017b  beq         $a3, $v1, . + 4 + (0x17B << 2)
    ctx->pc = 0x3A1670u;
    {
        const bool branch_taken_0x3a1670 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1670u;
        // 0x3a1674: 0x24c50390  addiu       $a1, $a2, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1670) {
            ctx->pc = 0x3A1C60u;
            goto label_3a1c60;
        }
    }
    ctx->pc = 0x3A1678u;
    // 0x3a1678: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a1678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a167c: 0x10e30178  beq         $a3, $v1, . + 4 + (0x178 << 2)
    ctx->pc = 0x3A167Cu;
    {
        const bool branch_taken_0x3a167c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A167Cu;
        // 0x3a1680: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a167c) {
            ctx->pc = 0x3A1C60u;
            goto label_3a1c60;
        }
    }
    ctx->pc = 0x3A1684u;
    // 0x3a1684: 0x10e30008  beq         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1684u;
    {
        const bool branch_taken_0x3a1684 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a1684) {
            ctx->pc = 0x3A16A8u;
            goto label_3a16a8;
        }
    }
    ctx->pc = 0x3A168Cu;
    // 0x3a168c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1690: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1690u;
    {
        const bool branch_taken_0x3a1690 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a1690) {
            ctx->pc = 0x3A16A8u;
            goto label_3a16a8;
        }
    }
    ctx->pc = 0x3A1698u;
    // 0x3a1698: 0x10e00369  beqz        $a3, . + 4 + (0x369 << 2)
    ctx->pc = 0x3A1698u;
    {
        const bool branch_taken_0x3a1698 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1698) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A16A0u;
    // 0x3a16a0: 0x10000367  b           . + 4 + (0x367 << 2)
    ctx->pc = 0x3A16A0u;
    {
        const bool branch_taken_0x3a16a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a16a0) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A16A8u;
label_3a16a8:
    // 0x3a16a8: 0x80c30391  lb          $v1, 0x391($a2)
    ctx->pc = 0x3a16a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 913)));
    // 0x3a16ac: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3a16acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a16b0: 0x10200363  beqz        $at, . + 4 + (0x363 << 2)
    ctx->pc = 0x3A16B0u;
    {
        const bool branch_taken_0x3a16b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16B0u;
        // 0x3a16b4: 0x24c70391  addiu       $a3, $a2, 0x391 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 913));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a16b0) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A16B8u;
    // 0x3a16b8: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3a16b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3a16bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a16c0: 0x248427d0  addiu       $a0, $a0, 0x27D0
    ctx->pc = 0x3a16c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10192));
    // 0x3a16c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a16c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a16cc: 0x600008  jr          $v1
    ctx->pc = 0x3A16CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A16D8u: goto label_3a16d8;
            case 0x3A1700u: goto label_3a1700;
            case 0x3A1758u: goto label_3a1758;
            case 0x3A18F0u: goto label_3a18f0;
            case 0x3A1A68u: goto label_3a1a68;
            case 0x3A1C38u: goto label_3a1c38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A16CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A16D4u;
    // 0x3a16d4: 0x0  nop
    ctx->pc = 0x3a16d4u;
    // NOP
label_3a16d8:
    // 0x3a16d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a16d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a16dc: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x3a16dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a16e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3a16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3a16e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3a16e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a16e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a16e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a16ec: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3a16ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a16f0: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x3a16f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a16f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a16f8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3a16f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a16fc: 0x0  nop
    ctx->pc = 0x3a16fcu;
    // NOP
label_3a1700:
    // 0x3a1700: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1704: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x3a1704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x3a1708: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a170c: 0xac830394  sw          $v1, 0x394($a0)
    ctx->pc = 0x3a170cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
    // 0x3a1710: 0x28630037  slti        $v1, $v1, 0x37
    ctx->pc = 0x3a1710u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x3a1714: 0x1460034a  bnez        $v1, . + 4 + (0x34A << 2)
    ctx->pc = 0x3A1714u;
    {
        const bool branch_taken_0x3a1714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1714) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A171Cu;
    // 0x3a171c: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1720: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x3a1720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x3a1724: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3a1724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3a1728: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x3a1728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x3a172c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a172cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1730: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x3a1730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3a1734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a1734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1738: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a1738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a173c: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x3A173Cu;
    SET_GPR_U32(ctx, 31, 0x3A1744u);
    ctx->pc = 0x3A1740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A173Cu;
    // 0x3a1740: 0xac600394  sw          $zero, 0x394($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x3A173Cu, 0x3A1744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1744u;
label_3a1744:
    // 0x3a1744: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1748: 0x80620391  lb          $v0, 0x391($v1)
    ctx->pc = 0x3a1748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 913)));
    // 0x3a174c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a1750: 0xa0620391  sb          $v0, 0x391($v1)
    ctx->pc = 0x3a1750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a1754: 0x0  nop
    ctx->pc = 0x3a1754u;
    // NOP
label_3a1758:
    // 0x3a1758: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a175c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1760: 0x80850390  lb          $a1, 0x390($a0)
    ctx->pc = 0x3a1760u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x3a1764: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1764u;
    {
        const bool branch_taken_0x3a1764 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a1764) {
            ctx->pc = 0x3A1780u;
            goto label_3a1780;
        }
    }
    ctx->pc = 0x3A176Cu;
    // 0x3a176c: 0x848303a0  lh          $v1, 0x3A0($a0)
    ctx->pc = 0x3a176cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x3a1770: 0x848203a4  lh          $v0, 0x3A4($a0)
    ctx->pc = 0x3a1770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x3a1774: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3a1774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a1778: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3a1778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a177c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3a177cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_3a1780:
    // 0x3a1780: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a1780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1784: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1784u;
    {
        const bool branch_taken_0x3a1784 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a1784) {
            ctx->pc = 0x3A17A8u;
            goto label_3a17a8;
        }
    }
    ctx->pc = 0x3A178Cu;
    // 0x3a178c: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1790: 0x844303a0  lh          $v1, 0x3A0($v0)
    ctx->pc = 0x3a1790u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 928)));
    // 0x3a1794: 0x844203a4  lh          $v0, 0x3A4($v0)
    ctx->pc = 0x3a1794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x3a1798: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a1798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a179c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3a179cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a17a0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3a17a0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x3a17a4: 0x0  nop
    ctx->pc = 0x3a17a4u;
    // NOP
label_3a17a8:
    // 0x3a17a8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3A17A8u;
    SET_GPR_U32(ctx, 31, 0x3A17B0u);
    ctx->pc = 0x3A17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A17A8u;
    // 0x3a17ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3A17A8u, 0x3A17B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A17B0u;
label_3a17b0:
    // 0x3a17b0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3a17b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a17b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a17b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a17b8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3a17b8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x3a17bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3a17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3a17c0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3a17c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a17c4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3a17c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a17c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3a17c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a17cc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3a17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3a17d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a17d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a17d4: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a17d8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a17d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a17dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a17dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a17e0: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x3a17e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3a17e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a17e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a17e8: 0x0  nop
    ctx->pc = 0x3a17e8u;
    // NOP
    // 0x3a17ec: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3a17ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3a17f0: 0x0  nop
    ctx->pc = 0x3a17f0u;
    // NOP
    // 0x3a17f4: 0x0  nop
    ctx->pc = 0x3a17f4u;
    // NOP
    // 0x3a17f8: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3A17F8u;
    SET_GPR_U32(ctx, 31, 0x3A1800u);
    ctx->pc = 0x3A17FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A17F8u;
    // 0x3a17fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3A17F8u, 0x3A1800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1800u;
label_3a1800:
    // 0x3a1800: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1804: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1804u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a1808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a1808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a180c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a180cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a1810: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3A1810u;
    SET_GPR_U32(ctx, 31, 0x3A1818u);
    ctx->pc = 0x3A1814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1810u;
    // 0x3a1814: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3A1810u, 0x3A1818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1818u;
label_3a1818:
    // 0x3a1818: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3a1818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a181c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3a181cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3a1820: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3a1820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a1824: 0x8f858c5c  lw          $a1, -0x73A4($gp)
    ctx->pc = 0x3a1824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1828: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3a1828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3a182c: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3a182cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3a1830: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3a1830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3a1834: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a1834u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1838: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a1838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a183c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3a183cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3a1840: 0x24a60394  addiu       $a2, $a1, 0x394
    ctx->pc = 0x3a1840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 916));
    // 0x3a1844: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a1844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a1848: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a1848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a184c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A184Cu;
    {
        const bool branch_taken_0x3a184c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A184Cu;
        // 0x3a1850: 0x8ca50394  lw          $a1, 0x394($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a184c) {
            ctx->pc = 0x3A1864u;
            goto label_3a1864;
        }
    }
    ctx->pc = 0x3A1854u;
    // 0x3a1854: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a1854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a1858: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3a1858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a185c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A185Cu;
    {
        const bool branch_taken_0x3a185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a185c) {
            ctx->pc = 0x3A187Cu;
            goto label_3a187c;
        }
    }
    ctx->pc = 0x3A1864u;
label_3a1864:
    // 0x3a1864: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a1864u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a1868: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3a1868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3a186c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a186cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a1870: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3a1870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a1874: 0x0  nop
    ctx->pc = 0x3a1874u;
    // NOP
    // 0x3a1878: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a1878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a187c:
    // 0x3a187c: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A187Cu;
    {
        const bool branch_taken_0x3a187c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A187Cu;
        // 0x3a1880: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a187c) {
            ctx->pc = 0x3A18A0u;
            goto label_3a18a0;
        }
    }
    ctx->pc = 0x3A1884u;
    // 0x3a1884: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3a1884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3a1888: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a188c: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x3a188cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x3a1890: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1894: 0x100002ea  b           . + 4 + (0x2EA << 2)
    ctx->pc = 0x3A1894u;
    {
        const bool branch_taken_0x3a1894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1894u;
        // 0x3a1898: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1894) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A189Cu;
    // 0x3a189c: 0x0  nop
    ctx->pc = 0x3a189cu;
    // NOP
label_3a18a0:
    // 0x3a18a0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3a18a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a18a4: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x3a18a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x3a18a8: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a18ac: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x3a18acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x3a18b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a18b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a18b4: 0xa51818  mult        $v1, $a1, $a1
    ctx->pc = 0x3a18b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a18b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a18b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a18bc: 0x0  nop
    ctx->pc = 0x3a18bcu;
    // NOP
    // 0x3a18c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a18c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a18c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a18c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a18c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a18c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a18cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a18ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a18d0: 0x0  nop
    ctx->pc = 0x3a18d0u;
    // NOP
    // 0x3a18d4: 0xa48303a4  sh          $v1, 0x3A4($a0)
    ctx->pc = 0x3a18d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a18d8: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a18dc: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x3a18dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x3a18e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a18e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a18e4: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x3A18E4u;
    {
        const bool branch_taken_0x3a18e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18E4u;
        // 0x3a18e8: 0xac830394  sw          $v1, 0x394($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a18e4) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A18ECu;
    // 0x3a18ec: 0x0  nop
    ctx->pc = 0x3a18ecu;
    // NOP
label_3a18f0:
    // 0x3a18f0: 0x8f858c5c  lw          $a1, -0x73A4($gp)
    ctx->pc = 0x3a18f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a18f4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3a18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3a18f8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3a18f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3a18fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a18fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1900: 0x84a403a4  lh          $a0, 0x3A4($a1)
    ctx->pc = 0x3a1900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x3a1904: 0x8ca20394  lw          $v0, 0x394($a1)
    ctx->pc = 0x3a1904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 916)));
    // 0x3a1908: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a1908u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a190c: 0x421818  mult        $v1, $v0, $v0
    ctx->pc = 0x3a190cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a1910: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3a1910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a1914: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a1914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a1918: 0xaca20394  sw          $v0, 0x394($a1)
    ctx->pc = 0x3a1918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 916), GPR_U32(ctx, 2));
    // 0x3a191c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a191cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1920: 0x0  nop
    ctx->pc = 0x3a1920u;
    // NOP
    // 0x3a1924: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a1924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a1928: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a1928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a192c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3a192cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a1930: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a1930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a1934: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a1934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a1938: 0x0  nop
    ctx->pc = 0x3a1938u;
    // NOP
    // 0x3a193c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3a193cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a1940: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3a1940u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x3a1944: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x3a1944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3a1948: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A1948u;
    {
        const bool branch_taken_0x3a1948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1948) {
            ctx->pc = 0x3A1998u;
            goto label_3a1998;
        }
    }
    ctx->pc = 0x3A1950u;
    // 0x3a1950: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1954: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3a1954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3a1958: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x3a1958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x3a195c: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x3a195cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3a1960: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x3a1960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3a1964: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x3a1964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x3a1968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a1968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a196c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a196cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a1970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1974: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x3a1974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x3a1978: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a197c: 0x80620391  lb          $v0, 0x391($v1)
    ctx->pc = 0x3a197cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 913)));
    // 0x3a1980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a1980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a1984: 0xa0620391  sb          $v0, 0x391($v1)
    ctx->pc = 0x3a1984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a1988: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a198c: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x3A198Cu;
    SET_GPR_U32(ctx, 31, 0x3A1994u);
    ctx->pc = 0x3A1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A198Cu;
    // 0x3a1990: 0xa45003a4  sh          $s0, 0x3A4($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 932), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x3A198Cu, 0x3A1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1994u;
label_3a1994:
    // 0x3a1994: 0x0  nop
    ctx->pc = 0x3a1994u;
    // NOP
label_3a1998:
    // 0x3a1998: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a199c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a19a0: 0x80850390  lb          $a1, 0x390($a0)
    ctx->pc = 0x3a19a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x3a19a4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A19A4u;
    {
        const bool branch_taken_0x3a19a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a19a4) {
            ctx->pc = 0x3A19C8u;
            goto label_3a19c8;
        }
    }
    ctx->pc = 0x3A19ACu;
    // 0x3a19ac: 0x848303a0  lh          $v1, 0x3A0($a0)
    ctx->pc = 0x3a19acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x3a19b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3a19b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3a19b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a19b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a19b8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3a19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a19bc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3a19bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a19c0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3a19c0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x3a19c4: 0x0  nop
    ctx->pc = 0x3a19c4u;
    // NOP
label_3a19c8:
    // 0x3a19c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a19cc: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A19CCu;
    {
        const bool branch_taken_0x3a19cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a19cc) {
            ctx->pc = 0x3A19F0u;
            goto label_3a19f0;
        }
    }
    ctx->pc = 0x3A19D4u;
    // 0x3a19d4: 0x848303a0  lh          $v1, 0x3A0($a0)
    ctx->pc = 0x3a19d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x3a19d8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3a19d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3a19dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a19dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a19e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a19e4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3a19e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a19e8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3a19e8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x3a19ec: 0x0  nop
    ctx->pc = 0x3a19ecu;
    // NOP
label_3a19f0:
    // 0x3a19f0: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3A19F0u;
    SET_GPR_U32(ctx, 31, 0x3A19F8u);
    ctx->pc = 0x3A19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A19F0u;
    // 0x3a19f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3A19F0u, 0x3A19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A19F8u;
label_3a19f8:
    // 0x3a19f8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3a19f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a19fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a19fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1a00: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3a1a00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3a1a04: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3a1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3a1a08: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a1a08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1a0c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3a1a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a1a10: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3a1a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a1a14: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3a1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3a1a18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a1a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a1a1c: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1a20: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a1a20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a1a24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a1a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a1a28: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x3a1a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3a1a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a1a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1a30: 0x0  nop
    ctx->pc = 0x3a1a30u;
    // NOP
    // 0x3a1a34: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3a1a34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3a1a38: 0x0  nop
    ctx->pc = 0x3a1a38u;
    // NOP
    // 0x3a1a3c: 0x0  nop
    ctx->pc = 0x3a1a3cu;
    // NOP
    // 0x3a1a40: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3A1A40u;
    SET_GPR_U32(ctx, 31, 0x3A1A48u);
    ctx->pc = 0x3A1A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A40u;
    // 0x3a1a44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3A1A40u, 0x3A1A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1A48u;
label_3a1a48:
    // 0x3a1a48: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1a4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1a4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a1a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a1a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1a54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a1a58: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3A1A58u;
    SET_GPR_U32(ctx, 31, 0x3A1A60u);
    ctx->pc = 0x3A1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A58u;
    // 0x3a1a5c: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3A1A58u, 0x3A1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1A60u;
label_3a1a60:
    // 0x3a1a60: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x3A1A60u;
    {
        const bool branch_taken_0x3a1a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1a60) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1A68u;
label_3a1a68:
    // 0x3a1a68: 0x8cc20394  lw          $v0, 0x394($a2)
    ctx->pc = 0x3a1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 916)));
    // 0x3a1a6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1A6Cu;
    {
        const bool branch_taken_0x3a1a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A6Cu;
        // 0x3a1a70: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a6c) {
            ctx->pc = 0x3A1A88u;
            goto label_3a1a88;
        }
    }
    ctx->pc = 0x3A1A74u;
    // 0x3a1a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a1a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1a78: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x3a1a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x3a1a7c: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x3A1A7Cu;
    SET_GPR_U32(ctx, 31, 0x3A1A84u);
    ctx->pc = 0x3A1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A7Cu;
    // 0x3a1a80: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A30u, 0x3A1A7Cu, 0x3A1A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1A84u;
label_3a1a84:
    // 0x3a1a84: 0x0  nop
    ctx->pc = 0x3a1a84u;
    // NOP
label_3a1a88:
    // 0x3a1a88: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3a1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3a1a8c: 0x2463cff0  addiu       $v1, $v1, -0x3010
    ctx->pc = 0x3a1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954992));
    // 0x3a1a90: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x3a1a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3a1a94: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x3a1a94u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x65CFF0u));
    // 0x3a1a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1a9c: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x3a1a9cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x65D000u));
    // 0x3a1aa0: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x3a1aa0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x65D010u));
    // 0x3a1aa4: 0xdc630030  ld          $v1, 0x30($v1)
    ctx->pc = 0x3a1aa4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x65D020u));
    // 0x3a1aa8: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x3a1aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x3a1aac: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x3a1aacu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x3a1ab0: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x3a1ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
    // 0x3a1ab4: 0xfce30030  sd          $v1, 0x30($a3)
    ctx->pc = 0x3a1ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 3));
    // 0x3a1ab8: 0x8f858c5c  lw          $a1, -0x73A4($gp)
    ctx->pc = 0x3a1ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1abc: 0x8ca40394  lw          $a0, 0x394($a1)
    ctx->pc = 0x3a1abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 916)));
    // 0x3a1ac0: 0x84a303a4  lh          $v1, 0x3A4($a1)
    ctx->pc = 0x3a1ac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x3a1ac4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a1ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a1ac8: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3a1ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3a1acc: 0x8c840180  lw          $a0, 0x180($a0)
    ctx->pc = 0x3a1accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x3a1ad0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3a1ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3a1ad4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x3a1ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3a1ad8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3a1ad8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3a1adc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a1adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a1ae0: 0xa4a303a4  sh          $v1, 0x3A4($a1)
    ctx->pc = 0x3a1ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a1ae4: 0x8f858c5c  lw          $a1, -0x73A4($gp)
    ctx->pc = 0x3a1ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1ae8: 0x80a60390  lb          $a2, 0x390($a1)
    ctx->pc = 0x3a1ae8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 912)));
    // 0x3a1aec: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1AECu;
    {
        const bool branch_taken_0x3a1aec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AECu;
        // 0x3a1af0: 0x84a403a4  lh          $a0, 0x3A4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1aec) {
            ctx->pc = 0x3A1B10u;
            goto label_3a1b10;
        }
    }
    ctx->pc = 0x3A1AF4u;
    // 0x3a1af4: 0x84a303a0  lh          $v1, 0x3A0($a1)
    ctx->pc = 0x3a1af4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 928)));
    // 0x3a1af8: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x3a1af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3a1afc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a1afcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a1b00: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3a1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a1b04: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3a1b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a1b08: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3a1b08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3a1b0c: 0x0  nop
    ctx->pc = 0x3a1b0cu;
    // NOP
label_3a1b10:
    // 0x3a1b10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1b14: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1B14u;
    {
        const bool branch_taken_0x3a1b14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a1b14) {
            ctx->pc = 0x3A1B38u;
            goto label_3a1b38;
        }
    }
    ctx->pc = 0x3A1B1Cu;
    // 0x3a1b1c: 0x84a303a0  lh          $v1, 0x3A0($a1)
    ctx->pc = 0x3a1b1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 928)));
    // 0x3a1b20: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x3a1b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3a1b24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a1b24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a1b28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a1b2c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3a1b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a1b30: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3a1b30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3a1b34: 0x0  nop
    ctx->pc = 0x3a1b34u;
    // NOP
label_3a1b38:
    // 0x3a1b38: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3A1B38u;
    SET_GPR_U32(ctx, 31, 0x3A1B40u);
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3A1B38u, 0x3A1B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B40u;
label_3a1b40:
    // 0x3a1b40: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3a1b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a1b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a1b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1b48: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3a1b48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3a1b4c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3a1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3a1b50: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a1b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1b54: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3a1b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a1b58: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3a1b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a1b5c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3a1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3a1b60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a1b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a1b64: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1b68: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a1b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a1b6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a1b70: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x3a1b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3a1b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a1b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1b78: 0x0  nop
    ctx->pc = 0x3a1b78u;
    // NOP
    // 0x3a1b7c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3a1b7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3a1b80: 0x0  nop
    ctx->pc = 0x3a1b80u;
    // NOP
    // 0x3a1b84: 0x0  nop
    ctx->pc = 0x3a1b84u;
    // NOP
    // 0x3a1b88: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3A1B88u;
    SET_GPR_U32(ctx, 31, 0x3A1B90u);
    ctx->pc = 0x3A1B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1B88u;
    // 0x3a1b8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3A1B88u, 0x3A1B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B90u;
label_3a1b90:
    // 0x3a1b90: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1b94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1b94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a1b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a1b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1b9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a1b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a1ba0: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3A1BA0u;
    SET_GPR_U32(ctx, 31, 0x3A1BA8u);
    ctx->pc = 0x3A1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1BA0u;
    // 0x3a1ba4: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3A1BA0u, 0x3A1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1BA8u;
label_3a1ba8:
    // 0x3a1ba8: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1bac: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x3a1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x3a1bb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1bb4: 0xac830394  sw          $v1, 0x394($a0)
    ctx->pc = 0x3a1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
    // 0x3a1bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a1bbc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3a1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3a1bc0: 0x8c630180  lw          $v1, 0x180($v1)
    ctx->pc = 0x3a1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x3a1bc4: 0x1460021e  bnez        $v1, . + 4 + (0x21E << 2)
    ctx->pc = 0x3A1BC4u;
    {
        const bool branch_taken_0x3a1bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1bc4) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1BCCu;
    // 0x3a1bcc: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1bd4: 0x80830390  lb          $v1, 0x390($a0)
    ctx->pc = 0x3a1bd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x3a1bd8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1BD8u;
    {
        const bool branch_taken_0x3a1bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a1bd8) {
            ctx->pc = 0x3A1BF0u;
            goto label_3a1bf0;
        }
    }
    ctx->pc = 0x3A1BE0u;
    // 0x3a1be0: 0x848203a0  lh          $v0, 0x3A0($a0)
    ctx->pc = 0x3a1be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x3a1be4: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x3a1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x3a1be8: 0xa48203a0  sh          $v0, 0x3A0($a0)
    ctx->pc = 0x3a1be8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 928), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a1bec: 0x0  nop
    ctx->pc = 0x3a1becu;
    // NOP
label_3a1bf0:
    // 0x3a1bf0: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1bf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1bf8: 0x80830390  lb          $v1, 0x390($a0)
    ctx->pc = 0x3a1bf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x3a1bfc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1BFCu;
    {
        const bool branch_taken_0x3a1bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a1bfc) {
            ctx->pc = 0x3A1C10u;
            goto label_3a1c10;
        }
    }
    ctx->pc = 0x3A1C04u;
    // 0x3a1c04: 0x848203a0  lh          $v0, 0x3A0($a0)
    ctx->pc = 0x3a1c04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x3a1c08: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x3a1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3a1c0c: 0xa48203a0  sh          $v0, 0x3A0($a0)
    ctx->pc = 0x3a1c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 928), (uint16_t)GPR_U32(ctx, 2));
label_3a1c10:
    // 0x3a1c10: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1c14: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3A1C14u;
    SET_GPR_U32(ctx, 31, 0x3A1C1Cu);
    ctx->pc = 0x3A1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1C14u;
    // 0x3a1c18: 0x844403a0  lh          $a0, 0x3A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3A1C14u, 0x3A1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C1Cu;
label_3a1c1c:
    // 0x3a1c1c: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1c20: 0xa46203a0  sh          $v0, 0x3A0($v1)
    ctx->pc = 0x3a1c20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 928), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a1c24: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1c28: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x3a1c28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x3a1c2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1c30: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x3A1C30u;
    {
        const bool branch_taken_0x3a1c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C30u;
        // 0x3a1c34: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c30) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1C38u;
label_3a1c38:
    // 0x3a1c38: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a1c38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1c3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a1c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a1c40: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x3a1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x3a1c44: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x3a1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a1c48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a1c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a1c4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a1c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a1c50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a1c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a1c54: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x3A1C54u;
    {
        const bool branch_taken_0x3a1c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C54u;
        // 0x3a1c58: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c54) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1C5Cu;
    // 0x3a1c5c: 0x0  nop
    ctx->pc = 0x3a1c5cu;
    // NOP
label_3a1c60:
    // 0x3a1c60: 0x80c50391  lb          $a1, 0x391($a2)
    ctx->pc = 0x3a1c60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 913)));
    // 0x3a1c64: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x3a1c64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a1c68: 0x102001f5  beqz        $at, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x3A1C68u;
    {
        const bool branch_taken_0x3a1c68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C68u;
        // 0x3a1c6c: 0x24c80391  addiu       $t0, $a2, 0x391 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 913));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c68) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1C70u;
    // 0x3a1c70: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3a1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3a1c74: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3a1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a1c78: 0x248427b0  addiu       $a0, $a0, 0x27B0
    ctx->pc = 0x3a1c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10160));
    // 0x3a1c7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a1c80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a1c84: 0x600008  jr          $v1
    ctx->pc = 0x3A1C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A1C90u: goto label_3a1c90;
            case 0x3A1CD0u: goto label_3a1cd0;
            case 0x3A1DC0u: goto label_3a1dc0;
            case 0x3A1FE0u: goto label_3a1fe0;
            case 0x3A21B0u: goto label_3a21b0;
            case 0x3A23F0u: goto label_3a23f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1C84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A1C8Cu;
    // 0x3a1c8c: 0x0  nop
    ctx->pc = 0x3a1c8cu;
    // NOP
label_3a1c90:
    // 0x3a1c90: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a1c94: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3a1c94u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a1c98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a1c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a1c9c: 0x8c29cebc  lw          $t1, -0x3144($at)
    ctx->pc = 0x3a1c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a1ca0: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3a1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3a1ca4: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x3a1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x3a1ca8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3a1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3a1cac: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x3a1cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3a1cb0: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x3a1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x3a1cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a1cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1cb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a1cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1cbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a1cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1cc0: 0x1231025  or          $v0, $t1, $v1
    ctx->pc = 0x3a1cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x3a1cc4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a1cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a1cc8: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x3A1CC8u;
    SET_GPR_U32(ctx, 31, 0x3A1CD0u);
    ctx->pc = 0x3A1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1CC8u;
    // 0x3a1ccc: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x3A1CC8u, 0x3A1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1CD0u;
label_3a1cd0:
    // 0x3a1cd0: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1cd4: 0x8c420394  lw          $v0, 0x394($v0)
    ctx->pc = 0x3a1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
    // 0x3a1cd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1CD8u;
    {
        const bool branch_taken_0x3a1cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CD8u;
        // 0x3a1cdc: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cd8) {
            ctx->pc = 0x3A1CF0u;
            goto label_3a1cf0;
        }
    }
    ctx->pc = 0x3A1CE0u;
    // 0x3a1ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a1ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1ce4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x3a1ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x3a1ce8: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x3A1CE8u;
    SET_GPR_U32(ctx, 31, 0x3A1CF0u);
    ctx->pc = 0x3A1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1CE8u;
    // 0x3a1cec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A30u, 0x3A1CE8u, 0x3A1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1CF0u;
label_3a1cf0:
    // 0x3a1cf0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3a1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3a1cf4: 0x2463d030  addiu       $v1, $v1, -0x2FD0
    ctx->pc = 0x3a1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955056));
    // 0x3a1cf8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a1cfc: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x3a1cfcu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x65D030u));
    // 0x3a1d00: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x3a1d00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3a1d04: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x3a1d04u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x65D040u));
    // 0x3a1d08: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x3a1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x3a1d0c: 0x78640020  lq          $a0, 0x20($v1)
    ctx->pc = 0x3a1d0cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x65D050u));
    // 0x3a1d10: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x3a1d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3a1d14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a1d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1d18: 0xdc630030  ld          $v1, 0x30($v1)
    ctx->pc = 0x3a1d18u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x65D060u));
    // 0x3a1d1c: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x3a1d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x3a1d20: 0x7d250010  sq          $a1, 0x10($t1)
    ctx->pc = 0x3a1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 5));
    // 0x3a1d24: 0x7d240020  sq          $a0, 0x20($t1)
    ctx->pc = 0x3a1d24u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 4));
    // 0x3a1d28: 0xfd230030  sd          $v1, 0x30($t1)
    ctx->pc = 0x3a1d28u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 48), GPR_U64(ctx, 3));
    // 0x3a1d2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a1d2cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65D070u));
    // 0x3a1d30: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3a1d30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3a1d34: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1d38: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x3a1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x3a1d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a1d40: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3a1d44: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x3a1d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1d48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a1d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a1d4c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x3a1d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x3a1d50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a1d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a1d54: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A1D54u;
    SET_GPR_U32(ctx, 31, 0x3A1D5Cu);
    ctx->pc = 0x3A1D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D54u;
    // 0x3a1d58: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A1D54u, 0x3A1D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D5Cu;
label_3a1d5c:
    // 0x3a1d5c: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1d60: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x3a1d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3a1d64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a1d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1d68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a1d6c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A1D6Cu;
    SET_GPR_U32(ctx, 31, 0x3A1D74u);
    ctx->pc = 0x3A1D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D6Cu;
    // 0x3a1d70: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A1D6Cu, 0x3A1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D74u;
label_3a1d74:
    // 0x3a1d74: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1d78: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x3a1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x3a1d7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1d80: 0xac830394  sw          $v1, 0x394($a0)
    ctx->pc = 0x3a1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
    // 0x3a1d84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a1d88: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3a1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3a1d8c: 0x8c630140  lw          $v1, 0x140($v1)
    ctx->pc = 0x3a1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x3a1d90: 0x146001ab  bnez        $v1, . + 4 + (0x1AB << 2)
    ctx->pc = 0x3A1D90u;
    {
        const bool branch_taken_0x3a1d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1d90) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1D98u;
    // 0x3a1d98: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1d9c: 0xac60039c  sw          $zero, 0x39C($v1)
    ctx->pc = 0x3a1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 924), GPR_U32(ctx, 0));
    // 0x3a1da0: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1da4: 0xac600394  sw          $zero, 0x394($v1)
    ctx->pc = 0x3a1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 916), GPR_U32(ctx, 0));
    // 0x3a1da8: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1dac: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x3a1dacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x3a1db0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1db4: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x3A1DB4u;
    {
        const bool branch_taken_0x3a1db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DB4u;
        // 0x3a1db8: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1db4) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1DBCu;
    // 0x3a1dbc: 0x0  nop
    ctx->pc = 0x3a1dbcu;
    // NOP
label_3a1dc0:
    // 0x3a1dc0: 0x8f858c5c  lw          $a1, -0x73A4($gp)
    ctx->pc = 0x3a1dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1dc4: 0x3c0438d1  lui         $a0, 0x38D1
    ctx->pc = 0x3a1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14545 << 16));
    // 0x3a1dc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a1dcc: 0x3484b717  ori         $a0, $a0, 0xB717
    ctx->pc = 0x3a1dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46871);
    // 0x3a1dd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3a1dd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1dd4: 0x8ca40394  lw          $a0, 0x394($a1)
    ctx->pc = 0x3a1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 916)));
    // 0x3a1dd8: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x3a1dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3a1ddc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a1ddcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1de0: 0x0  nop
    ctx->pc = 0x3a1de0u;
    // NOP
    // 0x3a1de4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a1de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3a1de8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a1de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a1dec: 0xe4a00398  swc1        $f0, 0x398($a1)
    ctx->pc = 0x3a1decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 920), bits); }
    // 0x3a1df0: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1df4: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x3a1df4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x3a1df8: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A1DF8u;
    {
        const bool branch_taken_0x3a1df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1DF8u;
        // 0x3a1dfc: 0x27a300e0  addiu       $v1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1df8) {
            ctx->pc = 0x3A1E98u;
            goto label_3a1e98;
        }
    }
    ctx->pc = 0x3A1E00u;
    // 0x3a1e00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1E00u;
    {
        const bool branch_taken_0x3a1e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E00u;
        // 0x3a1e04: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e00) {
            ctx->pc = 0x3A1E24u;
            goto label_3a1e24;
        }
    }
    ctx->pc = 0x3A1E08u;
label_3a1e08:
    // 0x3a1e08: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a1e08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1e0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a1e10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1e14: 0x0  nop
    ctx->pc = 0x3a1e14u;
    // NOP
    // 0x3a1e18: 0x0  nop
    ctx->pc = 0x3a1e18u;
    // NOP
    // 0x3a1e1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A1E1Cu;
    {
        const bool branch_taken_0x3a1e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1e1c) {
            ctx->pc = 0x3A1E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1e08;
        }
    }
    ctx->pc = 0x3A1E24u;
label_3a1e24:
    // 0x3a1e24: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1e28: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x3a1e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3a1e2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a1e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1e30: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x3a1e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1e34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a1e34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a1e38: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x3a1e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3a1e3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a1e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a1e40: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A1E40u;
    SET_GPR_U32(ctx, 31, 0x3A1E48u);
    ctx->pc = 0x3A1E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E40u;
    // 0x3a1e44: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A1E40u, 0x3A1E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E48u;
label_3a1e48:
    // 0x3a1e48: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x3a1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3a1e4c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1E4Cu;
    {
        const bool branch_taken_0x3a1e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E4Cu;
        // 0x3a1e50: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e4c) {
            ctx->pc = 0x3A1E70u;
            goto label_3a1e70;
        }
    }
    ctx->pc = 0x3A1E54u;
label_3a1e54:
    // 0x3a1e54: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a1e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a1e5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1e60: 0x0  nop
    ctx->pc = 0x3a1e60u;
    // NOP
    // 0x3a1e64: 0x0  nop
    ctx->pc = 0x3a1e64u;
    // NOP
    // 0x3a1e68: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A1E68u;
    {
        const bool branch_taken_0x3a1e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1e68) {
            ctx->pc = 0x3A1E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1e54;
        }
    }
    ctx->pc = 0x3A1E70u;
label_3a1e70:
    // 0x3a1e70: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1e74: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3a1e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3a1e78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a1e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1e7c: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x3a1e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1e80: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a1e80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a1e84: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x3a1e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3a1e88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a1e8c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x3A1E94u);
    ctx->pc = 0x3A1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E8Cu;
    // 0x3a1e90: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A1E8Cu, 0x3A1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E94u;
label_3a1e94:
    // 0x3a1e94: 0x0  nop
    ctx->pc = 0x3a1e94u;
    // NOP
label_3a1e98:
    // 0x3a1e98: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1e9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a1ea0: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x3a1ea0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x3a1ea4: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A1EA4u;
    {
        const bool branch_taken_0x3a1ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EA4u;
        // 0x3a1ea8: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ea4) {
            ctx->pc = 0x3A1F38u;
            goto label_3a1f38;
        }
    }
    ctx->pc = 0x3A1EACu;
    // 0x3a1eac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1EACu;
    {
        const bool branch_taken_0x3a1eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EACu;
        // 0x3a1eb0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1eac) {
            ctx->pc = 0x3A1ED0u;
            goto label_3a1ed0;
        }
    }
    ctx->pc = 0x3A1EB4u;
label_3a1eb4:
    // 0x3a1eb4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a1eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1eb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a1ebc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1ec0: 0x0  nop
    ctx->pc = 0x3a1ec0u;
    // NOP
    // 0x3a1ec4: 0x0  nop
    ctx->pc = 0x3a1ec4u;
    // NOP
    // 0x3a1ec8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A1EC8u;
    {
        const bool branch_taken_0x3a1ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1ec8) {
            ctx->pc = 0x3A1EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1eb4;
        }
    }
    ctx->pc = 0x3A1ED0u;
label_3a1ed0:
    // 0x3a1ed0: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1ed4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3a1ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3a1ed8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a1ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1edc: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x3a1edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1ee0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3a1ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3a1ee4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a1ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a1ee8: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A1EE8u;
    SET_GPR_U32(ctx, 31, 0x3A1EF0u);
    ctx->pc = 0x3A1EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1EE8u;
    // 0x3a1eec: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A1EE8u, 0x3A1EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1EF0u;
label_3a1ef0:
    // 0x3a1ef0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x3a1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3a1ef4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1EF4u;
    {
        const bool branch_taken_0x3a1ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EF4u;
        // 0x3a1ef8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ef4) {
            ctx->pc = 0x3A1F18u;
            goto label_3a1f18;
        }
    }
    ctx->pc = 0x3A1EFCu;
label_3a1efc:
    // 0x3a1efc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a1efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1f00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a1f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a1f04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1f08: 0x0  nop
    ctx->pc = 0x3a1f08u;
    // NOP
    // 0x3a1f0c: 0x0  nop
    ctx->pc = 0x3a1f0cu;
    // NOP
    // 0x3a1f10: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A1F10u;
    {
        const bool branch_taken_0x3a1f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1f10) {
            ctx->pc = 0x3A1EFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1efc;
        }
    }
    ctx->pc = 0x3A1F18u;
label_3a1f18:
    // 0x3a1f18: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1f1c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3a1f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3a1f20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a1f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1f24: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x3a1f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1f28: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3a1f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3a1f2c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a1f30: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A1F30u;
    SET_GPR_U32(ctx, 31, 0x3A1F38u);
    ctx->pc = 0x3A1F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1F30u;
    // 0x3a1f34: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A1F30u, 0x3A1F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F38u;
label_3a1f38:
    // 0x3a1f38: 0x8f868c5c  lw          $a2, -0x73A4($gp)
    ctx->pc = 0x3a1f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1f3c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3a1f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a1f40: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x3a1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x3a1f44: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3a1f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a1f48: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3a1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3a1f4c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3a1f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3a1f50: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3a1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3a1f54: 0x8cc50394  lw          $a1, 0x394($a2)
    ctx->pc = 0x3a1f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 916)));
    // 0x3a1f58: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3a1f58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3a1f5c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a1f5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a1f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1f64: 0x0  nop
    ctx->pc = 0x3a1f64u;
    // NOP
    // 0x3a1f68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a1f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a1f6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a1f6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a1f70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1F70u;
    {
        const bool branch_taken_0x3a1f70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F70u;
        // 0x3a1f74: 0x24c70394  addiu       $a3, $a2, 0x394 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 916));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f70) {
            ctx->pc = 0x3A1F88u;
            goto label_3a1f88;
        }
    }
    ctx->pc = 0x3A1F78u;
    // 0x3a1f78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a1f78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a1f7c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3a1f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a1f80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A1F80u;
    {
        const bool branch_taken_0x3a1f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1f80) {
            ctx->pc = 0x3A1FA0u;
            goto label_3a1fa0;
        }
    }
    ctx->pc = 0x3A1F88u;
label_3a1f88:
    // 0x3a1f88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a1f88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a1f8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3a1f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3a1f90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a1f90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a1f94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3a1f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a1f98: 0x0  nop
    ctx->pc = 0x3a1f98u;
    // NOP
    // 0x3a1f9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a1f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a1fa0:
    // 0x3a1fa0: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1FA0u;
    {
        const bool branch_taken_0x3a1fa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3a1fa0) {
            ctx->pc = 0x3A1FB8u;
            goto label_3a1fb8;
        }
    }
    ctx->pc = 0x3A1FA8u;
    // 0x3a1fa8: 0x80c30391  lb          $v1, 0x391($a2)
    ctx->pc = 0x3a1fa8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 913)));
    // 0x3a1fac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1fb0: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x3A1FB0u;
    {
        const bool branch_taken_0x3a1fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FB0u;
        // 0x3a1fb4: 0xa0c30391  sb          $v1, 0x391($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1fb0) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1FB8u;
label_3a1fb8:
    // 0x3a1fb8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3a1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a1fbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a1fc0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3a1fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3a1fc4: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1fc8: 0xc4610398  lwc1        $f1, 0x398($v1)
    ctx->pc = 0x3a1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a1fcc: 0xc460039c  lwc1        $f0, 0x39C($v1)
    ctx->pc = 0x3a1fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a1fd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a1fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a1fd4: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x3A1FD4u;
    {
        const bool branch_taken_0x3a1fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FD4u;
        // 0x3a1fd8: 0xe460039c  swc1        $f0, 0x39C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1fd4) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A1FDCu;
    // 0x3a1fdc: 0x0  nop
    ctx->pc = 0x3a1fdcu;
    // NOP
label_3a1fe0:
    // 0x3a1fe0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a1fe4: 0x14e30026  bne         $a3, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A1FE4u;
    {
        const bool branch_taken_0x3a1fe4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FE4u;
        // 0x3a1fe8: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1fe4) {
            ctx->pc = 0x3A2080u;
            goto label_3a2080;
        }
    }
    ctx->pc = 0x3A1FECu;
    // 0x3a1fec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1FECu;
    {
        const bool branch_taken_0x3a1fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FECu;
        // 0x3a1ff0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1fec) {
            ctx->pc = 0x3A2010u;
            goto label_3a2010;
        }
    }
    ctx->pc = 0x3A1FF4u;
label_3a1ff4:
    // 0x3a1ff4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a1ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1ff8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a1ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a1ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a2000: 0x0  nop
    ctx->pc = 0x3a2000u;
    // NOP
    // 0x3a2004: 0x0  nop
    ctx->pc = 0x3a2004u;
    // NOP
    // 0x3a2008: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A2008u;
    {
        const bool branch_taken_0x3a2008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2008) {
            ctx->pc = 0x3A1FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1ff4;
        }
    }
    ctx->pc = 0x3A2010u;
label_3a2010:
    // 0x3a2010: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a2010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2014: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3a2014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a2018: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a2018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a201c: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x3a201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2020: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a2020u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a2024: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3a2024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3a2028: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a2028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a202c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A202Cu;
    SET_GPR_U32(ctx, 31, 0x3A2034u);
    ctx->pc = 0x3A2030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A202Cu;
    // 0x3a2030: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A202Cu, 0x3A2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2034u;
label_3a2034:
    // 0x3a2034: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x3a2034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3a2038: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2038u;
    {
        const bool branch_taken_0x3a2038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2038u;
        // 0x3a203c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2038) {
            ctx->pc = 0x3A205Cu;
            goto label_3a205c;
        }
    }
    ctx->pc = 0x3A2040u;
label_3a2040:
    // 0x3a2040: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a2040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2044: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a2044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a2048: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a2048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a204c: 0x0  nop
    ctx->pc = 0x3a204cu;
    // NOP
    // 0x3a2050: 0x0  nop
    ctx->pc = 0x3a2050u;
    // NOP
    // 0x3a2054: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A2054u;
    {
        const bool branch_taken_0x3a2054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2054) {
            ctx->pc = 0x3A2040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2040;
        }
    }
    ctx->pc = 0x3A205Cu;
label_3a205c:
    // 0x3a205c: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2060: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3a2060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3a2064: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a2064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2068: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x3a2068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a206c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a206cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a2070: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3a2070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3a2074: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a2074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a2078: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A2078u;
    SET_GPR_U32(ctx, 31, 0x3A2080u);
    ctx->pc = 0x3A207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2078u;
    // 0x3a207c: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A2078u, 0x3A2080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2080u;
label_3a2080:
    // 0x3a2080: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a2080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2084: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a2084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a2088: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x3a2088u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x3a208c: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A208Cu;
    {
        const bool branch_taken_0x3a208c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A208Cu;
        // 0x3a2090: 0x27a30080  addiu       $v1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a208c) {
            ctx->pc = 0x3A2120u;
            goto label_3a2120;
        }
    }
    ctx->pc = 0x3A2094u;
    // 0x3a2094: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2094u;
    {
        const bool branch_taken_0x3a2094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2094u;
        // 0x3a2098: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2094) {
            ctx->pc = 0x3A20B8u;
            goto label_3a20b8;
        }
    }
    ctx->pc = 0x3A209Cu;
label_3a209c:
    // 0x3a209c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a209cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a20a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a20a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a20a8: 0x0  nop
    ctx->pc = 0x3a20a8u;
    // NOP
    // 0x3a20ac: 0x0  nop
    ctx->pc = 0x3a20acu;
    // NOP
    // 0x3a20b0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A20B0u;
    {
        const bool branch_taken_0x3a20b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a20b0) {
            ctx->pc = 0x3A209Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a209c;
        }
    }
    ctx->pc = 0x3A20B8u;
label_3a20b8:
    // 0x3a20b8: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a20bc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3a20bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a20c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a20c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a20c4: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x3a20c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a20c8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3a20c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3a20cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a20ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a20d0: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A20D0u;
    SET_GPR_U32(ctx, 31, 0x3A20D8u);
    ctx->pc = 0x3A20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20D0u;
    // 0x3a20d4: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A20D0u, 0x3A20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20D8u;
label_3a20d8:
    // 0x3a20d8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3a20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3a20dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A20DCu;
    {
        const bool branch_taken_0x3a20dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20DCu;
        // 0x3a20e0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20dc) {
            ctx->pc = 0x3A2100u;
            goto label_3a2100;
        }
    }
    ctx->pc = 0x3A20E4u;
label_3a20e4:
    // 0x3a20e4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a20e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a20e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a20ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a20f0: 0x0  nop
    ctx->pc = 0x3a20f0u;
    // NOP
    // 0x3a20f4: 0x0  nop
    ctx->pc = 0x3a20f4u;
    // NOP
    // 0x3a20f8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A20F8u;
    {
        const bool branch_taken_0x3a20f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a20f8) {
            ctx->pc = 0x3A20E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a20e4;
        }
    }
    ctx->pc = 0x3A2100u;
label_3a2100:
    // 0x3a2100: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2104: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3a2104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3a2108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a2108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a210c: 0xc4400398  lwc1        $f0, 0x398($v0)
    ctx->pc = 0x3a210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a2110: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3a2110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3a2114: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a2114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a2118: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A2118u;
    SET_GPR_U32(ctx, 31, 0x3A2120u);
    ctx->pc = 0x3A211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2118u;
    // 0x3a211c: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A2118u, 0x3A2120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2120u;
label_3a2120:
    // 0x3a2120: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a2120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2124: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x3a2124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x3a2128: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a2128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a212c: 0xc482039c  lwc1        $f2, 0x39C($a0)
    ctx->pc = 0x3a212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a2130: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3a2130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2134: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x3A2134u;
    {
        const bool branch_taken_0x3a2134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2134) {
            ctx->pc = 0x3A2178u;
            goto label_3a2178;
        }
    }
    ctx->pc = 0x3A213Cu;
    // 0x3a213c: 0xac800394  sw          $zero, 0x394($a0)
    ctx->pc = 0x3a213cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 0));
    // 0x3a2140: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3a2140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3a2144: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a2144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2148: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x3a2148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x3a214c: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x3a214cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x3a2150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a2150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2154: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x3a2154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x3a2158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a2158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a215c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a215cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2160: 0x80620391  lb          $v0, 0x391($v1)
    ctx->pc = 0x3a2160u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 913)));
    // 0x3a2164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a2168: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x3A2168u;
    SET_GPR_U32(ctx, 31, 0x3A2170u);
    ctx->pc = 0x3A216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2168u;
    // 0x3a216c: 0xa0620391  sb          $v0, 0x391($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 913), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x3A2168u, 0x3A2170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2170u;
label_3a2170:
    // 0x3a2170: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x3A2170u;
    {
        const bool branch_taken_0x3a2170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2170) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A2178u;
label_3a2178:
    // 0x3a2178: 0xc4800398  lwc1        $f0, 0x398($a0)
    ctx->pc = 0x3a2178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a217c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3a217cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a2180: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a2180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2184: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2184u;
    {
        const bool branch_taken_0x3a2184 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2184u;
        // 0x3a2188: 0x24830398  addiu       $v1, $a0, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2184) {
            ctx->pc = 0x3A2198u;
            goto label_3a2198;
        }
    }
    ctx->pc = 0x3A218Cu;
    // 0x3a218c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x3a218cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3a2190: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3a2190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3a2194: 0x0  nop
    ctx->pc = 0x3a2194u;
    // NOP
label_3a2198:
    // 0x3a2198: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a2198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a219c: 0xc4610398  lwc1        $f1, 0x398($v1)
    ctx->pc = 0x3a219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a21a0: 0xc460039c  lwc1        $f0, 0x39C($v1)
    ctx->pc = 0x3a21a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a21a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a21a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a21a8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x3A21A8u;
    {
        const bool branch_taken_0x3a21a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21A8u;
        // 0x3a21ac: 0xe460039c  swc1        $f0, 0x39C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 924), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21a8) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A21B0u;
label_3a21b0:
    // 0x3a21b0: 0x8cc30394  lw          $v1, 0x394($a2)
    ctx->pc = 0x3a21b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 916)));
    // 0x3a21b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A21B4u;
    {
        const bool branch_taken_0x3a21b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21B4u;
        // 0x3a21b8: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21b4) {
            ctx->pc = 0x3A21D0u;
            goto label_3a21d0;
        }
    }
    ctx->pc = 0x3A21BCu;
    // 0x3a21bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a21bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a21c0: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x3a21c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x3a21c4: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x3A21C4u;
    SET_GPR_U32(ctx, 31, 0x3A21CCu);
    ctx->pc = 0x3A21C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A21C4u;
    // 0x3a21c8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A30u, 0x3A21C4u, 0x3A21CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A21CCu;
label_3a21cc:
    // 0x3a21cc: 0x0  nop
    ctx->pc = 0x3a21ccu;
    // NOP
label_3a21d0:
    // 0x3a21d0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3a21d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3a21d4: 0x2484d080  addiu       $a0, $a0, -0x2F80
    ctx->pc = 0x3a21d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955136));
    // 0x3a21d8: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x3a21d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3a21dc: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x3a21dcu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x65D080u));
    // 0x3a21e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a21e4: 0x78860010  lq          $a2, 0x10($a0)
    ctx->pc = 0x3a21e4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x65D090u));
    // 0x3a21e8: 0x78850020  lq          $a1, 0x20($a0)
    ctx->pc = 0x3a21e8u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x65D0A0u));
    // 0x3a21ec: 0xdc840030  ld          $a0, 0x30($a0)
    ctx->pc = 0x3a21ecu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x65D0B0u));
    // 0x3a21f0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x3a21f0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x3a21f4: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x3a21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x3a21f8: 0x7d050020  sq          $a1, 0x20($t0)
    ctx->pc = 0x3a21f8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 5));
    // 0x3a21fc: 0xfd040030  sd          $a0, 0x30($t0)
    ctx->pc = 0x3a21fcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 4));
    // 0x3a2200: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a2200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2204: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x3a2204u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x3a2208: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3A2208u;
    {
        const bool branch_taken_0x3a2208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2208u;
        // 0x3a220c: 0x27a30060  addiu       $v1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2208) {
            ctx->pc = 0x3A22E0u;
            goto label_3a22e0;
        }
    }
    ctx->pc = 0x3A2210u;
    // 0x3a2210: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2210u;
    {
        const bool branch_taken_0x3a2210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2210u;
        // 0x3a2214: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2210) {
            ctx->pc = 0x3A2234u;
            goto label_3a2234;
        }
    }
    ctx->pc = 0x3A2218u;
label_3a2218:
    // 0x3a2218: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a2218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a221c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a2220: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a2220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a2224: 0x0  nop
    ctx->pc = 0x3a2224u;
    // NOP
    // 0x3a2228: 0x0  nop
    ctx->pc = 0x3a2228u;
    // NOP
    // 0x3a222c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A222Cu;
    {
        const bool branch_taken_0x3a222c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a222c) {
            ctx->pc = 0x3A2218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2218;
        }
    }
    ctx->pc = 0x3A2234u;
label_3a2234:
    // 0x3a2234: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2238: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3a2238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a223c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a223cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2240: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x3a2240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x3a2244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a2244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a2248: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3a224c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x3a224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x3a2250: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3a2250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3a2254: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a2254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a2258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a225c: 0x0  nop
    ctx->pc = 0x3a225cu;
    // NOP
    // 0x3a2260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a2260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a2264: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3a2264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3a2268: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a2268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a226c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A226Cu;
    SET_GPR_U32(ctx, 31, 0x3A2274u);
    ctx->pc = 0x3A2270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A226Cu;
    // 0x3a2270: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A226Cu, 0x3A2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2274u;
label_3a2274:
    // 0x3a2274: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3a2274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a2278: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2278u;
    {
        const bool branch_taken_0x3a2278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2278u;
        // 0x3a227c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2278) {
            ctx->pc = 0x3A229Cu;
            goto label_3a229c;
        }
    }
    ctx->pc = 0x3A2280u;
label_3a2280:
    // 0x3a2280: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a2280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2284: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a2284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a2288: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a2288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a228c: 0x0  nop
    ctx->pc = 0x3a228cu;
    // NOP
    // 0x3a2290: 0x0  nop
    ctx->pc = 0x3a2290u;
    // NOP
    // 0x3a2294: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A2294u;
    {
        const bool branch_taken_0x3a2294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2294) {
            ctx->pc = 0x3A2280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2280;
        }
    }
    ctx->pc = 0x3A229Cu;
label_3a229c:
    // 0x3a229c: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a22a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3a22a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a22a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a22a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a22a8: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x3a22a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x3a22ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a22acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a22b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3a22b4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x3a22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x3a22b8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3a22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3a22bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a22c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a22c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a22c4: 0x0  nop
    ctx->pc = 0x3a22c4u;
    // NOP
    // 0x3a22c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a22c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a22cc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3a22ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3a22d0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3a22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a22d4: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A22D4u;
    SET_GPR_U32(ctx, 31, 0x3A22DCu);
    ctx->pc = 0x3A22D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A22D4u;
    // 0x3a22d8: 0x246502b0  addiu       $a1, $v1, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A22D4u, 0x3A22DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A22DCu;
label_3a22dc:
    // 0x3a22dc: 0x0  nop
    ctx->pc = 0x3a22dcu;
    // NOP
label_3a22e0:
    // 0x3a22e0: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a22e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a22e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a22e8: 0x80840390  lb          $a0, 0x390($a0)
    ctx->pc = 0x3a22e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x3a22ec: 0x14830032  bne         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A22ECu;
    {
        const bool branch_taken_0x3a22ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22ECu;
        // 0x3a22f0: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22ec) {
            ctx->pc = 0x3A23B8u;
            goto label_3a23b8;
        }
    }
    ctx->pc = 0x3A22F4u;
    // 0x3a22f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A22F4u;
    {
        const bool branch_taken_0x3a22f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22F4u;
        // 0x3a22f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22f4) {
            ctx->pc = 0x3A2318u;
            goto label_3a2318;
        }
    }
    ctx->pc = 0x3A22FCu;
label_3a22fc:
    // 0x3a22fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a22fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a2300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a2304: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a2304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a2308: 0x0  nop
    ctx->pc = 0x3a2308u;
    // NOP
    // 0x3a230c: 0x0  nop
    ctx->pc = 0x3a230cu;
    // NOP
    // 0x3a2310: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A2310u;
    {
        const bool branch_taken_0x3a2310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2310) {
            ctx->pc = 0x3A22FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a22fc;
        }
    }
    ctx->pc = 0x3A2318u;
label_3a2318:
    // 0x3a2318: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a2318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a231c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3a231cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a2320: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a2320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2324: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x3a2324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x3a2328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a2328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a232c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3a2330: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x3a2330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x3a2334: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a2334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a2338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a233c: 0x0  nop
    ctx->pc = 0x3a233cu;
    // NOP
    // 0x3a2340: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a2340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a2344: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3a2344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3a2348: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a2348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a234c: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A234Cu;
    SET_GPR_U32(ctx, 31, 0x3A2354u);
    ctx->pc = 0x3A2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A234Cu;
    // 0x3a2350: 0x246500f0  addiu       $a1, $v1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A234Cu, 0x3A2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2354u;
label_3a2354:
    // 0x3a2354: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3a2354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a2358: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2358u;
    {
        const bool branch_taken_0x3a2358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2358u;
        // 0x3a235c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2358) {
            ctx->pc = 0x3A237Cu;
            goto label_3a237c;
        }
    }
    ctx->pc = 0x3A2360u;
label_3a2360:
    // 0x3a2360: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a2360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2364: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a2364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a2368: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a2368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a236c: 0x0  nop
    ctx->pc = 0x3a236cu;
    // NOP
    // 0x3a2370: 0x0  nop
    ctx->pc = 0x3a2370u;
    // NOP
    // 0x3a2374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A2374u;
    {
        const bool branch_taken_0x3a2374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2374) {
            ctx->pc = 0x3A2360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2360;
        }
    }
    ctx->pc = 0x3A237Cu;
label_3a237c:
    // 0x3a237c: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2380: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3a2380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a2384: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a2384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2388: 0x8c620394  lw          $v0, 0x394($v1)
    ctx->pc = 0x3a2388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 916)));
    // 0x3a238c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a238cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a2390: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3a2390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3a2394: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x3a2394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x3a2398: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a2398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a239c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a239cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a23a0: 0x0  nop
    ctx->pc = 0x3a23a0u;
    // NOP
    // 0x3a23a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a23a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a23a8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3a23a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3a23ac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3a23acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a23b0: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A23B0u;
    SET_GPR_U32(ctx, 31, 0x3A23B8u);
    ctx->pc = 0x3A23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A23B0u;
    // 0x3a23b4: 0x246502b0  addiu       $a1, $v1, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A23B0u, 0x3A23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A23B8u;
label_3a23b8:
    // 0x3a23b8: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a23b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a23bc: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x3a23bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x3a23c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a23c4: 0xac830394  sw          $v1, 0x394($a0)
    ctx->pc = 0x3a23c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 3));
    // 0x3a23c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a23cc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3a23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3a23d0: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x3a23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x3a23d4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A23D4u;
    {
        const bool branch_taken_0x3a23d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a23d4) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A23DCu;
    // 0x3a23dc: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a23e0: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x3a23e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x3a23e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a23e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3A23E8u;
    {
        const bool branch_taken_0x3a23e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23E8u;
        // 0x3a23ec: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23e8) {
            ctx->pc = 0x3A2440u;
            goto label_3a2440;
        }
    }
    ctx->pc = 0x3A23F0u;
label_3a23f0:
    // 0x3a23f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a23f4: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A23F4u;
    {
        const bool branch_taken_0x3a23f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23F4u;
        // 0x3a23f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23f4) {
            ctx->pc = 0x3A2400u;
            goto label_3a2400;
        }
    }
    ctx->pc = 0x3A23FCu;
    // 0x3a23fc: 0xa0c303a2  sb          $v1, 0x3A2($a2)
    ctx->pc = 0x3a23fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 930), (uint8_t)GPR_U32(ctx, 3));
label_3a2400:
    // 0x3a2400: 0x8f858c5c  lw          $a1, -0x73A4($gp)
    ctx->pc = 0x3a2400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a2404: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a2404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a2408: 0x80a40390  lb          $a0, 0x390($a1)
    ctx->pc = 0x3a2408u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 912)));
    // 0x3a240c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A240Cu;
    {
        const bool branch_taken_0x3a240c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a240c) {
            ctx->pc = 0x3A2418u;
            goto label_3a2418;
        }
    }
    ctx->pc = 0x3A2414u;
    // 0x3a2414: 0xa0a003a2  sb          $zero, 0x3A2($a1)
    ctx->pc = 0x3a2414u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 930), (uint8_t)GPR_U32(ctx, 0));
label_3a2418:
    // 0x3a2418: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a2418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a241c: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x3a241cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x3a2420: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a2420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a2424: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a2424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a2428: 0xa0800390  sb          $zero, 0x390($a0)
    ctx->pc = 0x3a2428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 912), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a242c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x3a242cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a2430: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3a2430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a2434: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a2434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a2438: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3a2438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a243c: 0x0  nop
    ctx->pc = 0x3a243cu;
    // NOP
label_3a2440:
    // 0x3a2440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a2440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2444: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a2444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2448: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a2448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a244c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A244Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A244Cu;
        // 0x3a2450: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A244Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2454u;
}

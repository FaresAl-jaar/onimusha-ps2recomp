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

// Function: sub_002D1680
// Address: 0x2d1680 - 0x2d17f0
void sub_002D1680_0x2d1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1680_0x2d1680");
#endif

    switch (ctx->pc) {
        case 0x2d16e8u: goto label_2d16e8;
        case 0x2d16f0u: goto label_2d16f0;
        case 0x2d16f8u: goto label_2d16f8;
        case 0x2d1760u: goto label_2d1760;
        case 0x2d1768u: goto label_2d1768;
        case 0x2d1770u: goto label_2d1770;
        case 0x2d1778u: goto label_2d1778;
        case 0x2d1780u: goto label_2d1780;
        case 0x2d1788u: goto label_2d1788;
        case 0x2d17a0u: goto label_2d17a0;
        case 0x2d17acu: goto label_2d17ac;
        case 0x2d17c8u: goto label_2d17c8;
        case 0x2d17d0u: goto label_2d17d0;
        case 0x2d17d8u: goto label_2d17d8;
        case 0x2d17e0u: goto label_2d17e0;
        default: break;
    }

    ctx->pc = 0x2d1680u;

    // 0x2d1680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1684: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d1684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d1688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d168c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d168cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1690: 0x8c23ced4  lw          $v1, -0x312C($at)
    ctx->pc = 0x2d1690u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED4u));
    // 0x2d1694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1698: 0x3c048ff8  lui         $a0, 0x8FF8
    ctx->pc = 0x2d1698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36856 << 16));
    // 0x2d169c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2d169cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2d16a0: 0x1064004f  beq         $v1, $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2D16A0u;
    {
        const bool branch_taken_0x2d16a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d16a0) {
            ctx->pc = 0x2D17E0u;
            goto label_2d17e0;
        }
    }
    ctx->pc = 0x2D16A8u;
    // 0x2d16a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2d16a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d16ac: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x2d16acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x2d16b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D16B0u;
    {
        const bool branch_taken_0x2d16b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16B0u;
        // 0x2d16b4: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16b0) {
            ctx->pc = 0x2D16E0u;
            goto label_2d16e0;
        }
    }
    ctx->pc = 0x2D16B8u;
    // 0x2d16b8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D16B8u;
    {
        const bool branch_taken_0x2d16b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16B8u;
        // 0x2d16bc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16b8) {
            ctx->pc = 0x2D16E0u;
            goto label_2d16e0;
        }
    }
    ctx->pc = 0x2D16C0u;
    // 0x2d16c0: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2d16c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d16c4: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2d16c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2d16c8: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2d16c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2d16cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d16d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d16d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d16d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d16d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d16d8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2D16D8u;
    {
        const bool branch_taken_0x2d16d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d16d8) {
            ctx->pc = 0x2D17E0u;
            goto label_2d17e0;
        }
    }
    ctx->pc = 0x2D16E0u;
label_2d16e0:
    // 0x2d16e0: 0xc0b45fc  jal         func_2D17F0
    ctx->pc = 0x2D16E0u;
    SET_GPR_U32(ctx, 31, 0x2D16E8u);
    ctx->pc = 0x2D16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16E0u;
    // 0x2d16e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D17F0u, 0x2D16E0u, 0x2D16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16E8u;
label_2d16e8:
    // 0x2d16e8: 0xc0b471c  jal         func_2D1C70
    ctx->pc = 0x2D16E8u;
    SET_GPR_U32(ctx, 31, 0x2D16F0u);
    ctx->pc = 0x2D16ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16E8u;
    // 0x2d16ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C70u, 0x2D16E8u, 0x2D16F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16F0u;
label_2d16f0:
    // 0x2d16f0: 0xc0b47a8  jal         func_2D1EA0
    ctx->pc = 0x2D16F0u;
    SET_GPR_U32(ctx, 31, 0x2D16F8u);
    ctx->pc = 0x2D16F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16F0u;
    // 0x2d16f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1EA0u, 0x2D16F0u, 0x2D16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16F8u;
label_2d16f8:
    // 0x2d16f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2d16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d16fc: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2d16fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2d1700: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D1700u;
    {
        const bool branch_taken_0x2d1700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1700u;
        // 0x2d1704: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1700) {
            ctx->pc = 0x2D1758u;
            goto label_2d1758;
        }
    }
    ctx->pc = 0x2D1708u;
    // 0x2d1708: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D1708u;
    {
        const bool branch_taken_0x2d1708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1708u;
        // 0x2d170c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1708) {
            ctx->pc = 0x2D1758u;
            goto label_2d1758;
        }
    }
    ctx->pc = 0x2D1710u;
    // 0x2d1710: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2d1710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x2d1714: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2d1714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2d1718: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D1718u;
    {
        const bool branch_taken_0x2d1718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1718) {
            ctx->pc = 0x2D1748u;
            goto label_2d1748;
        }
    }
    ctx->pc = 0x2D1720u;
    // 0x2d1720: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d1720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d1724: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2d1724u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2d1728: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2d1728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2d172c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D172Cu;
    {
        const bool branch_taken_0x2d172c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D172Cu;
        // 0x2d1730: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d172c) {
            ctx->pc = 0x2D1748u;
            goto label_2d1748;
        }
    }
    ctx->pc = 0x2D1734u;
    // 0x2d1734: 0x84226cea  lh          $v0, 0x6CEA($at)
    ctx->pc = 0x2d1734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 27882)));
    // 0x2d1738: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2d1738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2d173c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d173cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d1740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1740u;
    {
        const bool branch_taken_0x2d1740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1740u;
        // 0x2d1744: 0xa4226f0a  sh          $v0, 0x6F0A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 28426), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1740) {
            ctx->pc = 0x2D1758u;
            goto label_2d1758;
        }
    }
    ctx->pc = 0x2D1748u;
label_2d1748:
    // 0x2d1748: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d1748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d174c: 0x84226cea  lh          $v0, 0x6CEA($at)
    ctx->pc = 0x2d174cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8D6CEAu));
    // 0x2d1750: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d1750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d1754: 0xa4226f0a  sh          $v0, 0x6F0A($at)
    ctx->pc = 0x2d1754u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6F0Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D6F0Au, _value); } while (0);
label_2d1758:
    // 0x2d1758: 0xc0b48bc  jal         func_2D22F0
    ctx->pc = 0x2D1758u;
    SET_GPR_U32(ctx, 31, 0x2D1760u);
    ctx->pc = 0x2D175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1758u;
    // 0x2d175c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D22F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22F0u, 0x2D1758u, 0x2D1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1760u;
label_2d1760:
    // 0x2d1760: 0xc0b4a8c  jal         func_2D2A30
    ctx->pc = 0x2D1760u;
    SET_GPR_U32(ctx, 31, 0x2D1768u);
    ctx->pc = 0x2D1764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1760u;
    // 0x2d1764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A30u, 0x2D1760u, 0x2D1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1768u;
label_2d1768:
    // 0x2d1768: 0xc0b4a90  jal         func_2D2A40
    ctx->pc = 0x2D1768u;
    SET_GPR_U32(ctx, 31, 0x2D1770u);
    ctx->pc = 0x2D176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1768u;
    // 0x2d176c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A40u, 0x2D1768u, 0x2D1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1770u;
label_2d1770:
    // 0x2d1770: 0xc0b4a98  jal         func_2D2A60
    ctx->pc = 0x2D1770u;
    SET_GPR_U32(ctx, 31, 0x2D1778u);
    ctx->pc = 0x2D1774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1770u;
    // 0x2d1774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A60u, 0x2D1770u, 0x2D1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1778u;
label_2d1778:
    // 0x2d1778: 0xc0b4ae8  jal         func_2D2BA0
    ctx->pc = 0x2D1778u;
    SET_GPR_U32(ctx, 31, 0x2D1780u);
    ctx->pc = 0x2D177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1778u;
    // 0x2d177c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2BA0u, 0x2D1778u, 0x2D1780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1780u;
label_2d1780:
    // 0x2d1780: 0xc0b4b78  jal         func_2D2DE0
    ctx->pc = 0x2D1780u;
    SET_GPR_U32(ctx, 31, 0x2D1788u);
    ctx->pc = 0x2D1784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1780u;
    // 0x2d1784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2DE0u, 0x2D1780u, 0x2D1788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1788u;
label_2d1788:
    // 0x2d1788: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d1788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d178c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2d178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2d1790: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D1790u;
    {
        const bool branch_taken_0x2d1790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1790u;
        // 0x2d1794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1790) {
            ctx->pc = 0x2D17D8u;
            goto label_2d17d8;
        }
    }
    ctx->pc = 0x2D1798u;
    // 0x2d1798: 0xc0b4d1c  jal         func_2D3470
    ctx->pc = 0x2D1798u;
    SET_GPR_U32(ctx, 31, 0x2D17A0u);
    ctx->pc = 0x2D179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1798u;
    // 0x2d179c: 0x26050170  addiu       $a1, $s0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3470u, 0x2D1798u, 0x2D17A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17A0u;
label_2d17a0:
    // 0x2d17a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d17a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17a4: 0xc0b4d1c  jal         func_2D3470
    ctx->pc = 0x2D17A4u;
    SET_GPR_U32(ctx, 31, 0x2D17ACu);
    ctx->pc = 0x2D17A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17A4u;
    // 0x2d17a8: 0x260501b0  addiu       $a1, $s0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3470u, 0x2D17A4u, 0x2D17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17ACu;
label_2d17ac:
    // 0x2d17ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d17acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d17b0: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2d17b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2d17b4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2d17b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2d17b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D17B8u;
    {
        const bool branch_taken_0x2d17b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17B8u;
        // 0x2d17bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17b8) {
            ctx->pc = 0x2D17D8u;
            goto label_2d17d8;
        }
    }
    ctx->pc = 0x2D17C0u;
    // 0x2d17c0: 0xc0b4e1c  jal         func_2D3870
    ctx->pc = 0x2D17C0u;
    SET_GPR_U32(ctx, 31, 0x2D17C8u);
    ctx->pc = 0x2D3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3870u, 0x2D17C0u, 0x2D17C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17C8u;
label_2d17c8:
    // 0x2d17c8: 0xc0b4e3c  jal         func_2D38F0
    ctx->pc = 0x2D17C8u;
    SET_GPR_U32(ctx, 31, 0x2D17D0u);
    ctx->pc = 0x2D17CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17C8u;
    // 0x2d17cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D38F0u, 0x2D17C8u, 0x2D17D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17D0u;
label_2d17d0:
    // 0x2d17d0: 0xc0b4f30  jal         func_2D3CC0
    ctx->pc = 0x2D17D0u;
    SET_GPR_U32(ctx, 31, 0x2D17D8u);
    ctx->pc = 0x2D17D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17D0u;
    // 0x2d17d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3CC0u, 0x2D17D0u, 0x2D17D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17D8u;
label_2d17d8:
    // 0x2d17d8: 0xc0b4fec  jal         func_2D3FB0
    ctx->pc = 0x2D17D8u;
    SET_GPR_U32(ctx, 31, 0x2D17E0u);
    ctx->pc = 0x2D17DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17D8u;
    // 0x2d17dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3FB0u, 0x2D17D8u, 0x2D17E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17E0u;
label_2d17e0:
    // 0x2d17e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d17e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d17e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d17e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d17e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D17E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17E8u;
        // 0x2d17ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D17E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D17F0u;
}

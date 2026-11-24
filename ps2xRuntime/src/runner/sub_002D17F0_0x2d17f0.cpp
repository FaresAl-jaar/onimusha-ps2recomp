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

// Function: sub_002D17F0
// Address: 0x2d17f0 - 0x2d1c14
void sub_002D17F0_0x2d17f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D17F0_0x2d17f0");
#endif

    switch (ctx->pc) {
        case 0x2d182cu: goto label_2d182c;
        case 0x2d1838u: goto label_2d1838;
        case 0x2d18a0u: goto label_2d18a0;
        case 0x2d18b8u: goto label_2d18b8;
        case 0x2d18d8u: goto label_2d18d8;
        case 0x2d18f0u: goto label_2d18f0;
        case 0x2d19c8u: goto label_2d19c8;
        case 0x2d19d4u: goto label_2d19d4;
        case 0x2d19f0u: goto label_2d19f0;
        case 0x2d1a08u: goto label_2d1a08;
        case 0x2d1a14u: goto label_2d1a14;
        case 0x2d1a30u: goto label_2d1a30;
        case 0x2d1a48u: goto label_2d1a48;
        case 0x2d1a54u: goto label_2d1a54;
        case 0x2d1a6cu: goto label_2d1a6c;
        case 0x2d1b00u: goto label_2d1b00;
        case 0x2d1b0cu: goto label_2d1b0c;
        case 0x2d1b28u: goto label_2d1b28;
        case 0x2d1b40u: goto label_2d1b40;
        case 0x2d1b4cu: goto label_2d1b4c;
        case 0x2d1b64u: goto label_2d1b64;
        case 0x2d1ba0u: goto label_2d1ba0;
        case 0x2d1bd0u: goto label_2d1bd0;
        default: break;
    }

    ctx->pc = 0x2d17f0u;

    // 0x2d17f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d17f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d17f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d17f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d17f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d17fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d17fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d1800: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d1800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d1804: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d1804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d1808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d180c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1810: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2d1810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2d1814: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d1814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d1818: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d1818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d181c: 0x146000f4  bnez        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2D181Cu;
    {
        const bool branch_taken_0x2d181c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D181Cu;
        // 0x2d1820: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d181c) {
            ctx->pc = 0x2D1BF0u;
            goto label_2d1bf0;
        }
    }
    ctx->pc = 0x2D1824u;
    // 0x2d1824: 0xc0b4434  jal         func_2D10D0
    ctx->pc = 0x2D1824u;
    SET_GPR_U32(ctx, 31, 0x2D182Cu);
    ctx->pc = 0x2D10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D10D0u, 0x2D1824u, 0x2D182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D182Cu;
label_2d182c:
    // 0x2d182c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d182cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1830: 0xc0b446c  jal         func_2D11B0
    ctx->pc = 0x2D1830u;
    SET_GPR_U32(ctx, 31, 0x2D1838u);
    ctx->pc = 0x2D1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1830u;
    // 0x2d1834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D11B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D11B0u, 0x2D1830u, 0x2D1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1838u;
label_2d1838:
    // 0x2d1838: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x2d1838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d183c: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x2d183cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x2d1840: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1840u;
    {
        const bool branch_taken_0x2d1840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1840u;
        // 0x2d1844: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1840) {
            ctx->pc = 0x2D1850u;
            goto label_2d1850;
        }
    }
    ctx->pc = 0x2D1848u;
    // 0x2d1848: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1848u;
    {
        const bool branch_taken_0x2d1848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1848u;
        // 0x2d184c: 0x92820016  lbu         $v0, 0x16($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1848) {
            ctx->pc = 0x2D1860u;
            goto label_2d1860;
        }
    }
    ctx->pc = 0x2D1850u;
label_2d1850:
    // 0x2d1850: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1850u;
    {
        const bool branch_taken_0x2d1850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1850u;
        // 0x2d1854: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1850) {
            ctx->pc = 0x2D1860u;
            goto label_2d1860;
        }
    }
    ctx->pc = 0x2D1858u;
    // 0x2d1858: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1858u;
    {
        const bool branch_taken_0x2d1858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1858u;
        // 0x2d185c: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1858) {
            ctx->pc = 0x2D1860u;
            goto label_2d1860;
        }
    }
    ctx->pc = 0x2D1860u;
label_2d1860:
    // 0x2d1860: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2d1860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d1864: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x2d1864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x2d1868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1868u;
    {
        const bool branch_taken_0x2d1868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1868) {
            ctx->pc = 0x2D1878u;
            goto label_2d1878;
        }
    }
    ctx->pc = 0x2D1870u;
    // 0x2d1870: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1870u;
    {
        const bool branch_taken_0x2d1870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1870u;
        // 0x2d1874: 0x92820017  lbu         $v0, 0x17($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1870) {
            ctx->pc = 0x2D1888u;
            goto label_2d1888;
        }
    }
    ctx->pc = 0x2D1878u;
label_2d1878:
    // 0x2d1878: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1878u;
    {
        const bool branch_taken_0x2d1878 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1878u;
        // 0x2d187c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1878) {
            ctx->pc = 0x2D1888u;
            goto label_2d1888;
        }
    }
    ctx->pc = 0x2D1880u;
    // 0x2d1880: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D1880u;
    {
        const bool branch_taken_0x2d1880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1880u;
        // 0x2d1884: 0x92620002  lbu         $v0, 0x2($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1880) {
            ctx->pc = 0x2D1888u;
            goto label_2d1888;
        }
    }
    ctx->pc = 0x2D1888u;
label_2d1888:
    // 0x2d1888: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2d1888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d188c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d188cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1890: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1890u;
    {
        const bool branch_taken_0x2d1890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1890u;
        // 0x2d1894: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1890) {
            ctx->pc = 0x2D18A8u;
            goto label_2d18a8;
        }
    }
    ctx->pc = 0x2D1898u;
    // 0x2d1898: 0xc0b43c8  jal         func_2D0F20
    ctx->pc = 0x2D1898u;
    SET_GPR_U32(ctx, 31, 0x2D18A0u);
    ctx->pc = 0x2D189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1898u;
    // 0x2d189c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F20u, 0x2D1898u, 0x2D18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D18A0u;
label_2d18a0:
    // 0x2d18a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D18A0u;
    {
        const bool branch_taken_0x2d18a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18A0u;
        // 0x2d18a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18a0) {
            ctx->pc = 0x2D18C0u;
            goto label_2d18c0;
        }
    }
    ctx->pc = 0x2D18A8u;
label_2d18a8:
    // 0x2d18a8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D18A8u;
    {
        const bool branch_taken_0x2d18a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d18a8) {
            ctx->pc = 0x2D18C0u;
            goto label_2d18c0;
        }
    }
    ctx->pc = 0x2D18B0u;
    // 0x2d18b0: 0xc0b43b4  jal         func_2D0ED0
    ctx->pc = 0x2D18B0u;
    SET_GPR_U32(ctx, 31, 0x2D18B8u);
    ctx->pc = 0x2D18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D18B0u;
    // 0x2d18b4: 0x920429d0  lbu         $a0, 0x29D0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0ED0u, 0x2D18B0u, 0x2D18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D18B8u;
label_2d18b8:
    // 0x2d18b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d18b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18bc: 0x0  nop
    ctx->pc = 0x2d18bcu;
    // NOP
label_2d18c0:
    // 0x2d18c0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2d18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d18c4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2d18c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2d18c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D18C8u;
    {
        const bool branch_taken_0x2d18c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18C8u;
        // 0x2d18cc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18c8) {
            ctx->pc = 0x2D18E0u;
            goto label_2d18e0;
        }
    }
    ctx->pc = 0x2D18D0u;
    // 0x2d18d0: 0xc0b43c8  jal         func_2D0F20
    ctx->pc = 0x2D18D0u;
    SET_GPR_U32(ctx, 31, 0x2D18D8u);
    ctx->pc = 0x2D0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F20u, 0x2D18D0u, 0x2D18D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D18D8u;
label_2d18d8:
    // 0x2d18d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D18D8u;
    {
        const bool branch_taken_0x2d18d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18D8u;
        // 0x2d18dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18d8) {
            ctx->pc = 0x2D18F8u;
            goto label_2d18f8;
        }
    }
    ctx->pc = 0x2D18E0u;
label_2d18e0:
    // 0x2d18e0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D18E0u;
    {
        const bool branch_taken_0x2d18e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d18e0) {
            ctx->pc = 0x2D18F8u;
            goto label_2d18f8;
        }
    }
    ctx->pc = 0x2D18E8u;
    // 0x2d18e8: 0xc0b43b4  jal         func_2D0ED0
    ctx->pc = 0x2D18E8u;
    SET_GPR_U32(ctx, 31, 0x2D18F0u);
    ctx->pc = 0x2D18ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D18E8u;
    // 0x2d18ec: 0x926429d0  lbu         $a0, 0x29D0($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0ED0u, 0x2D18E8u, 0x2D18F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D18F0u;
label_2d18f0:
    // 0x2d18f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d18f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18f4: 0x0  nop
    ctx->pc = 0x2d18f4u;
    // NOP
label_2d18f8:
    // 0x2d18f8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2d18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2d18fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d1900: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1900u;
    {
        const bool branch_taken_0x2d1900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1900u;
        // 0x2d1904: 0x92830018  lbu         $v1, 0x18($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1900) {
            ctx->pc = 0x2D1910u;
            goto label_2d1910;
        }
    }
    ctx->pc = 0x2D1908u;
    // 0x2d1908: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1908u;
    {
        const bool branch_taken_0x2d1908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1908u;
        // 0x2d190c: 0x92820019  lbu         $v0, 0x19($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1908) {
            ctx->pc = 0x2D1914u;
            goto label_2d1914;
        }
    }
    ctx->pc = 0x2D1910u;
label_2d1910:
    // 0x2d1910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1914:
    // 0x2d1914: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d1914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d1918: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1918u;
    {
        const bool branch_taken_0x2d1918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d1918) {
            ctx->pc = 0x2D1930u;
            goto label_2d1930;
        }
    }
    ctx->pc = 0x2D1920u;
    // 0x2d1920: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2d1920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2d1924: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2d1924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2d1928: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2d1928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2d192c: 0x0  nop
    ctx->pc = 0x2d192cu;
    // NOP
label_2d1930:
    // 0x2d1930: 0x92820014  lbu         $v0, 0x14($s4)
    ctx->pc = 0x2d1930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2d1934: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2d1934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d1938: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1938u;
    {
        const bool branch_taken_0x2d1938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d1938) {
            ctx->pc = 0x2D1950u;
            goto label_2d1950;
        }
    }
    ctx->pc = 0x2D1940u;
    // 0x2d1940: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2d1940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2d1944: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d1944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d1948: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2d1948u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2d194c: 0x0  nop
    ctx->pc = 0x2d194cu;
    // NOP
label_2d1950:
    // 0x2d1950: 0x92820014  lbu         $v0, 0x14($s4)
    ctx->pc = 0x2d1950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2d1954: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1954u;
    {
        const bool branch_taken_0x2d1954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d1954) {
            ctx->pc = 0x2D1968u;
            goto label_2d1968;
        }
    }
    ctx->pc = 0x2D195Cu;
    // 0x2d195c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2d195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2d1960: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d1960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d1964: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2d1964u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_2d1968:
    // 0x2d1968: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x2D1968u;
    {
        const bool branch_taken_0x2d1968 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1968u;
        // 0x2d196c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1968) {
            ctx->pc = 0x2D1AA8u;
            goto label_2d1aa8;
        }
    }
    ctx->pc = 0x2D1970u;
    // 0x2d1970: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1970u;
    {
        const bool branch_taken_0x2d1970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1970) {
            ctx->pc = 0x2D19A8u;
            goto label_2d19a8;
        }
    }
    ctx->pc = 0x2D1978u;
    // 0x2d1978: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x2d1978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2d197c: 0x240200f7  addiu       $v0, $zero, 0xF7
    ctx->pc = 0x2d197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x2d1980: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1980u;
    {
        const bool branch_taken_0x2d1980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1980u;
        // 0x2d1984: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1980) {
            ctx->pc = 0x2D1998u;
            goto label_2d1998;
        }
    }
    ctx->pc = 0x2D1988u;
    // 0x2d1988: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x2d1988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x2d198c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D198Cu;
    {
        const bool branch_taken_0x2d198c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d198c) {
            ctx->pc = 0x2D1998u;
            goto label_2d1998;
        }
    }
    ctx->pc = 0x2D1994u;
    // 0x2d1994: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d1994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1998:
    // 0x2d1998: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1998u;
    {
        const bool branch_taken_0x2d1998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1998) {
            ctx->pc = 0x2D19A8u;
            goto label_2d19a8;
        }
    }
    ctx->pc = 0x2D19A0u;
    // 0x2d19a0: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2d19a0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d19a4: 0x0  nop
    ctx->pc = 0x2d19a4u;
    // NOP
label_2d19a8:
    // 0x2d19a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D19A8u;
    {
        const bool branch_taken_0x2d19a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d19a8) {
            ctx->pc = 0x2D19B8u;
            goto label_2d19b8;
        }
    }
    ctx->pc = 0x2D19B0u;
    // 0x2d19b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D19B0u;
    {
        const bool branch_taken_0x2d19b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D19B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D19B0u;
        // 0x2d19b4: 0x96102aca  lhu         $s0, 0x2ACA($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10954)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19b0) {
            ctx->pc = 0x2D19BCu;
            goto label_2d19bc;
        }
    }
    ctx->pc = 0x2D19B8u;
label_2d19b8:
    // 0x2d19b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d19b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d19bc:
    // 0x2d19bc: 0x96550000  lhu         $s5, 0x0($s2)
    ctx->pc = 0x2d19bcu;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d19c0: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x2D19C0u;
    SET_GPR_U32(ctx, 31, 0x2D19C8u);
    ctx->pc = 0x2D19C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19C0u;
    // 0x2d19c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x2D19C0u, 0x2D19C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19C8u;
label_2d19c8:
    // 0x2d19c8: 0x32a4ffff  andi        $a0, $s5, 0xFFFF
    ctx->pc = 0x2d19c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x2d19cc: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D19CCu;
    SET_GPR_U32(ctx, 31, 0x2D19D4u);
    ctx->pc = 0x2D19D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19CCu;
    // 0x2d19d0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D19CCu, 0x2D19D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19D4u;
label_2d19d4:
    // 0x2d19d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d19d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d19d8: 0x8e82007c  lw          $v0, 0x7C($s4)
    ctx->pc = 0x2d19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x2d19dc: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D19DCu;
    {
        const bool branch_taken_0x2d19dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d19dc) {
            ctx->pc = 0x2D1A98u;
            goto label_2d1a98;
        }
    }
    ctx->pc = 0x2D19E4u;
    // 0x2d19e4: 0x8e950084  lw          $s5, 0x84($s4)
    ctx->pc = 0x2d19e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x2d19e8: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x2D19E8u;
    SET_GPR_U32(ctx, 31, 0x2D19F0u);
    ctx->pc = 0x2D19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19E8u;
    // 0x2d19ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x2D19E8u, 0x2D19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19F0u;
label_2d19f0:
    // 0x2d19f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d19f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d19f4: 0x16a20028  bne         $s5, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D19F4u;
    {
        const bool branch_taken_0x2d19f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d19f4) {
            ctx->pc = 0x2D1A98u;
            goto label_2d1a98;
        }
    }
    ctx->pc = 0x2D19FCu;
    // 0x2d19fc: 0x96550006  lhu         $s5, 0x6($s2)
    ctx->pc = 0x2d19fcu;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2d1a00: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x2D1A00u;
    SET_GPR_U32(ctx, 31, 0x2D1A08u);
    ctx->pc = 0x2D1A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A00u;
    // 0x2d1a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x2D1A00u, 0x2D1A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A08u;
label_2d1a08:
    // 0x2d1a08: 0x32a4ffff  andi        $a0, $s5, 0xFFFF
    ctx->pc = 0x2d1a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x2d1a0c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D1A14u);
    ctx->pc = 0x2D1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A0Cu;
    // 0x2d1a10: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D1A0Cu, 0x2D1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A14u;
label_2d1a14:
    // 0x2d1a14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d1a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1a18: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x2d1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x2d1a1c: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1A1Cu;
    {
        const bool branch_taken_0x2d1a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1a1c) {
            ctx->pc = 0x2D1A98u;
            goto label_2d1a98;
        }
    }
    ctx->pc = 0x2D1A24u;
    // 0x2d1a24: 0x8e950094  lw          $s5, 0x94($s4)
    ctx->pc = 0x2d1a24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x2d1a28: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x2D1A28u;
    SET_GPR_U32(ctx, 31, 0x2D1A30u);
    ctx->pc = 0x2D1A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A28u;
    // 0x2d1a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x2D1A28u, 0x2D1A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A30u;
label_2d1a30:
    // 0x2d1a30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d1a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1a34: 0x16a20018  bne         $s5, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1A34u;
    {
        const bool branch_taken_0x2d1a34 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1a34) {
            ctx->pc = 0x2D1A98u;
            goto label_2d1a98;
        }
    }
    ctx->pc = 0x2D1A3Cu;
    // 0x2d1a3c: 0x9655000a  lhu         $s5, 0xA($s2)
    ctx->pc = 0x2d1a3cu;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2d1a40: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x2D1A40u;
    SET_GPR_U32(ctx, 31, 0x2D1A48u);
    ctx->pc = 0x2D1A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A40u;
    // 0x2d1a44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x2D1A40u, 0x2D1A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A48u;
label_2d1a48:
    // 0x2d1a48: 0x32a4ffff  andi        $a0, $s5, 0xFFFF
    ctx->pc = 0x2d1a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x2d1a4c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D1A4Cu;
    SET_GPR_U32(ctx, 31, 0x2D1A54u);
    ctx->pc = 0x2D1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A4Cu;
    // 0x2d1a50: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D1A4Cu, 0x2D1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A54u;
label_2d1a54:
    // 0x2d1a54: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d1a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1a58: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x2d1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x2d1a5c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1A5Cu;
    {
        const bool branch_taken_0x2d1a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D1A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A5Cu;
        // 0x2d1a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a5c) {
            ctx->pc = 0x2D1A98u;
            goto label_2d1a98;
        }
    }
    ctx->pc = 0x2D1A64u;
    // 0x2d1a64: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x2D1A64u;
    SET_GPR_U32(ctx, 31, 0x2D1A6Cu);
    ctx->pc = 0x2D1A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A64u;
    // 0x2d1a68: 0x8e9200a0  lw          $s2, 0xA0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x2D1A64u, 0x2D1A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A6Cu;
label_2d1a6c:
    // 0x2d1a6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d1a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1a70: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1A70u;
    {
        const bool branch_taken_0x2d1a70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1a70) {
            ctx->pc = 0x2D1A98u;
            goto label_2d1a98;
        }
    }
    ctx->pc = 0x2D1A78u;
    // 0x2d1a78: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x2d1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x2d1a7c: 0x8e8300a4  lw          $v1, 0xA4($s4)
    ctx->pc = 0x2d1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x2d1a80: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2d1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d1a84: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1A84u;
    {
        const bool branch_taken_0x2d1a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1a84) {
            ctx->pc = 0x2D1A98u;
            goto label_2d1a98;
        }
    }
    ctx->pc = 0x2D1A8Cu;
    // 0x2d1a8c: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x2d1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x2d1a90: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1A90u;
    {
        const bool branch_taken_0x2d1a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d1a90) {
            ctx->pc = 0x2D1AA8u;
            goto label_2d1aa8;
        }
    }
    ctx->pc = 0x2D1A98u;
label_2d1a98:
    // 0x2d1a98: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2d1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2d1a9c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2d1a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2d1aa0: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2d1aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2d1aa4: 0x0  nop
    ctx->pc = 0x2d1aa4u;
    // NOP
label_2d1aa8:
    // 0x2d1aa8: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2D1AA8u;
    {
        const bool branch_taken_0x2d1aa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AA8u;
        // 0x2d1aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1aa8) {
            ctx->pc = 0x2D1B90u;
            goto label_2d1b90;
        }
    }
    ctx->pc = 0x2D1AB0u;
    // 0x2d1ab0: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1AB0u;
    {
        const bool branch_taken_0x2d1ab0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ab0) {
            ctx->pc = 0x2D1AE8u;
            goto label_2d1ae8;
        }
    }
    ctx->pc = 0x2D1AB8u;
    // 0x2d1ab8: 0x9263065c  lbu         $v1, 0x65C($s3)
    ctx->pc = 0x2d1ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1628)));
    // 0x2d1abc: 0x240200f7  addiu       $v0, $zero, 0xF7
    ctx->pc = 0x2d1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x2d1ac0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1AC0u;
    {
        const bool branch_taken_0x2d1ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AC0u;
        // 0x2d1ac4: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ac0) {
            ctx->pc = 0x2D1AD8u;
            goto label_2d1ad8;
        }
    }
    ctx->pc = 0x2D1AC8u;
    // 0x2d1ac8: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x2d1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x2d1acc: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1ACCu;
    {
        const bool branch_taken_0x2d1acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d1acc) {
            ctx->pc = 0x2D1AD8u;
            goto label_2d1ad8;
        }
    }
    ctx->pc = 0x2D1AD4u;
    // 0x2d1ad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d1ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1ad8:
    // 0x2d1ad8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1AD8u;
    {
        const bool branch_taken_0x2d1ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ad8) {
            ctx->pc = 0x2D1AE8u;
            goto label_2d1ae8;
        }
    }
    ctx->pc = 0x2D1AE0u;
    // 0x2d1ae0: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2d1ae0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2d1ae4: 0x0  nop
    ctx->pc = 0x2d1ae4u;
    // NOP
label_2d1ae8:
    // 0x2d1ae8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1AE8u;
    {
        const bool branch_taken_0x2d1ae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AE8u;
        // 0x2d1aec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ae8) {
            ctx->pc = 0x2D1AF4u;
            goto label_2d1af4;
        }
    }
    ctx->pc = 0x2D1AF0u;
    // 0x2d1af0: 0x96702aca  lhu         $s0, 0x2ACA($s3)
    ctx->pc = 0x2d1af0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10954)));
label_2d1af4:
    // 0x2d1af4: 0x96320000  lhu         $s2, 0x0($s1)
    ctx->pc = 0x2d1af4u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d1af8: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x2D1AF8u;
    SET_GPR_U32(ctx, 31, 0x2D1B00u);
    ctx->pc = 0x2D1AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1AF8u;
    // 0x2d1afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x2D1AF8u, 0x2D1B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B00u;
label_2d1b00:
    // 0x2d1b00: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x2d1b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2d1b04: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D1B04u;
    SET_GPR_U32(ctx, 31, 0x2D1B0Cu);
    ctx->pc = 0x2D1B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B04u;
    // 0x2d1b08: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D1B04u, 0x2D1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B0Cu;
label_2d1b0c:
    // 0x2d1b0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d1b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1b10: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x2d1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x2d1b14: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D1B14u;
    {
        const bool branch_taken_0x2d1b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1b14) {
            ctx->pc = 0x2D1B80u;
            goto label_2d1b80;
        }
    }
    ctx->pc = 0x2D1B1Cu;
    // 0x2d1b1c: 0x8e920088  lw          $s2, 0x88($s4)
    ctx->pc = 0x2d1b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2d1b20: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x2D1B20u;
    SET_GPR_U32(ctx, 31, 0x2D1B28u);
    ctx->pc = 0x2D1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B20u;
    // 0x2d1b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x2D1B20u, 0x2D1B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B28u;
label_2d1b28:
    // 0x2d1b28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d1b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1b2c: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D1B2Cu;
    {
        const bool branch_taken_0x2d1b2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1b2c) {
            ctx->pc = 0x2D1B80u;
            goto label_2d1b80;
        }
    }
    ctx->pc = 0x2D1B34u;
    // 0x2d1b34: 0x96320006  lhu         $s2, 0x6($s1)
    ctx->pc = 0x2d1b34u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2d1b38: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x2D1B38u;
    SET_GPR_U32(ctx, 31, 0x2D1B40u);
    ctx->pc = 0x2D1B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B38u;
    // 0x2d1b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x2D1B38u, 0x2D1B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B40u;
label_2d1b40:
    // 0x2d1b40: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x2d1b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2d1b44: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2D1B44u;
    SET_GPR_U32(ctx, 31, 0x2D1B4Cu);
    ctx->pc = 0x2D1B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B44u;
    // 0x2d1b48: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2D1B44u, 0x2D1B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B4Cu;
label_2d1b4c:
    // 0x2d1b4c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d1b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1b50: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x2d1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x2d1b54: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D1B54u;
    {
        const bool branch_taken_0x2d1b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B54u;
        // 0x2d1b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b54) {
            ctx->pc = 0x2D1B80u;
            goto label_2d1b80;
        }
    }
    ctx->pc = 0x2D1B5Cu;
    // 0x2d1b5c: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x2D1B5Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B64u);
    ctx->pc = 0x2D1B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B5Cu;
    // 0x2d1b60: 0x8e910098  lw          $s1, 0x98($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x2D1B5Cu, 0x2D1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B64u;
label_2d1b64:
    // 0x2d1b64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d1b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1b68: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1B68u;
    {
        const bool branch_taken_0x2d1b68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1b68) {
            ctx->pc = 0x2D1B80u;
            goto label_2d1b80;
        }
    }
    ctx->pc = 0x2D1B70u;
    // 0x2d1b70: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2d1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x2d1b74: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1B74u;
    {
        const bool branch_taken_0x2d1b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d1b74) {
            ctx->pc = 0x2D1B90u;
            goto label_2d1b90;
        }
    }
    ctx->pc = 0x2D1B7Cu;
    // 0x2d1b7c: 0x0  nop
    ctx->pc = 0x2d1b7cu;
    // NOP
label_2d1b80:
    // 0x2d1b80: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2d1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2d1b84: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2d1b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2d1b88: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2d1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x2d1b8c: 0x0  nop
    ctx->pc = 0x2d1b8cu;
    // NOP
label_2d1b90:
    // 0x2d1b90: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x2d1b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2d1b94: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d1b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d1b98: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D1B98u;
    SET_GPR_U32(ctx, 31, 0x2D1BA0u);
    ctx->pc = 0x2D1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B98u;
    // 0x2d1b9c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D1B98u, 0x2D1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BA0u;
label_2d1ba0:
    // 0x2d1ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ba4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D1BA4u;
    {
        const bool branch_taken_0x2d1ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ba4) {
            ctx->pc = 0x2D1BF0u;
            goto label_2d1bf0;
        }
    }
    ctx->pc = 0x2D1BACu;
    // 0x2d1bac: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x2d1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2d1bb0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D1BB0u;
    {
        const bool branch_taken_0x2d1bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1bb0) {
            ctx->pc = 0x2D1BF0u;
            goto label_2d1bf0;
        }
    }
    ctx->pc = 0x2D1BB8u;
    // 0x2d1bb8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2d1bb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1bbc: 0x8e8500cc  lw          $a1, 0xCC($s4)
    ctx->pc = 0x2d1bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x2d1bc0: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1BC0u;
    {
        const bool branch_taken_0x2d1bc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d1bc0) {
            ctx->pc = 0x2D1BE0u;
            goto label_2d1be0;
        }
    }
    ctx->pc = 0x2D1BC8u;
    // 0x2d1bc8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2D1BC8u;
    SET_GPR_U32(ctx, 31, 0x2D1BD0u);
    ctx->pc = 0x2D1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1BC8u;
    // 0x2d1bcc: 0x8e9000d0  lw          $s0, 0xD0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2D1BC8u, 0x2D1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BD0u;
label_2d1bd0:
    // 0x2d1bd0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d1bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d1bd4: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1BD4u;
    {
        const bool branch_taken_0x2d1bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d1bd4) {
            ctx->pc = 0x2D1BF0u;
            goto label_2d1bf0;
        }
    }
    ctx->pc = 0x2D1BDCu;
    // 0x2d1bdc: 0x0  nop
    ctx->pc = 0x2d1bdcu;
    // NOP
label_2d1be0:
    // 0x2d1be0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2d1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2d1be4: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2d1be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2d1be8: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x2d1be8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
    // 0x2d1bec: 0x0  nop
    ctx->pc = 0x2d1becu;
    // NOP
label_2d1bf0:
    // 0x2d1bf0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d1bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d1bf4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d1bf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1bf8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d1bf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1bfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1bfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1c00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d1c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C0Cu;
        // 0x2d1c10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1C14u;
}

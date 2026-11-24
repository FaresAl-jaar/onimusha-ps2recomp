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

// Function: sub_002B1780
// Address: 0x2b1780 - 0x2b18bc
void sub_002B1780_0x2b1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1780_0x2b1780");
#endif

    switch (ctx->pc) {
        case 0x2b17a8u: goto label_2b17a8;
        case 0x2b17bcu: goto label_2b17bc;
        case 0x2b1884u: goto label_2b1884;
        case 0x2b1898u: goto label_2b1898;
        default: break;
    }

    ctx->pc = 0x2b1780u;

    // 0x2b1780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b1784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b1784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b1788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b1788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b178c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b1790: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b1790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b1794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b1798: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b1798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b179c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b17a0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2b17a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b17a4: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x2b17a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_2b17a8:
    // 0x2b17a8: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2b17a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b17ac: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2B17ACu;
    {
        const bool branch_taken_0x2b17ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B17B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17ACu;
        // 0x2b17b0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17ac) {
            ctx->pc = 0x2B17E8u;
            goto label_2b17e8;
        }
    }
    ctx->pc = 0x2B17B4u;
    // 0x2b17b4: 0xc04d748  jal         func_135D20
    ctx->pc = 0x2B17B4u;
    SET_GPR_U32(ctx, 31, 0x2B17BCu);
    ctx->pc = 0x2B17B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17B4u;
    // 0x2b17b8: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x2B17B4u, 0x2B17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17BCu;
label_2b17bc:
    // 0x2b17bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B17BCu;
    {
        const bool branch_taken_0x2b17bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b17bc) {
            ctx->pc = 0x2B17E8u;
            goto label_2b17e8;
        }
    }
    ctx->pc = 0x2B17C4u;
    // 0x2b17c4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b17c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b17c8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2b17c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2b17cc: 0x2463f900  addiu       $v1, $v1, -0x700
    ctx->pc = 0x2b17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965504));
    // 0x2b17d0: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x2b17d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b17d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b17d8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2b17d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2b17dc: 0x2463f870  addiu       $v1, $v1, -0x790
    ctx->pc = 0x2b17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965360));
    // 0x2b17e0: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x2b17e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b17e4: 0x0  nop
    ctx->pc = 0x2b17e4u;
    // NOP
label_2b17e8:
    // 0x2b17e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b17e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b17ec: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x2b17ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b17f0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2B17F0u;
    {
        const bool branch_taken_0x2b17f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17F0u;
        // 0x2b17f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17f0) {
            ctx->pc = 0x2B17A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b17a8;
        }
    }
    ctx->pc = 0x2B17F8u;
    // 0x2b17f8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2b17f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2b17fc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2b17fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2b1800: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x2b1800u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b1804: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1804u;
    {
        const bool branch_taken_0x2b1804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1804u;
        // 0x2b1808: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1804) {
            ctx->pc = 0x2B1810u;
            goto label_2b1810;
        }
    }
    ctx->pc = 0x2B180Cu;
    // 0x2b180c: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x2b180cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_2b1810:
    // 0x2b1810: 0x92650038  lbu         $a1, 0x38($s3)
    ctx->pc = 0x2b1810u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2b1814: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1814u;
    {
        const bool branch_taken_0x2b1814 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1814) {
            ctx->pc = 0x2B1830u;
            goto label_2b1830;
        }
    }
    ctx->pc = 0x2B181Cu;
    // 0x2b181c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2b181cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2b1820: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2b1820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2b1824: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x2b1824u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b1828: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1828u;
    {
        const bool branch_taken_0x2b1828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1828) {
            ctx->pc = 0x2B1860u;
            goto label_2b1860;
        }
    }
    ctx->pc = 0x2B1830u;
label_2b1830:
    // 0x2b1830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b1830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1834: 0x14a3001a  bne         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B1834u;
    {
        const bool branch_taken_0x2b1834 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b1834) {
            ctx->pc = 0x2B18A0u;
            goto label_2b18a0;
        }
    }
    ctx->pc = 0x2B183Cu;
    // 0x2b183c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2b183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2b1840: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2b1840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2b1844: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2b1844u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b1848: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B1848u;
    {
        const bool branch_taken_0x2b1848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1848) {
            ctx->pc = 0x2B18A0u;
            goto label_2b18a0;
        }
    }
    ctx->pc = 0x2B1850u;
    // 0x2b1850: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2b1850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2b1854: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x2b1854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2b1858: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B1858u;
    {
        const bool branch_taken_0x2b1858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1858) {
            ctx->pc = 0x2B18A0u;
            goto label_2b18a0;
        }
    }
    ctx->pc = 0x2B1860u;
label_2b1860:
    // 0x2b1860: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1860u;
    {
        const bool branch_taken_0x2b1860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1860u;
        // 0x2b1864: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1860) {
            ctx->pc = 0x2B1870u;
            goto label_2b1870;
        }
    }
    ctx->pc = 0x2B1868u;
    // 0x2b1868: 0xac205c60  sw          $zero, 0x5C60($at)
    ctx->pc = 0x2b1868u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23648), GPR_U32(ctx, 0));
    // 0x2b186c: 0x0  nop
    ctx->pc = 0x2b186cu;
    // NOP
label_2b1870:
    // 0x2b1870: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2b1870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b1874: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1874u;
    {
        const bool branch_taken_0x2b1874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1874u;
        // 0x2b1878: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1874) {
            ctx->pc = 0x2B1888u;
            goto label_2b1888;
        }
    }
    ctx->pc = 0x2B187Cu;
    // 0x2b187c: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x2B187Cu;
    SET_GPR_U32(ctx, 31, 0x2B1884u);
    ctx->pc = 0x2B1880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B187Cu;
    // 0x2b1880: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x2B187Cu, 0x2B1884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1884u;
label_2b1884:
    // 0x2b1884: 0x0  nop
    ctx->pc = 0x2b1884u;
    // NOP
label_2b1888:
    // 0x2b1888: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b1888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b188c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b188cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1890: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B1890u;
    SET_GPR_U32(ctx, 31, 0x2B1898u);
    ctx->pc = 0x2B1894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1890u;
    // 0x2b1894: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B1890u, 0x2B1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1898u;
label_2b1898:
    // 0x2b1898: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2B1898u;
    {
        const bool branch_taken_0x2b1898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1898) {
            ctx->pc = 0x2B18A0u;
            goto label_2b18a0;
        }
    }
    ctx->pc = 0x2B18A0u;
label_2b18a0:
    // 0x2b18a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b18a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b18a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b18a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b18a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b18a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b18ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b18acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b18b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b18b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b18b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B18B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18B4u;
        // 0x2b18b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B18B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B18BCu;
}

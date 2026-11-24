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

// Function: sub_002C1810
// Address: 0x2c1810 - 0x2c1954
void sub_002C1810_0x2c1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1810_0x2c1810");
#endif

    switch (ctx->pc) {
        case 0x2c18a0u: goto label_2c18a0;
        case 0x2c1920u: goto label_2c1920;
        default: break;
    }

    ctx->pc = 0x2c1810u;

    // 0x2c1810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1814: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c1814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c1818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c181c: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x2c181cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c1820: 0x94c70002  lhu         $a3, 0x2($a2)
    ctx->pc = 0x2c1820u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c1824: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c1824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2c1828: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x2c1828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2c182c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c1830: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C1830u;
    {
        const bool branch_taken_0x2c1830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1830u;
        // 0x2c1834: 0x3107c  dsll32      $v0, $v1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1830) {
            ctx->pc = 0x2C18C0u;
            goto label_2c18c0;
        }
    }
    ctx->pc = 0x2C1838u;
    // 0x2c1838: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x2c1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2c183c: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x2c183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x2c1840: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2c1840u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c1844: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C1844u;
    {
        const bool branch_taken_0x2c1844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1844) {
            ctx->pc = 0x2C1940u;
            goto label_2c1940;
        }
    }
    ctx->pc = 0x2C184Cu;
    // 0x2c184c: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c184cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c1850: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C1850u;
    {
        const bool branch_taken_0x2c1850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1850u;
        // 0x2c1854: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1850) {
            ctx->pc = 0x2C18A8u;
            goto label_2c18a8;
        }
    }
    ctx->pc = 0x2C1858u;
    // 0x2c1858: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2C1858u;
    {
        const bool branch_taken_0x2c1858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1858u;
        // 0x2c185c: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1858) {
            ctx->pc = 0x2C1898u;
            goto label_2c1898;
        }
    }
    ctx->pc = 0x2C1860u;
    // 0x2c1860: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c1860u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c1864: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c1864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c1868: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c1868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c186c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c186cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c1870: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c1870u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1874: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c1874u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c1878: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c1878u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c187c: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c187cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1880: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c1880u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1884: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c1884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c188c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C188Cu;
    {
        const bool branch_taken_0x2c188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C188Cu;
        // 0x2c1890: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c188c) {
            ctx->pc = 0x2C18B8u;
            goto label_2c18b8;
        }
    }
    ctx->pc = 0x2C1894u;
    // 0x2c1894: 0x0  nop
    ctx->pc = 0x2c1894u;
    // NOP
label_2c1898:
    // 0x2c1898: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1898u;
    SET_GPR_U32(ctx, 31, 0x2C18A0u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1898u, 0x2C18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18A0u;
label_2c18a0:
    // 0x2c18a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C18A0u;
    {
        const bool branch_taken_0x2c18a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c18a0) {
            ctx->pc = 0x2C18B0u;
            goto label_2c18b0;
        }
    }
    ctx->pc = 0x2C18A8u;
label_2c18a8:
    // 0x2c18a8: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c18a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c18ac: 0x0  nop
    ctx->pc = 0x2c18acu;
    // NOP
label_2c18b0:
    // 0x2c18b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c18b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c18b4: 0x0  nop
    ctx->pc = 0x2c18b4u;
    // NOP
label_2c18b8:
    // 0x2c18b8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C18B8u;
    {
        const bool branch_taken_0x2c18b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c18b8) {
            ctx->pc = 0x2C1948u;
            goto label_2c1948;
        }
    }
    ctx->pc = 0x2C18C0u;
label_2c18c0:
    // 0x2c18c0: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2c18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2c18c4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2c18c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c18c8: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C18C8u;
    {
        const bool branch_taken_0x2c18c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c18c8) {
            ctx->pc = 0x2C1940u;
            goto label_2c1940;
        }
    }
    ctx->pc = 0x2C18D0u;
    // 0x2c18d0: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c18d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c18d4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C18D4u;
    {
        const bool branch_taken_0x2c18d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18D4u;
        // 0x2c18d8: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18d4) {
            ctx->pc = 0x2C1928u;
            goto label_2c1928;
        }
    }
    ctx->pc = 0x2C18DCu;
    // 0x2c18dc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C18DCu;
    {
        const bool branch_taken_0x2c18dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C18DCu;
        // 0x2c18e0: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18dc) {
            ctx->pc = 0x2C1918u;
            goto label_2c1918;
        }
    }
    ctx->pc = 0x2C18E4u;
    // 0x2c18e4: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c18e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c18e8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c18e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c18ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c18f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c18f4: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c18f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c18f8: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c18f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c18fc: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c18fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1900: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c1900u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1904: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c1904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1908: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c1908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c190c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1910: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1910u;
    {
        const bool branch_taken_0x2c1910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1910u;
        // 0x2c1914: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1910) {
            ctx->pc = 0x2C1938u;
            goto label_2c1938;
        }
    }
    ctx->pc = 0x2C1918u;
label_2c1918:
    // 0x2c1918: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1918u;
    SET_GPR_U32(ctx, 31, 0x2C1920u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1918u, 0x2C1920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1920u;
label_2c1920:
    // 0x2c1920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1920u;
    {
        const bool branch_taken_0x2c1920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1920) {
            ctx->pc = 0x2C1930u;
            goto label_2c1930;
        }
    }
    ctx->pc = 0x2C1928u;
label_2c1928:
    // 0x2c1928: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c1928u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c192c: 0x0  nop
    ctx->pc = 0x2c192cu;
    // NOP
label_2c1930:
    // 0x2c1930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1934: 0x0  nop
    ctx->pc = 0x2c1934u;
    // NOP
label_2c1938:
    // 0x2c1938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1938u;
    {
        const bool branch_taken_0x2c1938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1938) {
            ctx->pc = 0x2C1948u;
            goto label_2c1948;
        }
    }
    ctx->pc = 0x2C1940u;
label_2c1940:
    // 0x2c1940: 0x24c20006  addiu       $v0, $a2, 0x6
    ctx->pc = 0x2c1940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x2c1944: 0x0  nop
    ctx->pc = 0x2c1944u;
    // NOP
label_2c1948:
    // 0x2c1948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c194c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C194Cu;
        // 0x2c1950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1954u;
}

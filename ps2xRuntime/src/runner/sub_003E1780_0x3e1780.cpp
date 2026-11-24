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

// Function: sub_003E1780
// Address: 0x3e1780 - 0x3e1c88
void sub_003E1780_0x3e1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1780_0x3e1780");
#endif

    switch (ctx->pc) {
        case 0x3e17ccu: goto label_3e17cc;
        case 0x3e1808u: goto label_3e1808;
        case 0x3e1848u: goto label_3e1848;
        case 0x3e1860u: goto label_3e1860;
        case 0x3e19acu: goto label_3e19ac;
        case 0x3e19c8u: goto label_3e19c8;
        case 0x3e19e0u: goto label_3e19e0;
        case 0x3e1a10u: goto label_3e1a10;
        case 0x3e1a2cu: goto label_3e1a2c;
        case 0x3e1a44u: goto label_3e1a44;
        case 0x3e1bd4u: goto label_3e1bd4;
        case 0x3e1bf0u: goto label_3e1bf0;
        case 0x3e1c08u: goto label_3e1c08;
        case 0x3e1c30u: goto label_3e1c30;
        case 0x3e1c4cu: goto label_3e1c4c;
        case 0x3e1c64u: goto label_3e1c64;
        case 0x3e1c78u: goto label_3e1c78;
        default: break;
    }

    ctx->pc = 0x3e1780u;

    // 0x3e1780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e1784: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e1784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e1788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e178c: 0x2442e6e0  addiu       $v0, $v0, -0x1920
    ctx->pc = 0x3e178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
    // 0x3e1790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e1790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e1794: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3e1794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e1798: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e1798u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E6E0u));
    // 0x3e179c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3e179cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e17a0: 0x8f848cf8  lw          $a0, -0x7308($gp)
    ctx->pc = 0x3e17a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e17a4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e17a8: 0x2442e6d0  addiu       $v0, $v0, -0x1930
    ctx->pc = 0x3e17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
    // 0x3e17ac: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3e17acu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3e17b0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3e17b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E6D0u));
    // 0x3e17b4: 0x249001d4  addiu       $s0, $a0, 0x1D4
    ctx->pc = 0x3e17b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 468));
    // 0x3e17b8: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x3e17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3e17bc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e17bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3e17c0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3e17c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e17c4: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x3E17C4u;
    SET_GPR_U32(ctx, 31, 0x3E17CCu);
    ctx->pc = 0x3E17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E17C4u;
    // 0x3e17c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x3E17C4u, 0x3E17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E17CCu;
label_3e17cc:
    // 0x3e17cc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e17ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e17d0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3e17d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e17d4: 0x2442e700  addiu       $v0, $v0, -0x1900
    ctx->pc = 0x3e17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960896));
    // 0x3e17d8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3e17d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e17dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3e17dcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E700u));
    // 0x3e17e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e17e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e17e4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e17e8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3e17e8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3e17ec: 0x2442e6f0  addiu       $v0, $v0, -0x1910
    ctx->pc = 0x3e17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960880));
    // 0x3e17f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3e17f0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E6F0u));
    // 0x3e17f4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e17f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3e17f8: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e17fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e17fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e1800: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x3E1800u;
    SET_GPR_U32(ctx, 31, 0x3E1808u);
    ctx->pc = 0x3E1804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1800u;
    // 0x3e1804: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x3E1800u, 0x3E1808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1808u;
label_3e1808:
    // 0x3e1808: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3e1808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e180c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x3e180cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e1810: 0x10200119  beqz        $at, . + 4 + (0x119 << 2)
    ctx->pc = 0x3E1810u;
    {
        const bool branch_taken_0x3e1810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1810u;
        // 0x3e1814: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1810) {
            ctx->pc = 0x3E1C78u;
            goto label_3e1c78;
        }
    }
    ctx->pc = 0x3E1818u;
    // 0x3e1818: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e1818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e181c: 0x24844900  addiu       $a0, $a0, 0x4900
    ctx->pc = 0x3e181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18688));
    // 0x3e1820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e1820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e1824: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e1824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e1828: 0x600008  jr          $v1
    ctx->pc = 0x3E1828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E1830u: goto label_3e1830;
            case 0x3E1868u: goto label_3e1868;
            case 0x3E1878u: goto label_3e1878;
            case 0x3E19F8u: goto label_3e19f8;
            case 0x3E1A58u: goto label_3e1a58;
            case 0x3E1B00u: goto label_3e1b00;
            case 0x3E1C20u: goto label_3e1c20;
            case 0x3E1C70u: goto label_3e1c70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1828u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E1830u;
label_3e1830:
    // 0x3e1830: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1834: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e1834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e183c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e1840: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E1840u;
    SET_GPR_U32(ctx, 31, 0x3E1848u);
    ctx->pc = 0x3E1844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1840u;
    // 0x3e1844: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E1840u, 0x3E1848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1848u;
label_3e1848:
    // 0x3e1848: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e184c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1854: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e1854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e1858: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E1858u;
    SET_GPR_U32(ctx, 31, 0x3E1860u);
    ctx->pc = 0x3E185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1858u;
    // 0x3e185c: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E1858u, 0x3E1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1860u;
label_3e1860:
    // 0x3e1860: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x3E1860u;
    {
        const bool branch_taken_0x3e1860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1860) {
            ctx->pc = 0x3E1C78u;
            goto label_3e1c78;
        }
    }
    ctx->pc = 0x3E1868u;
label_3e1868:
    // 0x3e1868: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3e1868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3e186c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e1870: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3e1870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e1874: 0x0  nop
    ctx->pc = 0x3e1874u;
    // NOP
label_3e1878:
    // 0x3e1878: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3e1878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3e187c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1880: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e1880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e1884: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3e1884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e1888: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3e1888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e188c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e188cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1890: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3e1890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3e1894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1898: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e1898u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e189c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e189cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e18a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e18a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e18a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E18A4u;
    {
        const bool branch_taken_0x3e18a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e18a4) {
            ctx->pc = 0x3E18BCu;
            goto label_3e18bc;
        }
    }
    ctx->pc = 0x3E18ACu;
    // 0x3e18ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e18acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e18b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3e18b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3e18b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E18B4u;
    {
        const bool branch_taken_0x3e18b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18B4u;
        // 0x3e18b8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18b4) {
            ctx->pc = 0x3E18D8u;
            goto label_3e18d8;
        }
    }
    ctx->pc = 0x3E18BCu;
label_3e18bc:
    // 0x3e18bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e18bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e18c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3e18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3e18c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e18c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e18c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3e18c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3e18cc: 0x0  nop
    ctx->pc = 0x3e18ccu;
    // NOP
    // 0x3e18d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e18d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e18d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e18d8:
    // 0x3e18d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e18d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e18dc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3e18dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3e18e0: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x3E18E0u;
    {
        const bool branch_taken_0x3e18e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18E0u;
        // 0x3e18e4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e18e0) {
            ctx->pc = 0x3E19E8u;
            goto label_3e19e8;
        }
    }
    ctx->pc = 0x3E18E8u;
    // 0x3e18e8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e18e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e18ec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3e18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3e18f0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3e18f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e18f4: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x3e18f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3e18f8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3e18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3e18fc: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3e18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3e1900: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e1900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1904: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e1904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e1908: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3e1908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3e190c: 0xc6060010  lwc1        $f6, 0x10($s0)
    ctx->pc = 0x3e190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3e1910: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x3e1910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3e1914: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e1914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e1918: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3e1918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3e191c: 0x46062081  sub.s       $f2, $f4, $f6
    ctx->pc = 0x3e191cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x3e1920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1924: 0x0  nop
    ctx->pc = 0x3e1924u;
    // NOP
    // 0x3e1928: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e1928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e192c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E192Cu;
    {
        const bool branch_taken_0x3e192c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E192Cu;
        // 0x3e1930: 0x46022882  mul.s       $f2, $f5, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e192c) {
            ctx->pc = 0x3E1944u;
            goto label_3e1944;
        }
    }
    ctx->pc = 0x3E1934u;
    // 0x3e1934: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1938: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e1938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e193c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E193Cu;
    {
        const bool branch_taken_0x3e193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e193c) {
            ctx->pc = 0x3E195Cu;
            goto label_3e195c;
        }
    }
    ctx->pc = 0x3E1944u;
label_3e1944:
    // 0x3e1944: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e1944u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e1948: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3e1948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3e194c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e194cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1950: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e1950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e1954: 0x0  nop
    ctx->pc = 0x3e1954u;
    // NOP
    // 0x3e1958: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3e1958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3e195c:
    // 0x3e195c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E195Cu;
    {
        const bool branch_taken_0x3e195c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3E1960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E195Cu;
        // 0x3e1960: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e195c) {
            ctx->pc = 0x3E1970u;
            goto label_3e1970;
        }
    }
    ctx->pc = 0x3E1964u;
    // 0x3e1964: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e1964u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1968: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1968u;
    {
        const bool branch_taken_0x3e1968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1968u;
        // 0x3e196c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1968) {
            ctx->pc = 0x3E1988u;
            goto label_3e1988;
        }
    }
    ctx->pc = 0x3E1970u;
label_3e1970:
    // 0x3e1970: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3e1970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3e1974: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e1974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e1978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e1978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e197c: 0x0  nop
    ctx->pc = 0x3e197cu;
    // NOP
    // 0x3e1980: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e1980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e1984: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3e1984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3e1988:
    // 0x3e1988: 0x0  nop
    ctx->pc = 0x3e1988u;
    // NOP
    // 0x3e198c: 0x0  nop
    ctx->pc = 0x3e198cu;
    // NOP
    // 0x3e1990: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3e1990u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x3e1994: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x3e1994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x3e1998: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x3e1998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3e199c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3e199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e19a0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3e19a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e19a4: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E19A4u;
    SET_GPR_U32(ctx, 31, 0x3E19ACu);
    ctx->pc = 0x3E19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E19A4u;
    // 0x3e19a8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E19A4u, 0x3E19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E19ACu;
label_3e19ac:
    // 0x3e19ac: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x3e19acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x3e19b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e19b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e19b4: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e19b8: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e19b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e19bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e19c0: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E19C0u;
    SET_GPR_U32(ctx, 31, 0x3E19C8u);
    ctx->pc = 0x3E19C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E19C0u;
    // 0x3e19c4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E19C0u, 0x3E19C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E19C8u;
label_3e19c8:
    // 0x3e19c8: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e19cc: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e19ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e19d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e19d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e19d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e19d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e19d8: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E19D8u;
    SET_GPR_U32(ctx, 31, 0x3E19E0u);
    ctx->pc = 0x3E19DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E19D8u;
    // 0x3e19dc: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E19D8u, 0x3E19E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E19E0u;
label_3e19e0:
    // 0x3e19e0: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x3E19E0u;
    {
        const bool branch_taken_0x3e19e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e19e0) {
            ctx->pc = 0x3E1C78u;
            goto label_3e1c78;
        }
    }
    ctx->pc = 0x3E19E8u;
label_3e19e8:
    // 0x3e19e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3e19e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e19ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e19f0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3e19f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e19f4: 0x0  nop
    ctx->pc = 0x3e19f4u;
    // NOP
label_3e19f8:
    // 0x3e19f8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3e19f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e19fc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x3e19fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3e1a00: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3e1a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e1a04: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3e1a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1a08: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E1A08u;
    SET_GPR_U32(ctx, 31, 0x3E1A10u);
    ctx->pc = 0x3E1A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A08u;
    // 0x3e1a0c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E1A08u, 0x3E1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A10u;
label_3e1a10:
    // 0x3e1a10: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x3e1a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x3e1a14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1a18: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1a1c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1a20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e1a24: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E1A24u;
    SET_GPR_U32(ctx, 31, 0x3E1A2Cu);
    ctx->pc = 0x3E1A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A24u;
    // 0x3e1a28: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E1A24u, 0x3E1A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A2Cu;
label_3e1a2c:
    // 0x3e1a2c: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1a30: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e1a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1a34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1a38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e1a3c: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E1A3Cu;
    SET_GPR_U32(ctx, 31, 0x3E1A44u);
    ctx->pc = 0x3E1A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1A3Cu;
    // 0x3e1a40: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E1A3Cu, 0x3E1A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1A44u;
label_3e1a44:
    // 0x3e1a44: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3e1a44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e1a48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e1a4c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x3E1A4Cu;
    {
        const bool branch_taken_0x3e1a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A4Cu;
        // 0x3e1a50: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a4c) {
            ctx->pc = 0x3E1C78u;
            goto label_3e1c78;
        }
    }
    ctx->pc = 0x3E1A54u;
    // 0x3e1a54: 0x0  nop
    ctx->pc = 0x3e1a54u;
    // NOP
label_3e1a58:
    // 0x3e1a58: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x3e1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x3e1a5c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1a60: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e1a64: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3e1a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e1a68: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3e1a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e1a6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e1a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1a70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3e1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3e1a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1a78: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e1a78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e1a7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e1a7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e1a80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e1a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1a84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1A84u;
    {
        const bool branch_taken_0x3e1a84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1a84) {
            ctx->pc = 0x3E1A9Cu;
            goto label_3e1a9c;
        }
    }
    ctx->pc = 0x3E1A8Cu;
    // 0x3e1a8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1a8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1a90: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e1a90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e1a94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1A94u;
    {
        const bool branch_taken_0x3e1a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1a94) {
            ctx->pc = 0x3E1AB4u;
            goto label_3e1ab4;
        }
    }
    ctx->pc = 0x3E1A9Cu;
label_3e1a9c:
    // 0x3e1a9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e1a9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e1aa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3e1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3e1aa4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1aa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1aa8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e1aa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e1aac: 0x0  nop
    ctx->pc = 0x3e1aacu;
    // NOP
    // 0x3e1ab0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3e1ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3e1ab4:
    // 0x3e1ab4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1AB4u;
    {
        const bool branch_taken_0x3e1ab4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3E1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1AB4u;
        // 0x3e1ab8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ab4) {
            ctx->pc = 0x3E1AC8u;
            goto label_3e1ac8;
        }
    }
    ctx->pc = 0x3E1ABCu;
    // 0x3e1abc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e1abcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1ac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1AC0u;
    {
        const bool branch_taken_0x3e1ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1AC0u;
        // 0x3e1ac4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ac0) {
            ctx->pc = 0x3E1AE0u;
            goto label_3e1ae0;
        }
    }
    ctx->pc = 0x3E1AC8u;
label_3e1ac8:
    // 0x3e1ac8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3e1ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3e1acc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e1accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e1ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e1ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1ad4: 0x0  nop
    ctx->pc = 0x3e1ad4u;
    // NOP
    // 0x3e1ad8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e1ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e1adc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e1adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e1ae0:
    // 0x3e1ae0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3e1ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1ae4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3e1ae8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3e1ae8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3e1aec: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x3e1aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x3e1af0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3e1af4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3e1af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e1af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e1afc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3e1afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e1b00:
    // 0x3e1b00: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3e1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3e1b04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e1b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1b08: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e1b0c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3e1b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e1b10: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3e1b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e1b14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e1b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1b18: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3e1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3e1b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1b20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e1b20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e1b24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e1b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e1b28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e1b28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1b2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1B2Cu;
    {
        const bool branch_taken_0x3e1b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1b2c) {
            ctx->pc = 0x3E1B44u;
            goto label_3e1b44;
        }
    }
    ctx->pc = 0x3E1B34u;
    // 0x3e1b34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1b34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1b38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e1b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e1b3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1B3Cu;
    {
        const bool branch_taken_0x3e1b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1b3c) {
            ctx->pc = 0x3E1B5Cu;
            goto label_3e1b5c;
        }
    }
    ctx->pc = 0x3E1B44u;
label_3e1b44:
    // 0x3e1b44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e1b44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e1b48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3e1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3e1b4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1b4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1b50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3e1b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3e1b54: 0x0  nop
    ctx->pc = 0x3e1b54u;
    // NOP
    // 0x3e1b58: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3e1b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3e1b5c:
    // 0x3e1b5c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1B5Cu;
    {
        const bool branch_taken_0x3e1b5c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3E1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B5Cu;
        // 0x3e1b60: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b5c) {
            ctx->pc = 0x3E1B70u;
            goto label_3e1b70;
        }
    }
    ctx->pc = 0x3E1B64u;
    // 0x3e1b64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e1b64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1b68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1B68u;
    {
        const bool branch_taken_0x3e1b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B68u;
        // 0x3e1b6c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b68) {
            ctx->pc = 0x3E1B88u;
            goto label_3e1b88;
        }
    }
    ctx->pc = 0x3E1B70u;
label_3e1b70:
    // 0x3e1b70: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3e1b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3e1b74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e1b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e1b78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e1b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1b7c: 0x0  nop
    ctx->pc = 0x3e1b7cu;
    // NOP
    // 0x3e1b80: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3e1b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3e1b84: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3e1b84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3e1b88:
    // 0x3e1b88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3e1b8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3e1b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e1b90: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3e1b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e1b94: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3e1b94u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x3e1b98: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x3e1b98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3e1b9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e1b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1ba0: 0x0  nop
    ctx->pc = 0x3e1ba0u;
    // NOP
    // 0x3e1ba4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3e1ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1ba8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x3E1BA8u;
    {
        const bool branch_taken_0x3e1ba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BA8u;
        // 0x3e1bac: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ba8) {
            ctx->pc = 0x3E1C10u;
            goto label_3e1c10;
        }
    }
    ctx->pc = 0x3E1BB0u;
    // 0x3e1bb0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x3e1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e1bb4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3e1bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1bb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e1bb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e1bbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3e1bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3e1bc0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x3e1bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3e1bc4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3e1bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e1bc8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3e1bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1bcc: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E1BCCu;
    SET_GPR_U32(ctx, 31, 0x3E1BD4u);
    ctx->pc = 0x3E1BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1BCCu;
    // 0x3e1bd0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E1BCCu, 0x3E1BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1BD4u;
label_3e1bd4:
    // 0x3e1bd4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x3e1bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x3e1bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1bdc: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1be0: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e1be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1be4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e1be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e1be8: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E1BE8u;
    SET_GPR_U32(ctx, 31, 0x3E1BF0u);
    ctx->pc = 0x3E1BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1BE8u;
    // 0x3e1bec: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E1BE8u, 0x3E1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1BF0u;
label_3e1bf0:
    // 0x3e1bf0: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1bf4: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e1bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1bf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1bfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e1c00: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E1C00u;
    SET_GPR_U32(ctx, 31, 0x3E1C08u);
    ctx->pc = 0x3E1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1C00u;
    // 0x3e1c04: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E1C00u, 0x3E1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1C08u;
label_3e1c08:
    // 0x3e1c08: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3E1C08u;
    {
        const bool branch_taken_0x3e1c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1c08) {
            ctx->pc = 0x3E1C78u;
            goto label_3e1c78;
        }
    }
    ctx->pc = 0x3E1C10u;
label_3e1c10:
    // 0x3e1c10: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3e1c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3e1c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e1c18: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3e1c18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e1c1c: 0x0  nop
    ctx->pc = 0x3e1c1cu;
    // NOP
label_3e1c20:
    // 0x3e1c20: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3e1c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e1c24: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3e1c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1c28: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E1C28u;
    SET_GPR_U32(ctx, 31, 0x3E1C30u);
    ctx->pc = 0x3E1C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1C28u;
    // 0x3e1c2c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E1C28u, 0x3E1C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1C30u;
label_3e1c30:
    // 0x3e1c30: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x3e1c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x3e1c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1c38: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1c3c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e1c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1c40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e1c44: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E1C44u;
    SET_GPR_U32(ctx, 31, 0x3E1C4Cu);
    ctx->pc = 0x3E1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1C44u;
    // 0x3e1c48: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E1C44u, 0x3E1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1C4Cu;
label_3e1c4c:
    // 0x3e1c4c: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1c50: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e1c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1c58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e1c5c: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E1C5Cu;
    SET_GPR_U32(ctx, 31, 0x3E1C64u);
    ctx->pc = 0x3E1C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1C5Cu;
    // 0x3e1c60: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E1C5Cu, 0x3E1C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1C64u;
label_3e1c64:
    // 0x3e1c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1C64u;
    {
        const bool branch_taken_0x3e1c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1c64) {
            ctx->pc = 0x3E1C78u;
            goto label_3e1c78;
        }
    }
    ctx->pc = 0x3E1C6Cu;
    // 0x3e1c6c: 0x0  nop
    ctx->pc = 0x3e1c6cu;
    // NOP
label_3e1c70:
    // 0x3e1c70: 0xc0f854c  jal         func_3E1530
    ctx->pc = 0x3E1C70u;
    SET_GPR_U32(ctx, 31, 0x3E1C78u);
    ctx->pc = 0x3E1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1530u, 0x3E1C70u, 0x3E1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1C78u;
label_3e1c78:
    // 0x3e1c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1c7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e1c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1c80: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C80u;
        // 0x3e1c84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1C88u;
}

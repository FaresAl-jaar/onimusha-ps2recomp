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

// Function: sub_003D17C0
// Address: 0x3d17c0 - 0x3d1a10
void sub_003D17C0_0x3d17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D17C0_0x3d17c0");
#endif

    switch (ctx->pc) {
        case 0x3d1828u: goto label_3d1828;
        case 0x3d1850u: goto label_3d1850;
        case 0x3d1878u: goto label_3d1878;
        case 0x3d18ecu: goto label_3d18ec;
        case 0x3d18fcu: goto label_3d18fc;
        case 0x3d1904u: goto label_3d1904;
        case 0x3d198cu: goto label_3d198c;
        case 0x3d19b0u: goto label_3d19b0;
        case 0x3d19bcu: goto label_3d19bc;
        case 0x3d19d0u: goto label_3d19d0;
        default: break;
    }

    ctx->pc = 0x3d17c0u;

    // 0x3d17c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3d17c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3d17c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3d17c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3d17c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3d17c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3d17cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3d17ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3d17d0: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x3d17d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d17d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d17d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3d17d8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3d17d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d17dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d17dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3d17e0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3d17e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d17e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d17e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d17e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d17e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d17ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d17ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d17f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d17f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d17f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d17f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d17f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d17f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d17fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d17fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d1800: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3d1800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1804: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3d1804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d1808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d180c: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d180cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3d1810: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x3d1810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x3d1814: 0x240705b0  addiu       $a3, $zero, 0x5B0
    ctx->pc = 0x3d1814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
    // 0x3d1818: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3d1818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d181c: 0x25081750  addiu       $t0, $t0, 0x1750
    ctx->pc = 0x3d181cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5968));
    // 0x3d1820: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3D1820u;
    SET_GPR_U32(ctx, 31, 0x3D1828u);
    ctx->pc = 0x3D1824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1820u;
    // 0x3d1824: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3D1820u, 0x3D1828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1828u;
label_3d1828:
    // 0x3d1828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d1828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d182c: 0x1200006a  beqz        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x3D182Cu;
    {
        const bool branch_taken_0x3d182c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D182Cu;
        // 0x3d1830: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d182c) {
            ctx->pc = 0x3D19D8u;
            goto label_3d19d8;
        }
    }
    ctx->pc = 0x3D1834u;
    // 0x3d1834: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3d1834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d1838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d183c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3d183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d1840: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x3d1840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3d1844: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3d1844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1848: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3D1848u;
    SET_GPR_U32(ctx, 31, 0x3D1850u);
    ctx->pc = 0x3D184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1848u;
    // 0x3d184c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3D1848u, 0x3D1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1850u;
label_3d1850:
    // 0x3d1850: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x3d1850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3d1854: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3d1854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d1858: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3d1858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d185c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1860: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3d1860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d1864: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d1868: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3d1868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d186c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3d186cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d1870: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3D1870u;
    SET_GPR_U32(ctx, 31, 0x3D1878u);
    ctx->pc = 0x3D1874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1870u;
    // 0x3d1874: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3D1870u, 0x3D1878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1878u;
label_3d1878:
    // 0x3d1878: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x3d1878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x3d187c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d187cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d1880: 0xae0205a4  sw          $v0, 0x5A4($s0)
    ctx->pc = 0x3d1880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1444), GPR_U32(ctx, 2));
    // 0x3d1884: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3d1884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3d1888: 0xa21705ac  sb          $s7, 0x5AC($s0)
    ctx->pc = 0x3d1888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1452), (uint8_t)GPR_U32(ctx, 23));
    // 0x3d188c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d188cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d1890: 0xae0205a8  sw          $v0, 0x5A8($s0)
    ctx->pc = 0x3d1890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1448), GPR_U32(ctx, 2));
    // 0x3d1894: 0x27b400b4  addiu       $s4, $sp, 0xB4
    ctx->pc = 0x3d1894u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x3d1898: 0xa21e05ad  sb          $fp, 0x5AD($s0)
    ctx->pc = 0x3d1898u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1453), (uint8_t)GPR_U32(ctx, 30));
    // 0x3d189c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d189cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d18a0: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x3d18a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3d18a4: 0xa20205ae  sb          $v0, 0x5AE($s0)
    ctx->pc = 0x3d18a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1454), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d18a8: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x3d18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x3d18ac: 0xa20005af  sb          $zero, 0x5AF($s0)
    ctx->pc = 0x3d18acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1455), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d18b0: 0x78225c20  lq          $v0, 0x5C20($at)
    ctx->pc = 0x3d18b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C20u));
    // 0x3d18b4: 0x7e020550  sq          $v0, 0x550($s0)
    ctx->pc = 0x3d18b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
    // 0x3d18b8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d18b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d18bc: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x3d18bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x3d18c0: 0x7e020560  sq          $v0, 0x560($s0)
    ctx->pc = 0x3d18c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1376), GPR_VEC(ctx, 2));
    // 0x3d18c4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d18c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d18c8: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x3d18c8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x3d18cc: 0x7e020570  sq          $v0, 0x570($s0)
    ctx->pc = 0x3d18ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1392), GPR_VEC(ctx, 2));
    // 0x3d18d0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d18d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d18d4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3d18d4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3d18d8: 0x7e020580  sq          $v0, 0x580($s0)
    ctx->pc = 0x3d18d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), GPR_VEC(ctx, 2));
    // 0x3d18dc: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x3d18dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3d18e0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3d18e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3d18e4: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3D18E4u;
    SET_GPR_U32(ctx, 31, 0x3D18ECu);
    ctx->pc = 0x3D18E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D18E4u;
    // 0x3d18e8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3D18E4u, 0x3D18ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D18ECu;
label_3d18ec:
    // 0x3d18ec: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D18ECu;
    {
        const bool branch_taken_0x3d18ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D18ECu;
        // 0x3d18f0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d18ec) {
            ctx->pc = 0x3D1940u;
            goto label_3d1940;
        }
    }
    ctx->pc = 0x3D18F4u;
    // 0x3d18f4: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3D18F4u;
    SET_GPR_U32(ctx, 31, 0x3D18FCu);
    ctx->pc = 0x3D18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D18F4u;
    // 0x3d18f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3D18F4u, 0x3D18FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D18FCu;
label_3d18fc:
    // 0x3d18fc: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3D18FCu;
    SET_GPR_U32(ctx, 31, 0x3D1904u);
    ctx->pc = 0x3D1900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D18FCu;
    // 0x3d1900: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3D18FCu, 0x3D1904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1904u;
label_3d1904:
    // 0x3d1904: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d1904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3d1908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d1908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d190c: 0x0  nop
    ctx->pc = 0x3d190cu;
    // NOP
    // 0x3d1910: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d1910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d1914: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3D1914u;
    {
        const bool branch_taken_0x3d1914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1914) {
            ctx->pc = 0x3D1920u;
            goto label_3d1920;
        }
    }
    ctx->pc = 0x3D191Cu;
    // 0x3d191c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x3d191cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_3d1920:
    // 0x3d1920: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3d1920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3d1924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d1924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d1928: 0x0  nop
    ctx->pc = 0x3d1928u;
    // NOP
    // 0x3d192c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d192cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d1930: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1930u;
    {
        const bool branch_taken_0x3d1930 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d1930) {
            ctx->pc = 0x3D1948u;
            goto label_3d1948;
        }
    }
    ctx->pc = 0x3D1938u;
    // 0x3d1938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1938u;
    {
        const bool branch_taken_0x3d1938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1938u;
        // 0x3d193c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1938) {
            ctx->pc = 0x3D1948u;
            goto label_3d1948;
        }
    }
    ctx->pc = 0x3D1940u;
label_3d1940:
    // 0x3d1940: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3d1940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3d1944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d1948:
    // 0x3d1948: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x3d1948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x3d194c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x3d194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1950: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3d1950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3d1954: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x3d1954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d1958: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d1958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d195c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3d195cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3d1960: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3d1960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3d1964: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3d1964u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3d1968: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3d1968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3d196c: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x3d196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1970: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x3d1970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x3d1974: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3d1974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1978: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x3d1978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d197c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d197cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3d1980: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3d1980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3d1984: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3D1984u;
    SET_GPR_U32(ctx, 31, 0x3D198Cu);
    ctx->pc = 0x3D1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1984u;
    // 0x3d1988: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3D1984u, 0x3D198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D198Cu;
label_3d198c:
    // 0x3d198c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D198Cu;
    {
        const bool branch_taken_0x3d198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d198c) {
            ctx->pc = 0x3D19A0u;
            goto label_3d19a0;
        }
    }
    ctx->pc = 0x3D1994u;
    // 0x3d1994: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x3d1994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d1998: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x3d1998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x3d199c: 0x0  nop
    ctx->pc = 0x3d199cu;
    // NOP
label_3d19a0:
    // 0x3d19a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3d19a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d19a4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3d19a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d19a8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3D19A8u;
    SET_GPR_U32(ctx, 31, 0x3D19B0u);
    ctx->pc = 0x3D19ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19A8u;
    // 0x3d19ac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3D19A8u, 0x3D19B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19B0u;
label_3d19b0:
    // 0x3d19b0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3d19b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d19b4: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3D19B4u;
    SET_GPR_U32(ctx, 31, 0x3D19BCu);
    ctx->pc = 0x3D19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19B4u;
    // 0x3d19b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3D19B4u, 0x3D19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19BCu;
label_3d19bc:
    // 0x3d19bc: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x3d19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x3d19c0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3d19c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d19c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d19c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d19c8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3D19C8u;
    SET_GPR_U32(ctx, 31, 0x3D19D0u);
    ctx->pc = 0x3D19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D19C8u;
    // 0x3d19cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3D19C8u, 0x3D19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D19D0u;
label_3d19d0:
    // 0x3d19d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D19D0u;
    {
        const bool branch_taken_0x3d19d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D19D0u;
        // 0x3d19d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d19d0) {
            ctx->pc = 0x3D19E0u;
            goto label_3d19e0;
        }
    }
    ctx->pc = 0x3D19D8u;
label_3d19d8:
    // 0x3d19d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d19d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d19dc: 0x0  nop
    ctx->pc = 0x3d19dcu;
    // NOP
label_3d19e0:
    // 0x3d19e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3d19e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d19e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3d19e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d19e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3d19e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d19ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d19ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d19f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d19f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d19f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d19f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d19f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d19f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d19fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d19fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d1a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d1a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d1a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d1a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d1a08: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1A08u;
        // 0x3d1a0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1A10u;
}

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

// Function: sub_001B14F0
// Address: 0x1b14f0 - 0x1b2604
void sub_001B14F0_0x1b14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B14F0_0x1b14f0");
#endif

    switch (ctx->pc) {
        case 0x1b1538u: goto label_1b1538;
        case 0x1b1608u: goto label_1b1608;
        case 0x1b161cu: goto label_1b161c;
        case 0x1b1630u: goto label_1b1630;
        case 0x1b1644u: goto label_1b1644;
        case 0x1b1660u: goto label_1b1660;
        case 0x1b16e8u: goto label_1b16e8;
        case 0x1b1870u: goto label_1b1870;
        case 0x1b1890u: goto label_1b1890;
        case 0x1b18a0u: goto label_1b18a0;
        case 0x1b18a8u: goto label_1b18a8;
        case 0x1b18d4u: goto label_1b18d4;
        case 0x1b18e4u: goto label_1b18e4;
        case 0x1b1908u: goto label_1b1908;
        case 0x1b1910u: goto label_1b1910;
        case 0x1b1928u: goto label_1b1928;
        case 0x1b1a58u: goto label_1b1a58;
        case 0x1b1a78u: goto label_1b1a78;
        case 0x1b1a88u: goto label_1b1a88;
        case 0x1b1a98u: goto label_1b1a98;
        case 0x1b1accu: goto label_1b1acc;
        case 0x1b1aecu: goto label_1b1aec;
        case 0x1b1afcu: goto label_1b1afc;
        case 0x1b1b08u: goto label_1b1b08;
        case 0x1b1b1cu: goto label_1b1b1c;
        case 0x1b1b40u: goto label_1b1b40;
        case 0x1b1b80u: goto label_1b1b80;
        case 0x1b1ba4u: goto label_1b1ba4;
        case 0x1b1bc4u: goto label_1b1bc4;
        case 0x1b1bd4u: goto label_1b1bd4;
        case 0x1b1be4u: goto label_1b1be4;
        case 0x1b1bf0u: goto label_1b1bf0;
        case 0x1b1c28u: goto label_1b1c28;
        case 0x1b1c3cu: goto label_1b1c3c;
        case 0x1b1c60u: goto label_1b1c60;
        case 0x1b1c74u: goto label_1b1c74;
        case 0x1b1c8cu: goto label_1b1c8c;
        case 0x1b1ca8u: goto label_1b1ca8;
        case 0x1b1d00u: goto label_1b1d00;
        case 0x1b1d1cu: goto label_1b1d1c;
        case 0x1b1d30u: goto label_1b1d30;
        case 0x1b1d64u: goto label_1b1d64;
        case 0x1b1d78u: goto label_1b1d78;
        case 0x1b1dacu: goto label_1b1dac;
        case 0x1b1dc0u: goto label_1b1dc0;
        case 0x1b1df4u: goto label_1b1df4;
        case 0x1b1e1cu: goto label_1b1e1c;
        case 0x1b1e2cu: goto label_1b1e2c;
        case 0x1b1e6cu: goto label_1b1e6c;
        case 0x1b1e90u: goto label_1b1e90;
        case 0x1b1ea0u: goto label_1b1ea0;
        case 0x1b1ea8u: goto label_1b1ea8;
        case 0x1b1ee0u: goto label_1b1ee0;
        case 0x1b1f04u: goto label_1b1f04;
        case 0x1b1f1cu: goto label_1b1f1c;
        case 0x1b1f48u: goto label_1b1f48;
        case 0x1b1f58u: goto label_1b1f58;
        case 0x1b1f68u: goto label_1b1f68;
        case 0x1b1fb4u: goto label_1b1fb4;
        case 0x1b1fbcu: goto label_1b1fbc;
        case 0x1b1fe8u: goto label_1b1fe8;
        case 0x1b1ff4u: goto label_1b1ff4;
        case 0x1b2024u: goto label_1b2024;
        case 0x1b2064u: goto label_1b2064;
        case 0x1b2074u: goto label_1b2074;
        case 0x1b2098u: goto label_1b2098;
        case 0x1b20b0u: goto label_1b20b0;
        case 0x1b2104u: goto label_1b2104;
        case 0x1b2138u: goto label_1b2138;
        case 0x1b214cu: goto label_1b214c;
        case 0x1b218cu: goto label_1b218c;
        case 0x1b219cu: goto label_1b219c;
        case 0x1b2230u: goto label_1b2230;
        case 0x1b224cu: goto label_1b224c;
        case 0x1b2264u: goto label_1b2264;
        case 0x1b2270u: goto label_1b2270;
        case 0x1b22b8u: goto label_1b22b8;
        case 0x1b2350u: goto label_1b2350;
        case 0x1b23e0u: goto label_1b23e0;
        case 0x1b25c0u: goto label_1b25c0;
        case 0x1b25ccu: goto label_1b25cc;
        default: break;
    }

    ctx->pc = 0x1b14f0u;

    // 0x1b14f0: 0x27bdf7b0  addiu       $sp, $sp, -0x850
    ctx->pc = 0x1b14f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965168));
    // 0x1b14f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b14f8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1b14f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1b14fc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1b14fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b1500: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1b1500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1b1504: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1b1504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1b1508: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1b1508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1b150c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1b150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1b1510: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1b1510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1b1514: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b1514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1b1518: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b1518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b151c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b1520: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b1520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1524: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b1524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b1528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b152c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b152cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b1530: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B1530u;
    SET_GPR_U32(ctx, 31, 0x1B1538u);
    ctx->pc = 0x1B1534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1530u;
    // 0x1b1534: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B1530u, 0x1B1538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1538u;
label_1b1538:
    // 0x1b1538: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x1b1538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1b153c: 0x1040014e  beqz        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x1B153Cu;
    {
        const bool branch_taken_0x1b153c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b153c) {
            ctx->pc = 0x1B1A78u;
            goto label_1b1a78;
        }
    }
    ctx->pc = 0x1B1544u;
    // 0x1b1544: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b1544u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b1548: 0x3c0b0041  lui         $t3, 0x41
    ctx->pc = 0x1b1548u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65 << 16));
    // 0x1b154c: 0x26b5f440  addiu       $s5, $s5, -0xBC0
    ctx->pc = 0x1b154cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964288));
    // 0x1b1550: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1b1550u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1b1554: 0x7aaf0000  lq          $t7, 0x0($s5)
    ctx->pc = 0x1b1554u;
    SET_GPR_VEC(ctx, 15, FAST_READ128(0x40F440u));
    // 0x1b1558: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1b1558u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1b155c: 0x7aae0010  lq          $t6, 0x10($s5)
    ctx->pc = 0x1b155cu;
    SET_GPR_VEC(ctx, 14, FAST_READ128(0x40F450u));
    // 0x1b1560: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b1560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b1564: 0x7aad0020  lq          $t5, 0x20($s5)
    ctx->pc = 0x1b1564u;
    SET_GPR_VEC(ctx, 13, FAST_READ128(0x40F460u));
    // 0x1b1568: 0x27b105f0  addiu       $s1, $sp, 0x5F0
    ctx->pc = 0x1b1568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
    // 0x1b156c: 0x7aac0030  lq          $t4, 0x30($s5)
    ctx->pc = 0x1b156cu;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x40F470u));
    // 0x1b1570: 0x27b007f0  addiu       $s0, $sp, 0x7F0
    ctx->pc = 0x1b1570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2032));
    // 0x1b1574: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b1574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b1578: 0x256bf4a0  addiu       $t3, $t3, -0xB60
    ctx->pc = 0x1b1578u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964384));
    // 0x1b157c: 0x27a605e0  addiu       $a2, $sp, 0x5E0
    ctx->pc = 0x1b157cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    // 0x1b1580: 0x2529f4b0  addiu       $t1, $t1, -0xB50
    ctx->pc = 0x1b1580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964400));
    // 0x1b1584: 0x27aa05d0  addiu       $t2, $sp, 0x5D0
    ctx->pc = 0x1b1584u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
    // 0x1b1588: 0x24e7f4c0  addiu       $a3, $a3, -0xB40
    ctx->pc = 0x1b1588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964416));
    // 0x1b158c: 0x27a805c0  addiu       $t0, $sp, 0x5C0
    ctx->pc = 0x1b158cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x1b1590: 0x2442f4d0  addiu       $v0, $v0, -0xB30
    ctx->pc = 0x1b1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964432));
    // 0x1b1594: 0x27a305b0  addiu       $v1, $sp, 0x5B0
    ctx->pc = 0x1b1594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
    // 0x1b1598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b159c: 0x7e0f0000  sq          $t7, 0x0($s0)
    ctx->pc = 0x1b159cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 15));
    // 0x1b15a0: 0x24a569a0  addiu       $a1, $a1, 0x69A0
    ctx->pc = 0x1b15a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    // 0x1b15a4: 0x7e0e0010  sq          $t6, 0x10($s0)
    ctx->pc = 0x1b15a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 14));
    // 0x1b15a8: 0x27b206f0  addiu       $s2, $sp, 0x6F0
    ctx->pc = 0x1b15a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
    // 0x1b15ac: 0x7e0d0020  sq          $t5, 0x20($s0)
    ctx->pc = 0x1b15acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 13));
    // 0x1b15b0: 0x7e0c0030  sq          $t4, 0x30($s0)
    ctx->pc = 0x1b15b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 12));
    // 0x1b15b4: 0x7aad0040  lq          $t5, 0x40($s5)
    ctx->pc = 0x1b15b4u;
    SET_GPR_VEC(ctx, 13, FAST_READ128(0x40F480u));
    // 0x1b15b8: 0x7aac0050  lq          $t4, 0x50($s5)
    ctx->pc = 0x1b15b8u;
    SET_GPR_VEC(ctx, 12, FAST_READ128(0x40F490u));
    // 0x1b15bc: 0x7e0d0040  sq          $t5, 0x40($s0)
    ctx->pc = 0x1b15bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 13));
    // 0x1b15c0: 0x7e0c0050  sq          $t4, 0x50($s0)
    ctx->pc = 0x1b15c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 12));
    // 0x1b15c4: 0x796b0000  lq          $t3, 0x0($t3)
    ctx->pc = 0x1b15c4u;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x40F4A0u));
    // 0x1b15c8: 0x7ccb0000  sq          $t3, 0x0($a2)
    ctx->pc = 0x1b15c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 11));
    // 0x1b15cc: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1b15ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b15d0: 0xe7a005e4  swc1        $f0, 0x5E4($sp)
    ctx->pc = 0x1b15d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1508), bits); }
    // 0x1b15d4: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x1b15d4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x40F4B0u));
    // 0x1b15d8: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x1b15d8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
    // 0x1b15dc: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1b15dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b15e0: 0xe7a005d4  swc1        $f0, 0x5D4($sp)
    ctx->pc = 0x1b15e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1492), bits); }
    // 0x1b15e4: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x1b15e4u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x40F4C0u));
    // 0x1b15e8: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x1b15e8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x1b15ec: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1b15ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b15f0: 0xe7a005c4  swc1        $f0, 0x5C4($sp)
    ctx->pc = 0x1b15f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1476), bits); }
    // 0x1b15f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b15f4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F4D0u));
    // 0x1b15f8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1b15f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1b15fc: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1b15fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1600: 0xc041442  jal         func_105108
    ctx->pc = 0x1B1600u;
    SET_GPR_U32(ctx, 31, 0x1B1608u);
    ctx->pc = 0x1B1604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1600u;
    // 0x1b1604: 0xe7a005b4  swc1        $f0, 0x5B4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1460), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B1600u, 0x1B1608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1608u;
label_1b1608:
    // 0x1b1608: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b1608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b160c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1b160cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b1610: 0x24a569a0  addiu       $a1, $a1, 0x69A0
    ctx->pc = 0x1b1610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    // 0x1b1614: 0xc041442  jal         func_105108
    ctx->pc = 0x1B1614u;
    SET_GPR_U32(ctx, 31, 0x1B161Cu);
    ctx->pc = 0x1B1618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1614u;
    // 0x1b1618: 0x27a605d0  addiu       $a2, $sp, 0x5D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B1614u, 0x1B161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B161Cu;
label_1b161c:
    // 0x1b161c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b161cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b1620: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1b1620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b1624: 0x24a569a0  addiu       $a1, $a1, 0x69A0
    ctx->pc = 0x1b1624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    // 0x1b1628: 0xc041442  jal         func_105108
    ctx->pc = 0x1B1628u;
    SET_GPR_U32(ctx, 31, 0x1B1630u);
    ctx->pc = 0x1B162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1628u;
    // 0x1b162c: 0x27a605c0  addiu       $a2, $sp, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B1628u, 0x1B1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1630u;
label_1b1630:
    // 0x1b1630: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b1630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b1634: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1b1634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1b1638: 0x24a569a0  addiu       $a1, $a1, 0x69A0
    ctx->pc = 0x1b1638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    // 0x1b163c: 0xc041442  jal         func_105108
    ctx->pc = 0x1B163Cu;
    SET_GPR_U32(ctx, 31, 0x1B1644u);
    ctx->pc = 0x1B1640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B163Cu;
    // 0x1b1640: 0x27a605b0  addiu       $a2, $sp, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B163Cu, 0x1B1644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1644u;
label_1b1644:
    // 0x1b1644: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1b1644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b1648: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1b1648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b164c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b164cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1650: 0x27a505a0  addiu       $a1, $sp, 0x5A0
    ctx->pc = 0x1b1650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x1b1654: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x1b1654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
    // 0x1b1658: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1B1658u;
    {
        const bool branch_taken_0x1b1658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1658u;
        // 0x1b165c: 0x27a30590  addiu       $v1, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1658) {
            ctx->pc = 0x1B1818u;
            goto label_1b1818;
        }
    }
    ctx->pc = 0x1B1660u;
label_1b1660:
    // 0x1b1660: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b1660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1664: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1b1664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1668: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1b1668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b166c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b166cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1670: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b1670u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1674: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x1b1674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1b1678: 0x74900  sll         $t1, $a3, 4
    ctx->pc = 0x1b1678u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1b167c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1b167cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1b1680: 0x13d4821  addu        $t1, $t1, $sp
    ctx->pc = 0x1b1680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1b1684: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x1b1684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1b1688: 0x252907f0  addiu       $t1, $t1, 0x7F0
    ctx->pc = 0x1b1688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2032));
    // 0x1b168c: 0x78ca0000  lq          $t2, 0x0($a2)
    ctx->pc = 0x1b168cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1690: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1694: 0x7caa0000  sq          $t2, 0x0($a1)
    ctx->pc = 0x1b1694u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 10));
    // 0x1b1698: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b169c: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x1b169cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b16a0: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x1b16a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x1b16a4: 0xc7a705a0  lwc1        $f7, 0x5A0($sp)
    ctx->pc = 0x1b16a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b16a8: 0xc7a00580  lwc1        $f0, 0x580($sp)
    ctx->pc = 0x1b16a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b16ac: 0xc7a605a4  lwc1        $f6, 0x5A4($sp)
    ctx->pc = 0x1b16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1b16b0: 0xc7a50584  lwc1        $f5, 0x584($sp)
    ctx->pc = 0x1b16b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b16b4: 0xc7a405a8  lwc1        $f4, 0x5A8($sp)
    ctx->pc = 0x1b16b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b16b8: 0xc7a20588  lwc1        $f2, 0x588($sp)
    ctx->pc = 0x1b16b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b16bc: 0xc7a105ac  lwc1        $f1, 0x5AC($sp)
    ctx->pc = 0x1b16bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b16c0: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x1b16c0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x1b16c4: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x1b16c4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1b16c8: 0xc7a0058c  lwc1        $f0, 0x58C($sp)
    ctx->pc = 0x1b16c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b16cc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1b16ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1b16d0: 0x46053940  add.s       $f5, $f7, $f5
    ctx->pc = 0x1b16d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x1b16d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b16d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b16d8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1b16d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1b16dc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1B16DCu;
    {
        const bool branch_taken_0x1b16dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16DCu;
        // 0x1b16e0: 0x46020200  add.s       $f8, $f0, $f2 (Delay Slot)
        ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16dc) {
            ctx->pc = 0x1B17F8u;
            goto label_1b17f8;
        }
    }
    ctx->pc = 0x1B16E4u;
    // 0x1b16e4: 0x0  nop
    ctx->pc = 0x1b16e4u;
    // NOP
label_1b16e8:
    // 0x1b16e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b16e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16ec: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x1b16ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1b16f0: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x1b16f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1b16f4: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x1b16f4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b16f8: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x1b16f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b16fc: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x1b16fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x1b1700: 0xc7a70590  lwc1        $f7, 0x590($sp)
    ctx->pc = 0x1b1700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b1704: 0xc7a00580  lwc1        $f0, 0x580($sp)
    ctx->pc = 0x1b1704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1708: 0xc7a60594  lwc1        $f6, 0x594($sp)
    ctx->pc = 0x1b1708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1b170c: 0xc7a50584  lwc1        $f5, 0x584($sp)
    ctx->pc = 0x1b170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b1710: 0xc7a40598  lwc1        $f4, 0x598($sp)
    ctx->pc = 0x1b1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b1714: 0xc7a20588  lwc1        $f2, 0x588($sp)
    ctx->pc = 0x1b1714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b1718: 0xc7a1059c  lwc1        $f1, 0x59C($sp)
    ctx->pc = 0x1b1718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b171c: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x1b171cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x1b1720: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x1b1720u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1b1724: 0xc7a0058c  lwc1        $f0, 0x58C($sp)
    ctx->pc = 0x1b1724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1728: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1b1728u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1b172c: 0x46053940  add.s       $f5, $f7, $f5
    ctx->pc = 0x1b172cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x1b1730: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b1730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b1734: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1b1734u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1b1738: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1738u;
    {
        const bool branch_taken_0x1b1738 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1738u;
        // 0x1b173c: 0x46020100  add.s       $f4, $f0, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1738) {
            ctx->pc = 0x1B1758u;
            goto label_1b1758;
        }
    }
    ctx->pc = 0x1B1740u;
    // 0x1b1740: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1740u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1744: 0x104900  sll         $t1, $s0, 4
    ctx->pc = 0x1b1744u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b1748: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1b1748u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b174c: 0x2294821  addu        $t1, $s1, $t1
    ctx->pc = 0x1b174cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1b1750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b1754: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x1b1754u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
label_1b1758:
    // 0x1b1758: 0x46044002  mul.s       $f0, $f8, $f4
    ctx->pc = 0x1b1758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x1b175c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1b175cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1760: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1B1760u;
    {
        const bool branch_taken_0x1b1760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1760) {
            ctx->pc = 0x1B17E0u;
            goto label_1b17e0;
        }
    }
    ctx->pc = 0x1B1768u;
    // 0x1b1768: 0x46044081  sub.s       $f2, $f8, $f4
    ctx->pc = 0x1b1768u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
    // 0x1b176c: 0x104900  sll         $t1, $s0, 4
    ctx->pc = 0x1b176cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b1770: 0x2294821  addu        $t1, $s1, $t1
    ctx->pc = 0x1b1770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1b1774: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b1778: 0x46024083  div.s       $f2, $f8, $f2
    ctx->pc = 0x1b1778u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[8], ctx->f[2]); }
    // 0x1b177c: 0xc7a00590  lwc1        $f0, 0x590($sp)
    ctx->pc = 0x1b177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1780: 0xc7a105a0  lwc1        $f1, 0x5A0($sp)
    ctx->pc = 0x1b1780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1784: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b1784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b1788: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b1788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b178c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b178cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b1790: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1b1790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1b1794: 0xc7a00594  lwc1        $f0, 0x594($sp)
    ctx->pc = 0x1b1794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1798: 0xc7a105a4  lwc1        $f1, 0x5A4($sp)
    ctx->pc = 0x1b1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b179c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b179cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b17a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b17a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b17a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b17a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b17a8: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x1b17a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1b17ac: 0xc7a00598  lwc1        $f0, 0x598($sp)
    ctx->pc = 0x1b17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b17b0: 0xc7a105a8  lwc1        $f1, 0x5A8($sp)
    ctx->pc = 0x1b17b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b17b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b17b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b17b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b17b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b17bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b17bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b17c0: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x1b17c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1b17c4: 0xc7a0059c  lwc1        $f0, 0x59C($sp)
    ctx->pc = 0x1b17c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b17c8: 0xc7a105ac  lwc1        $f1, 0x5AC($sp)
    ctx->pc = 0x1b17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b17cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b17ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b17d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b17d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b17d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b17d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b17d8: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x1b17d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x1b17dc: 0x0  nop
    ctx->pc = 0x1b17dcu;
    // NOP
label_1b17e0:
    // 0x1b17e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b17e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b17e4: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x1b17e4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b17e8: 0x46002206  mov.s       $f8, $f4
    ctx->pc = 0x1b17e8u;
    ctx->f[8] = FPU_MOV_S(ctx->f[4]);
    // 0x1b17ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b17ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b17f0: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x1b17f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x1b17f4: 0x0  nop
    ctx->pc = 0x1b17f4u;
    // NOP
label_1b17f8:
    // 0x1b17f8: 0xc8482a  slt         $t1, $a2, $t0
    ctx->pc = 0x1b17f8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b17fc: 0x1520ffba  bnez        $t1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1B17FCu;
    {
        const bool branch_taken_0x1b17fc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b17fc) {
            ctx->pc = 0x1B16E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b16e8;
        }
    }
    ctx->pc = 0x1B1804u;
    // 0x1b1804: 0x2a060003  slti        $a2, $s0, 0x3
    ctx->pc = 0x1b1804u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b1808: 0x14c00371  bnez        $a2, . + 4 + (0x371 << 2)
    ctx->pc = 0x1B1808u;
    {
        const bool branch_taken_0x1b1808 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1808) {
            ctx->pc = 0x1B25D0u;
            goto label_1b25d0;
        }
    }
    ctx->pc = 0x1B1810u;
    // 0x1b1810: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b1814: 0x0  nop
    ctx->pc = 0x1b1814u;
    // NOP
label_1b1818:
    // 0x1b1818: 0x28e60006  slti        $a2, $a3, 0x6
    ctx->pc = 0x1b1818u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b181c: 0x14c0ff90  bnez        $a2, . + 4 + (-0x70 << 2)
    ctx->pc = 0x1B181Cu;
    {
        const bool branch_taken_0x1b181c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b181c) {
            ctx->pc = 0x1B1660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1660;
        }
    }
    ctx->pc = 0x1B1824u;
    // 0x1b1824: 0x8e8778c8  lw          $a3, 0x78C8($s4)
    ctx->pc = 0x1b1824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30920)));
    // 0x1b1828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b182c: 0x8e8278c4  lw          $v0, 0x78C4($s4)
    ctx->pc = 0x1b182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30916)));
    // 0x1b1830: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b1830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b1834: 0x9e8378c0  lwu         $v1, 0x78C0($s4)
    ctx->pc = 0x1b1834u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 30912)));
    // 0x1b1838: 0x9e8678cc  lwu         $a2, 0x78CC($s4)
    ctx->pc = 0x1b1838u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 30924)));
    // 0x1b183c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b183cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b1840: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1b1840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1b1844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b1848: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1b1848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1b184c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b184cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1850: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1b1850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1b1854: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b1854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b1858: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b185c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b185cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b1860: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b1860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b1864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b1864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b1868: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1868u;
    SET_GPR_U32(ctx, 31, 0x1B1870u);
    ctx->pc = 0x1B186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1868u;
    // 0x1b186c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1868u, 0x1B1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1870u;
label_1b1870:
    // 0x1b1870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1874: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b1874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b1878: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b187c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b1880: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1884: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b1884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b1888: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1888u;
    SET_GPR_U32(ctx, 31, 0x1B1890u);
    ctx->pc = 0x1B188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1888u;
    // 0x1b188c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1888u, 0x1B1890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1890u;
label_1b1890:
    // 0x1b1890: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1894: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b1894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b1898: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1898u;
    SET_GPR_U32(ctx, 31, 0x1B18A0u);
    ctx->pc = 0x1B189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1898u;
    // 0x1b189c: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1898u, 0x1B18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18A0u;
label_1b18a0:
    // 0x1b18a0: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B18A0u;
    SET_GPR_U32(ctx, 31, 0x1B18A8u);
    ctx->pc = 0x1B18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18A0u;
    // 0x1b18a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B18A0u, 0x1B18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18A8u;
label_1b18a8:
    // 0x1b18a8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1b18a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b18ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b18acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18b0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1b18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1b18b4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b18b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b18b8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1b18b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b18bc: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b18bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b18c0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b18c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b18c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b18c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b18c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b18cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B18CCu;
    SET_GPR_U32(ctx, 31, 0x1B18D4u);
    ctx->pc = 0x1B18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18CCu;
    // 0x1b18d0: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B18CCu, 0x1B18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18D4u;
label_1b18d4:
    // 0x1b18d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b18d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b18d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B18DCu;
    SET_GPR_U32(ctx, 31, 0x1B18E4u);
    ctx->pc = 0x1B18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18DCu;
    // 0x1b18e0: 0x24060305  addiu       $a2, $zero, 0x305 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B18DCu, 0x1B18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18E4u;
label_1b18e4:
    // 0x1b18e4: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x1b18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1b18e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b18ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b18f0: 0x24420077  addiu       $v0, $v0, 0x77
    ctx->pc = 0x1b18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
    // 0x1b18f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b18f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b18f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b18f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b18fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b18fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b1900: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1900u;
    SET_GPR_U32(ctx, 31, 0x1B1908u);
    ctx->pc = 0x1B1904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1900u;
    // 0x1b1904: 0x23638  dsll        $a2, $v0, 24 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1900u, 0x1B1908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1908u;
label_1b1908:
    // 0x1b1908: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1B1908u;
    {
        const bool branch_taken_0x1b1908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1908u;
        // 0x1b190c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1908) {
            ctx->pc = 0x1B1A60u;
            goto label_1b1a60;
        }
    }
    ctx->pc = 0x1B1910u;
label_1b1910:
    // 0x1b1910: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1b1910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1b1914: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b1914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b1918: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1b1918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1b191c: 0x27a40570  addiu       $a0, $sp, 0x570
    ctx->pc = 0x1b191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
    // 0x1b1920: 0xc041442  jal         func_105108
    ctx->pc = 0x1B1920u;
    SET_GPR_U32(ctx, 31, 0x1B1928u);
    ctx->pc = 0x1B1924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1920u;
    // 0x1b1924: 0x24a569e0  addiu       $a1, $a1, 0x69E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B1920u, 0x1B1928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1928u;
label_1b1928:
    // 0x1b1928: 0xc7a40570  lwc1        $f4, 0x570($sp)
    ctx->pc = 0x1b1928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b192c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1b192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1b1930: 0xc7a5057c  lwc1        $f5, 0x57C($sp)
    ctx->pc = 0x1b1930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b1934: 0xc7a30578  lwc1        $f3, 0x578($sp)
    ctx->pc = 0x1b1934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b1938: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b1938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b193c: 0xc7a10574  lwc1        $f1, 0x574($sp)
    ctx->pc = 0x1b193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1940: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1b1940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1b1944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1948: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x1b1948u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[5]); }
    // 0x1b194c: 0xe7a40570  swc1        $f4, 0x570($sp)
    ctx->pc = 0x1b194cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
    // 0x1b1950: 0x46050903  div.s       $f4, $f1, $f5
    ctx->pc = 0x1b1950u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
    // 0x1b1954: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x1b1954u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[5]); }
    // 0x1b1958: 0xc7a10570  lwc1        $f1, 0x570($sp)
    ctx->pc = 0x1b1958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b195c: 0xe7a40574  swc1        $f4, 0x574($sp)
    ctx->pc = 0x1b195cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1396), bits); }
    // 0x1b1960: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b1960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b1964: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b1964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1968: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1968u;
    {
        const bool branch_taken_0x1b1968 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1968u;
        // 0x1b196c: 0xe7a30578  swc1        $f3, 0x578($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1968) {
            ctx->pc = 0x1B1980u;
            goto label_1b1980;
        }
    }
    ctx->pc = 0x1B1970u;
    // 0x1b1970: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b1974: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b1974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b1978: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1978u;
    {
        const bool branch_taken_0x1b1978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1978u;
        // 0x1b197c: 0xc7a10574  lwc1        $f1, 0x574($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1978) {
            ctx->pc = 0x1B199Cu;
            goto label_1b199c;
        }
    }
    ctx->pc = 0x1B1980u;
label_1b1980:
    // 0x1b1980: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b1980u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b1984: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b1984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1988: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b198c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b198cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b1990: 0x0  nop
    ctx->pc = 0x1b1990u;
    // NOP
    // 0x1b1994: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b1994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b1998: 0xc7a10574  lwc1        $f1, 0x574($sp)
    ctx->pc = 0x1b1998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b199c:
    // 0x1b199c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1b199cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1b19a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b19a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b19a4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b19a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b19a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1b19a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1b19ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b19acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b19b0: 0x0  nop
    ctx->pc = 0x1b19b0u;
    // NOP
    // 0x1b19b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b19b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b19b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b19b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b19bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B19BCu;
    {
        const bool branch_taken_0x1b19bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19BCu;
        // 0x1b19c0: 0x4203e  dsrl32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19bc) {
            ctx->pc = 0x1B19D4u;
            goto label_1b19d4;
        }
    }
    ctx->pc = 0x1B19C4u;
    // 0x1b19c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b19c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b19c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b19c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b19cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B19CCu;
    {
        const bool branch_taken_0x1b19cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B19CCu;
        // 0x1b19d0: 0x3103c  dsll32      $v0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19cc) {
            ctx->pc = 0x1B19F0u;
            goto label_1b19f0;
        }
    }
    ctx->pc = 0x1B19D4u;
label_1b19d4:
    // 0x1b19d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b19d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b19d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b19dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b19dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b19e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b19e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b19e4: 0x0  nop
    ctx->pc = 0x1b19e4u;
    // NOP
    // 0x1b19e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b19e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b19ec: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1b19ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1b19f0:
    // 0x1b19f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b19f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b19f4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b19f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1b19f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1b19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1b19fc: 0xc7a10578  lwc1        $f1, 0x578($sp)
    ctx->pc = 0x1b19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1a04: 0x0  nop
    ctx->pc = 0x1b1a04u;
    // NOP
    // 0x1b1a08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b1a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1a0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1A0Cu;
    {
        const bool branch_taken_0x1b1a0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A0Cu;
        // 0x1b1a10: 0x833025  or          $a2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a0c) {
            ctx->pc = 0x1B1A24u;
            goto label_1b1a24;
        }
    }
    ctx->pc = 0x1B1A14u;
    // 0x1b1a14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1a14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b1a18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b1a18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b1a1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1A1Cu;
    {
        const bool branch_taken_0x1b1a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A1Cu;
        // 0x1b1a20: 0x3103c  dsll32      $v0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a1c) {
            ctx->pc = 0x1B1A40u;
            goto label_1b1a40;
        }
    }
    ctx->pc = 0x1B1A24u;
label_1b1a24:
    // 0x1b1a24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b1a24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b1a28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1a2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b1a2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b1a30: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b1a30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b1a34: 0x0  nop
    ctx->pc = 0x1b1a34u;
    // NOP
    // 0x1b1a38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b1a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b1a3c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1b1a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1b1a40:
    // 0x1b1a40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a44: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b1a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b1a48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1a4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1a50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1A50u;
    SET_GPR_U32(ctx, 31, 0x1B1A58u);
    ctx->pc = 0x1B1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A50u;
    // 0x1b1a54: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1A50u, 0x1B1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A58u;
label_1b1a58:
    // 0x1b1a58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b1a58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b1a5c: 0x0  nop
    ctx->pc = 0x1b1a5cu;
    // NOP
label_1b1a60:
    // 0x1b1a60: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1b1a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1b1a64: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x1B1A64u;
    {
        const bool branch_taken_0x1b1a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a64) {
            ctx->pc = 0x1B1910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1910;
        }
    }
    ctx->pc = 0x1B1A6Cu;
    // 0x1b1a6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a70: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B1A70u;
    SET_GPR_U32(ctx, 31, 0x1B1A78u);
    ctx->pc = 0x1B1A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A70u;
    // 0x1b1a74: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B1A70u, 0x1B1A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A78u;
label_1b1a78:
    // 0x1b1a78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a7c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1b1a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1b1a80: 0xc070614  jal         func_1C1850
    ctx->pc = 0x1B1A80u;
    SET_GPR_U32(ctx, 31, 0x1B1A88u);
    ctx->pc = 0x1B1A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A80u;
    // 0x1b1a84: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1850u, 0x1B1A80u, 0x1B1A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A88u;
label_1b1a88:
    // 0x1b1a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1A8Cu;
    {
        const bool branch_taken_0x1b1a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A8Cu;
        // 0x1b1a90: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a8c) {
            ctx->pc = 0x1B1AB0u;
            goto label_1b1ab0;
        }
    }
    ctx->pc = 0x1B1A94u;
    // 0x1b1a94: 0x0  nop
    ctx->pc = 0x1b1a94u;
    // NOP
label_1b1a98:
    // 0x1b1a98: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b1a9c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1b1a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b1aa0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b1aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b1aa4: 0x8c820170  lw          $v0, 0x170($a0)
    ctx->pc = 0x1b1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x1b1aa8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1aac: 0xac820170  sw          $v0, 0x170($a0)
    ctx->pc = 0x1b1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 2));
label_1b1ab0:
    // 0x1b1ab0: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x1b1ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b1ab4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B1AB4u;
    {
        const bool branch_taken_0x1b1ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ab4) {
            ctx->pc = 0x1B1A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1a98;
        }
    }
    ctx->pc = 0x1B1ABCu;
    // 0x1b1abc: 0x8e8578d0  lw          $a1, 0x78D0($s4)
    ctx->pc = 0x1b1abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30928)));
    // 0x1b1ac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ac4: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1B1AC4u;
    SET_GPR_U32(ctx, 31, 0x1B1ACCu);
    ctx->pc = 0x1B1AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AC4u;
    // 0x1b1ac8: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1B1AC4u, 0x1B1ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1ACCu;
label_1b1acc:
    // 0x1b1acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ad0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1b1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1b1ad4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1ad8: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1b1ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1b1adc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ae0: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b1ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b1ae4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1AE4u;
    SET_GPR_U32(ctx, 31, 0x1B1AECu);
    ctx->pc = 0x1B1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AE4u;
    // 0x1b1ae8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1AE4u, 0x1B1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AECu;
label_1b1aec:
    // 0x1b1aec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1af0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b1af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b1af4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1AF4u;
    SET_GPR_U32(ctx, 31, 0x1B1AFCu);
    ctx->pc = 0x1B1AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AF4u;
    // 0x1b1af8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1AF4u, 0x1B1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AFCu;
label_1b1afc:
    // 0x1b1afc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b00: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B1B00u;
    SET_GPR_U32(ctx, 31, 0x1B1B08u);
    ctx->pc = 0x1B1B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B00u;
    // 0x1b1b04: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B1B00u, 0x1B1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B08u;
label_1b1b08:
    // 0x1b1b08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b10: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b1b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b1b14: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B1B14u;
    SET_GPR_U32(ctx, 31, 0x1B1B1Cu);
    ctx->pc = 0x1B1B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B14u;
    // 0x1b1b18: 0x286b8  dsll        $s0, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B1B14u, 0x1B1B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B1Cu;
label_1b1b1c:
    // 0x1b1b1c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b1b20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1b28: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1b1b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1b1b2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b1b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b1b30: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b1b34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b1b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b1b38: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B1B38u;
    SET_GPR_U32(ctx, 31, 0x1B1B40u);
    ctx->pc = 0x1B1B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B38u;
    // 0x1b1b3c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B1B38u, 0x1B1B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B40u;
label_1b1b40:
    // 0x1b1b40: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b1b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1b44: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b1b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b1b48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b1b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b1b4c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1b50: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b1b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b1b54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1b58: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1b1b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1b1b5c: 0x9e8378d0  lwu         $v1, 0x78D0($s4)
    ctx->pc = 0x1b1b5cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 30928)));
    // 0x1b1b60: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b1b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b1b64: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b1b68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1b70: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b1b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b1b74: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b1b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b1b78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1B78u;
    SET_GPR_U32(ctx, 31, 0x1B1B80u);
    ctx->pc = 0x1B1B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B78u;
    // 0x1b1b7c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1B78u, 0x1B1B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B80u;
label_1b1b80:
    // 0x1b1b80: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1b1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1b1b84: 0x3c023008  lui         $v0, 0x3008
    ctx->pc = 0x1b1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12296 << 16));
    // 0x1b1b88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b1b8c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b1b90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1b94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b98: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b1b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b1b9c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1BA4u);
    ctx->pc = 0x1B1BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B9Cu;
    // 0x1b1ba0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1B9Cu, 0x1B1BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BA4u;
label_1b1ba4:
    // 0x1b1ba4: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1b1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1b1ba8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1b1bac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1bb0: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1b1bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1b1bb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bb8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b1bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b1bbc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1BBCu;
    SET_GPR_U32(ctx, 31, 0x1B1BC4u);
    ctx->pc = 0x1B1BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BBCu;
    // 0x1b1bc0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1BBCu, 0x1B1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BC4u;
label_1b1bc4:
    // 0x1b1bc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bc8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b1bcc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1BCCu;
    SET_GPR_U32(ctx, 31, 0x1B1BD4u);
    ctx->pc = 0x1B1BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BCCu;
    // 0x1b1bd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1BCCu, 0x1B1BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BD4u;
label_1b1bd4:
    // 0x1b1bd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bdc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1BDCu;
    SET_GPR_U32(ctx, 31, 0x1B1BE4u);
    ctx->pc = 0x1B1BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BDCu;
    // 0x1b1be0: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1BDCu, 0x1B1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BE4u;
label_1b1be4:
    // 0x1b1be4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1B1BE4u;
    {
        const bool branch_taken_0x1b1be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BE4u;
        // 0x1b1be8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1be4) {
            ctx->pc = 0x1B1C90u;
            goto label_1b1c90;
        }
    }
    ctx->pc = 0x1B1BECu;
    // 0x1b1bec: 0x0  nop
    ctx->pc = 0x1b1becu;
    // NOP
label_1b1bf0:
    // 0x1b1bf0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1b1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1b1bf4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1b1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1b1bf8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b1bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b1bfc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b1bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1c00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1c04: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b1c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b1c08: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1b1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1b1c0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b1c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b1c10: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1b1c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1b1c14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b1c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b1c18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1c1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1C20u;
    SET_GPR_U32(ctx, 31, 0x1B1C28u);
    ctx->pc = 0x1B1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C20u;
    // 0x1b1c24: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1C20u, 0x1B1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C28u;
label_1b1c28:
    // 0x1b1c28: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b1c2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1c34: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1C34u;
    SET_GPR_U32(ctx, 31, 0x1B1C3Cu);
    ctx->pc = 0x1B1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C34u;
    // 0x1b1c38: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1C34u, 0x1B1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C3Cu;
label_1b1c3c:
    // 0x1b1c3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b1c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1c40: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b1c44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1c48: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b1c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b1c4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b1c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b1c50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c54: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b1c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b1c58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1C58u;
    SET_GPR_U32(ctx, 31, 0x1B1C60u);
    ctx->pc = 0x1B1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C58u;
    // 0x1b1c5c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1C58u, 0x1B1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C60u;
label_1b1c60:
    // 0x1b1c60: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1b1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1b1c64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1c6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B1C74u);
    ctx->pc = 0x1B1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C6Cu;
    // 0x1b1c70: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1C6Cu, 0x1B1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C74u;
label_1b1c74:
    // 0x1b1c74: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b1c78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c7c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b1c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b1c80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1c84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1C84u;
    SET_GPR_U32(ctx, 31, 0x1B1C8Cu);
    ctx->pc = 0x1B1C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C84u;
    // 0x1b1c88: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1C84u, 0x1B1C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C8Cu;
label_1b1c8c:
    // 0x1b1c8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1c90:
    // 0x1b1c90: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x1b1c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b1c94: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1B1C94u;
    {
        const bool branch_taken_0x1b1c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c94) {
            ctx->pc = 0x1B1BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1bf0;
        }
    }
    ctx->pc = 0x1B1C9Cu;
    // 0x1b1c9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ca0: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B1CA0u;
    SET_GPR_U32(ctx, 31, 0x1B1CA8u);
    ctx->pc = 0x1B1CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CA0u;
    // 0x1b1ca4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B1CA0u, 0x1B1CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CA8u;
label_1b1ca8:
    // 0x1b1ca8: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x1b1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1b1cac: 0x24120200  addiu       $s2, $zero, 0x200
    ctx->pc = 0x1b1cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b1cb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1CB0u;
    {
        const bool branch_taken_0x1b1cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CB0u;
        // 0x1b1cb4: 0x241100e0  addiu       $s1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cb0) {
            ctx->pc = 0x1B1CC0u;
            goto label_1b1cc0;
        }
    }
    ctx->pc = 0x1B1CB8u;
    // 0x1b1cb8: 0x129042  srl         $s2, $s2, 1
    ctx->pc = 0x1b1cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1b1cbc: 0x118842  srl         $s1, $s1, 1
    ctx->pc = 0x1b1cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1b1cc0:
    // 0x1b1cc0: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x1b1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1b1cc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1cc8: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1B1CC8u;
    {
        const bool branch_taken_0x1b1cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1cc8) {
            ctx->pc = 0x1B1DB8u;
            goto label_1b1db8;
        }
    }
    ctx->pc = 0x1B1CD0u;
    // 0x1b1cd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1cd4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B1CD4u;
    {
        const bool branch_taken_0x1b1cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1cd4) {
            ctx->pc = 0x1B1D70u;
            goto label_1b1d70;
        }
    }
    ctx->pc = 0x1B1CDCu;
    // 0x1b1cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ce0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B1CE0u;
    {
        const bool branch_taken_0x1b1ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1ce0) {
            ctx->pc = 0x1B1D28u;
            goto label_1b1d28;
        }
    }
    ctx->pc = 0x1B1CE8u;
    // 0x1b1ce8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1CE8u;
    {
        const bool branch_taken_0x1b1ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ce8) {
            ctx->pc = 0x1B1CF8u;
            goto label_1b1cf8;
        }
    }
    ctx->pc = 0x1B1CF0u;
    // 0x1b1cf0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1B1CF0u;
    {
        const bool branch_taken_0x1b1cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1cf0) {
            ctx->pc = 0x1B1DF8u;
            goto label_1b1df8;
        }
    }
    ctx->pc = 0x1B1CF8u;
label_1b1cf8:
    // 0x1b1cf8: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B1CF8u;
    SET_GPR_U32(ctx, 31, 0x1B1D00u);
    ctx->pc = 0x1B1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CF8u;
    // 0x1b1cfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B1CF8u, 0x1B1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D00u;
label_1b1d00:
    // 0x1b1d00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d08: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b1d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b1d0c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1b1d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b1d10: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1b1d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b1d14: 0xc06c2b8  jal         func_1B0AE0
    ctx->pc = 0x1B1D14u;
    SET_GPR_U32(ctx, 31, 0x1B1D1Cu);
    ctx->pc = 0x1B1D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D14u;
    // 0x1b1d18: 0x3c09ff00  lui         $t1, 0xFF00 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AE0u, 0x1B1D14u, 0x1B1D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D1Cu;
label_1b1d1c:
    // 0x1b1d1c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1B1D1Cu;
    {
        const bool branch_taken_0x1b1d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d1c) {
            ctx->pc = 0x1B1DF8u;
            goto label_1b1df8;
        }
    }
    ctx->pc = 0x1B1D24u;
    // 0x1b1d24: 0x0  nop
    ctx->pc = 0x1b1d24u;
    // NOP
label_1b1d28:
    // 0x1b1d28: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B1D28u;
    SET_GPR_U32(ctx, 31, 0x1B1D30u);
    ctx->pc = 0x1B1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D28u;
    // 0x1b1d2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B1D28u, 0x1B1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D30u;
label_1b1d30:
    // 0x1b1d30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d38: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1b1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1b1d3c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b1d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b1d40: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b1d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b1d44: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1b1d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b1d48: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b1d4c: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1b1d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b1d50: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1d54: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1b1d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b1d58: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1b1d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b1d5c: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1B1D5Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D64u);
    ctx->pc = 0x1B1D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D5Cu;
    // 0x1b1d60: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1B1D5Cu, 0x1B1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D64u;
label_1b1d64:
    // 0x1b1d64: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B1D64u;
    {
        const bool branch_taken_0x1b1d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d64) {
            ctx->pc = 0x1B1DF8u;
            goto label_1b1df8;
        }
    }
    ctx->pc = 0x1B1D6Cu;
    // 0x1b1d6c: 0x0  nop
    ctx->pc = 0x1b1d6cu;
    // NOP
label_1b1d70:
    // 0x1b1d70: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B1D70u;
    SET_GPR_U32(ctx, 31, 0x1B1D78u);
    ctx->pc = 0x1B1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D70u;
    // 0x1b1d74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B1D70u, 0x1B1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D78u;
label_1b1d78:
    // 0x1b1d78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d80: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1b1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1b1d84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b1d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b1d88: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b1d8c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1b1d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b1d90: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b1d94: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1b1d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b1d98: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1d9c: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1b1d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b1da0: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1b1da0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b1da4: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1B1DA4u;
    SET_GPR_U32(ctx, 31, 0x1B1DACu);
    ctx->pc = 0x1B1DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DA4u;
    // 0x1b1da8: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1B1DA4u, 0x1B1DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DACu;
label_1b1dac:
    // 0x1b1dac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1DACu;
    {
        const bool branch_taken_0x1b1dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1dac) {
            ctx->pc = 0x1B1DF8u;
            goto label_1b1df8;
        }
    }
    ctx->pc = 0x1B1DB4u;
    // 0x1b1db4: 0x0  nop
    ctx->pc = 0x1b1db4u;
    // NOP
label_1b1db8:
    // 0x1b1db8: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B1DB8u;
    SET_GPR_U32(ctx, 31, 0x1B1DC0u);
    ctx->pc = 0x1B1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DB8u;
    // 0x1b1dbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B1DB8u, 0x1B1DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DC0u;
label_1b1dc0:
    // 0x1b1dc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dc8: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1b1dcc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b1dd0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b1dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b1dd4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1b1dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b1dd8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b1ddc: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1b1ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b1de0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1de4: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1b1de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b1de8: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1b1de8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b1dec: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1B1DECu;
    SET_GPR_U32(ctx, 31, 0x1B1DF4u);
    ctx->pc = 0x1B1DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DECu;
    // 0x1b1df0: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1B1DECu, 0x1B1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DF4u;
label_1b1df4:
    // 0x1b1df4: 0x0  nop
    ctx->pc = 0x1b1df4u;
    // NOP
label_1b1df8:
    // 0x1b1df8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b1dfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b1dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1e00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e04: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b1e08: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1b1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b1e0c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b1e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1b1e10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b1e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b1e14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1E14u;
    SET_GPR_U32(ctx, 31, 0x1B1E1Cu);
    ctx->pc = 0x1B1E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E14u;
    // 0x1b1e18: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1E14u, 0x1B1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E1Cu;
label_1b1e1c:
    // 0x1b1e1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e24: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1E24u;
    SET_GPR_U32(ctx, 31, 0x1B1E2Cu);
    ctx->pc = 0x1B1E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E24u;
    // 0x1b1e28: 0x24060346  addiu       $a2, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1E24u, 0x1B1E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E2Cu;
label_1b1e2c:
    // 0x1b1e2c: 0x8e680020  lw          $t0, 0x20($s3)
    ctx->pc = 0x1b1e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1b1e30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1e34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1e38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1e40: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1b1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1b1e44: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1b1e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1b1e48: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1b1e48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b1e4c: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1b1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1b1e50: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1b1e50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1b1e54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b1e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b1e58: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b1e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b1e5c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b1e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b1e60: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b1e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b1e64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1E64u;
    SET_GPR_U32(ctx, 31, 0x1B1E6Cu);
    ctx->pc = 0x1B1E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E64u;
    // 0x1b1e68: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1E64u, 0x1B1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E6Cu;
label_1b1e6c:
    // 0x1b1e6c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1b1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1b1e70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e74: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b1e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b1e78: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b1e7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1e80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b1e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b1e84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1e88: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1E88u;
    SET_GPR_U32(ctx, 31, 0x1B1E90u);
    ctx->pc = 0x1B1E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E88u;
    // 0x1b1e8c: 0x34460064  ori         $a2, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1E88u, 0x1B1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E90u;
label_1b1e90:
    // 0x1b1e90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e94: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b1e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b1e98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1E98u;
    SET_GPR_U32(ctx, 31, 0x1B1EA0u);
    ctx->pc = 0x1B1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E98u;
    // 0x1b1e9c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1E98u, 0x1B1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EA0u;
label_1b1ea0:
    // 0x1b1ea0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B1EA0u;
    {
        const bool branch_taken_0x1b1ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1EA0u;
        // 0x1b1ea4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ea0) {
            ctx->pc = 0x1B1F20u;
            goto label_1b1f20;
        }
    }
    ctx->pc = 0x1B1EA8u;
label_1b1ea8:
    // 0x1b1ea8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1b1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1b1eac: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1b1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1b1eb0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b1eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b1eb4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b1eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1eb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1ebc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b1ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b1ec0: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1b1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1b1ec4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b1ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b1ec8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1b1ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1b1ecc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b1eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b1ed0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1ed4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ed8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1ED8u;
    SET_GPR_U32(ctx, 31, 0x1B1EE0u);
    ctx->pc = 0x1B1EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1ED8u;
    // 0x1b1edc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1ED8u, 0x1B1EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EE0u;
label_1b1ee0:
    // 0x1b1ee0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1ee4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1b1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1b1ee8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1eec: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1b1eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1b1ef0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b1ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b1ef4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ef8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b1ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b1efc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1EFCu;
    SET_GPR_U32(ctx, 31, 0x1B1F04u);
    ctx->pc = 0x1B1F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EFCu;
    // 0x1b1f00: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1EFCu, 0x1B1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F04u;
label_1b1f04:
    // 0x1b1f04: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1b1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1b1f08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f0c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1b1f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1b1f10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1f14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1F14u;
    SET_GPR_U32(ctx, 31, 0x1B1F1Cu);
    ctx->pc = 0x1B1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F14u;
    // 0x1b1f18: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1F14u, 0x1B1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F1Cu;
label_1b1f1c:
    // 0x1b1f1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1f20:
    // 0x1b1f20: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x1b1f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b1f24: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1B1F24u;
    {
        const bool branch_taken_0x1b1f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f24) {
            ctx->pc = 0x1B1EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1ea8;
        }
    }
    ctx->pc = 0x1B1F2Cu;
    // 0x1b1f2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1f30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b1f34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1f38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f3c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1b1f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1b1f40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1F40u;
    SET_GPR_U32(ctx, 31, 0x1B1F48u);
    ctx->pc = 0x1B1F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F40u;
    // 0x1b1f44: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1F40u, 0x1B1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F48u;
label_1b1f48:
    // 0x1b1f48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f4c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1b1f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b1f50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1F50u;
    SET_GPR_U32(ctx, 31, 0x1B1F58u);
    ctx->pc = 0x1B1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F50u;
    // 0x1b1f54: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1F50u, 0x1B1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F58u;
label_1b1f58:
    // 0x1b1f58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f5c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b1f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b1f60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1F60u;
    SET_GPR_U32(ctx, 31, 0x1B1F68u);
    ctx->pc = 0x1B1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F60u;
    // 0x1b1f64: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1F60u, 0x1B1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F68u;
label_1b1f68:
    // 0x1b1f68: 0x8e8778c8  lw          $a3, 0x78C8($s4)
    ctx->pc = 0x1b1f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30920)));
    // 0x1b1f6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f70: 0x8e8278c4  lw          $v0, 0x78C4($s4)
    ctx->pc = 0x1b1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30916)));
    // 0x1b1f74: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1b1f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1b1f78: 0x9e8378c0  lwu         $v1, 0x78C0($s4)
    ctx->pc = 0x1b1f78u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 30912)));
    // 0x1b1f7c: 0x9e8678cc  lwu         $a2, 0x78CC($s4)
    ctx->pc = 0x1b1f7cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 30924)));
    // 0x1b1f80: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b1f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b1f84: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1b1f84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1b1f88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b1f8c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1b1f8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1b1f90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b1f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1f94: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1b1f94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1b1f98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b1f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b1f9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b1f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b1fa0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b1fa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b1fa4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b1fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b1fa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b1fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b1fac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1FACu;
    SET_GPR_U32(ctx, 31, 0x1B1FB4u);
    ctx->pc = 0x1B1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FACu;
    // 0x1b1fb0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1FACu, 0x1B1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FB4u;
label_1b1fb4:
    // 0x1b1fb4: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B1FB4u;
    SET_GPR_U32(ctx, 31, 0x1B1FBCu);
    ctx->pc = 0x1B1FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FB4u;
    // 0x1b1fb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B1FB4u, 0x1B1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FBCu;
label_1b1fbc:
    // 0x1b1fbc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b1fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1fc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fc4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1b1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1b1fc8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b1fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b1fcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b1fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1fd0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b1fd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b1fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b1fd8: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1b1fd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1b1fdc: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1b1fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1b1fe0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B1FE0u;
    SET_GPR_U32(ctx, 31, 0x1B1FE8u);
    ctx->pc = 0x1B1FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FE0u;
    // 0x1b1fe4: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B1FE0u, 0x1B1FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FE8u;
label_1b1fe8:
    // 0x1b1fe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fec: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B1FECu;
    SET_GPR_U32(ctx, 31, 0x1B1FF4u);
    ctx->pc = 0x1B1FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FECu;
    // 0x1b1ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B1FECu, 0x1B1FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FF4u;
label_1b1ff4:
    // 0x1b1ff4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b1ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b1ff8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ffc: 0x121182  srl         $v0, $s2, 6
    ctx->pc = 0x1b1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 6));
    // 0x1b2000: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b2000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b2004: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2008: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1b2008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1b200c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b2010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2014: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1b2014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1b2018: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1b2018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1b201c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B201Cu;
    SET_GPR_U32(ctx, 31, 0x1B2024u);
    ctx->pc = 0x1B2020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B201Cu;
    // 0x1b2020: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B201Cu, 0x1B2024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2024u;
label_1b2024:
    // 0x1b2024: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b2024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2028: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b2028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b202c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b2030: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b2030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2034: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1b2034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1b2038: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b203c: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1b203cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1b2040: 0x9e8378d0  lwu         $v1, 0x78D0($s4)
    ctx->pc = 0x1b2040u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 30928)));
    // 0x1b2044: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b2044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b2048: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b2048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b204c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b204cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2050: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2054: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b2054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b2058: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b2058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b205c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B205Cu;
    SET_GPR_U32(ctx, 31, 0x1B2064u);
    ctx->pc = 0x1B2060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B205Cu;
    // 0x1b2060: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B205Cu, 0x1B2064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2064u;
label_1b2064:
    // 0x1b2064: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b206c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B206Cu;
    SET_GPR_U32(ctx, 31, 0x1B2074u);
    ctx->pc = 0x1B2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B206Cu;
    // 0x1b2070: 0x2406025c  addiu       $a2, $zero, 0x25C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B206Cu, 0x1B2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2074u;
label_1b2074:
    // 0x1b2074: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1b2074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1b2078: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b207c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b207cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b2080: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1b2080u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1b2084: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2088: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b208c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2090: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2090u;
    SET_GPR_U32(ctx, 31, 0x1B2098u);
    ctx->pc = 0x1B2094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2090u;
    // 0x1b2094: 0x34460064  ori         $a2, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2090u, 0x1B2098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2098u;
label_1b2098:
    // 0x1b2098: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1b2098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b209c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20a0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1b20a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b20a4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1b20a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1b20a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B20A8u;
    SET_GPR_U32(ctx, 31, 0x1B20B0u);
    ctx->pc = 0x1B20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20A8u;
    // 0x1b20ac: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B20A8u, 0x1B20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20B0u;
label_1b20b0:
    // 0x1b20b0: 0x8e680024  lw          $t0, 0x24($s3)
    ctx->pc = 0x1b20b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1b20b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b20b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b20b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b20bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b20bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b20c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b20c4: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1b20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1b20c8: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1b20c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1b20cc: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1b20ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b20d0: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1b20d4: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1b20d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1b20d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b20d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b20dc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b20dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b20e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b20e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b20e4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1b20e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b20e8: 0x81e02  srl         $v1, $t0, 24
    ctx->pc = 0x1b20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x1b20ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b20ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b20f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b20f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b20f4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1b20f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1b20f8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b20f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b20fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B20FCu;
    SET_GPR_U32(ctx, 31, 0x1B2104u);
    ctx->pc = 0x1B2100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20FCu;
    // 0x1b2100: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B20FCu, 0x1B2104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2104u;
label_1b2104:
    // 0x1b2104: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1b2104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b2108: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1b2108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b210c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b210cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b2110: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2114: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b2114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b2118: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b211c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1b211cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x1b2120: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1b2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1b2124: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1b2124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1b2128: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b212c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1b212cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b2130: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1B2130u;
    SET_GPR_U32(ctx, 31, 0x1B2138u);
    ctx->pc = 0x1B2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2130u;
    // 0x1b2134: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1B2130u, 0x1B2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2138u;
label_1b2138:
    // 0x1b2138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b213c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b213cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2140: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b2140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2144: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B2144u;
    SET_GPR_U32(ctx, 31, 0x1B214Cu);
    ctx->pc = 0x1B2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2144u;
    // 0x1b2148: 0x24070052  addiu       $a3, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B2144u, 0x1B214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B214Cu;
label_1b214c:
    // 0x1b214c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1b214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1b2150: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1b2150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1b2154: 0x3455ffff  ori         $s5, $v0, 0xFFFF
    ctx->pc = 0x1b2154u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b2158: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1b2158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1b215c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b215cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b2160: 0x8e670054  lw          $a3, 0x54($s3)
    ctx->pc = 0x1b2160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1b2164: 0x2442f4e0  addiu       $v0, $v0, -0xB20
    ctx->pc = 0x1b2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x1b2168: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b2168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b216c: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1b2170: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1b2170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1b2174: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b2174u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F4E0u));
    // 0x1b2178: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b2178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b217c: 0xe89004  sllv        $s2, $t0, $a3
    ctx->pc = 0x1b217cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b2180: 0x688804  sllv        $s1, $t0, $v1
    ctx->pc = 0x1b2180u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b2184: 0xc041442  jal         func_105108
    ctx->pc = 0x1B2184u;
    SET_GPR_U32(ctx, 31, 0x1B218Cu);
    ctx->pc = 0x1B2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2184u;
    // 0x1b2188: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1B2184u, 0x1B218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B218Cu;
label_1b218c:
    // 0x1b218c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1b218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1b2190: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x1b2190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x1b2194: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1B2194u;
    SET_GPR_U32(ctx, 31, 0x1B219Cu);
    ctx->pc = 0x1B2198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2194u;
    // 0x1b2198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1B2194u, 0x1B219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B219Cu;
label_1b219c:
    // 0x1b219c: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x1b219cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b21a0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b21a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b21a4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B21A4u;
    {
        const bool branch_taken_0x1b21a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b21a4) {
            ctx->pc = 0x1B2200u;
            goto label_1b2200;
        }
    }
    ctx->pc = 0x1B21ACu;
    // 0x1b21ac: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1b21acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b21b0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x1b21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1b21b4: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1b21b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b21b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b21bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b21bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b21c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b21c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b21c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b21c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b21c8: 0x0  nop
    ctx->pc = 0x1b21c8u;
    // NOP
    // 0x1b21cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b21d0: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1b21d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
    // 0x1b21d4: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1b21d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b21d8: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x1b21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1b21dc: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x1b21dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b21e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b21e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b21e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b21e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b21e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b21ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b21ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b21f0: 0x0  nop
    ctx->pc = 0x1b21f0u;
    // NOP
    // 0x1b21f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b21f8: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x1b21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    // 0x1b21fc: 0x0  nop
    ctx->pc = 0x1b21fcu;
    // NOP
label_1b2200:
    // 0x1b2200: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1b2204: 0x8e670074  lw          $a3, 0x74($s3)
    ctx->pc = 0x1b2204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1b2208: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1b2208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b220c: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x1b220cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b2210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2214: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b2214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2218: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b2218u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1b221c: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1b221cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1b2220: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b2220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b2224: 0xe68024  and         $s0, $a3, $a2
    ctx->pc = 0x1b2224u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x1b2228: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2228u;
    SET_GPR_U32(ctx, 31, 0x1B2230u);
    ctx->pc = 0x1B222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2228u;
    // 0x1b222c: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2228u, 0x1B2230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2230u;
label_1b2230:
    // 0x1b2230: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1b2230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b2234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2238: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x1b2238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1b223c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b223cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2240: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b2244: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2244u;
    SET_GPR_U32(ctx, 31, 0x1B224Cu);
    ctx->pc = 0x1B2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2244u;
    // 0x1b2248: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2244u, 0x1B224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B224Cu;
label_1b224c:
    // 0x1b224c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1b2250: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2254: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x1b2254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1b2258: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1b225c: 0xc070840  jal         func_1C2100
    ctx->pc = 0x1B225Cu;
    SET_GPR_U32(ctx, 31, 0x1B2264u);
    ctx->pc = 0x1B2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B225Cu;
    // 0x1b2260: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2100u, 0x1B225Cu, 0x1B2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2264u;
label_1b2264:
    // 0x1b2264: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2268: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B2268u;
    SET_GPR_U32(ctx, 31, 0x1B2270u);
    ctx->pc = 0x1B226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2268u;
    // 0x1b226c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B2268u, 0x1B2270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2270u;
label_1b2270:
    // 0x1b2270: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2274: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1b2274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1b2278: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1b2278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b227c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1b227cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b2280: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b2280u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b228c: 0x0  nop
    ctx->pc = 0x1b228cu;
    // NOP
    // 0x1b2290: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b2290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b2294: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2298: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b2298u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b229c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b229cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b22a0: 0x0  nop
    ctx->pc = 0x1b22a0u;
    // NOP
    // 0x1b22a4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1b22a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b22a8: 0x0  nop
    ctx->pc = 0x1b22a8u;
    // NOP
    // 0x1b22ac: 0x0  nop
    ctx->pc = 0x1b22acu;
    // NOP
    // 0x1b22b0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1B22B0u;
    SET_GPR_U32(ctx, 31, 0x1B22B8u);
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1B22B0u, 0x1B22B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22B8u;
label_1b22b8:
    // 0x1b22b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b22bc: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x1b22bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x1b22c0: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x1b22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b22c4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1b22c8: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1b22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b22cc: 0x72001a  div         $zero, $v1, $s2
    ctx->pc = 0x1b22ccu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b22d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b22d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b22d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b22d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b22d8: 0x0  nop
    ctx->pc = 0x1b22d8u;
    // NOP
    // 0x1b22dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b22dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b22e0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b22e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b22e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b22e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b22e8: 0x1012  mflo        $v0
    ctx->pc = 0x1b22e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b22ec: 0x72001a  div         $zero, $v1, $s2
    ctx->pc = 0x1b22ecu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b22f0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b22f4: 0x0  nop
    ctx->pc = 0x1b22f4u;
    // NOP
    // 0x1b22f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b22f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b22fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2300u;
    {
        const bool branch_taken_0x1b2300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2300u;
        // 0x1b2304: 0x46010043  div.s       $f1, $f0, $f1 (Delay Slot)
        { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2300) {
            ctx->pc = 0x1B2310u;
            goto label_1b2310;
        }
    }
    ctx->pc = 0x1B2308u;
    // 0x1b2308: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1B2308u;
    {
        const bool branch_taken_0x1b2308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2308) {
            ctx->pc = 0x1B2310u;
            goto label_1b2310;
        }
    }
    ctx->pc = 0x1B2310u;
label_1b2310:
    // 0x1b2310: 0x26030900  addiu       $v1, $s0, 0x900
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2304));
    // 0x1b2314: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b2314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2318: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x1b2318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1b231c: 0x2122023  subu        $a0, $s0, $s2
    ctx->pc = 0x1b231cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1b2320: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1b2320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1b2324: 0x24830700  addiu       $v1, $a0, 0x700
    ctx->pc = 0x1b2324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x1b2328: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b2328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b232c: 0x3c0b0041  lui         $t3, 0x41
    ctx->pc = 0x1b232cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65 << 16));
    // 0x1b2330: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b2330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b2334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b2338: 0x11b023  negu        $s6, $s1
    ctx->pc = 0x1b2338u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1b233c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1b233cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2340: 0x256bf010  addiu       $t3, $t3, -0xFF0
    ctx->pc = 0x1b2340u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963216));
    // 0x1b2344: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1B2344u;
    {
        const bool branch_taken_0x1b2344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2344u;
        // 0x1b2348: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2344) {
            ctx->pc = 0x1B25A0u;
            goto label_1b25a0;
        }
    }
    ctx->pc = 0x1B234Cu;
    // 0x1b234c: 0x0  nop
    ctx->pc = 0x1b234cu;
    // NOP
label_1b2350:
    // 0x1b2350: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2354: 0x2c3c821  addu        $t9, $s6, $v1
    ctx->pc = 0x1b2354u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1b2358: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1b2358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b235c: 0x2a32023  subu        $a0, $s5, $v1
    ctx->pc = 0x1b235cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1b2360: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x1b2360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1b2364: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x1b2364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1b2368: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1b2368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1b236c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1b236cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b2370: 0x165c021  addu        $t8, $t3, $a1
    ctx->pc = 0x1b2370u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x1b2374: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1b2374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1b2378: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x1b2378u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1b237c: 0x286100e1  slti        $at, $v1, 0xE1
    ctx->pc = 0x1b237cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1b2380: 0x24c40002  addiu       $a0, $a2, 0x2
    ctx->pc = 0x1b2380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1b2384: 0x1657821  addu        $t7, $t3, $a1
    ctx->pc = 0x1b2384u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x1b2388: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1b2388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1b238c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1b238cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1b2390: 0x1647021  addu        $t6, $t3, $a0
    ctx->pc = 0x1b2390u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1b2394: 0x0  nop
    ctx->pc = 0x1b2394u;
    // NOP
    // 0x1b2398: 0x191900  sll         $v1, $t9, 4
    ctx->pc = 0x1b2398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x1b239c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1b239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b23a0: 0x27240790  addiu       $a0, $t9, 0x790
    ctx->pc = 0x1b23a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 1936));
    // 0x1b23a4: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x1b23a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x1b23a8: 0x126823  negu        $t5, $s2
    ctx->pc = 0x1b23a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x1b23ac: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1b23acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b23b0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1b23b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b23b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b23b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b23b8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1b23b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1b23bc: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1b23bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x1b23c0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1b23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b23c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b23c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1b23c8: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x1b23c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x1b23cc: 0x3311821  addu        $v1, $t9, $s1
    ctx->pc = 0x1b23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 17)));
    // 0x1b23d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b23d4: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1b23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1b23d8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1B23D8u;
    {
        const bool branch_taken_0x1b23d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23D8u;
        // 0x1b23dc: 0x7fa30100  sq          $v1, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23d8) {
            ctx->pc = 0x1B2538u;
            goto label_1b2538;
        }
    }
    ctx->pc = 0x1B23E0u;
label_1b23e0:
    // 0x1b23e0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1b23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b23e4: 0x1b02021  addu        $a0, $t5, $s0
    ctx->pc = 0x1b23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x1b23e8: 0x8e7e0014  lw          $fp, 0x14($s3)
    ctx->pc = 0x1b23e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1b23ec: 0x1b26821  addu        $t5, $t5, $s2
    ctx->pc = 0x1b23ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 18)));
    // 0x1b23f0: 0x1831823  subu        $v1, $t4, $v1
    ctx->pc = 0x1b23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1b23f4: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x1b23f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1b23f8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1b23f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1b23fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1b23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b2400: 0x1e63821  addu        $a3, $t7, $a2
    ctx->pc = 0x1b2400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x1b2404: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x1b2404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b2408: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x1b2408u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b240c: 0x24830700  addiu       $v1, $a0, 0x700
    ctx->pc = 0x1b240cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x1b2410: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b2410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2414: 0x3061821  addu        $v1, $t8, $a2
    ctx->pc = 0x1b2414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 6)));
    // 0x1b2418: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x1b2418u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b241c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1b241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b2420: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1b2420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1b2424: 0x1c63021  addu        $a2, $t6, $a2
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x1b2428: 0x3033821  addu        $a3, $t8, $v1
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x1b242c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1b242cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b2430: 0x90e90000  lbu         $t1, 0x0($a3)
    ctx->pc = 0x1b2430u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b2434: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x1b2434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1b2438: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1b2438u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1b243c: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x1b243cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2440: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x1b2440u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1b2444: 0x3c94818  mult        $t1, $fp, $t1
    ctx->pc = 0x1b2444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1b2448: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x1b2448u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b244c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1b244cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1b2450: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b2450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2454: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x1b2454u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b2458: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x1b2458u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b245c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b245cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b2460: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1b2460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b2464: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x1b2464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x1b2468: 0x10a1823  subu        $v1, $t0, $t2
    ctx->pc = 0x1b2468u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1b246c: 0x8e84783c  lw          $a0, 0x783C($s4)
    ctx->pc = 0x1b246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b2470: 0x94103  sra         $t0, $t1, 4
    ctx->pc = 0x1b2470u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 4));
    // 0x1b2474: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x1b2474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1b2478: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1b2478u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b247c: 0x0  nop
    ctx->pc = 0x1b247cu;
    // NOP
    // 0x1b2480: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2484: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b2484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b2488: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b2488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b248c: 0x8e680018  lw          $t0, 0x18($s3)
    ctx->pc = 0x1b248cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1b2490: 0x8e84783c  lw          $a0, 0x783C($s4)
    ctx->pc = 0x1b2490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b2494: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x1b2494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b2498: 0x34103  sra         $t0, $v1, 4
    ctx->pc = 0x1b2498u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1b249c: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x1b249cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b24a0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b24a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b24a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b24a8: 0x0  nop
    ctx->pc = 0x1b24a8u;
    // NOP
    // 0x1b24ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b24acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b24b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b24b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b24b4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1b24b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b24b8: 0x8e83783c  lw          $v1, 0x783C($s4)
    ctx->pc = 0x1b24b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b24bc: 0xfc770008  sd          $s7, 0x8($v1)
    ctx->pc = 0x1b24bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 23));
    // 0x1b24c0: 0x8e83783c  lw          $v1, 0x783C($s4)
    ctx->pc = 0x1b24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b24c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b24c8: 0xae83783c  sw          $v1, 0x783C($s4)
    ctx->pc = 0x1b24c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 30780), GPR_U32(ctx, 3));
    // 0x1b24cc: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1b24ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1b24d0: 0x8e83783c  lw          $v1, 0x783C($s4)
    ctx->pc = 0x1b24d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b24d4: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x1b24d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b24d8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1b24d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1b24dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1b24dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b24e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b24e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b24e4: 0x0  nop
    ctx->pc = 0x1b24e4u;
    // NOP
    // 0x1b24e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b24e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b24ec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b24ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b24f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b24f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b24f4: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1b24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1b24f8: 0x8e84783c  lw          $a0, 0x783C($s4)
    ctx->pc = 0x1b24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b24fc: 0x70661818  mult1       $v1, $v1, $a2
    ctx->pc = 0x1b24fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b2500: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x1b2500u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1b2504: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x1b2504u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b2508: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b2508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b250c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b250cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2510: 0x0  nop
    ctx->pc = 0x1b2510u;
    // NOP
    // 0x1b2514: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b2514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b2518: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b251c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1b251cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b2520: 0x8e84783c  lw          $a0, 0x783C($s4)
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b2524: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x1b2524u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b2528: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1b2528u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1b252c: 0x8e83783c  lw          $v1, 0x783C($s4)
    ctx->pc = 0x1b252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b2530: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b2530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b2534: 0xae83783c  sw          $v1, 0x783C($s4)
    ctx->pc = 0x1b2534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 30780), GPR_U32(ctx, 3));
label_1b2538:
    // 0x1b2538: 0x29a10201  slti        $at, $t5, 0x201
    ctx->pc = 0x1b2538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1b253c: 0x1420ffa8  bnez        $at, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1B253Cu;
    {
        const bool branch_taken_0x1b253c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b253c) {
            ctx->pc = 0x1B23E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b23e0;
        }
    }
    ctx->pc = 0x1B2544u;
    // 0x1b2544: 0x27230790  addiu       $v1, $t9, 0x790
    ctx->pc = 0x1b2544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 1936));
    // 0x1b2548: 0x8e85783c  lw          $a1, 0x783C($s4)
    ctx->pc = 0x1b2548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b254c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b254cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1b2550: 0x2d1b021  addu        $s6, $s6, $s1
    ctx->pc = 0x1b2550u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1b2554: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b2554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b2558: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b2558u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b255c: 0x33438  dsll        $a2, $v1, 16
    ctx->pc = 0x1b255cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 16);
    // 0x1b2560: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1b2560u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b2564: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x1b2564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b2568: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1b2568u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b256c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b256cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b2570: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x1b2570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b2574: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1b2574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b2578: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x1b2578u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x1b257c: 0x8e83783c  lw          $v1, 0x783C($s4)
    ctx->pc = 0x1b257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b2580: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b2584: 0xae83783c  sw          $v1, 0x783C($s4)
    ctx->pc = 0x1b2584u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 30780), GPR_U32(ctx, 3));
    // 0x1b2588: 0x8e83783c  lw          $v1, 0x783C($s4)
    ctx->pc = 0x1b2588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b258c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1b258cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1b2590: 0x8e83783c  lw          $v1, 0x783C($s4)
    ctx->pc = 0x1b2590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 30780)));
    // 0x1b2594: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b2594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b2598: 0xae83783c  sw          $v1, 0x783C($s4)
    ctx->pc = 0x1b2598u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 30780), GPR_U32(ctx, 3));
    // 0x1b259c: 0x0  nop
    ctx->pc = 0x1b259cu;
    // NOP
label_1b25a0:
    // 0x1b25a0: 0x2ac100e1  slti        $at, $s6, 0xE1
    ctx->pc = 0x1b25a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1b25a4: 0x1420ff6a  bnez        $at, . + 4 + (-0x96 << 2)
    ctx->pc = 0x1B25A4u;
    {
        const bool branch_taken_0x1b25a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b25a4) {
            ctx->pc = 0x1B2350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2350;
        }
    }
    ctx->pc = 0x1B25ACu;
    // 0x1b25ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b25acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b25b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b25b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b25b8: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B25B8u;
    SET_GPR_U32(ctx, 31, 0x1B25C0u);
    ctx->pc = 0x1B25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25B8u;
    // 0x1b25bc: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B25B8u, 0x1B25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25C0u;
label_1b25c0:
    // 0x1b25c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b25c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b25c4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1B25C4u;
    SET_GPR_U32(ctx, 31, 0x1B25CCu);
    ctx->pc = 0x1B25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25C4u;
    // 0x1b25c8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1B25C4u, 0x1B25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25CCu;
label_1b25cc:
    // 0x1b25cc: 0x0  nop
    ctx->pc = 0x1b25ccu;
    // NOP
label_1b25d0:
    // 0x1b25d0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b25d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b25d4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1b25d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b25d8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1b25d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b25dc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1b25dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b25e0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b25e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b25e4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b25e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b25e8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b25e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b25ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b25ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b25f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b25f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b25f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b25f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b25f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b25f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b25fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B25FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25FCu;
        // 0x1b2600: 0x27bd0850  addiu       $sp, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B25FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2604u;
}

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

// Function: sub_001681D0
// Address: 0x1681d0 - 0x168dcc
void sub_001681D0_0x1681d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001681D0_0x1681d0");
#endif

    switch (ctx->pc) {
        case 0x1683e0u: goto label_1683e0;
        case 0x1685f8u: goto label_1685f8;
        case 0x168638u: goto label_168638;
        case 0x168660u: goto label_168660;
        case 0x1686ccu: goto label_1686cc;
        case 0x168750u: goto label_168750;
        case 0x168758u: goto label_168758;
        case 0x168770u: goto label_168770;
        case 0x16877cu: goto label_16877c;
        case 0x1688f8u: goto label_1688f8;
        case 0x16892cu: goto label_16892c;
        case 0x168a54u: goto label_168a54;
        case 0x168a74u: goto label_168a74;
        case 0x168a94u: goto label_168a94;
        case 0x168ab4u: goto label_168ab4;
        case 0x168ba8u: goto label_168ba8;
        case 0x168bd0u: goto label_168bd0;
        case 0x168c18u: goto label_168c18;
        case 0x168c60u: goto label_168c60;
        case 0x168ca8u: goto label_168ca8;
        case 0x168d50u: goto label_168d50;
        case 0x168d90u: goto label_168d90;
        default: break;
    }

    ctx->pc = 0x1681d0u;

    // 0x1681d0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1681d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1681d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1681d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1681d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1681d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1681dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1681dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1681e0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1681e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1681e4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1681e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1681e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1681e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1681ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1681ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1681f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1681f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1681f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1681f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1681f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1681f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1681fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1681fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x168200: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x168200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x168204: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x168204u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x168208: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x168208u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16820c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16820cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x168210: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x168210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x168214: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x168214u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x168218: 0x8cb60050  lw          $s6, 0x50($a1)
    ctx->pc = 0x168218u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x16821c: 0x8cb1004c  lw          $s1, 0x4C($a1)
    ctx->pc = 0x16821cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x168220: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x168220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x168224: 0x146002da  bnez        $v1, . + 4 + (0x2DA << 2)
    ctx->pc = 0x168224u;
    {
        const bool branch_taken_0x168224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168224u;
        // 0x168228: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168224) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x16822Cu;
    // 0x16822c: 0x122002d8  beqz        $s1, . + 4 + (0x2D8 << 2)
    ctx->pc = 0x16822Cu;
    {
        const bool branch_taken_0x16822c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16822c) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x168234u;
    // 0x168234: 0x96430030  lhu         $v1, 0x30($s2)
    ctx->pc = 0x168234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x168238: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x168238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x16823c: 0x106002d4  beqz        $v1, . + 4 + (0x2D4 << 2)
    ctx->pc = 0x16823Cu;
    {
        const bool branch_taken_0x16823c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16823c) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x168244u;
    // 0x168244: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x168244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168248: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x168248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x16824c: 0x146002d0  bnez        $v1, . + 4 + (0x2D0 << 2)
    ctx->pc = 0x16824Cu;
    {
        const bool branch_taken_0x16824c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16824c) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x168254u;
    // 0x168254: 0x12c002ce  beqz        $s6, . + 4 + (0x2CE << 2)
    ctx->pc = 0x168254u;
    {
        const bool branch_taken_0x168254 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x168254) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x16825Cu;
    // 0x16825c: 0x8ec40040  lw          $a0, 0x40($s6)
    ctx->pc = 0x16825cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x168260: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x168260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168264: 0x108302ca  beq         $a0, $v1, . + 4 + (0x2CA << 2)
    ctx->pc = 0x168264u;
    {
        const bool branch_taken_0x168264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x168268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168264u;
        // 0x168268: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168264) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x16826Cu;
    // 0x16826c: 0x146002c8  bnez        $v1, . + 4 + (0x2C8 << 2)
    ctx->pc = 0x16826Cu;
    {
        const bool branch_taken_0x16826c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16826c) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x168274u;
    // 0x168274: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x168274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x168278: 0x3c04be80  lui         $a0, 0xBE80
    ctx->pc = 0x168278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48768 << 16));
    // 0x16827c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16827cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168280: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x168280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x168284: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x168284u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x168288: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x168288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16828c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16828Cu;
    {
        const bool branch_taken_0x16828c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x168290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16828Cu;
        // 0x168290: 0x9637006a  lhu         $s7, 0x6A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 106)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16828c) {
            ctx->pc = 0x1682A8u;
            goto label_1682a8;
        }
    }
    ctx->pc = 0x168294u;
    // 0x168294: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x168294u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x168298: 0x240300ed  addiu       $v1, $zero, 0xED
    ctx->pc = 0x168298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x16829c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16829Cu;
    {
        const bool branch_taken_0x16829c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16829c) {
            ctx->pc = 0x1682C8u;
            goto label_1682c8;
        }
    }
    ctx->pc = 0x1682A4u;
    // 0x1682a4: 0x0  nop
    ctx->pc = 0x1682a4u;
    // NOP
label_1682a8:
    // 0x1682a8: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x1682a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1682ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1682acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1682b0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1682B0u;
    {
        const bool branch_taken_0x1682b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1682b0) {
            ctx->pc = 0x1682D0u;
            goto label_1682d0;
        }
    }
    ctx->pc = 0x1682B8u;
    // 0x1682b8: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x1682b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1682bc: 0x240300ee  addiu       $v1, $zero, 0xEE
    ctx->pc = 0x1682bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x1682c0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1682C0u;
    {
        const bool branch_taken_0x1682c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1682c0) {
            ctx->pc = 0x1682D0u;
            goto label_1682d0;
        }
    }
    ctx->pc = 0x1682C8u;
label_1682c8:
    // 0x1682c8: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1682c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1682cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1682ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1682d0:
    // 0x1682d0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x1682d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1682d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1682d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1682d8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1682D8u;
    {
        const bool branch_taken_0x1682d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1682d8) {
            ctx->pc = 0x1682F8u;
            goto label_1682f8;
        }
    }
    ctx->pc = 0x1682E0u;
    // 0x1682e0: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x1682e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1682e4: 0x24030f1a  addiu       $v1, $zero, 0xF1A
    ctx->pc = 0x1682e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3866));
    // 0x1682e8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1682E8u;
    {
        const bool branch_taken_0x1682e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1682e8) {
            ctx->pc = 0x1682F8u;
            goto label_1682f8;
        }
    }
    ctx->pc = 0x1682F0u;
    // 0x1682f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1682f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1682f4: 0x0  nop
    ctx->pc = 0x1682f4u;
    // NOP
label_1682f8:
    // 0x1682f8: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x1682f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x1682fc: 0x24843190  addiu       $a0, $a0, 0x3190
    ctx->pc = 0x1682fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12688));
    // 0x168300: 0x26c30020  addiu       $v1, $s6, 0x20
    ctx->pc = 0x168300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x168304: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x168304u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168308: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x168308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x16830c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16830cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x168310: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x168310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x168314: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x168314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168318: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x168318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x16831c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x16831cu;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x813190u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x813190u, _value); } while (0);
    // 0x168320: 0x24030802  addiu       $v1, $zero, 0x802
    ctx->pc = 0x168320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
    // 0x168324: 0xc4213194  lwc1        $f1, 0x3194($at)
    ctx->pc = 0x168324u;
    { uint32_t bits = FAST_READ32(0x813194u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168328: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x168328u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x16832c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x16832cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x168330: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x168330u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x168334: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x168334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x168338: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x168338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16833c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16833Cu;
    {
        const bool branch_taken_0x16833c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x168340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16833Cu;
        // 0x168340: 0xe4213194  swc1        $f1, 0x3194($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 12692), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16833c) {
            ctx->pc = 0x168370u;
            goto label_168370;
        }
    }
    ctx->pc = 0x168344u;
    // 0x168344: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x168344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x168348: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168348u;
    {
        const bool branch_taken_0x168348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168348u;
        // 0x16834c: 0x24030500  addiu       $v1, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168348) {
            ctx->pc = 0x168360u;
            goto label_168360;
        }
    }
    ctx->pc = 0x168350u;
    // 0x168350: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168350u;
    {
        const bool branch_taken_0x168350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x168350) {
            ctx->pc = 0x168360u;
            goto label_168360;
        }
    }
    ctx->pc = 0x168358u;
    // 0x168358: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x168358u;
    {
        const bool branch_taken_0x168358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168358) {
            ctx->pc = 0x168398u;
            goto label_168398;
        }
    }
    ctx->pc = 0x168360u;
label_168360:
    // 0x168360: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x168360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168364: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x168364u;
    {
        const bool branch_taken_0x168364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168364u;
        // 0x168368: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168364) {
            ctx->pc = 0x168398u;
            goto label_168398;
        }
    }
    ctx->pc = 0x16836Cu;
    // 0x16836c: 0x0  nop
    ctx->pc = 0x16836cu;
    // NOP
label_168370:
    // 0x168370: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x168370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x168374: 0xc4223194  lwc1        $f2, 0x3194($at)
    ctx->pc = 0x168374u;
    { uint32_t bits = FAST_READ32(0x813194u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x168378: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x168378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x16837c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x16837cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x168380: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x168380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168384: 0x0  nop
    ctx->pc = 0x168384u;
    // NOP
    // 0x168388: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x168388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16838c: 0x45010280  bc1t        . + 4 + (0x280 << 2)
    ctx->pc = 0x16838Cu;
    {
        const bool branch_taken_0x16838c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16838c) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x168394u;
    // 0x168394: 0x0  nop
    ctx->pc = 0x168394u;
    // NOP
label_168398:
    // 0x168398: 0x3c083f66  lui         $t0, 0x3F66
    ctx->pc = 0x168398u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16230 << 16));
    // 0x16839c: 0x350a6666  ori         $t2, $t0, 0x6666
    ctx->pc = 0x16839cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26214);
    // 0x1683a0: 0x3c070081  lui         $a3, 0x81
    ctx->pc = 0x1683a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)129 << 16));
    // 0x1683a4: 0x3c084280  lui         $t0, 0x4280
    ctx->pc = 0x1683a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17024 << 16));
    // 0x1683a8: 0x3c060081  lui         $a2, 0x81
    ctx->pc = 0x1683a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)129 << 16));
    // 0x1683ac: 0x3c050081  lui         $a1, 0x81
    ctx->pc = 0x1683acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)129 << 16));
    // 0x1683b0: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x1683b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x1683b4: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x1683b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x1683b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1683b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683bc: 0x448a2000  mtc1        $t2, $f4
    ctx->pc = 0x1683bcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1683c0: 0x24e72c90  addiu       $a3, $a3, 0x2C90
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11408));
    // 0x1683c4: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1683c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1683c8: 0x24c62c94  addiu       $a2, $a2, 0x2C94
    ctx->pc = 0x1683c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11412));
    // 0x1683cc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1683ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1683d0: 0x24a52c98  addiu       $a1, $a1, 0x2C98
    ctx->pc = 0x1683d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11416));
    // 0x1683d4: 0x24842c9c  addiu       $a0, $a0, 0x2C9C
    ctx->pc = 0x1683d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11420));
    // 0x1683d8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1683D8u;
    {
        const bool branch_taken_0x1683d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683D8u;
        // 0x1683dc: 0x24633090  addiu       $v1, $v1, 0x3090 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683d8) {
            ctx->pc = 0x168508u;
            goto label_168508;
        }
    }
    ctx->pc = 0x1683E0u;
label_1683e0:
    // 0x1683e0: 0x8e2c0094  lw          $t4, 0x94($s1)
    ctx->pc = 0x1683e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1683e4: 0x98180  sll         $s0, $t1, 6
    ctx->pc = 0x1683e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1683e8: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x1683e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1683ec: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x1683ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1683f0: 0x95900  sll         $t3, $t1, 4
    ctx->pc = 0x1683f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1683f4: 0xea7821  addu        $t7, $a3, $t2
    ctx->pc = 0x1683f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1683f8: 0xcb7021  addu        $t6, $a2, $t3
    ctx->pc = 0x1683f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1683fc: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x1683fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x168400: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x168400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168404: 0xaa6821  addu        $t5, $a1, $t2
    ctx->pc = 0x168404u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x168408: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x168408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x16840c: 0x1908021  addu        $s0, $t4, $s0
    ctx->pc = 0x16840cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x168410: 0x95900  sll         $t3, $t1, 4
    ctx->pc = 0x168410u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x168414: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x168414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x168418: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x168418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x16841c: 0x7a130000  lq          $s3, 0x0($s0)
    ctx->pc = 0x16841cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168420: 0x8b6021  addu        $t4, $a0, $t3
    ctx->pc = 0x168420u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x168424: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x168424u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x168428: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x168428u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x16842c: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x16842cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x168430: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x168430u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x168434: 0x7d130000  sq          $s3, 0x0($t0)
    ctx->pc = 0x168434u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 19));
    // 0x168438: 0xc42b3190  lwc1        $f11, 0x3190($at)
    ctx->pc = 0x168438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x16843c: 0xc5ea0000  lwc1        $f10, 0x0($t7)
    ctx->pc = 0x16843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x168440: 0xc5c80000  lwc1        $f8, 0x0($t6)
    ctx->pc = 0x168440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x168444: 0xc5a60000  lwc1        $f6, 0x0($t5)
    ctx->pc = 0x168444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x168448: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x168448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16844c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x16844cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x168450: 0xc4293194  lwc1        $f9, 0x3194($at)
    ctx->pc = 0x168450u;
    { uint32_t bits = FAST_READ32(0x813194u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x168454: 0x460a5a82  mul.s       $f10, $f11, $f10
    ctx->pc = 0x168454u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x168458: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x168458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x16845c: 0xc4273198  lwc1        $f7, 0x3198($at)
    ctx->pc = 0x16845cu;
    { uint32_t bits = FAST_READ32(0x813198u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x168460: 0x46084a02  mul.s       $f8, $f9, $f8
    ctx->pc = 0x168460u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x168464: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x168464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x168468: 0xc423319c  lwc1        $f3, 0x319C($at)
    ctx->pc = 0x168468u;
    { uint32_t bits = FAST_READ32(0x81319Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16846c: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x16846cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x168470: 0x46085200  add.s       $f8, $f10, $f8
    ctx->pc = 0x168470u;
    ctx->f[8] = FPU_ADD_S(ctx->f[10], ctx->f[8]);
    // 0x168474: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x168474u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x168478: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x168478u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x16847c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x16847cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x168480: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x168480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x168484: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x168484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168488: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x168488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16848c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16848Cu;
    {
        const bool branch_taken_0x16848c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16848c) {
            ctx->pc = 0x168498u;
            goto label_168498;
        }
    }
    ctx->pc = 0x168494u;
    // 0x168494: 0xe5450000  swc1        $f5, 0x0($t2)
    ctx->pc = 0x168494u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_168498:
    // 0x168498: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x168498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x16849c: 0xc4213194  lwc1        $f1, 0x3194($at)
    ctx->pc = 0x16849cu;
    { uint32_t bits = FAST_READ32(0x813194u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1684a0: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x1684a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1684a4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1684A4u;
    {
        const bool branch_taken_0x1684a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1684A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684A4u;
        // 0x1684a8: 0x95080  sll         $t2, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684a4) {
            ctx->pc = 0x1684E8u;
            goto label_1684e8;
        }
    }
    ctx->pc = 0x1684ACu;
    // 0x1684ac: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x1684acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1684b0: 0x6a5821  addu        $t3, $v1, $t2
    ctx->pc = 0x1684b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1684b4: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1684b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1684b8: 0xe85021  addu        $t2, $a3, $t0
    ctx->pc = 0x1684b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1684bc: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x1684bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1684c0: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x1684c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1684c4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1684c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1684c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1684c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1684cc: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x1684ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1684d0: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x1684d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1684d4: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1684d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1684d8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1684d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1684dc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1684dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1684e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1684E0u;
    {
        const bool branch_taken_0x1684e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684E0u;
        // 0x1684e4: 0xe5010000  swc1        $f1, 0x0($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684e0) {
            ctx->pc = 0x168500u;
            goto label_168500;
        }
    }
    ctx->pc = 0x1684E8u;
label_1684e8:
    // 0x1684e8: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x1684e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1684ec: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1684ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1684f0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1684f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1684f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1684f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1684f8: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x1684f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1684fc: 0x0  nop
    ctx->pc = 0x1684fcu;
    // NOP
label_168500:
    // 0x168500: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x168500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x168504: 0x0  nop
    ctx->pc = 0x168504u;
    // NOP
label_168508:
    // 0x168508: 0x137402b  sltu        $t0, $t1, $s7
    ctx->pc = 0x168508u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x16850c: 0x1500ffb4  bnez        $t0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x16850Cu;
    {
        const bool branch_taken_0x16850c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x16850c) {
            ctx->pc = 0x1683E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1683e0;
        }
    }
    ctx->pc = 0x168514u;
    // 0x168514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168518: 0x3c050081  lui         $a1, 0x81
    ctx->pc = 0x168518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)129 << 16));
    // 0x16851c: 0x26c40020  addiu       $a0, $s6, 0x20
    ctx->pc = 0x16851cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x168520: 0x24a53190  addiu       $a1, $a1, 0x3190
    ctx->pc = 0x168520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12688));
    // 0x168524: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x168524u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x168528: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x168528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16852c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x168530: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x168530u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x813190u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x813190u, _value); } while (0);
    // 0x168534: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x168534u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81FC90u));
    // 0x168538: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x168538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16853c: 0x83a824  and         $s5, $a0, $v1
    ctx->pc = 0x16853cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x168540: 0x12a00213  beqz        $s5, . + 4 + (0x213 << 2)
    ctx->pc = 0x168540u;
    {
        const bool branch_taken_0x168540 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x168540) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x168548u;
    // 0x168548: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x168548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16854c: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x16854cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168550: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x168550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x168554: 0x34038006  ori         $v1, $zero, 0x8006
    ctx->pc = 0x168554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x168558: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x168558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x16855c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x16855cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x168560: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x168560u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x168564: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x168564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x168568: 0xa6a20008  sh          $v0, 0x8($s5)
    ctx->pc = 0x168568u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x16856c: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x16856cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x168570: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x168570u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x168574: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x168574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x168578: 0xfea50000  sd          $a1, 0x0($s5)
    ctx->pc = 0x168578u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 5));
    // 0x16857c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x168580: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x168580u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x168584: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x168584u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168588: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x168588u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x16858c: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x16858cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x168590: 0xfea00000  sd          $zero, 0x0($s5)
    ctx->pc = 0x168590u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 0));
    // 0x168594: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x168598: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x168598u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x16859c: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x1685a0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1685a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1685a4: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1685a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1685a8: 0xfea40000  sd          $a0, 0x0($s5)
    ctx->pc = 0x1685a8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 4));
    // 0x1685ac: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1685b0: 0xfea70008  sd          $a3, 0x8($s5)
    ctx->pc = 0x1685b0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 7));
    // 0x1685b4: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1685b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1685b8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1685b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1685bc: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1685bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1685c0: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x1685c0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x1685c4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1685c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1685c8: 0xfea50008  sd          $a1, 0x8($s5)
    ctx->pc = 0x1685c8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 5));
    // 0x1685cc: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x1685ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1685d0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1685d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1685d4: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1685d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1685d8: 0xfea40000  sd          $a0, 0x0($s5)
    ctx->pc = 0x1685d8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 4));
    // 0x1685dc: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x1685dcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x1685e0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1685e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1685e4: 0xfeb40000  sd          $s4, 0x0($s5)
    ctx->pc = 0x1685e4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 20));
    // 0x1685e8: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x1685e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x1685ec: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x1685ECu;
    {
        const bool branch_taken_0x1685ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685ECu;
        // 0x1685f0: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685ec) {
            ctx->pc = 0x168CE8u;
            goto label_168ce8;
        }
    }
    ctx->pc = 0x1685F4u;
    // 0x1685f4: 0x0  nop
    ctx->pc = 0x1685f4u;
    // NOP
label_1685f8:
    // 0x1685f8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1685f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1685fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1685fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168600: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x168600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168604: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x168604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x168608: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16860c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x16860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x168610: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x168610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168614: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168614u;
    {
        const bool branch_taken_0x168614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x168618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168614u;
        // 0x168618: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168614) {
            ctx->pc = 0x168630u;
            goto label_168630;
        }
    }
    ctx->pc = 0x16861Cu;
    // 0x16861c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168620: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168620u;
    {
        const bool branch_taken_0x168620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x168620) {
            ctx->pc = 0x168630u;
            goto label_168630;
        }
    }
    ctx->pc = 0x168628u;
    // 0x168628: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x168628u;
    {
        const bool branch_taken_0x168628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168628) {
            ctx->pc = 0x1686F0u;
            goto label_1686f0;
        }
    }
    ctx->pc = 0x168630u;
label_168630:
    // 0x168630: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x168630u;
    {
        const bool branch_taken_0x168630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168630u;
        // 0x168634: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168630) {
            ctx->pc = 0x1686D8u;
            goto label_1686d8;
        }
    }
    ctx->pc = 0x168638u;
label_168638:
    // 0x168638: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x16863c: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x16863cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x168640: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x168640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x168644: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x168644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168648: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x168648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x16864c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x16864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x168650: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x168650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x168654: 0x2442ae40  addiu       $v0, $v0, -0x51C0
    ctx->pc = 0x168654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946368));
    // 0x168658: 0xc0414ca  jal         func_105328
    ctx->pc = 0x168658u;
    SET_GPR_U32(ctx, 31, 0x168660u);
    ctx->pc = 0x16865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168658u;
    // 0x16865c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x168658u, 0x168660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168660u;
label_168660:
    // 0x168660: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x168660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x168664: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x168664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x168668: 0xc4253190  lwc1        $f5, 0x3190($at)
    ctx->pc = 0x168668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16866c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x168670: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x168670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x168674: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x168674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x168678: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x168678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16867c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x16867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x168680: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x168680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x168684: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x168684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x168688: 0xc7a40190  lwc1        $f4, 0x190($sp)
    ctx->pc = 0x168688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16868c: 0x24470140  addiu       $a3, $v0, 0x140
    ctx->pc = 0x16868cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x168690: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x168690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x168694: 0x2408ffd0  addiu       $t0, $zero, -0x30
    ctx->pc = 0x168694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
    // 0x168698: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x168698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x16869c: 0xc4233198  lwc1        $f3, 0x3198($at)
    ctx->pc = 0x16869cu;
    { uint32_t bits = FAST_READ32(0x813198u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1686a0: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x1686a0u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x1686a4: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x1686a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1686a8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1686a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1686ac: 0xc421319c  lwc1        $f1, 0x319C($at)
    ctx->pc = 0x1686acu;
    { uint32_t bits = FAST_READ32(0x81319Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1686b0: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x1686b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1686b4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1686b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1686b8: 0xc4203194  lwc1        $f0, 0x3194($at)
    ctx->pc = 0x1686b8u;
    { uint32_t bits = FAST_READ32(0x813194u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1686bc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1686bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1686c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1686c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1686c4: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x1686C4u;
    SET_GPR_U32(ctx, 31, 0x1686CCu);
    ctx->pc = 0x1686C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1686C4u;
    // 0x1686c8: 0xe7a00194  swc1        $f0, 0x194($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x1686C4u, 0x1686CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1686CCu;
label_1686cc:
    // 0x1686cc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1686ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1686d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1686d4: 0x0  nop
    ctx->pc = 0x1686d4u;
    // NOP
label_1686d8:
    // 0x1686d8: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1686d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1686dc: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1686DCu;
    {
        const bool branch_taken_0x1686dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1686dc) {
            ctx->pc = 0x168638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168638;
        }
    }
    ctx->pc = 0x1686E4u;
    // 0x1686e4: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1686E4u;
    {
        const bool branch_taken_0x1686e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686e4) {
            ctx->pc = 0x168AB8u;
            goto label_168ab8;
        }
    }
    ctx->pc = 0x1686ECu;
    // 0x1686ec: 0x0  nop
    ctx->pc = 0x1686ecu;
    // NOP
label_1686f0:
    // 0x1686f0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1686f4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1686f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1686f8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1686f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1686fc: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1686fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x168700: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x168700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x168704: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168708: 0x905300c5  lbu         $s3, 0xC5($v0)
    ctx->pc = 0x168708u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 197)));
    // 0x16870c: 0x16630008  bne         $s3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16870Cu;
    {
        const bool branch_taken_0x16870c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x168710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16870Cu;
        // 0x168710: 0x3c024440  lui         $v0, 0x4440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17472 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16870c) {
            ctx->pc = 0x168730u;
            goto label_168730;
        }
    }
    ctx->pc = 0x168714u;
    // 0x168714: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x168714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168718: 0xe7b6013c  swc1        $f22, 0x13C($sp)
    ctx->pc = 0x168718u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x16871c: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x16871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x168720: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x168720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x168724: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x168724u;
    {
        const bool branch_taken_0x168724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168724u;
        // 0x168728: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168724) {
            ctx->pc = 0x168750u;
            goto label_168750;
        }
    }
    ctx->pc = 0x16872Cu;
    // 0x16872c: 0x0  nop
    ctx->pc = 0x16872cu;
    // NOP
label_168730:
    // 0x168730: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x168730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x168734: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x168734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x168738: 0x24632c90  addiu       $v1, $v1, 0x2C90
    ctx->pc = 0x168738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11408));
    // 0x16873c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x16873cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x168740: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x168740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x168744: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x168744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168748: 0xc0414d0  jal         func_105340
    ctx->pc = 0x168748u;
    SET_GPR_U32(ctx, 31, 0x168750u);
    ctx->pc = 0x16874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168748u;
    // 0x16874c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x168748u, 0x168750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168750u;
label_168750:
    // 0x168750: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x168750u;
    SET_GPR_U32(ctx, 31, 0x168758u);
    ctx->pc = 0x168754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168750u;
    // 0x168754: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x168750u, 0x168758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168758u;
label_168758:
    // 0x168758: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x168758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16875c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x16875cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x168760: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x168760u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x168764: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x168764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x168768: 0xc041460  jal         func_105180
    ctx->pc = 0x168768u;
    SET_GPR_U32(ctx, 31, 0x168770u);
    ctx->pc = 0x16876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168768u;
    // 0x16876c: 0x24c6aec0  addiu       $a2, $a2, -0x5140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x168768u, 0x168770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168770u;
label_168770:
    // 0x168770: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x168770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x168774: 0xc041472  jal         func_1051C8
    ctx->pc = 0x168774u;
    SET_GPR_U32(ctx, 31, 0x16877Cu);
    ctx->pc = 0x168778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168774u;
    // 0x168778: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x168774u, 0x16877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16877Cu;
label_16877c:
    // 0x16877c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x16877cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x168780: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x168780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x168784: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168784u;
    {
        const bool branch_taken_0x168784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168784) {
            ctx->pc = 0x1687A0u;
            goto label_1687a0;
        }
    }
    ctx->pc = 0x16878Cu;
    // 0x16878c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x16878cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x168790: 0x240200ed  addiu       $v0, $zero, 0xED
    ctx->pc = 0x168790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x168794: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168794u;
    {
        const bool branch_taken_0x168794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x168794) {
            ctx->pc = 0x1687E0u;
            goto label_1687e0;
        }
    }
    ctx->pc = 0x16879Cu;
    // 0x16879c: 0x0  nop
    ctx->pc = 0x16879cu;
    // NOP
label_1687a0:
    // 0x1687a0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1687a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1687a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1687a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1687a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1687A8u;
    {
        const bool branch_taken_0x1687a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1687a8) {
            ctx->pc = 0x1687C0u;
            goto label_1687c0;
        }
    }
    ctx->pc = 0x1687B0u;
    // 0x1687b0: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x1687b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1687b4: 0x240200ee  addiu       $v0, $zero, 0xEE
    ctx->pc = 0x1687b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x1687b8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1687B8u;
    {
        const bool branch_taken_0x1687b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1687b8) {
            ctx->pc = 0x1687E0u;
            goto label_1687e0;
        }
    }
    ctx->pc = 0x1687C0u;
label_1687c0:
    // 0x1687c0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1687c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1687c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1687c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1687c8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1687C8u;
    {
        const bool branch_taken_0x1687c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1687c8) {
            ctx->pc = 0x168800u;
            goto label_168800;
        }
    }
    ctx->pc = 0x1687D0u;
    // 0x1687d0: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x1687d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1687d4: 0x240200ef  addiu       $v0, $zero, 0xEF
    ctx->pc = 0x1687d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x1687d8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1687D8u;
    {
        const bool branch_taken_0x1687d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1687d8) {
            ctx->pc = 0x168800u;
            goto label_168800;
        }
    }
    ctx->pc = 0x1687E0u;
label_1687e0:
    // 0x1687e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1687e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1687e4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1687e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1687e8: 0x3c024440  lui         $v0, 0x4440
    ctx->pc = 0x1687e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17472 << 16));
    // 0x1687ec: 0x4483b000  mtc1        $v1, $f22
    ctx->pc = 0x1687ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1687f0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1687f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1687f4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1687F4u;
    {
        const bool branch_taken_0x1687f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687F4u;
        // 0x1687f8: 0x4600b546  mov.s       $f21, $f22 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687f4) {
            ctx->pc = 0x1688D0u;
            goto label_1688d0;
        }
    }
    ctx->pc = 0x1687FCu;
    // 0x1687fc: 0x0  nop
    ctx->pc = 0x1687fcu;
    // NOP
label_168800:
    // 0x168800: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x168800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x168804: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x168804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168808: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168808u;
    {
        const bool branch_taken_0x168808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168808) {
            ctx->pc = 0x168820u;
            goto label_168820;
        }
    }
    ctx->pc = 0x168810u;
    // 0x168810: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x168810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x168814: 0x24020f0c  addiu       $v0, $zero, 0xF0C
    ctx->pc = 0x168814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3852));
    // 0x168818: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168818u;
    {
        const bool branch_taken_0x168818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x168818) {
            ctx->pc = 0x168840u;
            goto label_168840;
        }
    }
    ctx->pc = 0x168820u;
label_168820:
    // 0x168820: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x168820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x168824: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x168824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168828: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x168828u;
    {
        const bool branch_taken_0x168828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168828) {
            ctx->pc = 0x168888u;
            goto label_168888;
        }
    }
    ctx->pc = 0x168830u;
    // 0x168830: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x168830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x168834: 0x24020f1a  addiu       $v0, $zero, 0xF1A
    ctx->pc = 0x168834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3866));
    // 0x168838: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x168838u;
    {
        const bool branch_taken_0x168838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x168838) {
            ctx->pc = 0x168888u;
            goto label_168888;
        }
    }
    ctx->pc = 0x168840u;
label_168840:
    // 0x168840: 0x3c050081  lui         $a1, 0x81
    ctx->pc = 0x168840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)129 << 16));
    // 0x168844: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x168844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x168848: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x168848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x16884c: 0x24a53090  addiu       $a1, $a1, 0x3090
    ctx->pc = 0x16884cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12432));
    // 0x168850: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x168850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x168854: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x168854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x168858: 0x3c023b08  lui         $v0, 0x3B08
    ctx->pc = 0x168858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15112 << 16));
    // 0x16885c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x16885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x168860: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x168860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x168864: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x168864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x168868: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x168868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16886c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168870: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x168870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168874: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x168874u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x168878: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x168878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x16887c: 0x46020d82  mul.s       $f22, $f1, $f2
    ctx->pc = 0x16887cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x168880: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x168880u;
    {
        const bool branch_taken_0x168880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168880u;
        // 0x168884: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168880) {
            ctx->pc = 0x1688D0u;
            goto label_1688d0;
        }
    }
    ctx->pc = 0x168888u;
label_168888:
    // 0x168888: 0x3c050081  lui         $a1, 0x81
    ctx->pc = 0x168888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)129 << 16));
    // 0x16888c: 0x3c034310  lui         $v1, 0x4310
    ctx->pc = 0x16888cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17168 << 16));
    // 0x168890: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x168890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x168894: 0x24a53090  addiu       $a1, $a1, 0x3090
    ctx->pc = 0x168894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12432));
    // 0x168898: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x168898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16889c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16889cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1688a0: 0x3c023be3  lui         $v0, 0x3BE3
    ctx->pc = 0x1688a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15331 << 16));
    // 0x1688a4: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1688a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1688a8: 0x34438e39  ori         $v1, $v0, 0x8E39
    ctx->pc = 0x1688a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x1688ac: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1688acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1688b0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1688b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1688b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1688b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1688b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1688b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1688bc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1688bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1688c0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1688c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1688c4: 0x46020d82  mul.s       $f22, $f1, $f2
    ctx->pc = 0x1688c4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1688c8: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x1688c8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1688cc: 0x0  nop
    ctx->pc = 0x1688ccu;
    // NOP
label_1688d0:
    // 0x1688d0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1688d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1688d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1688d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1688d8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1688d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1688dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1688dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688e0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1688e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1688e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1688e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1688e8: 0x0  nop
    ctx->pc = 0x1688e8u;
    // NOP
    // 0x1688ec: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1688ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1688f0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1688F0u;
    SET_GPR_U32(ctx, 31, 0x1688F8u);
    ctx->pc = 0x1688F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688F0u;
    // 0x1688f4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1688F0u, 0x1688F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1688F8u;
label_1688f8:
    // 0x1688f8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1688f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1688fc: 0x3c034260  lui         $v1, 0x4260
    ctx->pc = 0x1688fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16992 << 16));
    // 0x168900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168904: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x168904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x168908: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x168908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16890c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16890cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168910: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x168910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x168914: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x168914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x168918: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x168918u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x16891c: 0x0  nop
    ctx->pc = 0x16891cu;
    // NOP
    // 0x168920: 0x0  nop
    ctx->pc = 0x168920u;
    // NOP
    // 0x168924: 0xc0414dc  jal         func_105370
    ctx->pc = 0x168924u;
    SET_GPR_U32(ctx, 31, 0x16892Cu);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x168924u, 0x16892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16892Cu;
label_16892c:
    // 0x16892c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16892cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168930: 0x0  nop
    ctx->pc = 0x168930u;
    // NOP
    // 0x168934: 0x461605a8  max.s       $f22, $f0, $f22
    ctx->pc = 0x168934u;
    ctx->f[22] = std::max(ctx->f[0], ctx->f[22]);
    // 0x168938: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16893c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16893cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168940: 0x0  nop
    ctx->pc = 0x168940u;
    // NOP
    // 0x168944: 0x461605a9  min.s       $f22, $f0, $f22
    ctx->pc = 0x168944u;
    ctx->f[22] = std::min(ctx->f[0], ctx->f[22]);
    // 0x168948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16894c: 0x0  nop
    ctx->pc = 0x16894cu;
    // NOP
    // 0x168950: 0x46150568  max.s       $f21, $f0, $f21
    ctx->pc = 0x168950u;
    ctx->f[21] = std::max(ctx->f[0], ctx->f[21]);
    // 0x168954: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16895c: 0x0  nop
    ctx->pc = 0x16895cu;
    // NOP
    // 0x168960: 0x46150569  min.s       $f21, $f0, $f21
    ctx->pc = 0x168960u;
    ctx->f[21] = std::min(ctx->f[0], ctx->f[21]);
    // 0x168964: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x168964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x168968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16896c: 0x3c043d80  lui         $a0, 0x3D80
    ctx->pc = 0x16896cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15744 << 16));
    // 0x168970: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x168970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x168974: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x168974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x168978: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x168978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x16897c: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x16897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x168980: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x168980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168984: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x168984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x168988: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x168988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x16898c: 0x24422c90  addiu       $v0, $v0, 0x2C90
    ctx->pc = 0x16898cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x168990: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x168990u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x168994: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x168994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168998: 0x26c20020  addiu       $v0, $s6, 0x20
    ctx->pc = 0x168998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x16899c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16899cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1689a0: 0x0  nop
    ctx->pc = 0x1689a0u;
    // NOP
    // 0x1689a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1689a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1689a8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1689a8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1689ac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1689acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1689b0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1689b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1689b4: 0xdba30130  lqc2        $vf3, 0x130($sp)
    ctx->pc = 0x1689b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1689b8: 0xdba40120  lqc2        $vf4, 0x120($sp)
    ctx->pc = 0x1689b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1689bc: 0x4be30afc  vsuba.xyzw  $ACC, $vf1, $vf3
    ctx->pc = 0x1689bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1689c0: 0x4be0218f  vmsubw.xyzw $vf6, $vf4, $vf0w
    ctx->pc = 0x1689c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1689c4: 0x4be021cb  vmaddw.xyzw $vf7, $vf4, $vf0w
    ctx->pc = 0x1689c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1689c8: 0x4be21abc  vadda.xyzw  $ACC, $vf2, $vf3
    ctx->pc = 0x1689c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1689cc: 0x4be0220f  vmsubw.xyzw $vf8, $vf4, $vf0w
    ctx->pc = 0x1689ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1689d0: 0x4be0224b  vmaddw.xyzw $vf9, $vf4, $vf0w
    ctx->pc = 0x1689d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1689d4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1689d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1689d8: 0x4be62aaa  vmul.xyzw   $vf10, $vf5, $vf6
    ctx->pc = 0x1689d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1689dc: 0x4be72aea  vmul.xyzw   $vf11, $vf5, $vf7
    ctx->pc = 0x1689dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1689e0: 0x4be82b2a  vmul.xyzw   $vf12, $vf5, $vf8
    ctx->pc = 0x1689e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1689e4: 0x4be92b6a  vmul.xyzw   $vf13, $vf5, $vf9
    ctx->pc = 0x1689e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1689e8: 0x4be001bf  vmulaw.xyzw $ACC, $vf0, $vf0w
    ctx->pc = 0x1689e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1689ec: 0x4a8a28fc  vmsubax.y   $ACC, $vf5, $vf10x
    ctx->pc = 0x1689ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x1689f0: 0x4a8a28fe  vmsubaz.y   $ACC, $vf5, $vf10z
    ctx->pc = 0x1689f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x1689f4: 0x4a85298f  vmsubw.y    $vf6, $vf5, $vf5w
    ctx->pc = 0x1689f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1689f8: 0x4be001bf  vmulaw.xyzw $ACC, $vf0, $vf0w
    ctx->pc = 0x1689f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1689fc: 0x4a8b28fc  vmsubax.y   $ACC, $vf5, $vf11x
    ctx->pc = 0x1689fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x168a00: 0x4a8b28fe  vmsubaz.y   $ACC, $vf5, $vf11z
    ctx->pc = 0x168a00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x168a04: 0x4a8529cf  vmsubw.y    $vf7, $vf5, $vf5w
    ctx->pc = 0x168a04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x168a08: 0x4be001bf  vmulaw.xyzw $ACC, $vf0, $vf0w
    ctx->pc = 0x168a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x168a0c: 0x4a8c28fc  vmsubax.y   $ACC, $vf5, $vf12x
    ctx->pc = 0x168a0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x168a10: 0x4a8c28fe  vmsubaz.y   $ACC, $vf5, $vf12z
    ctx->pc = 0x168a10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x168a14: 0x4a852a0f  vmsubw.y    $vf8, $vf5, $vf5w
    ctx->pc = 0x168a14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x168a18: 0x4be001bf  vmulaw.xyzw $ACC, $vf0, $vf0w
    ctx->pc = 0x168a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x168a1c: 0x4a8d28fc  vmsubax.y   $ACC, $vf5, $vf13x
    ctx->pc = 0x168a1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x168a20: 0x4a8d28fe  vmsubaz.y   $ACC, $vf5, $vf13z
    ctx->pc = 0x168a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x168a24: 0x4a852a4f  vmsubw.y    $vf9, $vf5, $vf5w
    ctx->pc = 0x168a24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x168a28: 0xfba600e0  sqc2        $vf6, 0xE0($sp)
    ctx->pc = 0x168a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x168a2c: 0xfba700f0  sqc2        $vf7, 0xF0($sp)
    ctx->pc = 0x168a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x168a30: 0xfba80100  sqc2        $vf8, 0x100($sp)
    ctx->pc = 0x168a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x168a34: 0xfba90110  sqc2        $vf9, 0x110($sp)
    ctx->pc = 0x168a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x168a38: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x168a38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x168a3c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x168a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x168a40: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x168a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x168a44: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x168a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x168a48: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x168a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x168a4c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x168A4Cu;
    SET_GPR_U32(ctx, 31, 0x168A54u);
    ctx->pc = 0x168A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A4Cu;
    // 0x168a50: 0x2408ffd0  addiu       $t0, $zero, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x168A4Cu, 0x168A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A54u;
label_168a54:
    // 0x168a54: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x168a54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x168a58: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x168a58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x168a5c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x168a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x168a60: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x168a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x168a64: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x168a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x168a68: 0x27a70144  addiu       $a3, $sp, 0x144
    ctx->pc = 0x168a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x168a6c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x168A6Cu;
    SET_GPR_U32(ctx, 31, 0x168A74u);
    ctx->pc = 0x168A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A6Cu;
    // 0x168a70: 0x2408ffd0  addiu       $t0, $zero, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x168A6Cu, 0x168A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A74u;
label_168a74:
    // 0x168a74: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x168a74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x168a78: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x168a78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x168a7c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x168a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x168a80: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x168a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x168a84: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x168a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x168a88: 0x27a70148  addiu       $a3, $sp, 0x148
    ctx->pc = 0x168a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x168a8c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x168A8Cu;
    SET_GPR_U32(ctx, 31, 0x168A94u);
    ctx->pc = 0x168A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A8Cu;
    // 0x168a90: 0x2408ffd0  addiu       $t0, $zero, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x168A8Cu, 0x168A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A94u;
label_168a94:
    // 0x168a94: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x168a94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x168a98: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x168a98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x168a9c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x168a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x168aa0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x168aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x168aa4: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x168aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x168aa8: 0x27a7014c  addiu       $a3, $sp, 0x14C
    ctx->pc = 0x168aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x168aac: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x168AACu;
    SET_GPR_U32(ctx, 31, 0x168AB4u);
    ctx->pc = 0x168AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AACu;
    // 0x168ab0: 0x2408ffd0  addiu       $t0, $zero, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x168AACu, 0x168AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AB4u;
label_168ab4:
    // 0x168ab4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x168ab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_168ab8:
    // 0x168ab8: 0x12000089  beqz        $s0, . + 4 + (0x89 << 2)
    ctx->pc = 0x168AB8u;
    {
        const bool branch_taken_0x168ab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AB8u;
        // 0x168abc: 0x3c034180  lui         $v1, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ab8) {
            ctx->pc = 0x168CE0u;
            goto label_168ce0;
        }
    }
    ctx->pc = 0x168AC0u;
    // 0x168ac0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x168ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x168ac4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x168ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168acc: 0x0  nop
    ctx->pc = 0x168accu;
    // NOP
    // 0x168ad0: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x168ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x168ad4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x168ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168ad8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x168AD8u;
    {
        const bool branch_taken_0x168ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168ad8) {
            ctx->pc = 0x168AF0u;
            goto label_168af0;
        }
    }
    ctx->pc = 0x168AE0u;
    // 0x168ae0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168ae0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x168ae4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x168ae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x168ae8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168AE8u;
    {
        const bool branch_taken_0x168ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AE8u;
        // 0x168aec: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ae8) {
            ctx->pc = 0x168B0Cu;
            goto label_168b0c;
        }
    }
    ctx->pc = 0x168AF0u;
label_168af0:
    // 0x168af0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x168af0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x168af4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x168af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x168af8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168af8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x168afc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x168afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x168b00: 0x0  nop
    ctx->pc = 0x168b00u;
    // NOP
    // 0x168b04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x168b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x168b08: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x168b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_168b0c:
    // 0x168b0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x168b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168b10: 0x0  nop
    ctx->pc = 0x168b10u;
    // NOP
    // 0x168b14: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x168b14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x168b18: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x168b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x168b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168b20: 0x0  nop
    ctx->pc = 0x168b20u;
    // NOP
    // 0x168b24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x168b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168b28: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x168B28u;
    {
        const bool branch_taken_0x168b28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x168B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B28u;
        // 0x168b2c: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b28) {
            ctx->pc = 0x168B40u;
            goto label_168b40;
        }
    }
    ctx->pc = 0x168B30u;
    // 0x168b30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168b30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x168b34: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x168b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x168b38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168B38u;
    {
        const bool branch_taken_0x168b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B38u;
        // 0x168b3c: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b38) {
            ctx->pc = 0x168B5Cu;
            goto label_168b5c;
        }
    }
    ctx->pc = 0x168B40u;
label_168b40:
    // 0x168b40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x168b40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x168b44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x168b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x168b48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168b48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x168b4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x168b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x168b50: 0x0  nop
    ctx->pc = 0x168b50u;
    // NOP
    // 0x168b54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x168b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x168b58: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x168b58u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_168b5c:
    // 0x168b5c: 0x3c02e400  lui         $v0, 0xE400
    ctx->pc = 0x168b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58368 << 16));
    // 0x168b60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x168b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x168b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b68: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x168b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x168b6c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x168b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x168b70: 0x3c02c21c  lui         $v0, 0xC21C
    ctx->pc = 0x168b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49692 << 16));
    // 0x168b74: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x168b74u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x168b78: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x168b78u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x168b7c: 0x34422160  ori         $v0, $v0, 0x2160
    ctx->pc = 0x168b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8544);
    // 0x168b80: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x168b80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x168b84: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x168b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x168b88: 0x34431421  ori         $v1, $v0, 0x1421
    ctx->pc = 0x168b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5153);
    // 0x168b8c: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x168b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x168b90: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x168b90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x168b94: 0xfea20010  sd          $v0, 0x10($s5)
    ctx->pc = 0x168b94u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
    // 0x168b98: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x168b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x168b9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x168b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168ba0: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x168BA0u;
    SET_GPR_U32(ctx, 31, 0x168BA8u);
    ctx->pc = 0x168BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BA0u;
    // 0x168ba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x168BA0u, 0x168BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BA8u;
label_168ba8:
    // 0x168ba8: 0xfea20018  sd          $v0, 0x18($s5)
    ctx->pc = 0x168ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 2));
    // 0x168bac: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x168bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x168bb0: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x168bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x168bb4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x168bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x168bb8: 0x28600  sll         $s0, $v0, 24
    ctx->pc = 0x168bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x168bbc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x168bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x168bc0: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x168bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x168bc4: 0x24a5ae80  addiu       $a1, $a1, -0x5180
    ctx->pc = 0x168bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946432));
    // 0x168bc8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x168BC8u;
    SET_GPR_U32(ctx, 31, 0x168BD0u);
    ctx->pc = 0x168BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BC8u;
    // 0x168bcc: 0x29e00  sll         $s3, $v0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x168BC8u, 0x168BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BD0u;
label_168bd0:
    // 0x168bd0: 0xaeb00020  sw          $s0, 0x20($s5)
    ctx->pc = 0x168bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 16));
    // 0x168bd4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x168bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x168bd8: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x168bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168bdc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x168bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x168be0: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x168be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x168be4: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x168be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168be8: 0xe6a00028  swc1        $f0, 0x28($s5)
    ctx->pc = 0x168be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x168bec: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x168becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168bf0: 0xe6a0002c  swc1        $f0, 0x2C($s5)
    ctx->pc = 0x168bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x168bf4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x168bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x168bf8: 0xa6a20030  sh          $v0, 0x30($s5)
    ctx->pc = 0x168bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x168bfc: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x168bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x168c00: 0xa6a20032  sh          $v0, 0x32($s5)
    ctx->pc = 0x168c00u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x168c04: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x168c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x168c08: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x168c08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
    // 0x168c0c: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x168c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x168c10: 0xc0414dc  jal         func_105370
    ctx->pc = 0x168C10u;
    SET_GPR_U32(ctx, 31, 0x168C18u);
    ctx->pc = 0x168C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C10u;
    // 0x168c14: 0x24a5ae90  addiu       $a1, $a1, -0x5170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x168C10u, 0x168C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C18u;
label_168c18:
    // 0x168c18: 0xaeb00038  sw          $s0, 0x38($s5)
    ctx->pc = 0x168c18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 16));
    // 0x168c1c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x168c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x168c20: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x168c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c24: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x168c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x168c28: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x168c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x168c2c: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x168c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c30: 0xe6a00040  swc1        $f0, 0x40($s5)
    ctx->pc = 0x168c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x168c34: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x168c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c38: 0xe6a00044  swc1        $f0, 0x44($s5)
    ctx->pc = 0x168c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x168c3c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x168c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x168c40: 0xa6a20048  sh          $v0, 0x48($s5)
    ctx->pc = 0x168c40u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x168c44: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x168c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x168c48: 0xa6a2004a  sh          $v0, 0x4A($s5)
    ctx->pc = 0x168c48u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x168c4c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x168c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x168c50: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x168c50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
    // 0x168c54: 0xc7ac0148  lwc1        $f12, 0x148($sp)
    ctx->pc = 0x168c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x168c58: 0xc0414dc  jal         func_105370
    ctx->pc = 0x168C58u;
    SET_GPR_U32(ctx, 31, 0x168C60u);
    ctx->pc = 0x168C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C58u;
    // 0x168c5c: 0x24a5aea0  addiu       $a1, $a1, -0x5160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x168C58u, 0x168C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C60u;
label_168c60:
    // 0x168c60: 0xaeb30050  sw          $s3, 0x50($s5)
    ctx->pc = 0x168c60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 19));
    // 0x168c64: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x168c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x168c68: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x168c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c6c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x168c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x168c70: 0xe6a00054  swc1        $f0, 0x54($s5)
    ctx->pc = 0x168c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x168c74: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x168c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c78: 0xe6a00058  swc1        $f0, 0x58($s5)
    ctx->pc = 0x168c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x168c7c: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x168c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c80: 0xe6a0005c  swc1        $f0, 0x5C($s5)
    ctx->pc = 0x168c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x168c84: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x168c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x168c88: 0xa6a20060  sh          $v0, 0x60($s5)
    ctx->pc = 0x168c88u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x168c8c: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x168c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x168c90: 0xa6a20062  sh          $v0, 0x62($s5)
    ctx->pc = 0x168c90u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x168c94: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x168c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x168c98: 0xaea20064  sw          $v0, 0x64($s5)
    ctx->pc = 0x168c98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
    // 0x168c9c: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x168c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x168ca0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x168CA0u;
    SET_GPR_U32(ctx, 31, 0x168CA8u);
    ctx->pc = 0x168CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168CA0u;
    // 0x168ca4: 0x24a5aeb0  addiu       $a1, $a1, -0x5150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x168CA0u, 0x168CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CA8u;
label_168ca8:
    // 0x168ca8: 0xaeb30068  sw          $s3, 0x68($s5)
    ctx->pc = 0x168ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 19));
    // 0x168cac: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x168cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168cb0: 0xe6a0006c  swc1        $f0, 0x6C($s5)
    ctx->pc = 0x168cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    // 0x168cb4: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x168cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168cb8: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x168cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
    // 0x168cbc: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x168cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168cc0: 0xe6a00074  swc1        $f0, 0x74($s5)
    ctx->pc = 0x168cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
    // 0x168cc4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x168cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168cc8: 0xa6a20078  sh          $v0, 0x78($s5)
    ctx->pc = 0x168cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x168ccc: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x168cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x168cd0: 0xa6a2007a  sh          $v0, 0x7A($s5)
    ctx->pc = 0x168cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x168cd4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x168cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x168cd8: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x168cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
    // 0x168cdc: 0x26b50080  addiu       $s5, $s5, 0x80
    ctx->pc = 0x168cdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_168ce0:
    // 0x168ce0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x168ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x168ce4: 0x0  nop
    ctx->pc = 0x168ce4u;
    // NOP
label_168ce8:
    // 0x168ce8: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x168ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x168cec: 0x1440fe42  bnez        $v0, . + 4 + (-0x1BE << 2)
    ctx->pc = 0x168CECu;
    {
        const bool branch_taken_0x168cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CECu;
        // 0x168cf0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cec) {
            ctx->pc = 0x1685F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1685f8;
        }
    }
    ctx->pc = 0x168CF4u;
    // 0x168cf4: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x168cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x168cf8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x168cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x168cfc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x168cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x168d00: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x168d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x168d04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x168d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d08: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x168d08u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x168d0c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x168d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x168d10: 0xa6a40008  sh          $a0, 0x8($s5)
    ctx->pc = 0x168d10u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x168d14: 0x344317fd  ori         $v1, $v0, 0x17FD
    ctx->pc = 0x168d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x168d18: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x168d18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x168d1c: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x168d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x168d20: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x168d20u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x168d24: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x168d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x168d28: 0xfea40008  sd          $a0, 0x8($s5)
    ctx->pc = 0x168d28u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 4));
    // 0x168d2c: 0x344300c0  ori         $v1, $v0, 0xC0
    ctx->pc = 0x168d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x168d30: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x168d30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x168d34: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x168d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x168d38: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x168d38u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x168d3c: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x168d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x168d40: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x168d40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x168d44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d48: 0xc050c14  jal         func_143050
    ctx->pc = 0x168D48u;
    SET_GPR_U32(ctx, 31, 0x168D50u);
    ctx->pc = 0x168D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D48u;
    // 0x168d4c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143050u, 0x168D48u, 0x168D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D50u;
label_168d50:
    // 0x168d50: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x168d50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168d54: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x168d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x168d58: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x168d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x168d5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x168d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d60: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x168d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d64: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x168d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x168d68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x168d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x168d6c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x168d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x168d70: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x168d70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x168d74: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x168d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x168d78: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x168d78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x168d7c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x168d7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x168d80: 0x26a3000f  addiu       $v1, $s5, 0xF
    ctx->pc = 0x168d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
    // 0x168d84: 0x62a824  and         $s5, $v1, $v0
    ctx->pc = 0x168d84u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168d88: 0xc04c090  jal         func_130240
    ctx->pc = 0x168D88u;
    SET_GPR_U32(ctx, 31, 0x168D90u);
    ctx->pc = 0x168D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D88u;
    // 0x168d8c: 0xac35fc90  sw          $s5, -0x370($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x168D88u, 0x168D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D90u;
label_168d90:
    // 0x168d90: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x168d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x168d94: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x168d94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168d98: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x168d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x168d9c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x168d9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168da0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x168da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x168da4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x168da4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x168da8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x168da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168dac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x168dacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168db0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x168db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168db4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x168db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168db8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x168db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168dbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x168dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168dc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x168dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x168DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DC4u;
        // 0x168dc8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168DCCu;
}

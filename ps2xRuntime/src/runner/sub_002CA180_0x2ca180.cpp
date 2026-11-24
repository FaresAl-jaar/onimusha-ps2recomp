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

// Function: sub_002CA180
// Address: 0x2ca180 - 0x2caa18
void sub_002CA180_0x2ca180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA180_0x2ca180");
#endif

    switch (ctx->pc) {
        case 0x2ca290u: goto label_2ca290;
        case 0x2ca428u: goto label_2ca428;
        case 0x2ca460u: goto label_2ca460;
        case 0x2ca4b8u: goto label_2ca4b8;
        case 0x2ca61cu: goto label_2ca61c;
        case 0x2ca660u: goto label_2ca660;
        case 0x2ca6a8u: goto label_2ca6a8;
        case 0x2ca6fcu: goto label_2ca6fc;
        case 0x2ca70cu: goto label_2ca70c;
        case 0x2ca720u: goto label_2ca720;
        case 0x2ca778u: goto label_2ca778;
        case 0x2ca7a0u: goto label_2ca7a0;
        case 0x2ca7fcu: goto label_2ca7fc;
        case 0x2ca85cu: goto label_2ca85c;
        case 0x2ca8c8u: goto label_2ca8c8;
        case 0x2ca8d4u: goto label_2ca8d4;
        case 0x2ca8e8u: goto label_2ca8e8;
        case 0x2ca94cu: goto label_2ca94c;
        case 0x2ca9c0u: goto label_2ca9c0;
        default: break;
    }

    ctx->pc = 0x2ca180u;

    // 0x2ca180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ca180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ca184: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ca184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ca188: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ca188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ca18c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ca18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ca190: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ca190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ca194: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ca194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ca198: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ca198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca19c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ca19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ca1a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ca1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ca1a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ca1a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ca1a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ca1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ca1ac: 0x10600210  beqz        $v1, . + 4 + (0x210 << 2)
    ctx->pc = 0x2CA1ACu;
    {
        const bool branch_taken_0x2ca1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1ACu;
        // 0x2ca1b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca1ac) {
            ctx->pc = 0x2CA9F0u;
            goto label_2ca9f0;
        }
    }
    ctx->pc = 0x2CA1B4u;
    // 0x2ca1b4: 0x926400e8  lbu         $a0, 0xE8($s3)
    ctx->pc = 0x2ca1b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x2ca1b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ca1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca1bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ca1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca1c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ca1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ca1c4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2ca1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2ca1c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ca1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ca1cc: 0xa26400e8  sb          $a0, 0xE8($s3)
    ctx->pc = 0x2ca1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 232), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca1d0: 0x8e4806ac  lw          $t0, 0x6AC($s2)
    ctx->pc = 0x2ca1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca1d4: 0x926400e6  lbu         $a0, 0xE6($s3)
    ctx->pc = 0x2ca1d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 230)));
    // 0x2ca1d8: 0x31080010  andi        $t0, $t0, 0x10
    ctx->pc = 0x2ca1d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x2ca1dc: 0x8380a  movz        $a3, $zero, $t0
    ctx->pc = 0x2ca1dcu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x2ca1e0: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x2ca1e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2ca1e4: 0xa26400e6  sb          $a0, 0xE6($s3)
    ctx->pc = 0x2ca1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 230), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca1e8: 0x8e4706ac  lw          $a3, 0x6AC($s2)
    ctx->pc = 0x2ca1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca1ec: 0x926400e6  lbu         $a0, 0xE6($s3)
    ctx->pc = 0x2ca1ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 230)));
    // 0x2ca1f0: 0x30e72000  andi        $a3, $a3, 0x2000
    ctx->pc = 0x2ca1f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
    // 0x2ca1f4: 0x7300a  movz        $a2, $zero, $a3
    ctx->pc = 0x2ca1f4u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x2ca1f8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2ca1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2ca1fc: 0xa26400e6  sb          $a0, 0xE6($s3)
    ctx->pc = 0x2ca1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 230), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca200: 0x8e4606ac  lw          $a2, 0x6AC($s2)
    ctx->pc = 0x2ca200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca204: 0x926400e6  lbu         $a0, 0xE6($s3)
    ctx->pc = 0x2ca204u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 230)));
    // 0x2ca208: 0x30c64000  andi        $a2, $a2, 0x4000
    ctx->pc = 0x2ca208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x2ca20c: 0x6280a  movz        $a1, $zero, $a2
    ctx->pc = 0x2ca20cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x2ca210: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2ca210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2ca214: 0xa26400e6  sb          $a0, 0xE6($s3)
    ctx->pc = 0x2ca214u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 230), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca218: 0x8e4406ac  lw          $a0, 0x6AC($s2)
    ctx->pc = 0x2ca218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca21c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ca21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ca220: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CA220u;
    {
        const bool branch_taken_0x2ca220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca220) {
            ctx->pc = 0x2CA278u;
            goto label_2ca278;
        }
    }
    ctx->pc = 0x2CA228u;
    // 0x2ca228: 0xde630060  ld          $v1, 0x60($s3)
    ctx->pc = 0x2ca228u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2ca22c: 0xfe430500  sd          $v1, 0x500($s2)
    ctx->pc = 0x2ca22cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 3));
    // 0x2ca230: 0xde630068  ld          $v1, 0x68($s3)
    ctx->pc = 0x2ca230u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x2ca234: 0xfe430508  sd          $v1, 0x508($s2)
    ctx->pc = 0x2ca234u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1288), GPR_U64(ctx, 3));
    // 0x2ca238: 0x92630102  lbu         $v1, 0x102($s3)
    ctx->pc = 0x2ca238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 258)));
    // 0x2ca23c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2ca23cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ca240: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA240u;
    {
        const bool branch_taken_0x2ca240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca240) {
            ctx->pc = 0x2CA258u;
            goto label_2ca258;
        }
    }
    ctx->pc = 0x2CA248u;
    // 0x2ca248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ca248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ca24c: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x2CA24Cu;
    {
        const bool branch_taken_0x2ca24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA24Cu;
        // 0x2ca250: 0xa2630102  sb          $v1, 0x102($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 258), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca24c) {
            ctx->pc = 0x2CA9F0u;
            goto label_2ca9f0;
        }
    }
    ctx->pc = 0x2CA254u;
    // 0x2ca254: 0x0  nop
    ctx->pc = 0x2ca254u;
    // NOP
label_2ca258:
    // 0x2ca258: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x2ca258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca25c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2ca25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2ca260: 0x106001e3  beqz        $v1, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x2CA260u;
    {
        const bool branch_taken_0x2ca260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca260) {
            ctx->pc = 0x2CA9F0u;
            goto label_2ca9f0;
        }
    }
    ctx->pc = 0x2CA268u;
    // 0x2ca268: 0x96630020  lhu         $v1, 0x20($s3)
    ctx->pc = 0x2ca268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2ca26c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2ca26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2ca270: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x2CA270u;
    {
        const bool branch_taken_0x2ca270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA270u;
        // 0x2ca274: 0xa6630020  sh          $v1, 0x20($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca270) {
            ctx->pc = 0x2CA9F0u;
            goto label_2ca9f0;
        }
    }
    ctx->pc = 0x2CA278u;
label_2ca278:
    // 0x2ca278: 0x96630020  lhu         $v1, 0x20($s3)
    ctx->pc = 0x2ca278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2ca27c: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x2ca27cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x2ca280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ca280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca284: 0x24c65ef0  addiu       $a2, $a2, 0x5EF0
    ctx->pc = 0x2ca284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24304));
    // 0x2ca288: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x2ca288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x2ca28c: 0xa6630020  sh          $v1, 0x20($s3)
    ctx->pc = 0x2ca28cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 3));
label_2ca290:
    // 0x2ca290: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2ca290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ca294: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2ca294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ca298: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CA298u;
    {
        const bool branch_taken_0x2ca298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ca298) {
            ctx->pc = 0x2CA2C8u;
            goto label_2ca2c8;
        }
    }
    ctx->pc = 0x2CA2A0u;
    // 0x2ca2a0: 0x8e630088  lw          $v1, 0x88($s3)
    ctx->pc = 0x2ca2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2ca2a4: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA2A4u;
    {
        const bool branch_taken_0x2ca2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ca2a4) {
            ctx->pc = 0x2CA2B0u;
            goto label_2ca2b0;
        }
    }
    ctx->pc = 0x2CA2ACu;
    // 0x2ca2ac: 0xae640088  sw          $a0, 0x88($s3)
    ctx->pc = 0x2ca2acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 4));
label_2ca2b0:
    // 0x2ca2b0: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x2ca2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2ca2b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ca2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ca2b8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA2B8u;
    {
        const bool branch_taken_0x2ca2b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ca2b8) {
            ctx->pc = 0x2CA2C8u;
            goto label_2ca2c8;
        }
    }
    ctx->pc = 0x2CA2C0u;
    // 0x2ca2c0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2ca2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ca2c4: 0xae630074  sw          $v1, 0x74($s3)
    ctx->pc = 0x2ca2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 3));
label_2ca2c8:
    // 0x2ca2c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ca2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ca2cc: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x2ca2ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ca2d0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2CA2D0u;
    {
        const bool branch_taken_0x2ca2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2D0u;
        // 0x2ca2d4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2d0) {
            ctx->pc = 0x2CA290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca290;
        }
    }
    ctx->pc = 0x2CA2D8u;
    // 0x2ca2d8: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x2ca2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca2dc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2ca2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2ca2e0: 0x146001c3  bnez        $v1, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x2CA2E0u;
    {
        const bool branch_taken_0x2ca2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca2e0) {
            ctx->pc = 0x2CA9F0u;
            goto label_2ca9f0;
        }
    }
    ctx->pc = 0x2CA2E8u;
    // 0x2ca2e8: 0x96620020  lhu         $v0, 0x20($s3)
    ctx->pc = 0x2ca2e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2ca2ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ca2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ca2f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA2F0u;
    {
        const bool branch_taken_0x2ca2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca2f0) {
            ctx->pc = 0x2CA318u;
            goto label_2ca318;
        }
    }
    ctx->pc = 0x2CA2F8u;
    // 0x2ca2f8: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x2ca2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2ca2fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca300: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CA300u;
    {
        const bool branch_taken_0x2ca300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA300u;
        // 0x2ca304: 0xae620078  sw          $v0, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca300) {
            ctx->pc = 0x2CA330u;
            goto label_2ca330;
        }
    }
    ctx->pc = 0x2CA308u;
    // 0x2ca308: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ca308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca30c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA30Cu;
    {
        const bool branch_taken_0x2ca30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA30Cu;
        // 0x2ca310: 0xae620078  sw          $v0, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca30c) {
            ctx->pc = 0x2CA330u;
            goto label_2ca330;
        }
    }
    ctx->pc = 0x2CA314u;
    // 0x2ca314: 0x0  nop
    ctx->pc = 0x2ca314u;
    // NOP
label_2ca318:
    // 0x2ca318: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x2ca318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x2ca31c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA31Cu;
    {
        const bool branch_taken_0x2ca31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca31c) {
            ctx->pc = 0x2CA330u;
            goto label_2ca330;
        }
    }
    ctx->pc = 0x2CA324u;
    // 0x2ca324: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ca324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ca328: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x2ca328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
    // 0x2ca32c: 0x0  nop
    ctx->pc = 0x2ca32cu;
    // NOP
label_2ca330:
    // 0x2ca330: 0x8e4206ac  lw          $v0, 0x6AC($s2)
    ctx->pc = 0x2ca330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca334: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2ca334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2ca338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA338u;
    {
        const bool branch_taken_0x2ca338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca338) {
            ctx->pc = 0x2CA348u;
            goto label_2ca348;
        }
    }
    ctx->pc = 0x2CA340u;
    // 0x2ca340: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA340u;
    {
        const bool branch_taken_0x2ca340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA340u;
        // 0x2ca344: 0xa6600058  sh          $zero, 0x58($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca340) {
            ctx->pc = 0x2CA368u;
            goto label_2ca368;
        }
    }
    ctx->pc = 0x2CA348u;
label_2ca348:
    // 0x2ca348: 0x96620058  lhu         $v0, 0x58($s3)
    ctx->pc = 0x2ca348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2ca34c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca350: 0xa6620058  sh          $v0, 0x58($s3)
    ctx->pc = 0x2ca350u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca354: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ca354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ca358: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA358u;
    {
        const bool branch_taken_0x2ca358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA358u;
        // 0x2ca35c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca358) {
            ctx->pc = 0x2CA368u;
            goto label_2ca368;
        }
    }
    ctx->pc = 0x2CA360u;
    // 0x2ca360: 0xa6620058  sh          $v0, 0x58($s3)
    ctx->pc = 0x2ca360u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca364: 0x0  nop
    ctx->pc = 0x2ca364u;
    // NOP
label_2ca368:
    // 0x2ca368: 0x8e4206ac  lw          $v0, 0x6AC($s2)
    ctx->pc = 0x2ca368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca36c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2ca36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2ca370: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA370u;
    {
        const bool branch_taken_0x2ca370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca370) {
            ctx->pc = 0x2CA380u;
            goto label_2ca380;
        }
    }
    ctx->pc = 0x2CA378u;
    // 0x2ca378: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA378u;
    {
        const bool branch_taken_0x2ca378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA378u;
        // 0x2ca37c: 0xa6600056  sh          $zero, 0x56($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca378) {
            ctx->pc = 0x2CA3A0u;
            goto label_2ca3a0;
        }
    }
    ctx->pc = 0x2CA380u;
label_2ca380:
    // 0x2ca380: 0x96620056  lhu         $v0, 0x56($s3)
    ctx->pc = 0x2ca380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 86)));
    // 0x2ca384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca388: 0xa6620056  sh          $v0, 0x56($s3)
    ctx->pc = 0x2ca388u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca38c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ca38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ca390: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA390u;
    {
        const bool branch_taken_0x2ca390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA390u;
        // 0x2ca394: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca390) {
            ctx->pc = 0x2CA3A0u;
            goto label_2ca3a0;
        }
    }
    ctx->pc = 0x2CA398u;
    // 0x2ca398: 0xa6620056  sh          $v0, 0x56($s3)
    ctx->pc = 0x2ca398u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca39c: 0x0  nop
    ctx->pc = 0x2ca39cu;
    // NOP
label_2ca3a0:
    // 0x2ca3a0: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x2ca3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca3a4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ca3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2ca3a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ca3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ca3ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA3ACu;
    {
        const bool branch_taken_0x2ca3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca3ac) {
            ctx->pc = 0x2CA3C0u;
            goto label_2ca3c0;
        }
    }
    ctx->pc = 0x2CA3B4u;
    // 0x2ca3b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CA3B4u;
    {
        const bool branch_taken_0x2ca3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3B4u;
        // 0x2ca3b8: 0xa2600107  sb          $zero, 0x107($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 263), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3b4) {
            ctx->pc = 0x2CA3E0u;
            goto label_2ca3e0;
        }
    }
    ctx->pc = 0x2CA3BCu;
    // 0x2ca3bc: 0x0  nop
    ctx->pc = 0x2ca3bcu;
    // NOP
label_2ca3c0:
    // 0x2ca3c0: 0x92620107  lbu         $v0, 0x107($s3)
    ctx->pc = 0x2ca3c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 263)));
    // 0x2ca3c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca3c8: 0xa2620107  sb          $v0, 0x107($s3)
    ctx->pc = 0x2ca3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 263), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca3cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca3d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA3D0u;
    {
        const bool branch_taken_0x2ca3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA3D0u;
        // 0x2ca3d4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca3d0) {
            ctx->pc = 0x2CA3E0u;
            goto label_2ca3e0;
        }
    }
    ctx->pc = 0x2CA3D8u;
    // 0x2ca3d8: 0xa2620107  sb          $v0, 0x107($s3)
    ctx->pc = 0x2ca3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 263), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca3dc: 0x0  nop
    ctx->pc = 0x2ca3dcu;
    // NOP
label_2ca3e0:
    // 0x2ca3e0: 0x9263003b  lbu         $v1, 0x3B($s3)
    ctx->pc = 0x2ca3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 59)));
    // 0x2ca3e4: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x2ca3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x2ca3e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2ca3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2ca3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca3f0: 0x24620009  addiu       $v0, $v1, 0x9
    ctx->pc = 0x2ca3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x2ca3f4: 0xa262003b  sb          $v0, 0x3B($s3)
    ctx->pc = 0x2ca3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 59), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ca3f8: 0x9262003b  lbu         $v0, 0x3B($s3)
    ctx->pc = 0x2ca3f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 59)));
    // 0x2ca3fc: 0x3050000f  andi        $s0, $v0, 0xF
    ctx->pc = 0x2ca3fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2ca400: 0x101300  sll         $v0, $s0, 12
    ctx->pc = 0x2ca400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x2ca404: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ca404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ca408: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ca408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ca40c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2ca40cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2ca410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca414: 0x0  nop
    ctx->pc = 0x2ca414u;
    // NOP
    // 0x2ca418: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ca418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ca41c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2ca41cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca420: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2CA420u;
    SET_GPR_U32(ctx, 31, 0x2CA428u);
    ctx->pc = 0x2CA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA420u;
    // 0x2ca424: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2CA420u, 0x2CA428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA428u;
label_2ca428:
    // 0x2ca428: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2ca428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ca42c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ca42cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ca430: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2ca430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2ca434: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2ca434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca438: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2ca438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2ca43c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca43cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca440: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2ca440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca444: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca448: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2ca448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ca44c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2ca44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2ca450: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2ca450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2ca454: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2ca454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca458: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2CA458u;
    SET_GPR_U32(ctx, 31, 0x2CA460u);
    ctx->pc = 0x2CA45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA458u;
    // 0x2ca45c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2CA458u, 0x2CA460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA460u;
label_2ca460:
    // 0x2ca460: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2ca460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ca464: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2ca464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2ca468: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2ca468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2ca46c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ca46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ca470: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x2ca470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x2ca474: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ca474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca478: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2ca478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca47c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2ca47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2ca480: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca484: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2ca484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ca488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca48c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2ca48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ca490: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2ca490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2ca494: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x2ca494u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2ca498: 0x8c670094  lw          $a3, 0x94($v1)
    ctx->pc = 0x2ca498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2ca49c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2ca49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2ca4a0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ca4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ca4a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ca4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ca4a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca4ac: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ca4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca4b0: 0xc0ae874  jal         func_2BA1D0
    ctx->pc = 0x2CA4B0u;
    SET_GPR_U32(ctx, 31, 0x2CA4B8u);
    ctx->pc = 0x2CA4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA4B0u;
    // 0x2ca4b4: 0x24e60030  addiu       $a2, $a3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA1D0u, 0x2CA4B0u, 0x2CA4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4B8u;
label_2ca4b8:
    // 0x2ca4b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA4B8u;
    {
        const bool branch_taken_0x2ca4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca4b8) {
            ctx->pc = 0x2CA4E0u;
            goto label_2ca4e0;
        }
    }
    ctx->pc = 0x2CA4C0u;
    // 0x2ca4c0: 0x96630104  lhu         $v1, 0x104($s3)
    ctx->pc = 0x2ca4c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x2ca4c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ca4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca4c8: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x2ca4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x2ca4cc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2ca4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ca4d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ca4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ca4d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CA4D4u;
    {
        const bool branch_taken_0x2ca4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4D4u;
        // 0x2ca4d8: 0xa6630104  sh          $v1, 0x104($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 260), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4d4) {
            ctx->pc = 0x2CA500u;
            goto label_2ca500;
        }
    }
    ctx->pc = 0x2CA4DCu;
    // 0x2ca4dc: 0x0  nop
    ctx->pc = 0x2ca4dcu;
    // NOP
label_2ca4e0:
    // 0x2ca4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca4e4: 0x2032004  sllv        $a0, $v1, $s0
    ctx->pc = 0x2ca4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x2ca4e8: 0x96630104  lhu         $v1, 0x104($s3)
    ctx->pc = 0x2ca4e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x2ca4ec: 0x802027  not         $a0, $a0
    ctx->pc = 0x2ca4ecu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x2ca4f0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2ca4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ca4f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ca4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ca4f8: 0xa6630104  sh          $v1, 0x104($s3)
    ctx->pc = 0x2ca4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 260), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca4fc: 0x0  nop
    ctx->pc = 0x2ca4fcu;
    // NOP
label_2ca500:
    // 0x2ca500: 0x9663005a  lhu         $v1, 0x5A($s3)
    ctx->pc = 0x2ca500u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 90)));
    // 0x2ca504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ca504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ca508: 0xa663005a  sh          $v1, 0x5A($s3)
    ctx->pc = 0x2ca508u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca50c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ca50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ca510: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA510u;
    {
        const bool branch_taken_0x2ca510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA510u;
        // 0x2ca514: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca510) {
            ctx->pc = 0x2CA520u;
            goto label_2ca520;
        }
    }
    ctx->pc = 0x2CA518u;
    // 0x2ca518: 0xa663005a  sh          $v1, 0x5A($s3)
    ctx->pc = 0x2ca518u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca51c: 0x0  nop
    ctx->pc = 0x2ca51cu;
    // NOP
label_2ca520:
    // 0x2ca520: 0x96630054  lhu         $v1, 0x54($s3)
    ctx->pc = 0x2ca520u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2ca524: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA524u;
    {
        const bool branch_taken_0x2ca524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca524) {
            ctx->pc = 0x2CA548u;
            goto label_2ca548;
        }
    }
    ctx->pc = 0x2CA52Cu;
    // 0x2ca52c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ca52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ca530: 0xa6630054  sh          $v1, 0x54($s3)
    ctx->pc = 0x2ca530u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca534: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ca534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ca538: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA538u;
    {
        const bool branch_taken_0x2ca538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca538) {
            ctx->pc = 0x2CA548u;
            goto label_2ca548;
        }
    }
    ctx->pc = 0x2CA540u;
    // 0x2ca540: 0xa640078c  sh          $zero, 0x78C($s2)
    ctx->pc = 0x2ca540u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1932), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ca544: 0x0  nop
    ctx->pc = 0x2ca544u;
    // NOP
label_2ca548:
    // 0x2ca548: 0x9243083b  lbu         $v1, 0x83B($s2)
    ctx->pc = 0x2ca548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2107)));
    // 0x2ca54c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2ca54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ca550: 0x14600127  bnez        $v1, . + 4 + (0x127 << 2)
    ctx->pc = 0x2CA550u;
    {
        const bool branch_taken_0x2ca550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca550) {
            ctx->pc = 0x2CA9F0u;
            goto label_2ca9f0;
        }
    }
    ctx->pc = 0x2CA558u;
    // 0x2ca558: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x2ca558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2ca55c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2ca55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ca560: 0x14600123  bnez        $v1, . + 4 + (0x123 << 2)
    ctx->pc = 0x2CA560u;
    {
        const bool branch_taken_0x2ca560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca560) {
            ctx->pc = 0x2CA9F0u;
            goto label_2ca9f0;
        }
    }
    ctx->pc = 0x2CA568u;
    // 0x2ca568: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x2ca568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ca56c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ca56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca570: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2CA570u;
    {
        const bool branch_taken_0x2ca570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA570u;
        // 0x2ca574: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca570) {
            ctx->pc = 0x2CA7D8u;
            goto label_2ca7d8;
        }
    }
    ctx->pc = 0x2CA578u;
    // 0x2ca578: 0x14830097  bne         $a0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x2CA578u;
    {
        const bool branch_taken_0x2ca578 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ca578) {
            ctx->pc = 0x2CA7D8u;
            goto label_2ca7d8;
        }
    }
    ctx->pc = 0x2CA580u;
    // 0x2ca580: 0x92420640  lbu         $v0, 0x640($s2)
    ctx->pc = 0x2ca580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x2ca584: 0x14430094  bne         $v0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x2CA584u;
    {
        const bool branch_taken_0x2ca584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ca584) {
            ctx->pc = 0x2CA7D8u;
            goto label_2ca7d8;
        }
    }
    ctx->pc = 0x2CA58Cu;
    // 0x2ca58c: 0x8e4529c0  lw          $a1, 0x29C0($s2)
    ctx->pc = 0x2ca58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2ca590: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2ca590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2ca594: 0x8e4329c8  lw          $v1, 0x29C8($s2)
    ctx->pc = 0x2ca594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10696)));
    // 0x2ca598: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x2ca598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2ca59c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ca59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ca5a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ca5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ca5a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ca5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ca5a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ca5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ca5ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ca5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ca5b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ca5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ca5b4: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2CA5B4u;
    {
        const bool branch_taken_0x2ca5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5b4) {
            ctx->pc = 0x2CA7D8u;
            goto label_2ca7d8;
        }
    }
    ctx->pc = 0x2CA5BCu;
    // 0x2ca5bc: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x2ca5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2ca5c0: 0x278289e8  addiu       $v0, $gp, -0x7618
    ctx->pc = 0x2ca5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937064));
    // 0x2ca5c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ca5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca5c8: 0x90b0003a  lbu         $s0, 0x3A($a1)
    ctx->pc = 0x2ca5c8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x2ca5cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ca5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca5d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ca5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca5d4: 0x1050004e  beq         $v0, $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2CA5D4u;
    {
        const bool branch_taken_0x2ca5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2CA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5D4u;
        // 0x2ca5d8: 0x8c910010  lw          $s1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5d4) {
            ctx->pc = 0x2CA710u;
            goto label_2ca710;
        }
    }
    ctx->pc = 0x2CA5DCu;
    // 0x2ca5dc: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x2ca5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x2ca5e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ca5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ca5e4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2ca5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ca5e8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2ca5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ca5ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ca5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca5f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca5f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ca5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca5f8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2CA5F8u;
    {
        const bool branch_taken_0x2ca5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5f8) {
            ctx->pc = 0x2CA700u;
            goto label_2ca700;
        }
    }
    ctx->pc = 0x2CA600u;
    // 0x2ca600: 0x93828a94  lbu         $v0, -0x756C($gp)
    ctx->pc = 0x2ca600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937236)));
    // 0x2ca604: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2ca604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2ca608: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x2ca608u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ca60c: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2ca60cu;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2ca610: 0x48352001  qmfc2.i     $s5, $vf4
    ctx->pc = 0x2ca610u;
    SET_GPR_VEC(ctx, 21, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ca614: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x2CA614u;
    SET_GPR_U32(ctx, 31, 0x2CA61Cu);
    ctx->pc = 0x2CA618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA614u;
    // 0x2ca618: 0x90640002  lbu         $a0, 0x2($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x2CA614u, 0x2CA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA61Cu;
label_2ca61c:
    // 0x2ca61c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ca61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca620: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2ca620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2ca624: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ca624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca628: 0x2484d370  addiu       $a0, $a0, -0x2C90
    ctx->pc = 0x2ca628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955888));
    // 0x2ca62c: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x2ca62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2ca630: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2ca630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ca634: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ca634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca638: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ca638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ca63c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca640: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2ca640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ca644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ca644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ca648: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2ca648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2ca64c: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2ca64cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2ca650: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ca650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ca654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ca654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca658: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x2CA658u;
    SET_GPR_U32(ctx, 31, 0x2CA660u);
    ctx->pc = 0x2CA65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA658u;
    // 0x2ca65c: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x2CA658u, 0x2CA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA660u;
label_2ca660:
    // 0x2ca660: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ca660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ca664: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ca664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca668: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2ca668u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2ca66c: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2ca66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2ca670: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2ca670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2ca674: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ca674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ca678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca67c: 0x94540000  lhu         $s4, 0x0($v0)
    ctx->pc = 0x2ca67cu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca680: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2ca680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ca684: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ca684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ca688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ca688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ca68c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ca68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca690: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2ca690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2ca694: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2ca694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2ca698: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA698u;
    {
        const bool branch_taken_0x2ca698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca698) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA6A0u;
    // 0x2ca6a0: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x2CA6A0u;
    SET_GPR_U32(ctx, 31, 0x2CA6A8u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x2CA6A0u, 0x2CA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6A8u;
label_2ca6a8:
    // 0x2ca6a8: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x2ca6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x2ca6ac: 0x34219000  ori         $at, $at, 0x9000
    ctx->pc = 0x2ca6acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36864);
    // 0x2ca6b0: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x2ca6b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2ca6b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA6B4u;
    {
        const bool branch_taken_0x2ca6b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6b4) {
            ctx->pc = 0x2CA6C0u;
            goto label_2ca6c0;
        }
    }
    ctx->pc = 0x2CA6BCu;
    // 0x2ca6bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ca6bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca6c0:
    // 0x2ca6c0: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2CA6C0u;
    {
        const bool branch_taken_0x2ca6c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6C0u;
        // 0x2ca6c4: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca6c0) {
            ctx->pc = 0x2CA700u;
            goto label_2ca700;
        }
    }
    ctx->pc = 0x2CA6C8u;
    // 0x2ca6c8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2ca6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2ca6cc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2ca6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2ca6d0: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x2ca6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
    // 0x2ca6d4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2ca6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ca6d8: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x2ca6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ca6dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ca6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca6e0: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2ca6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x2ca6e4: 0x24e79eb0  addiu       $a3, $a3, -0x6150
    ctx->pc = 0x2ca6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942384));
    // 0x2ca6e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ca6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ca6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca6f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ca6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca6f4: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x2CA6F4u;
    SET_GPR_U32(ctx, 31, 0x2CA6FCu);
    ctx->pc = 0x2CA6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA6F4u;
    // 0x2ca6f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x2CA6F4u, 0x2CA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6FCu;
label_2ca6fc:
    // 0x2ca6fc: 0x0  nop
    ctx->pc = 0x2ca6fcu;
    // NOP
label_2ca700:
    // 0x2ca700: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca704: 0xc0b2b68  jal         func_2CADA0
    ctx->pc = 0x2CA704u;
    SET_GPR_U32(ctx, 31, 0x2CA70Cu);
    ctx->pc = 0x2CA708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA704u;
    // 0x2ca708: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CADA0u, 0x2CA704u, 0x2CA70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA70Cu;
label_2ca70c:
    // 0x2ca70c: 0x0  nop
    ctx->pc = 0x2ca70cu;
    // NOP
label_2ca710:
    // 0x2ca710: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x2ca710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2ca714: 0x94540000  lhu         $s4, 0x0($v0)
    ctx->pc = 0x2ca714u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca718: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2CA718u;
    SET_GPR_U32(ctx, 31, 0x2CA720u);
    ctx->pc = 0x2CA71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA718u;
    // 0x2ca71c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2CA718u, 0x2CA720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA720u;
label_2ca720:
    // 0x2ca720: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ca720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ca724: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x2ca724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x2ca728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ca728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ca72c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ca72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca730: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2ca730u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ca734: 0x92620034  lbu         $v0, 0x34($s3)
    ctx->pc = 0x2ca734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2ca738: 0x0  nop
    ctx->pc = 0x2ca738u;
    // NOP
    // 0x2ca73c: 0x1812  mflo        $v1
    ctx->pc = 0x2ca73cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ca740: 0x30650003  andi        $a1, $v1, 0x3
    ctx->pc = 0x2ca740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ca744: 0x10450016  beq         $v0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CA744u;
    {
        const bool branch_taken_0x2ca744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ca744) {
            ctx->pc = 0x2CA7A0u;
            goto label_2ca7a0;
        }
    }
    ctx->pc = 0x2CA74Cu;
    // 0x2ca74c: 0xa2650034  sb          $a1, 0x34($s3)
    ctx->pc = 0x2ca74cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 52), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ca750: 0x278289e8  addiu       $v0, $gp, -0x7618
    ctx->pc = 0x2ca750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937064));
    // 0x2ca754: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x2ca754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2ca758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ca758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca75c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca760: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2ca760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca764: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ca764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ca768: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ca768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca76c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ca76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ca770: 0xc0ae860  jal         func_2BA180
    ctx->pc = 0x2CA770u;
    SET_GPR_U32(ctx, 31, 0x2CA778u);
    ctx->pc = 0x2CA774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA770u;
    // 0x2ca774: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA180u, 0x2CA770u, 0x2CA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA778u;
label_2ca778:
    // 0x2ca778: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2ca778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ca77c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2ca77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ca780: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2ca780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ca784: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ca784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ca788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca78c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ca78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ca790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca794: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2ca794u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca798: 0xc0b20cc  jal         func_2C8330
    ctx->pc = 0x2CA798u;
    SET_GPR_U32(ctx, 31, 0x2CA7A0u);
    ctx->pc = 0x2CA79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA798u;
    // 0x2ca79c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8330u, 0x2CA798u, 0x2CA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7A0u;
label_2ca7a0:
    // 0x2ca7a0: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2ca7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2ca7a4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2ca7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2ca7a8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CA7A8u;
    {
        const bool branch_taken_0x2ca7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7A8u;
        // 0x2ca7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7a8) {
            ctx->pc = 0x2CA7D0u;
            goto label_2ca7d0;
        }
    }
    ctx->pc = 0x2CA7B0u;
    // 0x2ca7b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ca7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca7b4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA7B4u;
    {
        const bool branch_taken_0x2ca7b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ca7b4) {
            ctx->pc = 0x2CA7C4u;
            goto label_2ca7c4;
        }
    }
    ctx->pc = 0x2CA7BCu;
    // 0x2ca7bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA7BCu;
    {
        const bool branch_taken_0x2ca7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca7bc) {
            ctx->pc = 0x2CA7CCu;
            goto label_2ca7cc;
        }
    }
    ctx->pc = 0x2CA7C4u;
label_2ca7c4:
    // 0x2ca7c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA7C4u;
    {
        const bool branch_taken_0x2ca7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7C4u;
        // 0x2ca7c8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7c4) {
            ctx->pc = 0x2CA7D0u;
            goto label_2ca7d0;
        }
    }
    ctx->pc = 0x2CA7CCu;
label_2ca7cc:
    // 0x2ca7cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca7d0:
    // 0x2ca7d0: 0xaf8289e4  sw          $v0, -0x761C($gp)
    ctx->pc = 0x2ca7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 2));
    // 0x2ca7d4: 0x0  nop
    ctx->pc = 0x2ca7d4u;
    // NOP
label_2ca7d8:
    // 0x2ca7d8: 0x926300e7  lbu         $v1, 0xE7($s3)
    ctx->pc = 0x2ca7d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 231)));
    // 0x2ca7dc: 0x92620037  lbu         $v0, 0x37($s3)
    ctx->pc = 0x2ca7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2ca7e0: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2CA7E0u;
    {
        const bool branch_taken_0x2ca7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ca7e0) {
            ctx->pc = 0x2CA8A0u;
            goto label_2ca8a0;
        }
    }
    ctx->pc = 0x2CA7E8u;
    // 0x2ca7e8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ca7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ca7ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca7f0: 0x90460064  lbu         $a2, 0x64($v0)
    ctx->pc = 0x2ca7f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2ca7f4: 0xc0b21d8  jal         func_2C8760
    ctx->pc = 0x2CA7F4u;
    SET_GPR_U32(ctx, 31, 0x2CA7FCu);
    ctx->pc = 0x2CA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA7F4u;
    // 0x2ca7f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2CA7F4u, 0x2CA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA7FCu;
label_2ca7fc:
    // 0x2ca7fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CA7FCu;
    {
        const bool branch_taken_0x2ca7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca7fc) {
            ctx->pc = 0x2CA8A0u;
            goto label_2ca8a0;
        }
    }
    ctx->pc = 0x2CA804u;
    // 0x2ca804: 0xa660003c  sh          $zero, 0x3C($s3)
    ctx->pc = 0x2ca804u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ca808: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2ca808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2ca80c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CA80Cu;
    {
        const bool branch_taken_0x2ca80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA80Cu;
        // 0x2ca810: 0x938589d8  lbu         $a1, -0x7628($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca80c) {
            ctx->pc = 0x2CA868u;
            goto label_2ca868;
        }
    }
    ctx->pc = 0x2CA814u;
    // 0x2ca814: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CA814u;
    {
        const bool branch_taken_0x2ca814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA814u;
        // 0x2ca818: 0xa260004f  sb          $zero, 0x4F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca814) {
            ctx->pc = 0x2CA850u;
            goto label_2ca850;
        }
    }
    ctx->pc = 0x2CA81Cu;
    // 0x2ca81c: 0x92640037  lbu         $a0, 0x37($s3)
    ctx->pc = 0x2ca81cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2ca820: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2ca820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ca824: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ca824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ca828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ca828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca82c: 0xa264004e  sb          $a0, 0x4E($s3)
    ctx->pc = 0x2ca82cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca830: 0xa2650037  sb          $a1, 0x37($s3)
    ctx->pc = 0x2ca830u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ca834: 0xa2600032  sb          $zero, 0x32($s3)
    ctx->pc = 0x2ca834u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca838: 0xa263005f  sb          $v1, 0x5F($s3)
    ctx->pc = 0x2ca838u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca83c: 0xa6600080  sh          $zero, 0x80($s3)
    ctx->pc = 0x2ca83cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ca840: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ca840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca848: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CA848u;
    {
        const bool branch_taken_0x2ca848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA848u;
        // 0x2ca84c: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca848) {
            ctx->pc = 0x2CA878u;
            goto label_2ca878;
        }
    }
    ctx->pc = 0x2CA850u;
label_2ca850:
    // 0x2ca850: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca854: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2CA854u;
    SET_GPR_U32(ctx, 31, 0x2CA85Cu);
    ctx->pc = 0x2CA858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA854u;
    // 0x2ca858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2CA854u, 0x2CA85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA85Cu;
label_2ca85c:
    // 0x2ca85c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA85Cu;
    {
        const bool branch_taken_0x2ca85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca85c) {
            ctx->pc = 0x2CA870u;
            goto label_2ca870;
        }
    }
    ctx->pc = 0x2CA864u;
    // 0x2ca864: 0x0  nop
    ctx->pc = 0x2ca864u;
    // NOP
label_2ca868:
    // 0x2ca868: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2ca868u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ca86c: 0x0  nop
    ctx->pc = 0x2ca86cu;
    // NOP
label_2ca870:
    // 0x2ca870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca874: 0x0  nop
    ctx->pc = 0x2ca874u;
    // NOP
label_2ca878:
    // 0x2ca878: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x2ca878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x2ca87c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ca87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ca880: 0xa38089d8  sb          $zero, -0x7628($gp)
    ctx->pc = 0x2ca880u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca884: 0x24425980  addiu       $v0, $v0, 0x5980
    ctx->pc = 0x2ca884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22912));
    // 0x2ca888: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2ca888u;
    { uint32_t bits = FAST_READ32(0x4E5980u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca88c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ca88cu;
    { uint32_t bits = FAST_READ32(0x4E5984u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca890: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ca890u;
    { uint32_t bits = FAST_READ32(0x4E5988u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca894: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2ca894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2ca898: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2ca898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2ca89c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2ca89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_2ca8a0:
    // 0x2ca8a0: 0x9662003c  lhu         $v0, 0x3C($s3)
    ctx->pc = 0x2ca8a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2ca8a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CA8A4u;
    {
        const bool branch_taken_0x2ca8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8a4) {
            ctx->pc = 0x2CA8D8u;
            goto label_2ca8d8;
        }
    }
    ctx->pc = 0x2CA8ACu;
    // 0x2ca8ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ca8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ca8b0: 0xa662003c  sh          $v0, 0x3C($s3)
    ctx->pc = 0x2ca8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ca8b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ca8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ca8b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA8B8u;
    {
        const bool branch_taken_0x2ca8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8B8u;
        // 0x2ca8bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8b8) {
            ctx->pc = 0x2CA8D8u;
            goto label_2ca8d8;
        }
    }
    ctx->pc = 0x2CA8C0u;
    // 0x2ca8c0: 0xc0b226c  jal         func_2C89B0
    ctx->pc = 0x2CA8C0u;
    SET_GPR_U32(ctx, 31, 0x2CA8C8u);
    ctx->pc = 0x2CA8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8C0u;
    // 0x2ca8c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C89B0u, 0x2CA8C0u, 0x2CA8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8C8u;
label_2ca8c8:
    // 0x2ca8c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca8cc: 0xc0af0fc  jal         func_2BC3F0
    ctx->pc = 0x2CA8CCu;
    SET_GPR_U32(ctx, 31, 0x2CA8D4u);
    ctx->pc = 0x2CA8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8CCu;
    // 0x2ca8d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC3F0u, 0x2CA8CCu, 0x2CA8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8D4u;
label_2ca8d4:
    // 0x2ca8d4: 0x0  nop
    ctx->pc = 0x2ca8d4u;
    // NOP
label_2ca8d8:
    // 0x2ca8d8: 0x9266004f  lbu         $a2, 0x4F($s3)
    ctx->pc = 0x2ca8d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 79)));
    // 0x2ca8dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca8e0: 0xc0b21d8  jal         func_2C8760
    ctx->pc = 0x2CA8E0u;
    SET_GPR_U32(ctx, 31, 0x2CA8E8u);
    ctx->pc = 0x2CA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8E0u;
    // 0x2ca8e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2CA8E0u, 0x2CA8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8E8u;
label_2ca8e8:
    // 0x2ca8e8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CA8E8u;
    {
        const bool branch_taken_0x2ca8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca8e8) {
            ctx->pc = 0x2CA990u;
            goto label_2ca990;
        }
    }
    ctx->pc = 0x2CA8F0u;
    // 0x2ca8f0: 0xa660003c  sh          $zero, 0x3C($s3)
    ctx->pc = 0x2ca8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ca8f4: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2ca8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2ca8f8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CA8F8u;
    {
        const bool branch_taken_0x2ca8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA8F8u;
        // 0x2ca8fc: 0x938589d8  lbu         $a1, -0x7628($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca8f8) {
            ctx->pc = 0x2CA958u;
            goto label_2ca958;
        }
    }
    ctx->pc = 0x2CA900u;
    // 0x2ca900: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CA900u;
    {
        const bool branch_taken_0x2ca900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA900u;
        // 0x2ca904: 0xa260004f  sb          $zero, 0x4F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca900) {
            ctx->pc = 0x2CA940u;
            goto label_2ca940;
        }
    }
    ctx->pc = 0x2CA908u;
    // 0x2ca908: 0x92640037  lbu         $a0, 0x37($s3)
    ctx->pc = 0x2ca908u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2ca90c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2ca90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ca910: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ca910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ca914: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ca914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca918: 0xa264004e  sb          $a0, 0x4E($s3)
    ctx->pc = 0x2ca918u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca91c: 0xa2650037  sb          $a1, 0x37($s3)
    ctx->pc = 0x2ca91cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ca920: 0xa2600032  sb          $zero, 0x32($s3)
    ctx->pc = 0x2ca920u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca924: 0xa263005f  sb          $v1, 0x5F($s3)
    ctx->pc = 0x2ca924u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca928: 0xa6600080  sh          $zero, 0x80($s3)
    ctx->pc = 0x2ca928u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ca92c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ca92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ca930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca934: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CA934u;
    {
        const bool branch_taken_0x2ca934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA934u;
        // 0x2ca938: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca934) {
            ctx->pc = 0x2CA968u;
            goto label_2ca968;
        }
    }
    ctx->pc = 0x2CA93Cu;
    // 0x2ca93c: 0x0  nop
    ctx->pc = 0x2ca93cu;
    // NOP
label_2ca940:
    // 0x2ca940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca944: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2CA944u;
    SET_GPR_U32(ctx, 31, 0x2CA94Cu);
    ctx->pc = 0x2CA948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA944u;
    // 0x2ca948: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2CA944u, 0x2CA94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA94Cu;
label_2ca94c:
    // 0x2ca94c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA94Cu;
    {
        const bool branch_taken_0x2ca94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca94c) {
            ctx->pc = 0x2CA960u;
            goto label_2ca960;
        }
    }
    ctx->pc = 0x2CA954u;
    // 0x2ca954: 0x0  nop
    ctx->pc = 0x2ca954u;
    // NOP
label_2ca958:
    // 0x2ca958: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2ca958u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ca95c: 0x0  nop
    ctx->pc = 0x2ca95cu;
    // NOP
label_2ca960:
    // 0x2ca960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca964: 0x0  nop
    ctx->pc = 0x2ca964u;
    // NOP
label_2ca968:
    // 0x2ca968: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x2ca968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x2ca96c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ca96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ca970: 0xa38089d8  sb          $zero, -0x7628($gp)
    ctx->pc = 0x2ca970u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca974: 0x24425990  addiu       $v0, $v0, 0x5990
    ctx->pc = 0x2ca974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22928));
    // 0x2ca978: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2ca978u;
    { uint32_t bits = FAST_READ32(0x4E5990u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ca97c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ca97cu;
    { uint32_t bits = FAST_READ32(0x4E5994u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca980: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ca980u;
    { uint32_t bits = FAST_READ32(0x4E5998u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca984: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2ca984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2ca988: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2ca988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2ca98c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2ca98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_2ca990:
    // 0x2ca990: 0x92620032  lbu         $v0, 0x32($s3)
    ctx->pc = 0x2ca990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 50)));
    // 0x2ca994: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA994u;
    {
        const bool branch_taken_0x2ca994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA994u;
        // 0x2ca998: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca994) {
            ctx->pc = 0x2CA9B0u;
            goto label_2ca9b0;
        }
    }
    ctx->pc = 0x2CA99Cu;
    // 0x2ca99c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca9a0: 0x621814  dsllv       $v1, $v0, $v1
    ctx->pc = 0x2ca9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x2ca9a4: 0xde420500  ld          $v0, 0x500($s2)
    ctx->pc = 0x2ca9a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x2ca9a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca9ac: 0xfe420500  sd          $v0, 0x500($s2)
    ctx->pc = 0x2ca9acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1280), GPR_U64(ctx, 2));
label_2ca9b0:
    // 0x2ca9b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ca9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca9b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ca9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca9b8: 0xc040250  jal         func_100940
    ctx->pc = 0x2CA9B8u;
    SET_GPR_U32(ctx, 31, 0x2CA9C0u);
    ctx->pc = 0x2CA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9B8u;
    // 0x2ca9bc: 0x26790008  addiu       $t9, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2CA9B8u, 0x2CA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9C0u;
label_2ca9c0:
    // 0x2ca9c0: 0xaf8089e0  sw          $zero, -0x7620($gp)
    ctx->pc = 0x2ca9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 0));
    // 0x2ca9c4: 0xde430500  ld          $v1, 0x500($s2)
    ctx->pc = 0x2ca9c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x2ca9c8: 0x306304c4  andi        $v1, $v1, 0x4C4
    ctx->pc = 0x2ca9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1220);
    // 0x2ca9cc: 0xfe630060  sd          $v1, 0x60($s3)
    ctx->pc = 0x2ca9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 3));
    // 0x2ca9d0: 0xde430508  ld          $v1, 0x508($s2)
    ctx->pc = 0x2ca9d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1288)));
    // 0x2ca9d4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2ca9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2ca9d8: 0xfe630068  sd          $v1, 0x68($s3)
    ctx->pc = 0x2ca9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 104), GPR_U64(ctx, 3));
    // 0x2ca9dc: 0x96630020  lhu         $v1, 0x20($s3)
    ctx->pc = 0x2ca9dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2ca9e0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2ca9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2ca9e4: 0xa6630020  sh          $v1, 0x20($s3)
    ctx->pc = 0x2ca9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca9e8: 0xa2600102  sb          $zero, 0x102($s3)
    ctx->pc = 0x2ca9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 258), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca9ec: 0x0  nop
    ctx->pc = 0x2ca9ecu;
    // NOP
label_2ca9f0:
    // 0x2ca9f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ca9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ca9f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ca9f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ca9f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ca9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ca9fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ca9fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2caa00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2caa00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2caa04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2caa04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2caa08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2caa08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2caa0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2caa0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caa10: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA10u;
        // 0x2caa14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAA18u;
}

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

// Function: sub_0015B0B0
// Address: 0x15b0b0 - 0x15b438
void sub_0015B0B0_0x15b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B0B0_0x15b0b0");
#endif

    switch (ctx->pc) {
        case 0x15b120u: goto label_15b120;
        case 0x15b334u: goto label_15b334;
        case 0x15b340u: goto label_15b340;
        case 0x15b358u: goto label_15b358;
        case 0x15b364u: goto label_15b364;
        case 0x15b3d8u: goto label_15b3d8;
        default: break;
    }

    ctx->pc = 0x15b0b0u;

    // 0x15b0b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15b0b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15b0b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15b0bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15b0c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15b0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15b0c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15b0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15b0cc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x15b0ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15b0d0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x15b0d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15b0d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15b0d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15b0d8: 0x8ca8000c  lw          $t0, 0xC($a1)
    ctx->pc = 0x15b0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15b0dc: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B0DCu;
    {
        const bool branch_taken_0x15b0dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0DCu;
        // 0x15b0e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0dc) {
            ctx->pc = 0x15B0F0u;
            goto label_15b0f0;
        }
    }
    ctx->pc = 0x15B0E4u;
    // 0x15b0e4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x15b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x15b0e8: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x15B0E8u;
    {
        const bool branch_taken_0x15b0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0E8u;
        // 0x15b0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0e8) {
            ctx->pc = 0x15B410u;
            goto label_15b410;
        }
    }
    ctx->pc = 0x15B0F0u;
label_15b0f0:
    // 0x15b0f0: 0x94871a08  lhu         $a3, 0x1A08($a0)
    ctx->pc = 0x15b0f0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6664)));
    // 0x15b0f4: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x15b0f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b0f8: 0x8082b  sltu        $at, $zero, $t0
    ctx->pc = 0x15b0f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x15b0fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15b0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b100: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15b100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b104: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15b104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b108: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x15b108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x15b10c: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x15b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15b110: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x15b110u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x15b114: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x15B114u;
    {
        const bool branch_taken_0x15b114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B114u;
        // 0x15b118: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b114) {
            ctx->pc = 0x15B178u;
            goto label_15b178;
        }
    }
    ctx->pc = 0x15B11Cu;
    // 0x15b11c: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x15b11cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_15b120:
    // 0x15b120: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x15b120u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b124: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B124u;
    {
        const bool branch_taken_0x15b124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x15b124) {
            ctx->pc = 0x15B138u;
            goto label_15b138;
        }
    }
    ctx->pc = 0x15B12Cu;
    // 0x15b12c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x15b12cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b130: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15B130u;
    {
        const bool branch_taken_0x15b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B130u;
        // 0x15b134: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b130) {
            ctx->pc = 0x15B178u;
            goto label_15b178;
        }
    }
    ctx->pc = 0x15B138u;
label_15b138:
    // 0x15b138: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x15b138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15b13c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B13Cu;
    {
        const bool branch_taken_0x15b13c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b13c) {
            ctx->pc = 0x15B150u;
            goto label_15b150;
        }
    }
    ctx->pc = 0x15B144u;
    // 0x15b144: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15B144u;
    {
        const bool branch_taken_0x15b144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B144u;
        // 0x15b148: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b144) {
            ctx->pc = 0x15B168u;
            goto label_15b168;
        }
    }
    ctx->pc = 0x15B14Cu;
    // 0x15b14c: 0x0  nop
    ctx->pc = 0x15b14cu;
    // NOP
label_15b150:
    // 0x15b150: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x15b150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15b154: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B154u;
    {
        const bool branch_taken_0x15b154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b154) {
            ctx->pc = 0x15B168u;
            goto label_15b168;
        }
    }
    ctx->pc = 0x15B15Cu;
    // 0x15b15c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x15b15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b160: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15B160u;
    {
        const bool branch_taken_0x15b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B160u;
        // 0x15b164: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b160) {
            ctx->pc = 0x15B178u;
            goto label_15b178;
        }
    }
    ctx->pc = 0x15B168u;
label_15b168:
    // 0x15b168: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x15b168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x15b16c: 0x128202b  sltu        $a0, $t1, $t0
    ctx->pc = 0x15b16cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x15b170: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15B170u;
    {
        const bool branch_taken_0x15b170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B170u;
        // 0x15b174: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b170) {
            ctx->pc = 0x15B120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b120;
        }
    }
    ctx->pc = 0x15B178u;
label_15b178:
    // 0x15b178: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x15B178u;
    {
        const bool branch_taken_0x15b178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b178) {
            ctx->pc = 0x15B3E0u;
            goto label_15b3e0;
        }
    }
    ctx->pc = 0x15B180u;
    // 0x15b180: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x15B180u;
    {
        const bool branch_taken_0x15b180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b180) {
            ctx->pc = 0x15B3E0u;
            goto label_15b3e0;
        }
    }
    ctx->pc = 0x15B188u;
    // 0x15b188: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x15b188u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x15b18c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15b190: 0x10a40021  beq         $a1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15B190u;
    {
        const bool branch_taken_0x15b190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x15B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B190u;
        // 0x15b194: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b190) {
            ctx->pc = 0x15B218u;
            goto label_15b218;
        }
    }
    ctx->pc = 0x15B198u;
    // 0x15b198: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x15B198u;
    {
        const bool branch_taken_0x15b198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x15b198) {
            ctx->pc = 0x15B1C8u;
            goto label_15b1c8;
        }
    }
    ctx->pc = 0x15B1A0u;
    // 0x15b1a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b1a4: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B1A4u;
    {
        const bool branch_taken_0x15b1a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b1a4) {
            ctx->pc = 0x15B1B8u;
            goto label_15b1b8;
        }
    }
    ctx->pc = 0x15B1ACu;
    // 0x15b1ac: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x15B1ACu;
    {
        const bool branch_taken_0x15b1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b1ac) {
            ctx->pc = 0x15B408u;
            goto label_15b408;
        }
    }
    ctx->pc = 0x15B1B4u;
    // 0x15b1b4: 0x0  nop
    ctx->pc = 0x15b1b4u;
    // NOP
label_15b1b8:
    // 0x15b1b8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b1bc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x15B1BCu;
    {
        const bool branch_taken_0x15b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1BCu;
        // 0x15b1c0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1bc) {
            ctx->pc = 0x15B408u;
            goto label_15b408;
        }
    }
    ctx->pc = 0x15B1C4u;
    // 0x15b1c4: 0x0  nop
    ctx->pc = 0x15b1c4u;
    // NOP
label_15b1c8:
    // 0x15b1c8: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x15b1c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b1cc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x15b1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15b1d0: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x15b1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x15b1d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b1d8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15b1dc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x15b1dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b1e0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x15b1e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15b1e4: 0x0  nop
    ctx->pc = 0x15b1e4u;
    // NOP
    // 0x15b1e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15b1e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15b1ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x15b1ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x15b1f0: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x15b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15b1f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b1f8: 0x0  nop
    ctx->pc = 0x15b1f8u;
    // NOP
    // 0x15b1fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15b200: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x15b200u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x15b204: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15b204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15b208: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x15b208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15b20c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x15B20Cu;
    {
        const bool branch_taken_0x15b20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B20Cu;
        // 0x15b210: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b20c) {
            ctx->pc = 0x15B408u;
            goto label_15b408;
        }
    }
    ctx->pc = 0x15B214u;
    // 0x15b214: 0x0  nop
    ctx->pc = 0x15b214u;
    // NOP
label_15b218:
    // 0x15b218: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x15b218u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b21c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B21Cu;
    {
        const bool branch_taken_0x15b21c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x15B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B21Cu;
        // 0x15b220: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b21c) {
            ctx->pc = 0x15B230u;
            goto label_15b230;
        }
    }
    ctx->pc = 0x15B224u;
    // 0x15b224: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15b224u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b228: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15B228u;
    {
        const bool branch_taken_0x15b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B228u;
        // 0x15b22c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b228) {
            ctx->pc = 0x15B248u;
            goto label_15b248;
        }
    }
    ctx->pc = 0x15B230u;
label_15b230:
    // 0x15b230: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x15b230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x15b234: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x15b234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15b238: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15b238u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b23c: 0x0  nop
    ctx->pc = 0x15b23cu;
    // NOP
    // 0x15b240: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15b240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15b244: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15b244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_15b248:
    // 0x15b248: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15b248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15b24c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x15b24cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b250: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B250u;
    {
        const bool branch_taken_0x15b250 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x15B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B250u;
        // 0x15b254: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b250) {
            ctx->pc = 0x15B264u;
            goto label_15b264;
        }
    }
    ctx->pc = 0x15B258u;
    // 0x15b258: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15b258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b25c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15B25Cu;
    {
        const bool branch_taken_0x15b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B25Cu;
        // 0x15b260: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b25c) {
            ctx->pc = 0x15B27Cu;
            goto label_15b27c;
        }
    }
    ctx->pc = 0x15B264u;
label_15b264:
    // 0x15b264: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x15b264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x15b268: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x15b268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15b26c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15b26cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b270: 0x0  nop
    ctx->pc = 0x15b270u;
    // NOP
    // 0x15b274: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x15b274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15b278: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x15b278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_15b27c:
    // 0x15b27c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x15b27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b280: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15b280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15b284: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x15b284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x15b288: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x15b288u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b28c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B28Cu;
    {
        const bool branch_taken_0x15b28c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x15B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B28Cu;
        // 0x15b290: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b28c) {
            ctx->pc = 0x15B2A0u;
            goto label_15b2a0;
        }
    }
    ctx->pc = 0x15B294u;
    // 0x15b294: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15b294u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b298: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15B298u;
    {
        const bool branch_taken_0x15b298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B298u;
        // 0x15b29c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b298) {
            ctx->pc = 0x15B2B8u;
            goto label_15b2b8;
        }
    }
    ctx->pc = 0x15B2A0u;
label_15b2a0:
    // 0x15b2a0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x15b2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x15b2a4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x15b2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15b2a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15b2a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b2ac: 0x0  nop
    ctx->pc = 0x15b2acu;
    // NOP
    // 0x15b2b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x15b2b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15b2b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x15b2b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_15b2b8:
    // 0x15b2b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15b2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b2bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15b2bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15b2c0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15b2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15b2c4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x15b2c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b2c8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B2C8u;
    {
        const bool branch_taken_0x15b2c8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x15B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2C8u;
        // 0x15b2cc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2c8) {
            ctx->pc = 0x15B2DCu;
            goto label_15b2dc;
        }
    }
    ctx->pc = 0x15B2D0u;
    // 0x15b2d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15b2d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b2d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15B2D4u;
    {
        const bool branch_taken_0x15b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2D4u;
        // 0x15b2d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2d4) {
            ctx->pc = 0x15B2F4u;
            goto label_15b2f4;
        }
    }
    ctx->pc = 0x15B2DCu;
label_15b2dc:
    // 0x15b2dc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x15b2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x15b2e0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x15b2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15b2e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15b2e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b2e8: 0x0  nop
    ctx->pc = 0x15b2e8u;
    // NOP
    // 0x15b2ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15b2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15b2f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15b2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_15b2f4:
    // 0x15b2f4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15b2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15b2f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15b2fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15b2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b300: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15b300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b304: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15b304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15b308: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x15b308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b30c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x15b30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b310: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15b310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15b314: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15b314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15b318: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15b318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b31c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x15b31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b320: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15b320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15b324: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15b324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15b328: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b32c: 0xc056bf8  jal         func_15AFE0
    ctx->pc = 0x15B32Cu;
    SET_GPR_U32(ctx, 31, 0x15B334u);
    ctx->pc = 0x15B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B32Cu;
    // 0x15b330: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AFE0u, 0x15B32Cu, 0x15B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B334u;
label_15b334:
    // 0x15b334: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15b338: 0xc056bf8  jal         func_15AFE0
    ctx->pc = 0x15B338u;
    SET_GPR_U32(ctx, 31, 0x15B340u);
    ctx->pc = 0x15B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B338u;
    // 0x15b33c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AFE0u, 0x15B338u, 0x15B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B340u;
label_15b340:
    // 0x15b340: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15b340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15b344: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15b344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b348: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x15b348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15b34c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x15b34cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x15b350: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15b350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15b354: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x15b354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15b358:
    // 0x15b358: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15b35c: 0xc056bfc  jal         func_15AFF0
    ctx->pc = 0x15B35Cu;
    SET_GPR_U32(ctx, 31, 0x15B364u);
    ctx->pc = 0x15B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B35Cu;
    // 0x15b360: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AFF0u, 0x15B35Cu, 0x15B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B364u;
label_15b364:
    // 0x15b364: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B364u;
    {
        const bool branch_taken_0x15b364 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x15B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B364u;
        // 0x15b368: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b364) {
            ctx->pc = 0x15B378u;
            goto label_15b378;
        }
    }
    ctx->pc = 0x15B36Cu;
    // 0x15b36c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x15b36cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b370: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15B370u;
    {
        const bool branch_taken_0x15b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B370u;
        // 0x15b374: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b370) {
            ctx->pc = 0x15B390u;
            goto label_15b390;
        }
    }
    ctx->pc = 0x15B378u;
label_15b378:
    // 0x15b378: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x15b378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x15b37c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15b37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15b380: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b384: 0x0  nop
    ctx->pc = 0x15b384u;
    // NOP
    // 0x15b388: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15b38c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x15b38cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_15b390:
    // 0x15b390: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15b390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b394: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15B394u;
    {
        const bool branch_taken_0x15b394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b394) {
            ctx->pc = 0x15B3A8u;
            goto label_15b3a8;
        }
    }
    ctx->pc = 0x15B39Cu;
    // 0x15b39c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B39Cu;
    {
        const bool branch_taken_0x15b39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B39Cu;
        // 0x15b3a0: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b39c) {
            ctx->pc = 0x15B3B0u;
            goto label_15b3b0;
        }
    }
    ctx->pc = 0x15B3A4u;
    // 0x15b3a4: 0x0  nop
    ctx->pc = 0x15b3a4u;
    // NOP
label_15b3a8:
    // 0x15b3a8: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x15b3a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x15b3ac: 0x0  nop
    ctx->pc = 0x15b3acu;
    // NOP
label_15b3b0:
    // 0x15b3b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15b3b4: 0x4615b040  add.s       $f1, $f22, $f21
    ctx->pc = 0x15b3b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x15b3b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15b3b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15b3bc: 0x2a610015  slti        $at, $s3, 0x15
    ctx->pc = 0x15b3bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x15b3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b3c4: 0x1420ffe4  bnez        $at, . + 4 + (-0x1C << 2)
    ctx->pc = 0x15B3C4u;
    {
        const bool branch_taken_0x15b3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3C4u;
        // 0x15b3c8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3c4) {
            ctx->pc = 0x15B358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b358;
        }
    }
    ctx->pc = 0x15B3CCu;
    // 0x15b3cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15b3ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15b3d0: 0xc056bfc  jal         func_15AFF0
    ctx->pc = 0x15B3D0u;
    SET_GPR_U32(ctx, 31, 0x15B3D8u);
    ctx->pc = 0x15B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B3D0u;
    // 0x15b3d4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AFF0u, 0x15B3D0u, 0x15B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3D8u;
label_15b3d8:
    // 0x15b3d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15B3D8u;
    {
        const bool branch_taken_0x15b3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3D8u;
        // 0x15b3dc: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3d8) {
            ctx->pc = 0x15B408u;
            goto label_15b408;
        }
    }
    ctx->pc = 0x15B3E0u;
label_15b3e0:
    // 0x15b3e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B3E0u;
    {
        const bool branch_taken_0x15b3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b3e0) {
            ctx->pc = 0x15B3F8u;
            goto label_15b3f8;
        }
    }
    ctx->pc = 0x15B3E8u;
    // 0x15b3e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b3ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15B3ECu;
    {
        const bool branch_taken_0x15b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3ECu;
        // 0x15b3f0: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3ec) {
            ctx->pc = 0x15B408u;
            goto label_15b408;
        }
    }
    ctx->pc = 0x15B3F4u;
    // 0x15b3f4: 0x0  nop
    ctx->pc = 0x15b3f4u;
    // NOP
label_15b3f8:
    // 0x15b3f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B3F8u;
    {
        const bool branch_taken_0x15b3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b3f8) {
            ctx->pc = 0x15B408u;
            goto label_15b408;
        }
    }
    ctx->pc = 0x15B400u;
    // 0x15b400: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15b400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b404: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x15b404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_15b408:
    // 0x15b408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15b408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b40c: 0x0  nop
    ctx->pc = 0x15b40cu;
    // NOP
label_15b410:
    // 0x15b410: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b414: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15b414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b418: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x15b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15b41c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15b41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b420: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x15b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15b424: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15b424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b428: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15b428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15b42c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15b42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b430: 0x3e00008  jr          $ra
    ctx->pc = 0x15B430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B430u;
        // 0x15b434: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B438u;
}

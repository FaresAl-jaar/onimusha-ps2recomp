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

// Function: sub_00172320
// Address: 0x172320 - 0x172b8c
void sub_00172320_0x172320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172320_0x172320");
#endif

    switch (ctx->pc) {
        case 0x172380u: goto label_172380;
        case 0x1723e8u: goto label_1723e8;
        case 0x172410u: goto label_172410;
        case 0x17246cu: goto label_17246c;
        case 0x1725b0u: goto label_1725b0;
        case 0x172734u: goto label_172734;
        case 0x172858u: goto label_172858;
        case 0x172898u: goto label_172898;
        case 0x172940u: goto label_172940;
        case 0x172b34u: goto label_172b34;
        default: break;
    }

    ctx->pc = 0x172320u;

    // 0x172320: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x172320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x172324: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x172324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x172328: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x172328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x17232c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x17232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x172330: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x172330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x172334: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x172334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x172338: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x172338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x17233c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x17233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x172340: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x172340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x172344: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x172344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x172348: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x172348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17234c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x17234cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x172350: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x172350u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x172354: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x172354u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x172358: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x172358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17235c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17235cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x172360: 0x8c970034  lw          $s7, 0x34($a0)
    ctx->pc = 0x172360u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x172364: 0x92f4000a  lbu         $s4, 0xA($s7)
    ctx->pc = 0x172364u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 10)));
    // 0x172368: 0x128001f7  beqz        $s4, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x172368u;
    {
        const bool branch_taken_0x172368 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172368u;
        // 0x17236c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172368) {
            ctx->pc = 0x172B48u;
            goto label_172b48;
        }
    }
    ctx->pc = 0x172370u;
    // 0x172370: 0x86c3002c  lh          $v1, 0x2C($s6)
    ctx->pc = 0x172370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x172374: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x172374u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172378: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x172378u;
    {
        const bool branch_taken_0x172378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172378u;
        // 0x17237c: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172378) {
            ctx->pc = 0x1723D0u;
            goto label_1723d0;
        }
    }
    ctx->pc = 0x172380u;
label_172380:
    // 0x172380: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x172380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x172384: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x172384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x172388: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x172388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17238c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172390: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x172390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172394: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172394u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172398: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x172398u;
    {
        const bool branch_taken_0x172398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172398) {
            ctx->pc = 0x172420u;
            goto label_172420;
        }
    }
    ctx->pc = 0x1723A0u;
    // 0x1723a0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1723a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1723a4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1723a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1723a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1723ac: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1723ACu;
    {
        const bool branch_taken_0x1723ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1723ac) {
            ctx->pc = 0x172420u;
            goto label_172420;
        }
    }
    ctx->pc = 0x1723B4u;
    // 0x1723b4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1723b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1723b8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1723b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1723bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1723c0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1723C0u;
    {
        const bool branch_taken_0x1723c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1723c0) {
            ctx->pc = 0x172420u;
            goto label_172420;
        }
    }
    ctx->pc = 0x1723C8u;
    // 0x1723c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1723c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1723cc: 0x0  nop
    ctx->pc = 0x1723ccu;
    // NOP
label_1723d0:
    // 0x1723d0: 0x2b4182b  sltu        $v1, $s5, $s4
    ctx->pc = 0x1723d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1723d4: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1723D4u;
    {
        const bool branch_taken_0x1723d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1723d4) {
            ctx->pc = 0x172380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172380;
        }
    }
    ctx->pc = 0x1723DCu;
    // 0x1723dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1723DCu;
    {
        const bool branch_taken_0x1723dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1723dc) {
            ctx->pc = 0x172420u;
            goto label_172420;
        }
    }
    ctx->pc = 0x1723E4u;
    // 0x1723e4: 0x0  nop
    ctx->pc = 0x1723e4u;
    // NOP
label_1723e8:
    // 0x1723e8: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1723e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1723ec: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1723ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1723f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1723f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1723f4: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x1723f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1723f8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1723f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1723fc: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x1723fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x172400: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x172400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x172404: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x172404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x172408: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x172408u;
    SET_GPR_U32(ctx, 31, 0x172410u);
    ctx->pc = 0x17240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172408u;
    // 0x17240c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x172408u, 0x172410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172410u;
label_172410:
    // 0x172410: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x172410u;
    {
        const bool branch_taken_0x172410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172410) {
            ctx->pc = 0x172430u;
            goto label_172430;
        }
    }
    ctx->pc = 0x172418u;
    // 0x172418: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x172418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17241c: 0x0  nop
    ctx->pc = 0x17241cu;
    // NOP
label_172420:
    // 0x172420: 0x2b4182b  sltu        $v1, $s5, $s4
    ctx->pc = 0x172420u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x172424: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x172424u;
    {
        const bool branch_taken_0x172424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172424) {
            ctx->pc = 0x1723E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1723e8;
        }
    }
    ctx->pc = 0x17242Cu;
    // 0x17242c: 0x0  nop
    ctx->pc = 0x17242cu;
    // NOP
label_172430:
    // 0x172430: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x172430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x172434: 0x75082b  sltu        $at, $v1, $s5
    ctx->pc = 0x172434u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x172438: 0x142001c3  bnez        $at, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x172438u;
    {
        const bool branch_taken_0x172438 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x172438) {
            ctx->pc = 0x172B48u;
            goto label_172b48;
        }
    }
    ctx->pc = 0x172440u;
    // 0x172440: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x172440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x172444: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x172444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x172448: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x172448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17244c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x172450: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x172450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x172454: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x172454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x172458: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x172458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x17245c: 0x344702a4  ori         $a3, $v0, 0x2A4
    ctx->pc = 0x17245cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    // 0x172460: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x172460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x172464: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x172464u;
    SET_GPR_U32(ctx, 31, 0x17246Cu);
    ctx->pc = 0x172468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172464u;
    // 0x172468: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x172464u, 0x17246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17246Cu;
label_17246c:
    // 0x17246c: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x17246Cu;
    {
        const bool branch_taken_0x17246c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17246Cu;
        // 0x172470: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17246c) {
            ctx->pc = 0x172B48u;
            goto label_172b48;
        }
    }
    ctx->pc = 0x172474u;
    // 0x172474: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x172474u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 264))); // MMIO: 0x70000108
    // 0x172478: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x172478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x17247c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172480: 0x8c230118  lw          $v1, 0x118($at)
    ctx->pc = 0x172480u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x172484: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x172484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x172488: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x172488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17248c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17248Cu;
    {
        const bool branch_taken_0x17248c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17248c) {
            ctx->pc = 0x1724A0u;
            goto label_1724a0;
        }
    }
    ctx->pc = 0x172494u;
    // 0x172494: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172494u;
    {
        const bool branch_taken_0x172494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172494) {
            ctx->pc = 0x1724A8u;
            goto label_1724a8;
        }
    }
    ctx->pc = 0x17249Cu;
    // 0x17249c: 0x0  nop
    ctx->pc = 0x17249cu;
    // NOP
label_1724a0:
    // 0x1724a0: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1724a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1724a4: 0x0  nop
    ctx->pc = 0x1724a4u;
    // NOP
label_1724a8:
    // 0x1724a8: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x1724a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x1724ac: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x1724acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x1724b0: 0x96c20028  lhu         $v0, 0x28($s6)
    ctx->pc = 0x1724b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x1724b4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1724b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1724b8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1724b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1724bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1724c0: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1724c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1724c4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1724c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1724c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1724c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1724cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1724ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1724d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1724D0u;
    {
        const bool branch_taken_0x1724d0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1724D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724D0u;
        // 0x1724d4: 0xa3f021  addu        $fp, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724d0) {
            ctx->pc = 0x1724E4u;
            goto label_1724e4;
        }
    }
    ctx->pc = 0x1724D8u;
    // 0x1724d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1724d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1724dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1724DCu;
    {
        const bool branch_taken_0x1724dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724DCu;
        // 0x1724e0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724dc) {
            ctx->pc = 0x172500u;
            goto label_172500;
        }
    }
    ctx->pc = 0x1724E4u;
label_1724e4:
    // 0x1724e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1724e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1724e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1724e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1724ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1724ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1724f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1724f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1724f4: 0x0  nop
    ctx->pc = 0x1724f4u;
    // NOP
    // 0x1724f8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1724f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1724fc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1724fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_172500:
    // 0x172500: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172504: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x172504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x172508: 0xc4210340  lwc1        $f1, 0x340($at)
    ctx->pc = 0x172508u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17250c: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x17250cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x172510: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x172510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x172514: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x172514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x172518: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x172518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x17251c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x17251cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x172520: 0x97c20004  lhu         $v0, 0x4($fp)
    ctx->pc = 0x172520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x172524: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172528: 0xc4200354  lwc1        $f0, 0x354($at)
    ctx->pc = 0x172528u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000354u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17252c: 0x46020e02  mul.s       $f24, $f1, $f2
    ctx->pc = 0x17252cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x172530: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x172530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x172534: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x172534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x172538: 0x87c5000a  lh          $a1, 0xA($fp)
    ctx->pc = 0x172538u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x17253c: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x17253cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x172540: 0x3446011c  ori         $a2, $v0, 0x11C
    ctx->pc = 0x172540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)284);
    // 0x172544: 0x87c40008  lh          $a0, 0x8($fp)
    ctx->pc = 0x172544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x172548: 0x97d30006  lhu         $s3, 0x6($fp)
    ctx->pc = 0x172548u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x17254c: 0x460205c2  mul.s       $f23, $f0, $f2
    ctx->pc = 0x17254cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x172550: 0x92c20023  lbu         $v0, 0x23($s6)
    ctx->pc = 0x172550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 35)));
    // 0x172554: 0x8c29fc90  lw          $t1, -0x370($at)
    ctx->pc = 0x172554u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81FC90u));
    // 0x172558: 0xb4001b  divu        $zero, $a1, $s4
    ctx->pc = 0x172558u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x17255c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x17255cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x172560: 0x92e20001  lbu         $v0, 0x1($s7)
    ctx->pc = 0x172560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x172564: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x172564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x172568: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x172568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17256c: 0x8eca0020  lw          $t2, 0x20($s6)
    ctx->pc = 0x17256cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x172570: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x172570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x172574: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x172574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x172578: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x172578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x17257c: 0xa923c  dsll32      $s2, $t2, 8
    ctx->pc = 0x17257cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 10) << (32 + 8));
    // 0x172580: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x172580u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
    // 0x172584: 0x1012  mflo        $v0
    ctx->pc = 0x172584u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x172588: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x172588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x17258c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x17258cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x172590: 0x2522000f  addiu       $v0, $t1, 0xF
    ctx->pc = 0x172590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x172594: 0x488824  and         $s1, $v0, $t0
    ctx->pc = 0x172594u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x172598: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x172598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x17259c: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x17259cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1725a0: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x1725a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x1725a4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1725a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1725a8: 0xc041442  jal         func_105108
    ctx->pc = 0x1725A8u;
    SET_GPR_U32(ctx, 31, 0x1725B0u);
    ctx->pc = 0x1725ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725A8u;
    // 0x1725ac: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1725A8u, 0x1725B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725B0u;
label_1725b0:
    // 0x1725b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1725b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1725b4: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x1725b4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x1725b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1725b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1725bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1725bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1725c0: 0x8c240100  lw          $a0, 0x100($at)
    ctx->pc = 0x1725c0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x1725c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1725c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1725c8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1725c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1725cc: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x1725ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x1725d0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1725d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1725d4: 0x0  nop
    ctx->pc = 0x1725d4u;
    // NOP
    // 0x1725d8: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x1725d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x1725dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1725dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1725e0: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x1725e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x1725e4: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x1725e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x1725e8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1725e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1725ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1725ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1725f0: 0x0  nop
    ctx->pc = 0x1725f0u;
    // NOP
    // 0x1725f4: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x1725f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1725f8: 0x4614a05c  madd.s      $f1, $f20, $f20
    ctx->pc = 0x1725f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x1725fc: 0x46010584  c1          0x10584
    ctx->pc = 0x1725fcu;
    ctx->f[22] = FPU_SQRT_S(ctx->f[1]);
    // 0x172600: 0x0  nop
    ctx->pc = 0x172600u;
    // NOP
    // 0x172604: 0x0  nop
    ctx->pc = 0x172604u;
    // NOP
    // 0x172608: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x172608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17260c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17260Cu;
    {
        const bool branch_taken_0x17260c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17260Cu;
        // 0x172610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17260c) {
            ctx->pc = 0x172620u;
            goto label_172620;
        }
    }
    ctx->pc = 0x172614u;
    // 0x172614: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x172614u;
    {
        const bool branch_taken_0x172614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172614u;
        // 0x172618: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172614) {
            ctx->pc = 0x172658u;
            goto label_172658;
        }
    }
    ctx->pc = 0x17261Cu;
    // 0x17261c: 0x0  nop
    ctx->pc = 0x17261cu;
    // NOP
label_172620:
    // 0x172620: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172624: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x172624u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17262c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17262cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172630: 0x4614c002  mul.s       $f0, $f24, $f20
    ctx->pc = 0x172630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x172634: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x172634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x172638: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x172638u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x17263c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17263cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x172640: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172640u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172644: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x172644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x172648: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x172648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x17264c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17264cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x172650: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172654: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172658:
    // 0x172658: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x172658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17265c: 0x2952823  subu        $a1, $s4, $s5
    ctx->pc = 0x17265cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x172660: 0x12423c  dsll32      $t0, $s2, 8
    ctx->pc = 0x172660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 8));
    // 0x172664: 0x8423e  dsrl32      $t0, $t0, 8
    ctx->pc = 0x172664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 8));
    // 0x172668: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17266c: 0x70853818  mult1       $a3, $a0, $a1
    ctx->pc = 0x17266cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x172670: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x172670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x172674: 0x953018  mult        $a2, $a0, $s5
    ctx->pc = 0x172674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x172678: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x172678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x17267c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x17267cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x172680: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x172680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x172684: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x172684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x172688: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x172688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x17268c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x17268cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x172690: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x172690u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x172694: 0xd4001b  divu        $zero, $a2, $s4
    ctx->pc = 0x172694u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x172698: 0x153900  sll         $a3, $s5, 4
    ctx->pc = 0x172698u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x17269c: 0x0  nop
    ctx->pc = 0x17269cu;
    // NOP
    // 0x1726a0: 0x3012  mflo        $a2
    ctx->pc = 0x1726a0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1726a4: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1726a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1726a8: 0x1069025  or          $s2, $t0, $a2
    ctx->pc = 0x1726a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x1726ac: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1726acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1726b0: 0x8c260100  lw          $a2, 0x100($at)
    ctx->pc = 0x1726b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x1726b4: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x1726b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1726b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1726b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1726bc: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x1726bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1726c0: 0x8c260104  lw          $a2, 0x104($at)
    ctx->pc = 0x1726c0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x1726c4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1726c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1726c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1726c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1726cc: 0xa6060002  sh          $a2, 0x2($s0)
    ctx->pc = 0x1726ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x1726d0: 0x8c260108  lw          $a2, 0x108($at)
    ctx->pc = 0x1726d0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x1726d4: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x1726d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x1726d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1726d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1726dc: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x1726dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1726e0: 0xa606000c  sh          $a2, 0xC($s0)
    ctx->pc = 0x1726e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x1726e4: 0xa613000e  sh          $s3, 0xE($s0)
    ctx->pc = 0x1726e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 19));
    // 0x1726e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1726e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1726ec: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1726ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1726f0: 0x8c260100  lw          $a2, 0x100($at)
    ctx->pc = 0x1726f0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x1726f4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1726f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1726f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1726f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1726fc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1726fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x172700: 0x8c230104  lw          $v1, 0x104($at)
    ctx->pc = 0x172700u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x172704: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x172704u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172708: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x17270c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x17270cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x172710: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x172710u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x172714: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x172714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x172718: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x172718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17271c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x17271cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x172720: 0xa613000e  sh          $s3, 0xE($s0)
    ctx->pc = 0x172720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 19));
    // 0x172724: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x172724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x172728: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x172728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17272c: 0xc041442  jal         func_105108
    ctx->pc = 0x17272Cu;
    SET_GPR_U32(ctx, 31, 0x172734u);
    ctx->pc = 0x172730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17272Cu;
    // 0x172730: 0x473021  addu        $a2, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x17272Cu, 0x172734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172734u;
label_172734:
    // 0x172734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172738: 0x0  nop
    ctx->pc = 0x172738u;
    // NOP
    // 0x17273c: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x17273cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172740: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x172740u;
    {
        const bool branch_taken_0x172740 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172740u;
        // 0x172744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172740) {
            ctx->pc = 0x172750u;
            goto label_172750;
        }
    }
    ctx->pc = 0x172748u;
    // 0x172748: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x172748u;
    {
        const bool branch_taken_0x172748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172748u;
        // 0x17274c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172748) {
            ctx->pc = 0x172788u;
            goto label_172788;
        }
    }
    ctx->pc = 0x172750u;
label_172750:
    // 0x172750: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172754: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x172754u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172758: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17275c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17275cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172760: 0x4614c002  mul.s       $f0, $f24, $f20
    ctx->pc = 0x172760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x172764: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x172764u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x172768: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x172768u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x17276c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17276cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x172770: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172774: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x172774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x172778: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x172778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x17277c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17277cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x172780: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172780u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172784: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172788:
    // 0x172788: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x172788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17278c: 0x2952823  subu        $a1, $s4, $s5
    ctx->pc = 0x17278cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x172790: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172794: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x172794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x172798: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x172798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17279c: 0x70953018  mult1       $a2, $a0, $s5
    ctx->pc = 0x17279cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1727a0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1727a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1727a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1727a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1727a8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x1727a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1727ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1727acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1727b0: 0x122a3c  dsll32      $a1, $s2, 8
    ctx->pc = 0x1727b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1727b4: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x1727b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x1727b8: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x1727b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x1727bc: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x1727bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1727c0: 0x94001b  divu        $zero, $a0, $s4
    ctx->pc = 0x1727c0u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1727c4: 0x0  nop
    ctx->pc = 0x1727c4u;
    // NOP
    // 0x1727c8: 0x0  nop
    ctx->pc = 0x1727c8u;
    // NOP
    // 0x1727cc: 0x2012  mflo        $a0
    ctx->pc = 0x1727ccu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1727d0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1727d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1727d4: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x1727d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1727d8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1727d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1727dc: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x1727dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x1727e0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1727e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1727e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1727e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1727e8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1727e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1727ec: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x1727ecu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x1727f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1727f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1727f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1727f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1727f8: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x1727f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1727fc: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x1727fcu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x172800: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x172800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x172804: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172808: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x172808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17280c: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x17280cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x172810: 0xa613000e  sh          $s3, 0xE($s0)
    ctx->pc = 0x172810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 19));
    // 0x172814: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x172814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x172818: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x172818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x17281c: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x17281cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x172820: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x172820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x172824: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172828: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x172828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17282c: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x17282cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x172830: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x172830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172834: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172838: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x172838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x17283c: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x17283cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x172840: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x172840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x172844: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x172844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x172848: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x172848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x17284c: 0xa613000e  sh          $s3, 0xE($s0)
    ctx->pc = 0x17284cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 19));
    // 0x172850: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x172850u;
    {
        const bool branch_taken_0x172850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172850u;
        // 0x172854: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172850) {
            ctx->pc = 0x172A98u;
            goto label_172a98;
        }
    }
    ctx->pc = 0x172858u;
label_172858:
    // 0x172858: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x172858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17285c: 0x34450100  ori         $a1, $v0, 0x100
    ctx->pc = 0x17285cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x172860: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x172860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x172864: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x172864u;
    SET_GPR_VEC(ctx, 9, runtime->Load128(rdram, ctx, 0x70000110u));
    // 0x172868: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x172868u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17286c: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x17286cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x172870: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x172870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x172874: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x172874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x172878: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x172878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17287c: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x17287cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x172880: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x172880u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x172884: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x172884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x172888: 0x344702a4  ori         $a3, $v0, 0x2A4
    ctx->pc = 0x172888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    // 0x17288c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x17288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x172890: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x172890u;
    SET_GPR_U32(ctx, 31, 0x172898u);
    ctx->pc = 0x172894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172890u;
    // 0x172894: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x172890u, 0x172898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172898u;
label_172898:
    // 0x172898: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x172898u;
    {
        const bool branch_taken_0x172898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172898u;
        // 0x17289c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172898) {
            ctx->pc = 0x172AA8u;
            goto label_172aa8;
        }
    }
    ctx->pc = 0x1728A0u;
    // 0x1728a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1728a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1728a4: 0x8c230118  lw          $v1, 0x118($at)
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 280))); // MMIO: 0x70000118
    // 0x1728a8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1728a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1728ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1728ACu;
    {
        const bool branch_taken_0x1728ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1728ac) {
            ctx->pc = 0x1728B8u;
            goto label_1728b8;
        }
    }
    ctx->pc = 0x1728B4u;
    // 0x1728b4: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1728b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1728b8:
    // 0x1728b8: 0x16b4000b  bne         $s5, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1728B8u;
    {
        const bool branch_taken_0x1728b8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        if (branch_taken_0x1728b8) {
            ctx->pc = 0x1728E8u;
            goto label_1728e8;
        }
    }
    ctx->pc = 0x1728C0u;
    // 0x1728c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1728c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1728c4: 0x121a3c  dsll32      $v1, $s2, 8
    ctx->pc = 0x1728c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 8));
    // 0x1728c8: 0x97c50006  lhu         $a1, 0x6($fp)
    ctx->pc = 0x1728c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x1728cc: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1728ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1728d0: 0x87c4000a  lh          $a0, 0xA($fp)
    ctx->pc = 0x1728d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x1728d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1728d8: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1728d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1728dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1728DCu;
    {
        const bool branch_taken_0x1728dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1728E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728DCu;
        // 0x1728e0: 0xa49821  addu        $s3, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1728dc) {
            ctx->pc = 0x172928u;
            goto label_172928;
        }
    }
    ctx->pc = 0x1728E4u;
    // 0x1728e4: 0x0  nop
    ctx->pc = 0x1728e4u;
    // NOP
label_1728e8:
    // 0x1728e8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1728e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1728ec: 0x2952023  subu        $a0, $s4, $s5
    ctx->pc = 0x1728ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x1728f0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1728f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1728f4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1728f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1728f8: 0x70551818  mult1       $v1, $v0, $s5
    ctx->pc = 0x1728f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1728fc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1728fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x172900: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x172900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x172904: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x172904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x172908: 0x12123c  dsll32      $v0, $s2, 8
    ctx->pc = 0x172908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 8));
    // 0x17290c: 0x74001b  divu        $zero, $v1, $s4
    ctx->pc = 0x17290cu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x172910: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x172910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x172914: 0x0  nop
    ctx->pc = 0x172914u;
    // NOP
    // 0x172918: 0x1812  mflo        $v1
    ctx->pc = 0x172918u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x17291c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x17291cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x172920: 0x439025  or          $s2, $v0, $v1
    ctx->pc = 0x172920u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x172924: 0x0  nop
    ctx->pc = 0x172924u;
    // NOP
label_172928:
    // 0x172928: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x172928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x17292c: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x17292cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x172930: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x172930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x172934: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x172934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x172938: 0xc041442  jal         func_105108
    ctx->pc = 0x172938u;
    SET_GPR_U32(ctx, 31, 0x172940u);
    ctx->pc = 0x17293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172938u;
    // 0x17293c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x172938u, 0x172940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172940u;
label_172940:
    // 0x172940: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172944: 0x8c260110  lw          $a2, 0x110($at)
    ctx->pc = 0x172944u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x172948: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172948u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17294c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17294cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172950: 0x8c250100  lw          $a1, 0x100($at)
    ctx->pc = 0x172950u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x172954: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x172954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x172958: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17295c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17295cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172960: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x172960u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x172964: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x172964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x172968: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x172968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17296c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17296cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172970: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x172970u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x172974: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x172974u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172978: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x172978u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x17297c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17297cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172980: 0x0  nop
    ctx->pc = 0x172980u;
    // NOP
    // 0x172984: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x172984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x172988: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17298c: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x17298cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x172990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172994: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x172994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x172998: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17299c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17299cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1729a0: 0x0  nop
    ctx->pc = 0x1729a0u;
    // NOP
    // 0x1729a4: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x1729a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1729a8: 0x4614a05c  madd.s      $f1, $f20, $f20
    ctx->pc = 0x1729a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x1729ac: 0x46010584  c1          0x10584
    ctx->pc = 0x1729acu;
    ctx->f[22] = FPU_SQRT_S(ctx->f[1]);
    // 0x1729b0: 0x0  nop
    ctx->pc = 0x1729b0u;
    // NOP
    // 0x1729b4: 0x0  nop
    ctx->pc = 0x1729b4u;
    // NOP
    // 0x1729b8: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1729b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1729bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1729BCu;
    {
        const bool branch_taken_0x1729bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1729C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729BCu;
        // 0x1729c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729bc) {
            ctx->pc = 0x1729D0u;
            goto label_1729d0;
        }
    }
    ctx->pc = 0x1729C4u;
    // 0x1729c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1729C4u;
    {
        const bool branch_taken_0x1729c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729C4u;
        // 0x1729c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729c4) {
            ctx->pc = 0x172A08u;
            goto label_172a08;
        }
    }
    ctx->pc = 0x1729CCu;
    // 0x1729cc: 0x0  nop
    ctx->pc = 0x1729ccu;
    // NOP
label_1729d0:
    // 0x1729d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1729d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1729d4: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x1729d4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1729d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1729d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1729dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1729dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1729e0: 0x4614c002  mul.s       $f0, $f24, $f20
    ctx->pc = 0x1729e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x1729e4: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x1729e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x1729e8: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x1729e8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1729ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1729ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1729f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1729f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1729f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1729f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1729f8: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x1729f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x1729fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1729fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x172a00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172a00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172a04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172a04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172a08:
    // 0x172a08: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x172a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x172a0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172a10: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x172a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x172a14: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x172a14u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x172a18: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x172a18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x172a1c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x172a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x172a20: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x172a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x172a24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172a28: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x172a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x172a2c: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x172a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x172a30: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x172a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x172a34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x172a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x172a38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172a3c: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x172a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x172a40: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x172a40u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x172a44: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x172a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x172a48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172a4c: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x172a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x172a50: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x172a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x172a54: 0xa613000e  sh          $s3, 0xE($s0)
    ctx->pc = 0x172a54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 19));
    // 0x172a58: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x172a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x172a5c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x172a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x172a60: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x172a60u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x172a64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x172a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x172a68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172a6c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x172a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x172a70: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x172a70u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x172a74: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x172a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172a78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x172a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x172a7c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x172a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x172a80: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x172a80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x172a84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x172a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x172a88: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x172a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x172a8c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x172a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x172a90: 0xa613000e  sh          $s3, 0xE($s0)
    ctx->pc = 0x172a90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 19));
    // 0x172a94: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x172a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_172a98:
    // 0x172a98: 0x295082b  sltu        $at, $s4, $s5
    ctx->pc = 0x172a98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x172a9c: 0x1020ff6e  beqz        $at, . + 4 + (-0x92 << 2)
    ctx->pc = 0x172A9Cu;
    {
        const bool branch_taken_0x172a9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172a9c) {
            ctx->pc = 0x172858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172858;
        }
    }
    ctx->pc = 0x172AA4u;
    // 0x172aa4: 0x0  nop
    ctx->pc = 0x172aa4u;
    // NOP
label_172aa8:
    // 0x172aa8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x172aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x172aac: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x172aacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x172ab0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x172ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x172ab4: 0x24e7aed0  addiu       $a3, $a3, -0x5130
    ctx->pc = 0x172ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946512));
    // 0x172ab8: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x172ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x172abc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ac0: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x172ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x172ac4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x172ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x172ac8: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x172ac8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x172acc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x172accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x172ad0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x172ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x172ad4: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x172ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x172ad8: 0x3442015c  ori         $v0, $v0, 0x15C
    ctx->pc = 0x172ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)348);
    // 0x172adc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x172adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x172ae0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x172ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x172ae4: 0x92c30012  lbu         $v1, 0x12($s6)
    ctx->pc = 0x172ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x172ae8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x172ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172aec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x172aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x172af0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x172af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x172af4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x172af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172af8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x172af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x172afc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x172afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x172b00: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x172b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x172b04: 0x92c20012  lbu         $v0, 0x12($s6)
    ctx->pc = 0x172b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x172b08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x172b0c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x172b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x172b10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x172b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172b14: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x172b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x172b18: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x172b18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x172b1c: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x172b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x172b20: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x172b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x172b24: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x172b24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x172b28: 0x92c20013  lbu         $v0, 0x13($s6)
    ctx->pc = 0x172b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 19)));
    // 0x172b2c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x172B2Cu;
    SET_GPR_U32(ctx, 31, 0x172B34u);
    ctx->pc = 0x172B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B2Cu;
    // 0x172b30: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x172B2Cu, 0x172B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B34u;
label_172b34:
    // 0x172b34: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x172b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x172b38: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x172b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x172b3c: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x172b3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x172b40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x172b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x172b44: 0xac30fc90  sw          $s0, -0x370($at)
    ctx->pc = 0x172b44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
label_172b48:
    // 0x172b48: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x172b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x172b4c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x172b4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x172b50: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x172b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x172b54: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x172b54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172b58: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x172b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x172b5c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x172b5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x172b60: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x172b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x172b64: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x172b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x172b68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x172b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x172b6c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x172b6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172b70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x172b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x172b74: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x172b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172b78: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x172b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172b7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x172b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172b80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x172b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172b84: 0x3e00008  jr          $ra
    ctx->pc = 0x172B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B84u;
        // 0x172b88: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172B8Cu;
}

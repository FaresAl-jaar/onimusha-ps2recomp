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

// Function: sub_0031E300
// Address: 0x31e300 - 0x31e564
void sub_0031E300_0x31e300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E300_0x31e300");
#endif

    switch (ctx->pc) {
        case 0x31e328u: goto label_31e328;
        case 0x31e410u: goto label_31e410;
        case 0x31e424u: goto label_31e424;
        case 0x31e454u: goto label_31e454;
        case 0x31e45cu: goto label_31e45c;
        case 0x31e46cu: goto label_31e46c;
        case 0x31e4d0u: goto label_31e4d0;
        case 0x31e4fcu: goto label_31e4fc;
        case 0x31e514u: goto label_31e514;
        default: break;
    }

    ctx->pc = 0x31e300u;

    // 0x31e300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31e304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31e304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31e308: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31e30c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31e30cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31e310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e314: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x31e314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x31e318: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x31e318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x31e31c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31e31cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31e320: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x31E320u;
    SET_GPR_U32(ctx, 31, 0x31E328u);
    ctx->pc = 0x31E324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E320u;
    // 0x31e324: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x31E320u, 0x31E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E328u;
label_31e328:
    // 0x31e328: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31E328u;
    {
        const bool branch_taken_0x31e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e328) {
            ctx->pc = 0x31E390u;
            goto label_31e390;
        }
    }
    ctx->pc = 0x31E330u;
    // 0x31e330: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x31e330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31e334: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x31e334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x31e338: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x31e338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e33c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E33Cu;
    {
        const bool branch_taken_0x31e33c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E33Cu;
        // 0x31e340: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e33c) {
            ctx->pc = 0x31E348u;
            goto label_31e348;
        }
    }
    ctx->pc = 0x31E344u;
    // 0x31e344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e348:
    // 0x31e348: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x31E348u;
    {
        const bool branch_taken_0x31e348 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e348) {
            ctx->pc = 0x31E390u;
            goto label_31e390;
        }
    }
    ctx->pc = 0x31E350u;
    // 0x31e350: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x31e350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31e354: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x31e354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x31e358: 0xc44028f0  lwc1        $f0, 0x28F0($v0)
    ctx->pc = 0x31e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e35c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31e35cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e360: 0x0  nop
    ctx->pc = 0x31e360u;
    // NOP
    // 0x31e364: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31e364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x31e368: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x31e368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x31e36c: 0xe6002b50  swc1        $f0, 0x2B50($s0)
    ctx->pc = 0x31e36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11088), bits); }
    // 0x31e370: 0xc60028f0  lwc1        $f0, 0x28F0($s0)
    ctx->pc = 0x31e370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e374: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31e374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e378: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x31E378u;
    {
        const bool branch_taken_0x31e378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e378) {
            ctx->pc = 0x31E3C0u;
            goto label_31e3c0;
        }
    }
    ctx->pc = 0x31E380u;
    // 0x31e380: 0xc6002b50  lwc1        $f0, 0x2B50($s0)
    ctx->pc = 0x31e380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31e384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31e388: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31E388u;
    {
        const bool branch_taken_0x31e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E388u;
        // 0x31e38c: 0xe6002b50  swc1        $f0, 0x2B50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11088), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e388) {
            ctx->pc = 0x31E3C0u;
            goto label_31e3c0;
        }
    }
    ctx->pc = 0x31E390u;
label_31e390:
    // 0x31e390: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x31e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x31e394: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x31e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e39c: 0x0  nop
    ctx->pc = 0x31e39cu;
    // NOP
    // 0x31e3a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31e3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e3a4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31E3A4u;
    {
        const bool branch_taken_0x31e3a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e3a4) {
            ctx->pc = 0x31E3C0u;
            goto label_31e3c0;
        }
    }
    ctx->pc = 0x31E3ACu;
    // 0x31e3ac: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x31e3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e3b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31e3b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31e3b4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x31e3b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x31e3b8: 0xe6002b50  swc1        $f0, 0x2B50($s0)
    ctx->pc = 0x31e3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11088), bits); }
    // 0x31e3bc: 0x0  nop
    ctx->pc = 0x31e3bcu;
    // NOP
label_31e3c0:
    // 0x31e3c0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x31e3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31e3c4: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x31e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x31e3c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E3C8u;
    {
        const bool branch_taken_0x31e3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3C8u;
        // 0x31e3cc: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3c8) {
            ctx->pc = 0x31E3D8u;
            goto label_31e3d8;
        }
    }
    ctx->pc = 0x31E3D0u;
    // 0x31e3d0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x31E3D0u;
    {
        const bool branch_taken_0x31e3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e3d0) {
            ctx->pc = 0x31E440u;
            goto label_31e440;
        }
    }
    ctx->pc = 0x31E3D8u;
label_31e3d8:
    // 0x31e3d8: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x31e3d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31e3dc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x31e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x31e3e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31e3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e3e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31e3ec: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x31e3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31e3f0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x31e3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x31e3f4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x31e3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x31e3f8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x31e3f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31e3fc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x31e3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x31e400: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31e400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e404: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31e404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31e408: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x31E408u;
    SET_GPR_U32(ctx, 31, 0x31E410u);
    ctx->pc = 0x31E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E408u;
    // 0x31e40c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x31E408u, 0x31E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E410u;
label_31e410:
    // 0x31e410: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31E410u;
    {
        const bool branch_taken_0x31e410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e410) {
            ctx->pc = 0x31E440u;
            goto label_31e440;
        }
    }
    ctx->pc = 0x31E418u;
    // 0x31e418: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x31e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31e41c: 0xc096964  jal         func_25A590
    ctx->pc = 0x31E41Cu;
    SET_GPR_U32(ctx, 31, 0x31E424u);
    ctx->pc = 0x31E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E41Cu;
    // 0x31e420: 0xc60c2b50  lwc1        $f12, 0x2B50($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x31E41Cu, 0x31E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E424u;
label_31e424:
    // 0x31e424: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31e428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e42c: 0x0  nop
    ctx->pc = 0x31e42cu;
    // NOP
    // 0x31e430: 0xe6002b50  swc1        $f0, 0x2B50($s0)
    ctx->pc = 0x31e430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11088), bits); }
    // 0x31e434: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31e434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31e438: 0xe6002b50  swc1        $f0, 0x2B50($s0)
    ctx->pc = 0x31e438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11088), bits); }
    // 0x31e43c: 0x0  nop
    ctx->pc = 0x31e43cu;
    // NOP
label_31e440:
    // 0x31e440: 0xc6012b50  lwc1        $f1, 0x2B50($s0)
    ctx->pc = 0x31e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e444: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x31e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e448: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x31e448u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e44c: 0xc04b946  jal         func_12E518
    ctx->pc = 0x31E44Cu;
    SET_GPR_U32(ctx, 31, 0x31E454u);
    ctx->pc = 0x31E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E44Cu;
    // 0x31e450: 0xe60c00a4  swc1        $f12, 0xA4($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x31E44Cu, 0x31E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E454u;
label_31e454:
    // 0x31e454: 0xc0478a6  jal         func_11E298
    ctx->pc = 0x31E454u;
    SET_GPR_U32(ctx, 31, 0x31E45Cu);
    ctx->pc = 0x31E458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E454u;
    // 0x31e458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E298u, 0x31E454u, 0x31E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E45Cu;
label_31e45c:
    // 0x31e45c: 0x3c03403e  lui         $v1, 0x403E
    ctx->pc = 0x31e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16446 << 16));
    // 0x31e460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31e460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e464: 0xc0400b8  jal         func_1002E0
    ctx->pc = 0x31E464u;
    SET_GPR_U32(ctx, 31, 0x31E46Cu);
    ctx->pc = 0x31E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E464u;
    // 0x31e468: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002E0u, 0x31E464u, 0x31E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E46Cu;
label_31e46c:
    // 0x31e46c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E46Cu;
    {
        const bool branch_taken_0x31e46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e46c) {
            ctx->pc = 0x31E480u;
            goto label_31e480;
        }
    }
    ctx->pc = 0x31E474u;
    // 0x31e474: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31E474u;
    {
        const bool branch_taken_0x31e474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E474u;
        // 0x31e478: 0xae0000a4  sw          $zero, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e474) {
            ctx->pc = 0x31E4B8u;
            goto label_31e4b8;
        }
    }
    ctx->pc = 0x31E47Cu;
    // 0x31e47c: 0x0  nop
    ctx->pc = 0x31e47cu;
    // NOP
label_31e480:
    // 0x31e480: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x31e480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e488: 0x0  nop
    ctx->pc = 0x31e488u;
    // NOP
    // 0x31e48c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31e48cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e490: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31E490u;
    {
        const bool branch_taken_0x31e490 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E490u;
        // 0x31e494: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e490) {
            ctx->pc = 0x31E4A8u;
            goto label_31e4a8;
        }
    }
    ctx->pc = 0x31E498u;
    // 0x31e498: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x31e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x31e49c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31E49Cu;
    {
        const bool branch_taken_0x31e49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E49Cu;
        // 0x31e4a0: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e49c) {
            ctx->pc = 0x31E4B8u;
            goto label_31e4b8;
        }
    }
    ctx->pc = 0x31E4A4u;
    // 0x31e4a4: 0x0  nop
    ctx->pc = 0x31e4a4u;
    // NOP
label_31e4a8:
    // 0x31e4a8: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x31e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x31e4ac: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x31e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x31e4b0: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x31e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x31e4b4: 0x0  nop
    ctx->pc = 0x31e4b4u;
    // NOP
label_31e4b8:
    // 0x31e4b8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x31e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x31e4bc: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x31e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x31e4c0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x31e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x31e4c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31e4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31e4c8: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x31E4C8u;
    SET_GPR_U32(ctx, 31, 0x31E4D0u);
    ctx->pc = 0x31E4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E4C8u;
    // 0x31e4cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x31E4C8u, 0x31E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E4D0u;
label_31e4d0:
    // 0x31e4d0: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x31e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e4d4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x31e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31e4d8: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x31e4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e4dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31e4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4e0: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x31e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x31e4e4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x31e4e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31e4e8: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x31e4e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x31e4ec: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x31e4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e4f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31e4f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31e4f4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x31E4F4u;
    SET_GPR_U32(ctx, 31, 0x31E4FCu);
    ctx->pc = 0x31E4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E4F4u;
    // 0x31e4f8: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x31E4F4u, 0x31E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E4FCu;
label_31e4fc:
    // 0x31e4fc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x31e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x31e500: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x31e500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x31e504: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x31e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x31e508: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31e508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31e50c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x31E50Cu;
    SET_GPR_U32(ctx, 31, 0x31E514u);
    ctx->pc = 0x31E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E50Cu;
    // 0x31e510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x31E50Cu, 0x31E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E514u;
label_31e514:
    // 0x31e514: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x31e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e518: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x31e518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x31e51c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e51cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e520: 0x0  nop
    ctx->pc = 0x31e520u;
    // NOP
    // 0x31e524: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31e524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e528: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x31E528u;
    {
        const bool branch_taken_0x31e528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e528) {
            ctx->pc = 0x31E550u;
            goto label_31e550;
        }
    }
    ctx->pc = 0x31E530u;
    // 0x31e530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e534: 0x0  nop
    ctx->pc = 0x31e534u;
    // NOP
    // 0x31e538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31e538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e53c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x31E53Cu;
    {
        const bool branch_taken_0x31e53c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e53c) {
            ctx->pc = 0x31E550u;
            goto label_31e550;
        }
    }
    ctx->pc = 0x31E544u;
    // 0x31e544: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x31e544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e548: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31e548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31e54c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x31e54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_31e550:
    // 0x31e550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31e550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e554: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31e554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e558: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31e55c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E55Cu;
        // 0x31e560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E564u;
}

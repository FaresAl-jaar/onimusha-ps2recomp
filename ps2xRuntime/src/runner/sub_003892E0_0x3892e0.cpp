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

// Function: sub_003892E0
// Address: 0x3892e0 - 0x389504
void sub_003892E0_0x3892e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003892E0_0x3892e0");
#endif

    switch (ctx->pc) {
        case 0x38934cu: goto label_38934c;
        case 0x38942cu: goto label_38942c;
        case 0x389458u: goto label_389458;
        case 0x3894a0u: goto label_3894a0;
        case 0x3894bcu: goto label_3894bc;
        default: break;
    }

    ctx->pc = 0x3892e0u;

    // 0x3892e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3892e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3892e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3892e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3892e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3892e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3892ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3892ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3892f0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3892f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3892f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3892f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3892f8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3892f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3892fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3892fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x389300: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x389300u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389304: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x389304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x389308: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x389308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38930c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x389310: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x389310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x389314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x389318: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x389318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38931c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x389320: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x389320u;
    {
        const bool branch_taken_0x389320 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x389324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389320u;
        // 0x389324: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389320) {
            ctx->pc = 0x389330u;
            goto label_389330;
        }
    }
    ctx->pc = 0x389328u;
    // 0x389328: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x389328u;
    {
        const bool branch_taken_0x389328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389328u;
        // 0x38932c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389328) {
            ctx->pc = 0x3894D8u;
            goto label_3894d8;
        }
    }
    ctx->pc = 0x389330u;
label_389330:
    // 0x389330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x389330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389334: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x389334u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x389338: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x389338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x38933c: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x38933cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x389340: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x389340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389344: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x389344u;
    SET_GPR_U32(ctx, 31, 0x38934Cu);
    ctx->pc = 0x389348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389344u;
    // 0x389348: 0x25089270  addiu       $t0, $t0, -0x6D90 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x389344u, 0x38934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38934Cu;
label_38934c:
    // 0x38934c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38934cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389350: 0x1200005f  beqz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x389350u;
    {
        const bool branch_taken_0x389350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x389350) {
            ctx->pc = 0x3894D0u;
            goto label_3894d0;
        }
    }
    ctx->pc = 0x389358u;
    // 0x389358: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x389358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x38935c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x38935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x389360: 0x34640dcd  ori         $a0, $v1, 0xDCD
    ctx->pc = 0x389360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x389364: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x389364u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
    // 0x389368: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x389368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38936c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x38936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x389370: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x389370u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x389374: 0x258c6540  addiu       $t4, $t4, 0x6540
    ctx->pc = 0x389374u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 25920));
    // 0x389378: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x389378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38937c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x38937cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389380: 0x24422018  addiu       $v0, $v0, 0x2018
    ctx->pc = 0x389380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8216));
    // 0x389384: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x389384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389388: 0xa46818  mult        $t5, $a1, $a0
    ctx->pc = 0x389388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x38938c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x38938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x389390: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x389390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x389394: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x389394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x389398: 0x24422014  addiu       $v0, $v0, 0x2014
    ctx->pc = 0x389398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8212));
    // 0x38939c: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x38939cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3893a0: 0x535821  addu        $t3, $v0, $s3
    ctx->pc = 0x3893a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3893a4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x3893a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3893a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3893a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3893ac: 0xaf8d80e0  sw          $t5, -0x7F20($gp)
    ctx->pc = 0x3893acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 13));
    // 0x3893b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3893b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3893b4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3893b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3893b8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3893b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3893bc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3893bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3893c0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3893c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3893c4: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3893c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3893c8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3893c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3893cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3893ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3893d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3893d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3893d4: 0x246d0400  addiu       $t5, $v1, 0x400
    ctx->pc = 0x3893d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x3893d8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3893d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3893dc: 0x31ad0fff  andi        $t5, $t5, 0xFFF
    ctx->pc = 0x3893dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4095);
    // 0x3893e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3893e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3893e4: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x3893e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x3893e8: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3893e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x3893ec: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x3893ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x3893f0: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x3893f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3893f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3893f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3893f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3893f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3893fc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3893fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x389400: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x389400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389404: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x389404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389408: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x389408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x38940c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x38940cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x389410: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x389410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389414: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x389414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389418: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x389418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x38941c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x38941cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x389420: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x389420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x389424: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x389424u;
    SET_GPR_U32(ctx, 31, 0x38942Cu);
    ctx->pc = 0x389428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389424u;
    // 0x389428: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x389424u, 0x38942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38942Cu;
label_38942c:
    // 0x38942c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x38942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x389430: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x389430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x389434: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x389434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x389438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38943c: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x38943cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x389440: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x389440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x389444: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x389444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x389448: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x389448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38944c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x38944cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x389450: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x389450u;
    SET_GPR_U32(ctx, 31, 0x389458u);
    ctx->pc = 0x389454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389450u;
    // 0x389454: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x389450u, 0x389458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389458u;
label_389458:
    // 0x389458: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x389458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x38945c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38945cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x389460: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x389460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x389464: 0xa2160558  sb          $s6, 0x558($s0)
    ctx->pc = 0x389464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 22));
    // 0x389468: 0xae02055c  sw          $v0, 0x55C($s0)
    ctx->pc = 0x389468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 2));
    // 0x38946c: 0xa2170560  sb          $s7, 0x560($s0)
    ctx->pc = 0x38946cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1376), (uint8_t)GPR_U32(ctx, 23));
    // 0x389470: 0xa2110561  sb          $s1, 0x561($s0)
    ctx->pc = 0x389470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1377), (uint8_t)GPR_U32(ctx, 17));
    // 0x389474: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x389474u;
    {
        const bool branch_taken_0x389474 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x389478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389474u;
        // 0x389478: 0xae000518  sw          $zero, 0x518($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389474) {
            ctx->pc = 0x389488u;
            goto label_389488;
        }
    }
    ctx->pc = 0x38947Cu;
    // 0x38947c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x38947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x389480: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x389480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    // 0x389484: 0x0  nop
    ctx->pc = 0x389484u;
    // NOP
label_389488:
    // 0x389488: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x389488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x38948c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x38948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x389490: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x389490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x389494: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x389494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x389498: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x389498u;
    SET_GPR_U32(ctx, 31, 0x3894A0u);
    ctx->pc = 0x38949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389498u;
    // 0x38949c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x389498u, 0x3894A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3894A0u;
label_3894a0:
    // 0x3894a0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3894a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3894a4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3894a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3894a8: 0x24422010  addiu       $v0, $v0, 0x2010
    ctx->pc = 0x3894a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8208));
    // 0x3894ac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3894acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3894b0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3894b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3894b4: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3894B4u;
    SET_GPR_U32(ctx, 31, 0x3894BCu);
    ctx->pc = 0x3894B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3894B4u;
    // 0x3894b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3894B4u, 0x3894BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3894BCu;
label_3894bc:
    // 0x3894bc: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x3894bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3894c0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3894c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3894c4: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x3894c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x3894c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3894C8u;
    {
        const bool branch_taken_0x3894c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3894CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894C8u;
        // 0x3894cc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894c8) {
            ctx->pc = 0x3894D8u;
            goto label_3894d8;
        }
    }
    ctx->pc = 0x3894D0u;
label_3894d0:
    // 0x3894d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3894d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3894d4: 0x0  nop
    ctx->pc = 0x3894d4u;
    // NOP
label_3894d8:
    // 0x3894d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3894d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3894dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3894dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3894e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3894e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3894e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3894e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3894e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3894e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3894ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3894ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3894f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3894f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3894f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3894f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3894f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3894f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3894fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3894FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894FCu;
        // 0x389500: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3894FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389504u;
}

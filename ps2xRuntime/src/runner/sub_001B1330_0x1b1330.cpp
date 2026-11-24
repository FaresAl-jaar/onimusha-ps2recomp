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

// Function: sub_001B1330
// Address: 0x1b1330 - 0x1b14e4
void sub_001B1330_0x1b1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1330_0x1b1330");
#endif

    switch (ctx->pc) {
        case 0x1b1378u: goto label_1b1378;
        case 0x1b1380u: goto label_1b1380;
        case 0x1b139cu: goto label_1b139c;
        case 0x1b1408u: goto label_1b1408;
        case 0x1b1448u: goto label_1b1448;
        case 0x1b1488u: goto label_1b1488;
        case 0x1b149cu: goto label_1b149c;
        default: break;
    }

    ctx->pc = 0x1b1330u;

    // 0x1b1330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b1330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b1334: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b1334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b1338: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b1338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1b133c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b1340: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b1340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b1344: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b1344u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b1348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b134c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b1350: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b1350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b1354: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b1354u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b1358: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b1358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b135c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1b135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b1360: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1B1360u;
    {
        const bool branch_taken_0x1b1360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1360u;
        // 0x1b1364: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1360) {
            ctx->pc = 0x1B14B8u;
            goto label_1b14b8;
        }
    }
    ctx->pc = 0x1B1368u;
    // 0x1b1368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b136c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b136cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1370: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1B1370u;
    SET_GPR_U32(ctx, 31, 0x1B1378u);
    ctx->pc = 0x1B1374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1370u;
    // 0x1b1374: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1B1370u, 0x1B1378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1378u;
label_1b1378:
    // 0x1b1378: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1B1378u;
    SET_GPR_U32(ctx, 31, 0x1B1380u);
    ctx->pc = 0x1B137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1378u;
    // 0x1b137c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1B1378u, 0x1B1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1380u;
label_1b1380:
    // 0x1b1380: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1384: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b1384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b1388: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b1388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b138c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1b138cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b1390: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1b1390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1b1394: 0xc06c2b8  jal         func_1B0AE0
    ctx->pc = 0x1B1394u;
    SET_GPR_U32(ctx, 31, 0x1B139Cu);
    ctx->pc = 0x1B1398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1394u;
    // 0x1b1398: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AE0u, 0x1B1394u, 0x1B139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B139Cu;
label_1b139c:
    // 0x1b139c: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1b139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b13a0: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x1b13a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1b13a4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1b13a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b13a8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1b13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1b13ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b13acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b13b0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B13B0u;
    {
        const bool branch_taken_0x1b13b0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1B13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B0u;
        // 0x1b13b4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13b0) {
            ctx->pc = 0x1B13C4u;
            goto label_1b13c4;
        }
    }
    ctx->pc = 0x1B13B8u;
    // 0x1b13b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b13b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b13bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B13BCu;
    {
        const bool branch_taken_0x1b13bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13BCu;
        // 0x1b13c0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13bc) {
            ctx->pc = 0x1B13E0u;
            goto label_1b13e0;
        }
    }
    ctx->pc = 0x1B13C4u;
label_1b13c4:
    // 0x1b13c4: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1b13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1b13c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b13c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b13cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b13ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b13d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b13d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b13d4: 0x0  nop
    ctx->pc = 0x1b13d4u;
    // NOP
    // 0x1b13d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b13d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b13dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b13dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b13e0:
    // 0x1b13e0: 0x0  nop
    ctx->pc = 0x1b13e0u;
    // NOP
    // 0x1b13e4: 0x0  nop
    ctx->pc = 0x1b13e4u;
    // NOP
    // 0x1b13e8: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1b13e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b13ec: 0x0  nop
    ctx->pc = 0x1b13ecu;
    // NOP
    // 0x1b13f0: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x1b13f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b13f4: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B13F4u;
    {
        const bool branch_taken_0x1b13f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13F4u;
        // 0x1b13f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13f4) {
            ctx->pc = 0x1B14B8u;
            goto label_1b14b8;
        }
    }
    ctx->pc = 0x1B13FCu;
    // 0x1b13fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b13fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1400: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1404: 0x0  nop
    ctx->pc = 0x1b1404u;
    // NOP
label_1b1408:
    // 0x1b1408: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1408u;
    {
        const bool branch_taken_0x1b1408 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1B140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1408u;
        // 0x1b140c: 0xc6740010  lwc1        $f20, 0x10($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1408) {
            ctx->pc = 0x1B141Cu;
            goto label_1b141c;
        }
    }
    ctx->pc = 0x1B1410u;
    // 0x1b1410: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b1410u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1414: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1414u;
    {
        const bool branch_taken_0x1b1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1414u;
        // 0x1b1418: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1414) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B141Cu;
label_1b141c:
    // 0x1b141c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1b141cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1b1420: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b1420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1b1424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b1424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b1428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b1428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b142c: 0x0  nop
    ctx->pc = 0x1b142cu;
    // NOP
    // 0x1b1430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b1434: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b1434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b1438:
    // 0x1b1438: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b1438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b143c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b143cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1440: 0xc070524  jal         func_1C1490
    ctx->pc = 0x1B1440u;
    SET_GPR_U32(ctx, 31, 0x1B1448u);
    ctx->pc = 0x1B1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1440u;
    // 0x1b1444: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1490u, 0x1B1440u, 0x1B1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1448u;
label_1b1448:
    // 0x1b1448: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1448u;
    {
        const bool branch_taken_0x1b1448 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1B144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1448u;
        // 0x1b144c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1448) {
            ctx->pc = 0x1B145Cu;
            goto label_1b145c;
        }
    }
    ctx->pc = 0x1B1450u;
    // 0x1b1450: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1b1450u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1454: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1454u;
    {
        const bool branch_taken_0x1b1454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1454u;
        // 0x1b1458: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1454) {
            ctx->pc = 0x1B1478u;
            goto label_1b1478;
        }
    }
    ctx->pc = 0x1B145Cu;
label_1b145c:
    // 0x1b145c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1b145cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1b1460: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1b1460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1b1464: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b1464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b1468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b1468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b146c: 0x0  nop
    ctx->pc = 0x1b146cu;
    // NOP
    // 0x1b1470: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b1470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b1474: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b1474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b1478:
    // 0x1b1478: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b1478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b147c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b147cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1480: 0xc070524  jal         func_1C1490
    ctx->pc = 0x1B1480u;
    SET_GPR_U32(ctx, 31, 0x1B1488u);
    ctx->pc = 0x1B1484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1480u;
    // 0x1b1484: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1490u, 0x1B1480u, 0x1B1488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1488u;
label_1b1488:
    // 0x1b1488: 0x8e67001c  lw          $a3, 0x1C($s3)
    ctx->pc = 0x1b1488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1b148c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b148cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b1490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1494: 0xc06feb8  jal         func_1BFAE0
    ctx->pc = 0x1B1494u;
    SET_GPR_U32(ctx, 31, 0x1B149Cu);
    ctx->pc = 0x1B1498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1494u;
    // 0x1b1498: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFAE0u, 0x1B1494u, 0x1B149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B149Cu;
label_1b149c:
    // 0x1b149c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1b149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1b14a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b14a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b14a4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1b14a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1b14a8: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1b14a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b14ac: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1B14ACu;
    {
        const bool branch_taken_0x1b14ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14ACu;
        // 0x1b14b0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14ac) {
            ctx->pc = 0x1B1408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1408;
        }
    }
    ctx->pc = 0x1B14B4u;
    // 0x1b14b4: 0x0  nop
    ctx->pc = 0x1b14b4u;
    // NOP
label_1b14b8:
    // 0x1b14b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b14b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b14bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b14bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b14c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b14c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b14c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b14c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b14c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b14c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b14cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b14ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b14d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b14d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b14d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b14d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b14d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b14d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b14dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14DCu;
        // 0x1b14e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B14DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B14E4u;
}

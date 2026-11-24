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

// Function: sub_003C1320
// Address: 0x3c1320 - 0x3c15b8
void sub_003C1320_0x3c1320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1320_0x3c1320");
#endif

    switch (ctx->pc) {
        case 0x3c1340u: goto label_3c1340;
        case 0x3c1394u: goto label_3c1394;
        case 0x3c13a4u: goto label_3c13a4;
        case 0x3c13c8u: goto label_3c13c8;
        case 0x3c141cu: goto label_3c141c;
        case 0x3c142cu: goto label_3c142c;
        case 0x3c1444u: goto label_3c1444;
        case 0x3c1470u: goto label_3c1470;
        case 0x3c14a8u: goto label_3c14a8;
        case 0x3c14dcu: goto label_3c14dc;
        case 0x3c1518u: goto label_3c1518;
        case 0x3c1530u: goto label_3c1530;
        case 0x3c157cu: goto label_3c157c;
        case 0x3c1594u: goto label_3c1594;
        default: break;
    }

    ctx->pc = 0x3c1320u;

    // 0x3c1320: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c1320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c1324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c1324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c1328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c1328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c132c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c1330: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c1330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1334: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c1334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1338: 0xc0f042c  jal         func_3C10B0
    ctx->pc = 0x3C1338u;
    SET_GPR_U32(ctx, 31, 0x3C1340u);
    ctx->pc = 0x3C133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1338u;
    // 0x3c133c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C10B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C10B0u, 0x3C1338u, 0x3C1340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1340u;
label_3c1340:
    // 0x3c1340: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x3c1340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3c1344: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c1344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3c1348: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3c1348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3c134c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3c134cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x3c1350: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x3c1350u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c1354: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c1354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c1358: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x3c1358u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x3c135c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3c135cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c1360: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3c1360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3c1364: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C1364u;
    {
        const bool branch_taken_0x3c1364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1364u;
        // 0x3c1368: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1364) {
            ctx->pc = 0x3C1378u;
            goto label_3c1378;
        }
    }
    ctx->pc = 0x3C136Cu;
    // 0x3c136c: 0x1483008c  bne         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x3C136Cu;
    {
        const bool branch_taken_0x3c136c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c136c) {
            ctx->pc = 0x3C15A0u;
            goto label_3c15a0;
        }
    }
    ctx->pc = 0x3C1374u;
    // 0x3c1374: 0x0  nop
    ctx->pc = 0x3c1374u;
    // NOP
label_3c1378:
    // 0x3c1378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c1378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c137c: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x3c137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3c1380: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3c1380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c1384: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c1384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c1388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c1388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c138c: 0xc0f01a4  jal         func_3C0690
    ctx->pc = 0x3C138Cu;
    SET_GPR_U32(ctx, 31, 0x3C1394u);
    ctx->pc = 0x3C1390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C138Cu;
    // 0x3c1390: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0690u, 0x3C138Cu, 0x3C1394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1394u;
label_3c1394:
    // 0x3c1394: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3c1394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c1398: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3c1398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3c139c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3C139Cu;
    SET_GPR_U32(ctx, 31, 0x3C13A4u);
    ctx->pc = 0x3C13A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C139Cu;
    // 0x3c13a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3C139Cu, 0x3C13A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C13A4u;
label_3c13a4:
    // 0x3c13a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c13a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c13a8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3c13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c13ac: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x3c13acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3c13b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c13b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c13b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c13b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c13b8: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x3c13b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3c13bc: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x3c13bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3c13c0: 0xc041442  jal         func_105108
    ctx->pc = 0x3C13C0u;
    SET_GPR_U32(ctx, 31, 0x3C13C8u);
    ctx->pc = 0x3C13C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C13C0u;
    // 0x3c13c4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3C13C0u, 0x3C13C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C13C8u;
label_3c13c8:
    // 0x3c13c8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3c13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3c13cc: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x3c13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x3c13d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c13d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c13d4: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x3c13d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3c13d8: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x3c13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c13dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c13dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c13e0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3c13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3c13e4: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x3c13e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c13e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3c13e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3c13ec: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x3c13ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x3c13f0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3c13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3c13f4: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x3c13f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c13f8: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x3c13f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c13fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3c13fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3c1400: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x3c1400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x3c1404: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3c1404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c1408: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3c1408u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c140c: 0x0  nop
    ctx->pc = 0x3c140cu;
    // NOP
    // 0x3c1410: 0x0  nop
    ctx->pc = 0x3c1410u;
    // NOP
    // 0x3c1414: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C1414u;
    SET_GPR_U32(ctx, 31, 0x3C141Cu);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C1414u, 0x3C141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C141Cu;
label_3c141c:
    // 0x3c141c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c141cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c1420: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x3c1420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3c1424: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3C1424u;
    SET_GPR_U32(ctx, 31, 0x3C142Cu);
    ctx->pc = 0x3C1428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1424u;
    // 0x3c1428: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3C1424u, 0x3C142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C142Cu;
label_3c142c:
    // 0x3c142c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3c142cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c1430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c1430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c1434: 0x1483005a  bne         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x3C1434u;
    {
        const bool branch_taken_0x3c1434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C1438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1434u;
        // 0x3c1438: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1434) {
            ctx->pc = 0x3C15A0u;
            goto label_3c15a0;
        }
    }
    ctx->pc = 0x3C143Cu;
    // 0x3c143c: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C143Cu;
    SET_GPR_U32(ctx, 31, 0x3C1444u);
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C143Cu, 0x3C1444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1444u;
label_3c1444:
    // 0x3c1444: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c1444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c1448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c144c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c144cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c1450: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c1450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c1454: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x3c1454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c1458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c1458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c145c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3c145cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3c1460: 0x0  nop
    ctx->pc = 0x3c1460u;
    // NOP
    // 0x3c1464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c1464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1468: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3C1468u;
    SET_GPR_U32(ctx, 31, 0x3C1470u);
    ctx->pc = 0x3C146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1468u;
    // 0x3c146c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3C1468u, 0x3C1470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1470u;
label_3c1470:
    // 0x3c1470: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1470u;
    {
        const bool branch_taken_0x3c1470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1470u;
        // 0x3c1474: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1470) {
            ctx->pc = 0x3C1480u;
            goto label_3c1480;
        }
    }
    ctx->pc = 0x3C1478u;
    // 0x3c1478: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3c1478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c147c: 0x0  nop
    ctx->pc = 0x3c147cu;
    // NOP
label_3c1480:
    // 0x3c1480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c1480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1484: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c1488: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3c1488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c148c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c148cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c1490: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c1490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c1494: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3c1494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c1498: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3c1498u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3c149c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3c149cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3c14a0: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C14A0u;
    SET_GPR_U32(ctx, 31, 0x3C14A8u);
    ctx->pc = 0x3C14A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C14A0u;
    // 0x3c14a4: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C14A0u, 0x3C14A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C14A8u;
label_3c14a8:
    // 0x3c14a8: 0x86020084  lh          $v0, 0x84($s0)
    ctx->pc = 0x3c14a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c14ac: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3c14acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3c14b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C14B0u;
    {
        const bool branch_taken_0x3c14b0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3C14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14B0u;
        // 0x3c14b4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c14b0) {
            ctx->pc = 0x3C14C0u;
            goto label_3c14c0;
        }
    }
    ctx->pc = 0x3C14B8u;
    // 0x3c14b8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x3c14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3c14bc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3c14bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3c14c0:
    // 0x3c14c0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3c14c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c14c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c14c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c14c8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3c14c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3c14cc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3c14ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c14d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c14d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3c14d4: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C14D4u;
    SET_GPR_U32(ctx, 31, 0x3C14DCu);
    ctx->pc = 0x3C14D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C14D4u;
    // 0x3c14d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C14D4u, 0x3C14DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C14DCu;
label_3c14dc:
    // 0x3c14dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C14DCu;
    {
        const bool branch_taken_0x3c14dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c14dc) {
            ctx->pc = 0x3C1510u;
            goto label_3c1510;
        }
    }
    ctx->pc = 0x3C14E4u;
    // 0x3c14e4: 0x86030084  lh          $v1, 0x84($s0)
    ctx->pc = 0x3c14e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c14e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C14E8u;
    {
        const bool branch_taken_0x3c14e8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3C14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C14E8u;
        // 0x3c14ec: 0x32883  sra         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c14e8) {
            ctx->pc = 0x3C14F8u;
            goto label_3c14f8;
        }
    }
    ctx->pc = 0x3C14F0u;
    // 0x3c14f0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x3c14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3c14f4: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x3c14f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
label_3c14f8:
    // 0x3c14f8: 0x86040086  lh          $a0, 0x86($s0)
    ctx->pc = 0x3c14f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x3c14fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c14fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c1500: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3c1500u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3c1504: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x3c1504u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c1508: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3c1508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c150c: 0x0  nop
    ctx->pc = 0x3c150cu;
    // NOP
label_3c1510:
    // 0x3c1510: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C1510u;
    SET_GPR_U32(ctx, 31, 0x3C1518u);
    ctx->pc = 0x3C1514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1510u;
    // 0x3c1514: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C1510u, 0x3C1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1518u;
label_3c1518:
    // 0x3c1518: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c1518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3c151c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1520: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3c1520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c1524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c1524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1528: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C1528u;
    SET_GPR_U32(ctx, 31, 0x3C1530u);
    ctx->pc = 0x3C152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1528u;
    // 0x3c152c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C1528u, 0x3C1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1530u;
label_3c1530:
    // 0x3c1530: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C1530u;
    {
        const bool branch_taken_0x3c1530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1530) {
            ctx->pc = 0x3C1558u;
            goto label_3c1558;
        }
    }
    ctx->pc = 0x3C1538u;
    // 0x3c1538: 0x86040084  lh          $a0, 0x84($s0)
    ctx->pc = 0x3c1538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c153c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C153Cu;
    {
        const bool branch_taken_0x3c153c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3C1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C153Cu;
        // 0x3c1540: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c153c) {
            ctx->pc = 0x3C154Cu;
            goto label_3c154c;
        }
    }
    ctx->pc = 0x3C1544u;
    // 0x3c1544: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x3c1544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3c1548: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3c1548u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_3c154c:
    // 0x3c154c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x3c154cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c1550: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3c1550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3c1554: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3c1554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_3c1558:
    // 0x3c1558: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c1558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c155c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3c155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c1560: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3c1560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c1564: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c1564u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c1568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c1568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c156c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3c156cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c1570: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3c1570u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3c1574: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C1574u;
    SET_GPR_U32(ctx, 31, 0x3C157Cu);
    ctx->pc = 0x3C1578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1574u;
    // 0x3c1578: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C1574u, 0x3C157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C157Cu;
label_3c157c:
    // 0x3c157c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1580: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3c1580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c1584: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c1584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3c1588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c1588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c158c: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C158Cu;
    SET_GPR_U32(ctx, 31, 0x3C1594u);
    ctx->pc = 0x3C1590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C158Cu;
    // 0x3c1590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C158Cu, 0x3C1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1594u;
label_3c1594:
    // 0x3c1594: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C1594u;
    {
        const bool branch_taken_0x3c1594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1594u;
        // 0x3c1598: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1594) {
            ctx->pc = 0x3C15A0u;
            goto label_3c15a0;
        }
    }
    ctx->pc = 0x3C159Cu;
    // 0x3c159c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3c159cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_3c15a0:
    // 0x3c15a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c15a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c15a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c15a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c15a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c15a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c15ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c15acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c15b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C15B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C15B0u;
        // 0x3c15b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C15B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C15B8u;
}

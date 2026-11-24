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

// Function: sub_001E13F0
// Address: 0x1e13f0 - 0x1e14d0
void sub_001E13F0_0x1e13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E13F0_0x1e13f0");
#endif

    switch (ctx->pc) {
        case 0x1e13f0u: goto label_1e13f0;
        case 0x1e13f4u: goto label_1e13f4;
        case 0x1e13f8u: goto label_1e13f8;
        case 0x1e13fcu: goto label_1e13fc;
        case 0x1e1400u: goto label_1e1400;
        case 0x1e1404u: goto label_1e1404;
        case 0x1e1408u: goto label_1e1408;
        case 0x1e140cu: goto label_1e140c;
        case 0x1e1410u: goto label_1e1410;
        case 0x1e1414u: goto label_1e1414;
        case 0x1e1418u: goto label_1e1418;
        case 0x1e141cu: goto label_1e141c;
        case 0x1e1420u: goto label_1e1420;
        case 0x1e1424u: goto label_1e1424;
        case 0x1e1428u: goto label_1e1428;
        case 0x1e142cu: goto label_1e142c;
        case 0x1e1430u: goto label_1e1430;
        case 0x1e1434u: goto label_1e1434;
        case 0x1e1438u: goto label_1e1438;
        case 0x1e143cu: goto label_1e143c;
        case 0x1e1440u: goto label_1e1440;
        case 0x1e1444u: goto label_1e1444;
        case 0x1e1448u: goto label_1e1448;
        case 0x1e144cu: goto label_1e144c;
        case 0x1e1450u: goto label_1e1450;
        case 0x1e1454u: goto label_1e1454;
        case 0x1e1458u: goto label_1e1458;
        case 0x1e145cu: goto label_1e145c;
        case 0x1e1460u: goto label_1e1460;
        case 0x1e1464u: goto label_1e1464;
        case 0x1e1468u: goto label_1e1468;
        case 0x1e146cu: goto label_1e146c;
        case 0x1e1470u: goto label_1e1470;
        case 0x1e1474u: goto label_1e1474;
        case 0x1e1478u: goto label_1e1478;
        case 0x1e147cu: goto label_1e147c;
        case 0x1e1480u: goto label_1e1480;
        case 0x1e1484u: goto label_1e1484;
        case 0x1e1488u: goto label_1e1488;
        case 0x1e148cu: goto label_1e148c;
        case 0x1e1490u: goto label_1e1490;
        case 0x1e1494u: goto label_1e1494;
        case 0x1e1498u: goto label_1e1498;
        case 0x1e149cu: goto label_1e149c;
        case 0x1e14a0u: goto label_1e14a0;
        case 0x1e14a4u: goto label_1e14a4;
        case 0x1e14a8u: goto label_1e14a8;
        case 0x1e14acu: goto label_1e14ac;
        case 0x1e14b0u: goto label_1e14b0;
        case 0x1e14b4u: goto label_1e14b4;
        case 0x1e14b8u: goto label_1e14b8;
        case 0x1e14bcu: goto label_1e14bc;
        case 0x1e14c0u: goto label_1e14c0;
        case 0x1e14c4u: goto label_1e14c4;
        case 0x1e14c8u: goto label_1e14c8;
        case 0x1e14ccu: goto label_1e14cc;
        default: break;
    }

    ctx->pc = 0x1e13f0u;

label_1e13f0:
    // 0x1e13f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e13f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e13f4:
    // 0x1e13f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e13f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e13f8:
    // 0x1e13f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e13fc:
    // 0x1e13fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e1400:
    // 0x1e1400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e1404:
    if (ctx->pc == 0x1E1404u) {
        ctx->pc = 0x1E1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1400u;
        // 0x1e1404: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1408u;
        goto label_1e1408;
    }
    ctx->pc = 0x1E1400u;
    {
        const bool branch_taken_0x1e1400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1400u;
        // 0x1e1404: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1400) {
            ctx->pc = 0x1E1410u;
            goto label_1e1410;
        }
    }
    ctx->pc = 0x1E1408u;
label_1e1408:
    // 0x1e1408: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e140c:
    if (ctx->pc == 0x1E140Cu) {
        ctx->pc = 0x1E140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1408u;
        // 0x1e140c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1410u;
        goto label_1e1410;
    }
    ctx->pc = 0x1E1408u;
    {
        const bool branch_taken_0x1e1408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1408u;
        // 0x1e140c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1408) {
            ctx->pc = 0x1E14C0u;
            goto label_1e14c0;
        }
    }
    ctx->pc = 0x1E1410u;
label_1e1410:
    // 0x1e1410: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e1410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e1414:
    // 0x1e1414: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e1414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e1418:
    // 0x1e1418: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1e1418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1e141c:
    // 0x1e141c: 0x320f809  jalr        $t9
label_1e1420:
    if (ctx->pc == 0x1E1420u) {
        ctx->pc = 0x1E1424u;
        goto label_1e1424;
    }
    ctx->pc = 0x1E141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1424u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E141Cu, 0x1E1424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1424u;
label_1e1424:
    // 0x1e1424: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e1428:
    if (ctx->pc == 0x1E1428u) {
        ctx->pc = 0x1E142Cu;
        goto label_1e142c;
    }
    ctx->pc = 0x1E1424u;
    {
        const bool branch_taken_0x1e1424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1424) {
            ctx->pc = 0x1E1448u;
            goto label_1e1448;
        }
    }
    ctx->pc = 0x1E142Cu;
label_1e142c:
    // 0x1e142c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e142cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1430:
    // 0x1e1430: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e1430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e1434:
    // 0x1e1434: 0x320f809  jalr        $t9
label_1e1438:
    if (ctx->pc == 0x1E1438u) {
        ctx->pc = 0x1E1438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1434u;
        // 0x1e1438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E143Cu;
        goto label_1e143c;
    }
    ctx->pc = 0x1E1434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E143Cu);
        ctx->pc = 0x1E1438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1434u;
        // 0x1e1438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1434u, 0x1E143Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E143Cu;
label_1e143c:
    // 0x1e143c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1e1440:
    if (ctx->pc == 0x1E1440u) {
        ctx->pc = 0x1E1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E143Cu;
        // 0x1e1440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1444u;
        goto label_1e1444;
    }
    ctx->pc = 0x1E143Cu;
    {
        const bool branch_taken_0x1e143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E143Cu;
        // 0x1e1440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e143c) {
            ctx->pc = 0x1E14C0u;
            goto label_1e14c0;
        }
    }
    ctx->pc = 0x1E1444u;
label_1e1444:
    // 0x1e1444: 0x0  nop
    ctx->pc = 0x1e1444u;
    // NOP
label_1e1448:
    // 0x1e1448: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e1448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e144c:
    // 0x1e144c: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x1e144cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e1450:
    // 0x1e1450: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1e1450u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1454:
    // 0x1e1454: 0x8507000a  lh          $a3, 0xA($t0)
    ctx->pc = 0x1e1454u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_1e1458:
    // 0x1e1458: 0x85030008  lh          $v1, 0x8($t0)
    ctx->pc = 0x1e1458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_1e145c:
    // 0x1e145c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1e145cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1e1460:
    // 0x1e1460: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1e1460u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1e1464:
    // 0x1e1464: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1e1464u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e1468:
    // 0x1e1468: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1e1468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1e146c:
    // 0x1e146c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e146cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e1470:
    // 0x1e1470: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e1470u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e1474:
    // 0x1e1474: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e1474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e1478:
    // 0x1e1478: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e1478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e147c:
    // 0x1e147c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e147cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e1480:
    // 0x1e1480: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e1480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e1484:
    // 0x1e1484: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e1484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e1488:
    // 0x1e1488: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e1488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e148c:
    // 0x1e148c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e1490:
    // 0x1e1490: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e1490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1e1494:
    // 0x1e1494: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e1498:
    if (ctx->pc == 0x1E1498u) {
        ctx->pc = 0x1E1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1494u;
        // 0x1e1498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E149Cu;
        goto label_1e149c;
    }
    ctx->pc = 0x1E1494u;
    {
        const bool branch_taken_0x1e1494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1494u;
        // 0x1e1498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1494) {
            ctx->pc = 0x1E14A8u;
            goto label_1e14a8;
        }
    }
    ctx->pc = 0x1E149Cu;
label_1e149c:
    // 0x1e149c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e14a0:
    if (ctx->pc == 0x1E14A0u) {
        ctx->pc = 0x1E14A4u;
        goto label_1e14a4;
    }
    ctx->pc = 0x1E149Cu;
    {
        const bool branch_taken_0x1e149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e149c) {
            ctx->pc = 0x1E14C0u;
            goto label_1e14c0;
        }
    }
    ctx->pc = 0x1E14A4u;
label_1e14a4:
    // 0x1e14a4: 0x0  nop
    ctx->pc = 0x1e14a4u;
    // NOP
label_1e14a8:
    // 0x1e14a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e14a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e14ac:
    // 0x1e14ac: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x1e14acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e14b0:
    // 0x1e14b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e14b4:
    // 0x1e14b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e14b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e14b8:
    // 0x1e14b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e14b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e14bc:
    // 0x1e14bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e14bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e14c0:
    // 0x1e14c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e14c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e14c4:
    // 0x1e14c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e14c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e14c8:
    // 0x1e14c8: 0x3e00008  jr          $ra
label_1e14cc:
    if (ctx->pc == 0x1E14CCu) {
        ctx->pc = 0x1E14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14C8u;
        // 0x1e14cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14D0u;
        goto label_fallthrough_0x1e14c8;
    }
    ctx->pc = 0x1E14C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14C8u;
        // 0x1e14cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E14C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e14c8:
    ctx->pc = 0x1E14D0u;
}

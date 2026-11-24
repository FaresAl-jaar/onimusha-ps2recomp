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

// Function: sub_003A13F0
// Address: 0x3a13f0 - 0x3a156c
void sub_003A13F0_0x3a13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A13F0_0x3a13f0");
#endif

    switch (ctx->pc) {
        case 0x3a1408u: goto label_3a1408;
        case 0x3a1434u: goto label_3a1434;
        case 0x3a1448u: goto label_3a1448;
        case 0x3a145cu: goto label_3a145c;
        case 0x3a1494u: goto label_3a1494;
        case 0x3a14a8u: goto label_3a14a8;
        case 0x3a14c4u: goto label_3a14c4;
        case 0x3a151cu: goto label_3a151c;
        case 0x3a1538u: goto label_3a1538;
        default: break;
    }

    ctx->pc = 0x3a13f0u;

    // 0x3a13f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a13f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a13f4: 0x240403b0  addiu       $a0, $zero, 0x3B0
    ctx->pc = 0x3a13f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
    // 0x3a13f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a13f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a13fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a13fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a1400: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3A1400u;
    SET_GPR_U32(ctx, 31, 0x3A1408u);
    ctx->pc = 0x3A1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1400u;
    // 0x3a1404: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3A1400u, 0x3A1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1408u;
label_3a1408:
    // 0x3a1408: 0xaf828c5c  sw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 2));
    // 0x3a140c: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a140cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1410: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x3A1410u;
    {
        const bool branch_taken_0x3a1410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1410u;
        // 0x3a1414: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1410) {
            ctx->pc = 0x3A1558u;
            goto label_3a1558;
        }
    }
    ctx->pc = 0x3A1418u;
    // 0x3a1418: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3a1418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a141c: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3a141cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x3a1420: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3a1420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3a1424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1428: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a142c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3A142Cu;
    SET_GPR_U32(ctx, 31, 0x3A1434u);
    ctx->pc = 0x3A1430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A142Cu;
    // 0x3a1430: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3A142Cu, 0x3A1434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1434u;
label_3a1434:
    // 0x3a1434: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x3a1434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3a1438: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3a1438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a143c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3A143Cu;
    {
        const bool branch_taken_0x3a143c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A143Cu;
        // 0x3a1440: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a143c) {
            ctx->pc = 0x3A1470u;
            goto label_3a1470;
        }
    }
    ctx->pc = 0x3A1444u;
    // 0x3a1444: 0x0  nop
    ctx->pc = 0x3a1444u;
    // NOP
label_3a1448:
    // 0x3a1448: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x3a1448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3a144c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a144cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a1450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1454: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3A1454u;
    SET_GPR_U32(ctx, 31, 0x3A145Cu);
    ctx->pc = 0x3A1458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1454u;
    // 0x3a1458: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3A1454u, 0x3A145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A145Cu;
label_3a145c:
    // 0x3a145c: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x3a145cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3a1460: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a1460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a1464: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3a1464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a1468: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A1468u;
    {
        const bool branch_taken_0x3a1468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1468) {
            ctx->pc = 0x3A1448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1448;
        }
    }
    ctx->pc = 0x3A1470u;
label_3a1470:
    // 0x3a1470: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3a1470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3a1474: 0x8c30b870  lw          $s0, -0x4790($at)
    ctx->pc = 0x3a1474u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x80B870u));
    // 0x3a1478: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3a1478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a147c: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a147cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1484: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x3a1484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x3a1488: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a148c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3A148Cu;
    SET_GPR_U32(ctx, 31, 0x3A1494u);
    ctx->pc = 0x3A1490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A148Cu;
    // 0x3a1490: 0x244501d0  addiu       $a1, $v0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3A148Cu, 0x3A1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1494u;
label_3a1494:
    // 0x3a1494: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x3a1494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3a1498: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3a1498u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a149c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A149Cu;
    {
        const bool branch_taken_0x3a149c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A149Cu;
        // 0x3a14a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a149c) {
            ctx->pc = 0x3A14E0u;
            goto label_3a14e0;
        }
    }
    ctx->pc = 0x3A14A4u;
    // 0x3a14a4: 0x0  nop
    ctx->pc = 0x3a14a4u;
    // NOP
label_3a14a8:
    // 0x3a14a8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3a14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3a14ac: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A14ACu;
    {
        const bool branch_taken_0x3a14ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A14ACu;
        // 0x3a14b0: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a14ac) {
            ctx->pc = 0x3A14C8u;
            goto label_3a14c8;
        }
    }
    ctx->pc = 0x3A14B4u;
    // 0x3a14b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a14b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a14b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a14b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a14bc: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3A14BCu;
    SET_GPR_U32(ctx, 31, 0x3A14C4u);
    ctx->pc = 0x3A14C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A14BCu;
    // 0x3a14c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3A14BCu, 0x3A14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A14C4u;
label_3a14c4:
    // 0x3a14c4: 0x0  nop
    ctx->pc = 0x3a14c4u;
    // NOP
label_3a14c8:
    // 0x3a14c8: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x3a14c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3a14cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a14ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a14d0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3a14d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a14d4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A14D4u;
    {
        const bool branch_taken_0x3a14d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a14d4) {
            ctx->pc = 0x3A14A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a14a8;
        }
    }
    ctx->pc = 0x3A14DCu;
    // 0x3a14dc: 0x0  nop
    ctx->pc = 0x3a14dcu;
    // NOP
label_3a14e0:
    // 0x3a14e0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a14e4: 0x2442cfd0  addiu       $v0, $v0, -0x3030
    ctx->pc = 0x3a14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954960));
    // 0x3a14e8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3a14e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a14ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a14ecu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65CFD0u));
    // 0x3a14f0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3a14f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a14f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a14f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a14f8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a14fc: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3a14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3a1500: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3a1500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x3a1504: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a1504u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65CFE0u));
    // 0x3a1508: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3a1508u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3a150c: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1510: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a1510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a1514: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x3A1514u;
    SET_GPR_U32(ctx, 31, 0x3A151Cu);
    ctx->pc = 0x3A1518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1514u;
    // 0x3a1518: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x3A1514u, 0x3A151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A151Cu;
label_3a151c:
    // 0x3a151c: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1520: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3a1520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a1524: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3a1524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a1528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a1528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a152c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a152cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a1530: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x3A1530u;
    SET_GPR_U32(ctx, 31, 0x3A1538u);
    ctx->pc = 0x3A1534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1530u;
    // 0x3a1534: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x3A1530u, 0x3A1538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1538u;
label_3a1538:
    // 0x3a1538: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a153c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1540: 0xa0600390  sb          $zero, 0x390($v1)
    ctx->pc = 0x3a1540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 912), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a1544: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1548: 0xa46003a0  sh          $zero, 0x3A0($v1)
    ctx->pc = 0x3a1548u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 928), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a154c: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1550: 0xa06403a2  sb          $a0, 0x3A2($v1)
    ctx->pc = 0x3a1550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 930), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a1554: 0x0  nop
    ctx->pc = 0x3a1554u;
    // NOP
label_3a1558:
    // 0x3a1558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a1558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a155c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a155cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a1560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1564: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1564u;
        // 0x3a1568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A156Cu;
}

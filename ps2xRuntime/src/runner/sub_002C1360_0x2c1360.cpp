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

// Function: sub_002C1360
// Address: 0x2c1360 - 0x2c148c
void sub_002C1360_0x2c1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1360_0x2c1360");
#endif

    switch (ctx->pc) {
        case 0x2c13a0u: goto label_2c13a0;
        case 0x2c1444u: goto label_2c1444;
        default: break;
    }

    ctx->pc = 0x2c1360u;

    // 0x2c1360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c1364: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c1368: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c1368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c136c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c1370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c1374: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c1374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c137c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c137cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1380: 0x90d30001  lbu         $s3, 0x1($a2)
    ctx->pc = 0x2c1380u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c1384: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x2c1384u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c1388: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1388u;
    {
        const bool branch_taken_0x2c1388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1388u;
        // 0x2c138c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1388) {
            ctx->pc = 0x2C1398u;
            goto label_2c1398;
        }
    }
    ctx->pc = 0x2C1390u;
    // 0x2c1390: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1390u;
    {
        const bool branch_taken_0x2c1390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1390u;
        // 0x2c1394: 0x92430083  lbu         $v1, 0x83($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 131)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1390) {
            ctx->pc = 0x2C13B8u;
            goto label_2c13b8;
        }
    }
    ctx->pc = 0x2C1398u;
label_2c1398:
    // 0x2c1398: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C1398u;
    SET_GPR_U32(ctx, 31, 0x2C13A0u);
    ctx->pc = 0x2C139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1398u;
    // 0x2c139c: 0x8e450088  lw          $a1, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C1398u, 0x2C13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C13A0u;
label_2c13a0:
    // 0x2c13a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C13A0u;
    {
        const bool branch_taken_0x2c13a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c13a0) {
            ctx->pc = 0x2C13B0u;
            goto label_2c13b0;
        }
    }
    ctx->pc = 0x2C13A8u;
    // 0x2c13a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C13A8u;
    {
        const bool branch_taken_0x2c13a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13A8u;
        // 0x2c13ac: 0x904205b3  lbu         $v0, 0x5B3($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1459)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13a8) {
            ctx->pc = 0x2C13B4u;
            goto label_2c13b4;
        }
    }
    ctx->pc = 0x2C13B0u;
label_2c13b0:
    // 0x2c13b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c13b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c13b4:
    // 0x2c13b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c13b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c13b8:
    // 0x2c13b8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2c13b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2c13bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C13BCu;
    {
        const bool branch_taken_0x2c13bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13BCu;
        // 0x2c13c0: 0x92040002  lbu         $a0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13bc) {
            ctx->pc = 0x2C13D8u;
            goto label_2c13d8;
        }
    }
    ctx->pc = 0x2C13C4u;
    // 0x2c13c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c13c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c13c8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2c13c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c13cc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c13ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c13d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C13D0u;
    {
        const bool branch_taken_0x2c13d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13D0u;
        // 0x2c13d4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13d0) {
            ctx->pc = 0x2C13E4u;
            goto label_2c13e4;
        }
    }
    ctx->pc = 0x2C13D8u;
label_2c13d8:
    // 0x2c13d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c13d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c13dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2c13dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c13e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c13e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c13e4:
    // 0x2c13e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C13E4u;
    {
        const bool branch_taken_0x2c13e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c13e4) {
            ctx->pc = 0x2C1468u;
            goto label_2c1468;
        }
    }
    ctx->pc = 0x2C13ECu;
    // 0x2c13ec: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c13ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c13f0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C13F0u;
    {
        const bool branch_taken_0x2c13f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13F0u;
        // 0x2c13f4: 0x92050003  lbu         $a1, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13f0) {
            ctx->pc = 0x2C1450u;
            goto label_2c1450;
        }
    }
    ctx->pc = 0x2C13F8u;
    // 0x2c13f8: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C13F8u;
    {
        const bool branch_taken_0x2c13f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13F8u;
        // 0x2c13fc: 0xa240004f  sb          $zero, 0x4F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13f8) {
            ctx->pc = 0x2C1438u;
            goto label_2c1438;
        }
    }
    ctx->pc = 0x2C1400u;
    // 0x2c1400: 0x92440037  lbu         $a0, 0x37($s2)
    ctx->pc = 0x2c1400u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x2c1404: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c1404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c1408: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c1408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c140c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c1410: 0xa244004e  sb          $a0, 0x4E($s2)
    ctx->pc = 0x2c1410u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1414: 0xa2450037  sb          $a1, 0x37($s2)
    ctx->pc = 0x2c1414u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1418: 0xa2400032  sb          $zero, 0x32($s2)
    ctx->pc = 0x2c1418u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c141c: 0xa243005f  sb          $v1, 0x5F($s2)
    ctx->pc = 0x2c141cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1420: 0xa6400080  sh          $zero, 0x80($s2)
    ctx->pc = 0x2c1420u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1424: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c1424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c1428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c142c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C142Cu;
    {
        const bool branch_taken_0x2c142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C142Cu;
        // 0x2c1430: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c142c) {
            ctx->pc = 0x2C1460u;
            goto label_2c1460;
        }
    }
    ctx->pc = 0x2C1434u;
    // 0x2c1434: 0x0  nop
    ctx->pc = 0x2c1434u;
    // NOP
label_2c1438:
    // 0x2c1438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c1438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c143c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C143Cu;
    SET_GPR_U32(ctx, 31, 0x2C1444u);
    ctx->pc = 0x2C1440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C143Cu;
    // 0x2c1440: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C143Cu, 0x2C1444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1444u;
label_2c1444:
    // 0x2c1444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1444u;
    {
        const bool branch_taken_0x2c1444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1444) {
            ctx->pc = 0x2C1458u;
            goto label_2c1458;
        }
    }
    ctx->pc = 0x2C144Cu;
    // 0x2c144c: 0x0  nop
    ctx->pc = 0x2c144cu;
    // NOP
label_2c1450:
    // 0x2c1450: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c1450u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1454: 0x0  nop
    ctx->pc = 0x2c1454u;
    // NOP
label_2c1458:
    // 0x2c1458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c145c: 0x0  nop
    ctx->pc = 0x2c145cu;
    // NOP
label_2c1460:
    // 0x2c1460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1460u;
    {
        const bool branch_taken_0x2c1460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1460) {
            ctx->pc = 0x2C1470u;
            goto label_2c1470;
        }
    }
    ctx->pc = 0x2C1468u;
label_2c1468:
    // 0x2c1468: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2c1468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c146c: 0x0  nop
    ctx->pc = 0x2c146cu;
    // NOP
label_2c1470:
    // 0x2c1470: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c1474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c147c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c147cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1484: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1484u;
        // 0x2c1488: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C148Cu;
}

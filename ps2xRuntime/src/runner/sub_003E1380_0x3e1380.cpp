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

// Function: sub_003E1380
// Address: 0x3e1380 - 0x3e1530
void sub_003E1380_0x3e1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1380_0x3e1380");
#endif

    ctx->pc = 0x3e1380u;

    // 0x3e1380: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3e1380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3e1384: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3e1384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3e1388: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3e1388u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3e138c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e138cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e1390: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e1390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e1394: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3e1394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e1398: 0xdca30500  ld          $v1, 0x500($a1)
    ctx->pc = 0x3e1398u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x3e139c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3e139cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3e13a0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3e13a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3e13a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e13a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e13a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3e13a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3e13ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e13acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e13b0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x3e13b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x3e13b4: 0x1460005c  bnez        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x3E13B4u;
    {
        const bool branch_taken_0x3e13b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e13b4) {
            ctx->pc = 0x3E1528u;
            goto label_3e1528;
        }
    }
    ctx->pc = 0x3E13BCu;
    // 0x3e13bc: 0x84a304e8  lh          $v1, 0x4E8($a1)
    ctx->pc = 0x3e13bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1256)));
    // 0x3e13c0: 0x24640a00  addiu       $a0, $v1, 0xA00
    ctx->pc = 0x3e13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2560));
    // 0x3e13c4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E13C4u;
    {
        const bool branch_taken_0x3e13c4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3E13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13C4u;
        // 0x3e13c8: 0x30830fff  andi        $v1, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13c4) {
            ctx->pc = 0x3E13D8u;
            goto label_3e13d8;
        }
    }
    ctx->pc = 0x3E13CCu;
    // 0x3e13cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E13CCu;
    {
        const bool branch_taken_0x3e13cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13CCu;
        // 0x3e13d0: 0x3243c  dsll32      $a0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13cc) {
            ctx->pc = 0x3E13DCu;
            goto label_3e13dc;
        }
    }
    ctx->pc = 0x3E13D4u;
    // 0x3e13d4: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x3e13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
label_3e13d8:
    // 0x3e13d8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3e13d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_3e13dc:
    // 0x3e13dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3e13dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3e13e0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E13E0u;
    {
        const bool branch_taken_0x3e13e0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3E13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E13E0u;
        // 0x3e13e4: 0x41a83  sra         $v1, $a0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e13e0) {
            ctx->pc = 0x3E13F0u;
            goto label_3e13f0;
        }
    }
    ctx->pc = 0x3E13E8u;
    // 0x3e13e8: 0x248303ff  addiu       $v1, $a0, 0x3FF
    ctx->pc = 0x3e13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x3e13ec: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x3e13ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
label_3e13f0:
    // 0x3e13f0: 0x90a6065c  lbu         $a2, 0x65C($a1)
    ctx->pc = 0x3e13f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1628)));
    // 0x3e13f4: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x3e13f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e13f8: 0x8f888cf8  lw          $t0, -0x7308($gp)
    ctx->pc = 0x3e13f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e13fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e13fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1400: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x3e1400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3e1404: 0x10c5002c  beq         $a2, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3E1404u;
    {
        const bool branch_taken_0x3e1404 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3E1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1404u;
        // 0x3e1408: 0x250401d4  addiu       $a0, $t0, 0x1D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 468));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1404) {
            ctx->pc = 0x3E14B8u;
            goto label_3e14b8;
        }
    }
    ctx->pc = 0x3E140Cu;
    // 0x3e140c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3e140cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3e1410: 0x10c50029  beq         $a2, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E1410u;
    {
        const bool branch_taken_0x3e1410 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3E1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1410u;
        // 0x3e1414: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1410) {
            ctx->pc = 0x3E14B8u;
            goto label_3e14b8;
        }
    }
    ctx->pc = 0x3E1418u;
    // 0x3e1418: 0x10c50027  beq         $a2, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3E1418u;
    {
        const bool branch_taken_0x3e1418 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e1418) {
            ctx->pc = 0x3E14B8u;
            goto label_3e14b8;
        }
    }
    ctx->pc = 0x3E1420u;
    // 0x3e1420: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3e1420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3e1424: 0x10c50024  beq         $a2, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E1424u;
    {
        const bool branch_taken_0x3e1424 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3E1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1424u;
        // 0x3e1428: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1424) {
            ctx->pc = 0x3E14B8u;
            goto label_3e14b8;
        }
    }
    ctx->pc = 0x3E142Cu;
    // 0x3e142c: 0x10c5001e  beq         $a2, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E142Cu;
    {
        const bool branch_taken_0x3e142c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e142c) {
            ctx->pc = 0x3E14A8u;
            goto label_3e14a8;
        }
    }
    ctx->pc = 0x3E1434u;
    // 0x3e1434: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3e1434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3e1438: 0x10c5001b  beq         $a2, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E1438u;
    {
        const bool branch_taken_0x3e1438 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3E143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1438u;
        // 0x3e143c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1438) {
            ctx->pc = 0x3E14A8u;
            goto label_3e14a8;
        }
    }
    ctx->pc = 0x3E1440u;
    // 0x3e1440: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E1440u;
    {
        const bool branch_taken_0x3e1440 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e1440) {
            ctx->pc = 0x3E1498u;
            goto label_3e1498;
        }
    }
    ctx->pc = 0x3E1448u;
    // 0x3e1448: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x3e1448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3e144c: 0x10c50012  beq         $a2, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E144Cu;
    {
        const bool branch_taken_0x3e144c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3E1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E144Cu;
        // 0x3e1450: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e144c) {
            ctx->pc = 0x3E1498u;
            goto label_3e1498;
        }
    }
    ctx->pc = 0x3E1454u;
    // 0x3e1454: 0x10c50004  beq         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1454u;
    {
        const bool branch_taken_0x3e1454 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e1454) {
            ctx->pc = 0x3E1468u;
            goto label_3e1468;
        }
    }
    ctx->pc = 0x3E145Cu;
    // 0x3e145c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3E145Cu;
    {
        const bool branch_taken_0x3e145c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e145c) {
            ctx->pc = 0x3E14C0u;
            goto label_3e14c0;
        }
    }
    ctx->pc = 0x3E1464u;
    // 0x3e1464: 0x0  nop
    ctx->pc = 0x3e1464u;
    // NOP
label_3e1468:
    // 0x3e1468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e1468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e146c: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x3e146cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3e1470: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1470u;
    {
        const bool branch_taken_0x3e1470 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x3E1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1470u;
        // 0x3e1474: 0xa1050290  sb          $a1, 0x290($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 656), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1470) {
            ctx->pc = 0x3E1480u;
            goto label_3e1480;
        }
    }
    ctx->pc = 0x3E1478u;
    // 0x3e1478: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x3e1478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x3e147c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3e147cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3e1480:
    // 0x3e1480: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3e1480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e1484: 0x14c5000e  bne         $a2, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E1484u;
    {
        const bool branch_taken_0x3e1484 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e1484) {
            ctx->pc = 0x3E14C0u;
            goto label_3e14c0;
        }
    }
    ctx->pc = 0x3E148Cu;
    // 0x3e148c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E148Cu;
    {
        const bool branch_taken_0x3e148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E148Cu;
        // 0x3e1490: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e148c) {
            ctx->pc = 0x3E14C0u;
            goto label_3e14c0;
        }
    }
    ctx->pc = 0x3E1494u;
    // 0x3e1494: 0x0  nop
    ctx->pc = 0x3e1494u;
    // NOP
label_3e1498:
    // 0x3e1498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e1498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e149c: 0xa1030290  sb          $v1, 0x290($t0)
    ctx->pc = 0x3e149cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 656), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e14a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E14A0u;
    {
        const bool branch_taken_0x3e14a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14A0u;
        // 0x3e14a4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e14a0) {
            ctx->pc = 0x3E14C0u;
            goto label_3e14c0;
        }
    }
    ctx->pc = 0x3E14A8u;
label_3e14a8:
    // 0x3e14a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e14a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e14ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E14ACu;
    {
        const bool branch_taken_0x3e14ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14ACu;
        // 0x3e14b0: 0xa1030290  sb          $v1, 0x290($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 656), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e14ac) {
            ctx->pc = 0x3E14C0u;
            goto label_3e14c0;
        }
    }
    ctx->pc = 0x3E14B4u;
    // 0x3e14b4: 0x0  nop
    ctx->pc = 0x3e14b4u;
    // NOP
label_3e14b8:
    // 0x3e14b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e14b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e14bc: 0xa1050290  sb          $a1, 0x290($t0)
    ctx->pc = 0x3e14bcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 656), (uint8_t)GPR_U32(ctx, 5));
label_3e14c0:
    // 0x3e14c0: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x3e14c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3e14c4: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x3e14c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x3e14c8: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E14C8u;
    {
        const bool branch_taken_0x3e14c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e14c8) {
            ctx->pc = 0x3E1528u;
            goto label_3e1528;
        }
    }
    ctx->pc = 0x3E14D0u;
    // 0x3e14d0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3e14d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e14d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3e14d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e14d8: 0x14c50007  bne         $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E14D8u;
    {
        const bool branch_taken_0x3e14d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e14d8) {
            ctx->pc = 0x3E14F8u;
            goto label_3e14f8;
        }
    }
    ctx->pc = 0x3E14E0u;
    // 0x3e14e0: 0x8085001c  lb          $a1, 0x1C($a0)
    ctx->pc = 0x3e14e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3e14e4: 0x14a70004  bne         $a1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E14E4u;
    {
        const bool branch_taken_0x3e14e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e14e4) {
            ctx->pc = 0x3E14F8u;
            goto label_3e14f8;
        }
    }
    ctx->pc = 0x3E14ECu;
    // 0x3e14ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e14f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3E14F0u;
    {
        const bool branch_taken_0x3e14f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14F0u;
        // 0x3e14f4: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e14f0) {
            ctx->pc = 0x3E1528u;
            goto label_3e1528;
        }
    }
    ctx->pc = 0x3E14F8u;
label_3e14f8:
    // 0x3e14f8: 0x3c063d0e  lui         $a2, 0x3D0E
    ctx->pc = 0x3e14f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15630 << 16));
    // 0x3e14fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e14fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1500: 0x34c6fa36  ori         $a2, $a2, 0xFA36
    ctx->pc = 0x3e1500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64054);
    // 0x3e1504: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x3e1504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1508: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e1508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e150c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e150cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e1510: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3e1510u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1514: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x3e1514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3e1518: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3e1518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3e151c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3e151cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3e1520: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x3e1520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e1524: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x3e1524u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_3e1528:
    // 0x3e1528: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1530u;
}

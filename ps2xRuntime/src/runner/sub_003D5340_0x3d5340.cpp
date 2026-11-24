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

// Function: sub_003D5340
// Address: 0x3d5340 - 0x3d5768
void sub_003D5340_0x3d5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5340_0x3d5340");
#endif

    switch (ctx->pc) {
        case 0x3d53e0u: goto label_3d53e0;
        case 0x3d53f4u: goto label_3d53f4;
        case 0x3d5450u: goto label_3d5450;
        case 0x3d54b8u: goto label_3d54b8;
        case 0x3d54e0u: goto label_3d54e0;
        case 0x3d5564u: goto label_3d5564;
        case 0x3d5578u: goto label_3d5578;
        case 0x3d55a0u: goto label_3d55a0;
        case 0x3d55d0u: goto label_3d55d0;
        case 0x3d5618u: goto label_3d5618;
        case 0x3d5678u: goto label_3d5678;
        case 0x3d56acu: goto label_3d56ac;
        case 0x3d56f0u: goto label_3d56f0;
        case 0x3d5724u: goto label_3d5724;
        case 0x3d5744u: goto label_3d5744;
        default: break;
    }

    ctx->pc = 0x3d5340u;

    // 0x3d5340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d5340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d5344: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3d5344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3d5348: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d5348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3d534c: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x3d534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x3d5350: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d5350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d5354: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d5354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d5358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d5358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d535c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d5360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d5360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d5364: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3d5364u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5368: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3d5368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d536c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x3d536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3d5370: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3d5370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5374: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3d5374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d5378: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x3d5378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d537c: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x3d537cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5380: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x3d5380u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x3d5384: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x3d5384u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x3d5388: 0x8f828060  lw          $v0, -0x7FA0($gp)
    ctx->pc = 0x3d5388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x3d538c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D538Cu;
    {
        const bool branch_taken_0x3d538c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D538Cu;
        // 0x3d5390: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d538c) {
            ctx->pc = 0x3D53A0u;
            goto label_3d53a0;
        }
    }
    ctx->pc = 0x3D5394u;
    // 0x3d5394: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x3d5394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d5398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D5398u;
    {
        const bool branch_taken_0x3d5398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5398u;
        // 0x3d539c: 0xa6820010  sh          $v0, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5398) {
            ctx->pc = 0x3D53A8u;
            goto label_3d53a8;
        }
    }
    ctx->pc = 0x3D53A0u;
label_3d53a0:
    // 0x3d53a0: 0x93828a54  lbu         $v0, -0x75AC($gp)
    ctx->pc = 0x3d53a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x3d53a4: 0xa6820010  sh          $v0, 0x10($s4)
    ctx->pc = 0x3d53a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
label_3d53a8:
    // 0x3d53a8: 0x8f828064  lw          $v0, -0x7F9C($gp)
    ctx->pc = 0x3d53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x3d53ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D53ACu;
    {
        const bool branch_taken_0x3d53ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d53ac) {
            ctx->pc = 0x3D53C0u;
            goto label_3d53c0;
        }
    }
    ctx->pc = 0x3D53B4u;
    // 0x3d53b4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x3d53b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d53b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D53B8u;
    {
        const bool branch_taken_0x3d53b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D53B8u;
        // 0x3d53bc: 0xa6820012  sh          $v0, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d53b8) {
            ctx->pc = 0x3D53C8u;
            goto label_3d53c8;
        }
    }
    ctx->pc = 0x3D53C0u;
label_3d53c0:
    // 0x3d53c0: 0x93828a55  lbu         $v0, -0x75AB($gp)
    ctx->pc = 0x3d53c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937173)));
    // 0x3d53c4: 0xa6820012  sh          $v0, 0x12($s4)
    ctx->pc = 0x3d53c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
label_3d53c8:
    // 0x3d53c8: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x3d53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3d53cc: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3D53CCu;
    {
        const bool branch_taken_0x3d53cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D53CCu;
        // 0x3d53d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d53cc) {
            ctx->pc = 0x3D5550u;
            goto label_3d5550;
        }
    }
    ctx->pc = 0x3D53D4u;
    // 0x3d53d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d53d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d53d8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3d53d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d53dc: 0x0  nop
    ctx->pc = 0x3d53dcu;
    // NOP
label_3d53e0:
    // 0x3d53e0: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x3d53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3d53e4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x3d53e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3d53e8: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x3d53e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d53ec: 0xc0d2854  jal         func_34A150
    ctx->pc = 0x3D53ECu;
    SET_GPR_U32(ctx, 31, 0x3D53F4u);
    ctx->pc = 0x3D53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D53ECu;
    // 0x3d53f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A150u, 0x3D53ECu, 0x3D53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D53F4u;
label_3d53f4:
    // 0x3d53f4: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x3d53f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3d53f8: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x3d53f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x3d53fc: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x3d53fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x3d5400: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3d5400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d5404: 0xa6020046  sh          $v0, 0x46($s0)
    ctx->pc = 0x3d5404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5408: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x3d5408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3d540c: 0xa6020048  sh          $v0, 0x48($s0)
    ctx->pc = 0x3d540cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5410: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x3d5410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x3d5414: 0xa602004a  sh          $v0, 0x4A($s0)
    ctx->pc = 0x3d5414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5418: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x3d5418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3d541c: 0xa602004c  sh          $v0, 0x4C($s0)
    ctx->pc = 0x3d541cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5420: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3d5420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3d5424: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3d5424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x3d5428: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d5428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d542c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x3d5430: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3d5430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3d5434: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x3d5434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x3d5438: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3d5438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3d543c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x3d543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x3d5440: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3d5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3d5444: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3d5444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x3d5448: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3d5448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3d544c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3d544cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3d5450:
    // 0x3d5450: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3d5450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d5454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d5454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d5458: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3d5458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d545c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d545cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d5460: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d5460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d5464: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D5464u;
    {
        const bool branch_taken_0x3d5464 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d5464) {
            ctx->pc = 0x3D5450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5450;
        }
    }
    ctx->pc = 0x3D546Cu;
    // 0x3d546c: 0x92420039  lbu         $v0, 0x39($s2)
    ctx->pc = 0x3d546cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x3d5470: 0x26450044  addiu       $a1, $s2, 0x44
    ctx->pc = 0x3d5470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x3d5474: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3d5474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3d5478: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d5478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d547c: 0xa2020079  sb          $v0, 0x79($s0)
    ctx->pc = 0x3d547cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5480: 0x9242003a  lbu         $v0, 0x3A($s2)
    ctx->pc = 0x3d5480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
    // 0x3d5484: 0xa202007a  sb          $v0, 0x7A($s0)
    ctx->pc = 0x3d5484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5488: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x3d5488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x3d548c: 0xa602007c  sh          $v0, 0x7C($s0)
    ctx->pc = 0x3d548cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5490: 0x9642003e  lhu         $v0, 0x3E($s2)
    ctx->pc = 0x3d5490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x3d5494: 0xa602007e  sh          $v0, 0x7E($s0)
    ctx->pc = 0x3d5494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5498: 0x92420040  lbu         $v0, 0x40($s2)
    ctx->pc = 0x3d5498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x3d549c: 0xa2020080  sb          $v0, 0x80($s0)
    ctx->pc = 0x3d549cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d54a0: 0x92420041  lbu         $v0, 0x41($s2)
    ctx->pc = 0x3d54a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 65)));
    // 0x3d54a4: 0xa2020081  sb          $v0, 0x81($s0)
    ctx->pc = 0x3d54a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d54a8: 0x92420042  lbu         $v0, 0x42($s2)
    ctx->pc = 0x3d54a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x3d54ac: 0xa2020082  sb          $v0, 0x82($s0)
    ctx->pc = 0x3d54acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d54b0: 0x92420043  lbu         $v0, 0x43($s2)
    ctx->pc = 0x3d54b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 67)));
    // 0x3d54b4: 0xa2020083  sb          $v0, 0x83($s0)
    ctx->pc = 0x3d54b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 2));
label_3d54b8:
    // 0x3d54b8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x3d54b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d54bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d54c0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3d54c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d54c4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3d54c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3d54c8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3d54c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3d54cc: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D54CCu;
    {
        const bool branch_taken_0x3d54cc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d54cc) {
            ctx->pc = 0x3D54B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d54b8;
        }
    }
    ctx->pc = 0x3D54D4u;
    // 0x3d54d4: 0x2645004e  addiu       $a1, $s2, 0x4E
    ctx->pc = 0x3d54d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 78));
    // 0x3d54d8: 0x2604008e  addiu       $a0, $s0, 0x8E
    ctx->pc = 0x3d54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 142));
    // 0x3d54dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d54dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d54e0:
    // 0x3d54e0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x3d54e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d54e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d54e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d54e8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3d54e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d54ec: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3d54ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3d54f0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3d54f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3d54f4: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D54F4u;
    {
        const bool branch_taken_0x3d54f4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d54f4) {
            ctx->pc = 0x3D54E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d54e0;
        }
    }
    ctx->pc = 0x3D54FCu;
    // 0x3d54fc: 0x96430058  lhu         $v1, 0x58($s2)
    ctx->pc = 0x3d54fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x3d5500: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d5500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3d5504: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x3d5504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3d5508: 0x26310064  addiu       $s1, $s1, 0x64
    ctx->pc = 0x3d5508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x3d550c: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x3d550cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d5510: 0x9243005a  lbu         $v1, 0x5A($s2)
    ctx->pc = 0x3d5510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x3d5514: 0xa203009a  sb          $v1, 0x9A($s0)
    ctx->pc = 0x3d5514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5518: 0x9243005b  lbu         $v1, 0x5B($s2)
    ctx->pc = 0x3d5518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
    // 0x3d551c: 0xa203009b  sb          $v1, 0x9B($s0)
    ctx->pc = 0x3d551cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5520: 0x9243005c  lbu         $v1, 0x5C($s2)
    ctx->pc = 0x3d5520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x3d5524: 0xa203009c  sb          $v1, 0x9C($s0)
    ctx->pc = 0x3d5524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5528: 0x9244005d  lbu         $a0, 0x5D($s2)
    ctx->pc = 0x3d5528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
    // 0x3d552c: 0x9243005e  lbu         $v1, 0x5E($s2)
    ctx->pc = 0x3d552cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 94)));
    // 0x3d5530: 0xa204009d  sb          $a0, 0x9D($s0)
    ctx->pc = 0x3d5530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 157), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d5534: 0xa203009e  sb          $v1, 0x9E($s0)
    ctx->pc = 0x3d5534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 158), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5538: 0x9243005f  lbu         $v1, 0x5F($s2)
    ctx->pc = 0x3d5538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 95)));
    // 0x3d553c: 0xa203009f  sb          $v1, 0x9F($s0)
    ctx->pc = 0x3d553cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 159), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5540: 0x92430060  lbu         $v1, 0x60($s2)
    ctx->pc = 0x3d5540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x3d5544: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x3d5544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5548: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x3D5548u;
    {
        const bool branch_taken_0x3d5548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5548u;
        // 0x3d554c: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5548) {
            ctx->pc = 0x3D53E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d53e0;
        }
    }
    ctx->pc = 0x3D5550u;
label_3d5550:
    // 0x3d5550: 0x3c050081  lui         $a1, 0x81
    ctx->pc = 0x3d5550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)129 << 16));
    // 0x3d5554: 0x2684045c  addiu       $a0, $s4, 0x45C
    ctx->pc = 0x3d5554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1116));
    // 0x3d5558: 0x24a50fe0  addiu       $a1, $a1, 0xFE0
    ctx->pc = 0x3d5558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4064));
    // 0x3d555c: 0xc049522  jal         func_125488
    ctx->pc = 0x3D555Cu;
    SET_GPR_U32(ctx, 31, 0x3D5564u);
    ctx->pc = 0x3D5560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D555Cu;
    // 0x3d5560: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3D555Cu, 0x3D5564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5564u;
label_3d5564:
    // 0x3d5564: 0x3c05008e  lui         $a1, 0x8E
    ctx->pc = 0x3d5564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)142 << 16));
    // 0x3d5568: 0x26840c5c  addiu       $a0, $s4, 0xC5C
    ctx->pc = 0x3d5568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3164));
    // 0x3d556c: 0x24a5bb80  addiu       $a1, $a1, -0x4480
    ctx->pc = 0x3d556cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
    // 0x3d5570: 0xc049522  jal         func_125488
    ctx->pc = 0x3D5570u;
    SET_GPR_U32(ctx, 31, 0x3D5578u);
    ctx->pc = 0x3D5574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5570u;
    // 0x3d5574: 0x240622d4  addiu       $a2, $zero, 0x22D4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8916));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3D5570u, 0x3D5578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5578u;
label_3d5578:
    // 0x3d5578: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3d5578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3d557c: 0x3c060092  lui         $a2, 0x92
    ctx->pc = 0x3d557cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)146 << 16));
    // 0x3d5580: 0x8c22c0f0  lw          $v0, -0x3F10($at)
    ctx->pc = 0x3d5580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x91C0F0u));
    // 0x3d5584: 0x24c6c0f8  addiu       $a2, $a2, -0x3F08
    ctx->pc = 0x3d5584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951160));
    // 0x3d5588: 0x2685023c  addiu       $a1, $s4, 0x23C
    ctx->pc = 0x3d5588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 572));
    // 0x3d558c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3d558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d5590: 0xae820234  sw          $v0, 0x234($s4)
    ctx->pc = 0x3d5590u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 564), GPR_U32(ctx, 2));
    // 0x3d5594: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3d5594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3d5598: 0x8c22c0f4  lw          $v0, -0x3F0C($at)
    ctx->pc = 0x3d5598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x91C0F4u));
    // 0x3d559c: 0xae820238  sw          $v0, 0x238($s4)
    ctx->pc = 0x3d559cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 568), GPR_U32(ctx, 2));
label_3d55a0:
    // 0x3d55a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3d55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d55a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d55a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d55a8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3d55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3d55ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3d55acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3d55b0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3d55b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3d55b4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d55b8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D55B8u;
    {
        const bool branch_taken_0x3d55b8 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55B8u;
        // 0x3d55bc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d55b8) {
            ctx->pc = 0x3D55A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d55a0;
        }
    }
    ctx->pc = 0x3D55C0u;
    // 0x3d55c0: 0x3c060092  lui         $a2, 0x92
    ctx->pc = 0x3d55c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)146 << 16));
    // 0x3d55c4: 0x268502bc  addiu       $a1, $s4, 0x2BC
    ctx->pc = 0x3d55c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 700));
    // 0x3d55c8: 0x24c6c178  addiu       $a2, $a2, -0x3E88
    ctx->pc = 0x3d55c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951288));
    // 0x3d55cc: 0x24040087  addiu       $a0, $zero, 0x87
    ctx->pc = 0x3d55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_3d55d0:
    // 0x3d55d0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3d55d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d55d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d55d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d55d8: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3d55d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d55dc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3d55dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d55e0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3d55e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3d55e4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3d55e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d55e8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D55E8u;
    {
        const bool branch_taken_0x3d55e8 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D55E8u;
        // 0x3d55ec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d55e8) {
            ctx->pc = 0x3D55D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d55d0;
        }
    }
    ctx->pc = 0x3D55F0u;
    // 0x3d55f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d55f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d55f4: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x3d55f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x3d55f8: 0x90226c10  lbu         $v0, 0x6C10($at)
    ctx->pc = 0x3d55f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C10u));
    // 0x3d55fc: 0x24c66c12  addiu       $a2, $a2, 0x6C12
    ctx->pc = 0x3d55fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27666));
    // 0x3d5600: 0x268503ce  addiu       $a1, $s4, 0x3CE
    ctx->pc = 0x3d5600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 974));
    // 0x3d5604: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3d5604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d5608: 0xa28203cc  sb          $v0, 0x3CC($s4)
    ctx->pc = 0x3d5608u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 972), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d560c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d560cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5610: 0x90226c11  lbu         $v0, 0x6C11($at)
    ctx->pc = 0x3d5610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C11u));
    // 0x3d5614: 0xa28203cd  sb          $v0, 0x3CD($s4)
    ctx->pc = 0x3d5614u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 973), (uint8_t)GPR_U32(ctx, 2));
label_3d5618:
    // 0x3d5618: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3d5618u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d561c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d5620: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3d5620u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d5624: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3d5624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5628: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3d5628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3d562c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3d562cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5630: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D5630u;
    {
        const bool branch_taken_0x3d5630 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5630u;
        // 0x3d5634: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5630) {
            ctx->pc = 0x3D5618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5618;
        }
    }
    ctx->pc = 0x3D5638u;
    // 0x3d5638: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d5638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d563c: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x3d563cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x3d5640: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x3d5640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3d5644: 0x24c66c20  addiu       $a2, $a2, 0x6C20
    ctx->pc = 0x3d5644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27680));
    // 0x3d5648: 0x268503dc  addiu       $a1, $s4, 0x3DC
    ctx->pc = 0x3d5648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 988));
    // 0x3d564c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3d564cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d5650: 0xa28203d8  sb          $v0, 0x3D8($s4)
    ctx->pc = 0x3d5650u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 984), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5654: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d5654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5658: 0x90226c1d  lbu         $v0, 0x6C1D($at)
    ctx->pc = 0x3d5658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Du));
    // 0x3d565c: 0xa28203d9  sb          $v0, 0x3D9($s4)
    ctx->pc = 0x3d565cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 985), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5660: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d5660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5664: 0x90226c1e  lbu         $v0, 0x6C1E($at)
    ctx->pc = 0x3d5664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Eu));
    // 0x3d5668: 0xa28203da  sb          $v0, 0x3DA($s4)
    ctx->pc = 0x3d5668u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 986), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d566c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d566cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5670: 0x90226c1f  lbu         $v0, 0x6C1F($at)
    ctx->pc = 0x3d5670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Fu));
    // 0x3d5674: 0xa28203db  sb          $v0, 0x3DB($s4)
    ctx->pc = 0x3d5674u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 987), (uint8_t)GPR_U32(ctx, 2));
label_3d5678:
    // 0x3d5678: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3d5678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d567c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d5680: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3d5680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3d5684: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3d5684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3d5688: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3d5688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3d568c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d568cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d5690: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D5690u;
    {
        const bool branch_taken_0x3d5690 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5690u;
        // 0x3d5694: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5690) {
            ctx->pc = 0x3D5678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5678;
        }
    }
    ctx->pc = 0x3D5698u;
    // 0x3d5698: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3d5698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3d569c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d56a0: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x3d56a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x3d56a4: 0xc0ce29c  jal         func_338A70
    ctx->pc = 0x3D56A4u;
    SET_GPR_U32(ctx, 31, 0x3D56ACu);
    ctx->pc = 0x3D56A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D56A4u;
    // 0x3d56a8: 0x26862f30  addiu       $a2, $s4, 0x2F30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A70u, 0x3D56A4u, 0x3D56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D56ACu;
label_3d56ac:
    // 0x3d56ac: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3d56acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3d56b0: 0x3c06008e  lui         $a2, 0x8E
    ctx->pc = 0x3d56b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)142 << 16));
    // 0x3d56b4: 0x9022e020  lbu         $v0, -0x1FE0($at)
    ctx->pc = 0x3d56b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8DE020u));
    // 0x3d56b8: 0x24c6e024  addiu       $a2, $a2, -0x1FDC
    ctx->pc = 0x3d56b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959140));
    // 0x3d56bc: 0x26853dd8  addiu       $a1, $s4, 0x3DD8
    ctx->pc = 0x3d56bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 15832));
    // 0x3d56c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3d56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3d56c4: 0xa2823dd4  sb          $v0, 0x3DD4($s4)
    ctx->pc = 0x3d56c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15828), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d56c8: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3d56c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3d56cc: 0x9022e021  lbu         $v0, -0x1FDF($at)
    ctx->pc = 0x3d56ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8DE021u));
    // 0x3d56d0: 0xa2823dd5  sb          $v0, 0x3DD5($s4)
    ctx->pc = 0x3d56d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15829), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d56d4: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3d56d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3d56d8: 0x9022e022  lbu         $v0, -0x1FDE($at)
    ctx->pc = 0x3d56d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8DE022u));
    // 0x3d56dc: 0xa2823dd6  sb          $v0, 0x3DD6($s4)
    ctx->pc = 0x3d56dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15830), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d56e0: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3d56e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3d56e4: 0x9022e023  lbu         $v0, -0x1FDD($at)
    ctx->pc = 0x3d56e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8DE023u));
    // 0x3d56e8: 0xa2823dd7  sb          $v0, 0x3DD7($s4)
    ctx->pc = 0x3d56e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15831), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d56ec: 0x0  nop
    ctx->pc = 0x3d56ecu;
    // NOP
label_3d56f0:
    // 0x3d56f0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3d56f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d56f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d56f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d56f8: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3d56f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d56fc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3d56fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5700: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3d5700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3d5704: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3d5704u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5708: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D5708u;
    {
        const bool branch_taken_0x3d5708 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5708u;
        // 0x3d570c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5708) {
            ctx->pc = 0x3D56F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d56f0;
        }
    }
    ctx->pc = 0x3D5710u;
    // 0x3d5710: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3d5710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3d5714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d5714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d5718: 0x2484a100  addiu       $a0, $a0, -0x5F00
    ctx->pc = 0x3d5718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    // 0x3d571c: 0xc0d83d0  jal         func_360F40
    ctx->pc = 0x3D571Cu;
    SET_GPR_U32(ctx, 31, 0x3D5724u);
    ctx->pc = 0x3D5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D571Cu;
    // 0x3d5720: 0x26863de4  addiu       $a2, $s4, 0x3DE4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 15844));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360F40u, 0x3D571Cu, 0x3D5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5724u;
label_3d5724:
    // 0x3d5724: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3d5724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3d5728: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3d5728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3d572c: 0x8c2240f0  lw          $v0, 0x40F0($at)
    ctx->pc = 0x3d572cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9140F0u));
    // 0x3d5730: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x3d5730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x3d5734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d5734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d5738: 0x26865d68  addiu       $a2, $s4, 0x5D68
    ctx->pc = 0x3d5738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 23912));
    // 0x3d573c: 0xc0d4354  jal         func_350D50
    ctx->pc = 0x3D573Cu;
    SET_GPR_U32(ctx, 31, 0x3D5744u);
    ctx->pc = 0x3D5740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D573Cu;
    // 0x3d5740: 0xae825d64  sw          $v0, 0x5D64($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 23908), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D50u, 0x3D573Cu, 0x3D5744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5744u;
label_3d5744:
    // 0x3d5744: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3d5744u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x3d5748: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d5748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d574c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d574cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d5750: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d5750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d5754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d5754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d5758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d575c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d575cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5760: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5760u;
        // 0x3d5764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5768u;
}

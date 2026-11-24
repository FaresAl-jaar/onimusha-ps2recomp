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

// Function: sub_003A5330
// Address: 0x3a5330 - 0x3a54e8
void sub_003A5330_0x3a5330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5330_0x3a5330");
#endif

    switch (ctx->pc) {
        case 0x3a5338u: goto label_3a5338;
        case 0x3a53c8u: goto label_3a53c8;
        case 0x3a5428u: goto label_3a5428;
        case 0x3a5488u: goto label_3a5488;
        default: break;
    }

    ctx->pc = 0x3a5330u;

    // 0x3a5330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5334: 0x0  nop
    ctx->pc = 0x3a5334u;
    // NOP
label_3a5338:
    // 0x3a5338: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x3a5338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3a533c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a5340: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x3a5340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3a5344: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3a5344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3a5348: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a5348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a534c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a534cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a5350: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A5350u;
    {
        const bool branch_taken_0x3a5350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5350) {
            ctx->pc = 0x3A5380u;
            goto label_3a5380;
        }
    }
    ctx->pc = 0x3A5358u;
    // 0x3a5358: 0xa0850007  sb          $a1, 0x7($a0)
    ctx->pc = 0x3a5358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a535c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a535cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5360: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x3a5360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5364: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a5364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a5368: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x3a5368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a536c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3a536cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5370: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x3a5370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5374: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3A5374u;
    {
        const bool branch_taken_0x3a5374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5374u;
        // 0x3a5378: 0xa4830014  sh          $v1, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5374) {
            ctx->pc = 0x3A54E0u;
            goto label_3a54e0;
        }
    }
    ctx->pc = 0x3A537Cu;
    // 0x3a537c: 0x0  nop
    ctx->pc = 0x3a537cu;
    // NOP
label_3a5380:
    // 0x3a5380: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3a5380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3a5384: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A5384u;
    {
        const bool branch_taken_0x3a5384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5384) {
            ctx->pc = 0x3A53B0u;
            goto label_3a53b0;
        }
    }
    ctx->pc = 0x3A538Cu;
    // 0x3a538c: 0xa0850007  sb          $a1, 0x7($a0)
    ctx->pc = 0x3a538cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a5390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5394: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x3a5394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a5398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a539c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x3a539cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a53a0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3a53a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a53a4: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x3a53a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a53a8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3A53A8u;
    {
        const bool branch_taken_0x3a53a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53A8u;
        // 0x3a53ac: 0xa4830014  sh          $v1, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a53a8) {
            ctx->pc = 0x3A54E0u;
            goto label_3a54e0;
        }
    }
    ctx->pc = 0x3A53B0u;
label_3a53b0:
    // 0x3a53b0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a53b4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3a53b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a53b8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x3a53b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a53bc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3A53BCu;
    {
        const bool branch_taken_0x3a53bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A53C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53BCu;
        // 0x3a53c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a53bc) {
            ctx->pc = 0x3A5338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5338;
        }
    }
    ctx->pc = 0x3A53C4u;
    // 0x3a53c4: 0x0  nop
    ctx->pc = 0x3a53c4u;
    // NOP
label_3a53c8:
    // 0x3a53c8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3a53c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3a53cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a53d0: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x3a53d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3a53d4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a53d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3a53d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a53d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a53dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a53dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a53e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A53E0u;
    {
        const bool branch_taken_0x3a53e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a53e0) {
            ctx->pc = 0x3A5410u;
            goto label_3a5410;
        }
    }
    ctx->pc = 0x3A53E8u;
    // 0x3a53e8: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x3a53e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a53ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a53f0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x3a53f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a53f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3a53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3a53f8: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x3a53f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a53fc: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3a53fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5400: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x3a5400u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5404: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3A5404u;
    {
        const bool branch_taken_0x3a5404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5404u;
        // 0x3a5408: 0xa4830014  sh          $v1, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5404) {
            ctx->pc = 0x3A54E0u;
            goto label_3a54e0;
        }
    }
    ctx->pc = 0x3A540Cu;
    // 0x3a540c: 0x0  nop
    ctx->pc = 0x3a540cu;
    // NOP
label_3a5410:
    // 0x3a5410: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3a5410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a5414: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3a5414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a5418: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3a5418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a541c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3A541Cu;
    {
        const bool branch_taken_0x3a541c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a541c) {
            ctx->pc = 0x3A53C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a53c8;
        }
    }
    ctx->pc = 0x3A5424u;
    // 0x3a5424: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a5424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5428:
    // 0x3a5428: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3a5428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3a542c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a5430: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x3a5430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3a5434: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a5434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3a5438: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a5438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a543c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a5440: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A5440u;
    {
        const bool branch_taken_0x3a5440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5440) {
            ctx->pc = 0x3A5470u;
            goto label_3a5470;
        }
    }
    ctx->pc = 0x3A5448u;
    // 0x3a5448: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x3a5448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a544c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5450: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x3a5450u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5454: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3a5454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a5458: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x3a5458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a545c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3a545cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5460: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x3a5460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5464: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3A5464u;
    {
        const bool branch_taken_0x3a5464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5464u;
        // 0x3a5468: 0xa4830014  sh          $v1, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5464) {
            ctx->pc = 0x3A54E0u;
            goto label_3a54e0;
        }
    }
    ctx->pc = 0x3A546Cu;
    // 0x3a546c: 0x0  nop
    ctx->pc = 0x3a546cu;
    // NOP
label_3a5470:
    // 0x3a5470: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3a5470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a5474: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3a5474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a5478: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3a5478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a547c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3A547Cu;
    {
        const bool branch_taken_0x3a547c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a547c) {
            ctx->pc = 0x3A5428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5428;
        }
    }
    ctx->pc = 0x3A5484u;
    // 0x3a5484: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a5484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5488:
    // 0x3a5488: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3a5488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3a548c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a5490: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x3a5490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3a5494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a5494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a5498: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a5498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a549c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a549cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a54a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A54A0u;
    {
        const bool branch_taken_0x3a54a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a54a0) {
            ctx->pc = 0x3A54C8u;
            goto label_3a54c8;
        }
    }
    ctx->pc = 0x3A54A8u;
    // 0x3a54a8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x3a54a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a54ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a54acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a54b0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x3a54b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a54b4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3a54b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a54b8: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x3a54b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a54bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A54BCu;
    {
        const bool branch_taken_0x3a54bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54BCu;
        // 0x3a54c0: 0xa4820014  sh          $v0, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a54bc) {
            ctx->pc = 0x3A54E0u;
            goto label_3a54e0;
        }
    }
    ctx->pc = 0x3A54C4u;
    // 0x3a54c4: 0x0  nop
    ctx->pc = 0x3a54c4u;
    // NOP
label_3a54c8:
    // 0x3a54c8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3a54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a54cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3a54ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a54d0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3a54d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a54d4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3A54D4u;
    {
        const bool branch_taken_0x3a54d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A54D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54D4u;
        // 0x3a54d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a54d4) {
            ctx->pc = 0x3A5488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5488;
        }
    }
    ctx->pc = 0x3A54DCu;
    // 0x3a54dc: 0x0  nop
    ctx->pc = 0x3a54dcu;
    // NOP
label_3a54e0:
    // 0x3a54e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A54E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A54E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A54E8u;
}

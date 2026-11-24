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

// Function: sub_0010B2A0
// Address: 0x10b2a0 - 0x10b554
void sub_0010B2A0_0x10b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B2A0_0x10b2a0");
#endif

    switch (ctx->pc) {
        case 0x10b43cu: goto label_10b43c;
        default: break;
    }

    ctx->pc = 0x10b2a0u;

    // 0x10b2a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10b2a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2a4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x10b2a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b2a8: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x10b2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x10b2ac: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x10b2acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b2b0: 0x8cea0160  lw          $t2, 0x160($a3)
    ctx->pc = 0x10b2b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x10b2b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10b2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2b8: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x10b2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x10b2bc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x10b2bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2c0: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x10b2c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b2c4: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x10B2C4u;
    {
        const bool branch_taken_0x10b2c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x10B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2C4u;
        // 0x10b2c8: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2c4) {
            ctx->pc = 0x10B3D8u;
            goto label_10b3d8;
        }
    }
    ctx->pc = 0x10B2CCu;
    // 0x10b2cc: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x10b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x10b2d0: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x10b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x10b2d4: 0x8ce501d4  lw          $a1, 0x1D4($a3)
    ctx->pc = 0x10b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x10b2d8: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x10b2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x10b2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b2e0: 0x8ce401f4  lw          $a0, 0x1F4($a3)
    ctx->pc = 0x10b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x10b2e4: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x10b2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x10b2e8: 0xace501d0  sw          $a1, 0x1D0($a3)
    ctx->pc = 0x10b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 5));
    // 0x10b2ec: 0xace601e0  sw          $a2, 0x1E0($a3)
    ctx->pc = 0x10b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 6));
    // 0x10b2f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B2F0u;
    {
        const bool branch_taken_0x10b2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2F0u;
        // 0x10b2f4: 0xace401f0  sw          $a0, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2f0) {
            ctx->pc = 0x10B304u;
            goto label_10b304;
        }
    }
    ctx->pc = 0x10B2F8u;
    // 0x10b2f8: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x10b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x10b2fc: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x10b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x10b300: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x10b300u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
label_10b304:
    // 0x10b304: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x10b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x10b308: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B308u;
    {
        const bool branch_taken_0x10b308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b308) {
            ctx->pc = 0x10B30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B308u;
            // 0x10b30c: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B320u;
            goto label_10b320;
        }
    }
    ctx->pc = 0x10B310u;
    // 0x10b310: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x10b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x10b314: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x10B314u;
    {
        const bool branch_taken_0x10b314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b314) {
            ctx->pc = 0x10B318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B314u;
            // 0x10b318: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B348u;
            goto label_10b348;
        }
    }
    ctx->pc = 0x10B31Cu;
    // 0x10b31c: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x10b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_10b320:
    // 0x10b320: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B320u;
    {
        const bool branch_taken_0x10b320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b320) {
            ctx->pc = 0x10B324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B320u;
            // 0x10b324: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B348u;
            goto label_10b348;
        }
    }
    ctx->pc = 0x10B328u;
    // 0x10b328: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x10b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x10b32c: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x10b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x10b330: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x10b330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x10b334: 0x8ce301e8  lw          $v1, 0x1E8($a3)
    ctx->pc = 0x10b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x10b338: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x10b338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x10b33c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x10b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x10b340: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x10b340u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x10b344: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x10b344u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
label_10b348:
    // 0x10b348: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b34c: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10B34Cu;
    {
        const bool branch_taken_0x10b34c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B34Cu;
        // 0x10b350: 0xace001b8  sw          $zero, 0x1B8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b34c) {
            ctx->pc = 0x10B37Cu;
            goto label_10b37c;
        }
    }
    ctx->pc = 0x10B354u;
    // 0x10b354: 0x8ce301c8  lw          $v1, 0x1C8($a3)
    ctx->pc = 0x10b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x10b358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b35c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x10b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10b360: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10B360u;
    {
        const bool branch_taken_0x10b360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10b360) {
            ctx->pc = 0x10B364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B360u;
            // 0x10b364: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B3C4u;
            goto label_10b3c4;
        }
    }
    ctx->pc = 0x10B368u;
    // 0x10b368: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x10b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x10b36c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x10B36Cu;
    {
        const bool branch_taken_0x10b36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B36Cu;
        // 0x10b370: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b36c) {
            ctx->pc = 0x10B490u;
            goto label_10b490;
        }
    }
    ctx->pc = 0x10B374u;
    // 0x10b374: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10B374u;
    {
        const bool branch_taken_0x10b374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B374u;
        // 0x10b378: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b374) {
            ctx->pc = 0x10B3C4u;
            goto label_10b3c4;
        }
    }
    ctx->pc = 0x10B37Cu;
label_10b37c:
    // 0x10b37c: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x10b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x10b380: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b384: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10b388: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B388u;
    {
        const bool branch_taken_0x10b388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b388) {
            ctx->pc = 0x10B38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B388u;
            // 0x10b38c: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B3A4u;
            goto label_10b3a4;
        }
    }
    ctx->pc = 0x10B390u;
    // 0x10b390: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x10b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x10b394: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x10b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10b398: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B398u;
    {
        const bool branch_taken_0x10b398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10b398) {
            ctx->pc = 0x10B39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B398u;
            // 0x10b39c: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B3B0u;
            goto label_10b3b0;
        }
    }
    ctx->pc = 0x10B3A0u;
    // 0x10b3a0: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x10b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_10b3a4:
    // 0x10b3a4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x10B3A4u;
    {
        const bool branch_taken_0x10b3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3A4u;
        // 0x10b3a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3a4) {
            ctx->pc = 0x10B490u;
            goto label_10b490;
        }
    }
    ctx->pc = 0x10B3ACu;
    // 0x10b3ac: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x10b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_10b3b0:
    // 0x10b3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b3b4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10b3b8: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x10B3B8u;
    {
        const bool branch_taken_0x10b3b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3B8u;
        // 0x10b3bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3b8) {
            ctx->pc = 0x10B490u;
            goto label_10b490;
        }
    }
    ctx->pc = 0x10B3C0u;
    // 0x10b3c0: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x10b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
label_10b3c4:
    // 0x10b3c4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x10b3c4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3c8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x10b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10b3cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10b3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10b3d0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x10B3D0u;
    {
        const bool branch_taken_0x10b3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3D0u;
        // 0x10b3d4: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3d0) {
            ctx->pc = 0x10B48Cu;
            goto label_10b48c;
        }
    }
    ctx->pc = 0x10B3D8u;
label_10b3d8:
    // 0x10b3d8: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10B3D8u;
    {
        const bool branch_taken_0x10b3d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b3d8) {
            ctx->pc = 0x10B3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B3D8u;
            // 0x10b3dc: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B414u;
            goto label_10b414;
        }
    }
    ctx->pc = 0x10B3E0u;
    // 0x10b3e0: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x10b3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x10b3e4: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x10b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x10b3e8: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x10b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x10b3ec: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x10b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x10b3f0: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x10b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x10b3f4: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x10b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x10b3f8: 0x8ce601e8  lw          $a2, 0x1E8($a3)
    ctx->pc = 0x10b3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x10b3fc: 0x8ce201ec  lw          $v0, 0x1EC($a3)
    ctx->pc = 0x10b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x10b400: 0xace401c8  sw          $a0, 0x1C8($a3)
    ctx->pc = 0x10b400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 4));
    // 0x10b404: 0xace301d8  sw          $v1, 0x1D8($a3)
    ctx->pc = 0x10b404u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 3));
    // 0x10b408: 0xace201e8  sw          $v0, 0x1E8($a3)
    ctx->pc = 0x10b408u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 2));
    // 0x10b40c: 0xace601ec  sw          $a2, 0x1EC($a3)
    ctx->pc = 0x10b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 492), GPR_U32(ctx, 6));
    // 0x10b410: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x10b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_10b414:
    // 0x10b414: 0x8ce401dc  lw          $a0, 0x1DC($a3)
    ctx->pc = 0x10b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x10b418: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x10b418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x10b41c: 0xace201d0  sw          $v0, 0x1D0($a3)
    ctx->pc = 0x10b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 2));
    // 0x10b420: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x10b420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x10b424: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B424u;
    {
        const bool branch_taken_0x10b424 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x10B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B424u;
        // 0x10b428: 0xace301f0  sw          $v1, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b424) {
            ctx->pc = 0x10B440u;
            goto label_10b440;
        }
    }
    ctx->pc = 0x10B42Cu;
    // 0x10b42c: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x10B42Cu;
    {
        const bool branch_taken_0x10b42c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x10b42c) {
            ctx->pc = 0x10B430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B42Cu;
            // 0x10b430: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B48Cu;
            goto label_10b48c;
        }
    }
    ctx->pc = 0x10B434u;
    // 0x10b434: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x10b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x10b438: 0x10000010  b           . + 4 + (0x10 << 2)
label_10b43c:
    if (ctx->pc == 0x10B43Cu) {
        ctx->pc = 0x10B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B438u;
        // 0x10b43c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B440u;
        goto label_10b440;
    }
    ctx->pc = 0x10B438u;
    {
        const bool branch_taken_0x10b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B438u;
        // 0x10b43c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b438) {
            ctx->pc = 0x10B47Cu;
            goto label_10b47c;
        }
    }
    ctx->pc = 0x10B440u;
label_10b440:
    // 0x10b440: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x10b440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x10b444: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10b444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b448: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x10b448u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x10b44c: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x10B44Cu;
    {
        const bool branch_taken_0x10b44c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x10B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B44Cu;
        // 0x10b450: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b44c) {
            ctx->pc = 0x10B488u;
            goto label_10b488;
        }
    }
    ctx->pc = 0x10B454u;
    // 0x10b454: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B454u;
    {
        const bool branch_taken_0x10b454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b454) {
            ctx->pc = 0x10B458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B454u;
            // 0x10b458: 0x8ce201d8  lw          $v0, 0x1D8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B46Cu;
            goto label_10b46c;
        }
    }
    ctx->pc = 0x10B45Cu;
    // 0x10b45c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x10b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10b460: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x10B460u;
    {
        const bool branch_taken_0x10b460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x10b460) {
            ctx->pc = 0x10B464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B460u;
            // 0x10b464: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B48Cu;
            goto label_10b48c;
        }
    }
    ctx->pc = 0x10B468u;
    // 0x10b468: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x10b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_10b46c:
    // 0x10b46c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10b470: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B470u;
    {
        const bool branch_taken_0x10b470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x10B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B470u;
        // 0x10b474: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b470) {
            ctx->pc = 0x10B490u;
            goto label_10b490;
        }
    }
    ctx->pc = 0x10B478u;
    // 0x10b478: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x10b478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_10b47c:
    // 0x10b47c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x10b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10b480: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B480u;
    {
        const bool branch_taken_0x10b480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B480u;
        // 0x10b484: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b480) {
            ctx->pc = 0x10B490u;
            goto label_10b490;
        }
    }
    ctx->pc = 0x10B488u;
label_10b488:
    // 0x10b488: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x10b488u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b48c:
    // 0x10b48c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10b490:
    // 0x10b490: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10B490u;
    {
        const bool branch_taken_0x10b490 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B490u;
        // 0x10b494: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b490) {
            ctx->pc = 0x10B4C4u;
            goto label_10b4c4;
        }
    }
    ctx->pc = 0x10B498u;
    // 0x10b498: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B498u;
    {
        const bool branch_taken_0x10b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B498u;
        // 0x10b49c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b498) {
            ctx->pc = 0x10B4B0u;
            goto label_10b4b0;
        }
    }
    ctx->pc = 0x10B4A0u;
    // 0x10b4a0: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B4A0u;
    {
        const bool branch_taken_0x10b4a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b4a0) {
            ctx->pc = 0x10B4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B4A0u;
            // 0x10b4a4: 0x8ce801e0  lw          $t0, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B4C8u;
            goto label_10b4c8;
        }
    }
    ctx->pc = 0x10B4A8u;
    // 0x10b4a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10B4A8u;
    {
        const bool branch_taken_0x10b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4A8u;
        // 0x10b4ac: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4a8) {
            ctx->pc = 0x10B4CCu;
            goto label_10b4cc;
        }
    }
    ctx->pc = 0x10B4B0u;
label_10b4b0:
    // 0x10b4b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b4b4: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B4B4u;
    {
        const bool branch_taken_0x10b4b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b4b4) {
            ctx->pc = 0x10B4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B4B4u;
            // 0x10b4b8: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B4C8u;
            goto label_10b4c8;
        }
    }
    ctx->pc = 0x10B4BCu;
    // 0x10b4bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10B4BCu;
    {
        const bool branch_taken_0x10b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4BCu;
        // 0x10b4c0: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4bc) {
            ctx->pc = 0x10B4CCu;
            goto label_10b4cc;
        }
    }
    ctx->pc = 0x10B4C4u;
label_10b4c4:
    // 0x10b4c4: 0x8ce801f0  lw          $t0, 0x1F0($a3)
    ctx->pc = 0x10b4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_10b4c8:
    // 0x10b4c8: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x10b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_10b4cc:
    // 0x10b4cc: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x10b4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4d0: 0xdce30838  ld          $v1, 0x838($a3)
    ctx->pc = 0x10b4d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x10b4d4: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x10b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x10b4d8: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x10b4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x10b4dc: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x10b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x10b4e0: 0xdce30840  ld          $v1, 0x840($a3)
    ctx->pc = 0x10b4e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x10b4e4: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x10b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x10b4e8: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x10b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x10b4ec: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x10b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x10b4f0: 0x8ce3014c  lw          $v1, 0x14C($a3)
    ctx->pc = 0x10b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x10b4f4: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x10b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x10b4f8: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x10b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x10b4fc: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x10b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x10b500: 0x8ce30188  lw          $v1, 0x188($a3)
    ctx->pc = 0x10b500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x10b504: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x10b504u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x10b508: 0x8ce40194  lw          $a0, 0x194($a3)
    ctx->pc = 0x10b508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x10b50c: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x10b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x10b510: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x10b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x10b514: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x10b514u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x10b518: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x10b518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x10b51c: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x10b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x10b520: 0x8ce301a4  lw          $v1, 0x1A4($a3)
    ctx->pc = 0x10b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x10b524: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x10b524u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x10b528: 0x8ce401a8  lw          $a0, 0x1A8($a3)
    ctx->pc = 0x10b528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x10b52c: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x10b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x10b530: 0x8ce301ac  lw          $v1, 0x1AC($a3)
    ctx->pc = 0x10b530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x10b534: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x10b534u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x10b538: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x10b538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x10b53c: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x10b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x10b540: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x10b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x10b544: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x10b544u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x10b548: 0x8ce4015c  lw          $a0, 0x15C($a3)
    ctx->pc = 0x10b548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x10b54c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B54Cu;
        // 0x10b550: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B554u;
}

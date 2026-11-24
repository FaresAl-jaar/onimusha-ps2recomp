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

// Function: sub_002D9FB0
// Address: 0x2d9fb0 - 0x2da0f0
void sub_002D9FB0_0x2d9fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9FB0_0x2d9fb0");
#endif

    ctx->pc = 0x2d9fb0u;

    // 0x2d9fb0: 0x90880049  lbu         $t0, 0x49($a0)
    ctx->pc = 0x2d9fb0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
    // 0x2d9fb4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d9fb8: 0x1103003f  beq         $t0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2D9FB8u;
    {
        const bool branch_taken_0x2d9fb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FB8u;
        // 0x2d9fbc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fb8) {
            ctx->pc = 0x2DA0B8u;
            goto label_2da0b8;
        }
    }
    ctx->pc = 0x2D9FC0u;
    // 0x2d9fc0: 0x11050035  beq         $t0, $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D9FC0u;
    {
        const bool branch_taken_0x2d9fc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FC0u;
        // 0x2d9fc4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fc0) {
            ctx->pc = 0x2DA098u;
            goto label_2da098;
        }
    }
    ctx->pc = 0x2D9FC8u;
    // 0x2d9fc8: 0x1106002d  beq         $t0, $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D9FC8u;
    {
        const bool branch_taken_0x2d9fc8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x2D9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FC8u;
        // 0x2d9fcc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fc8) {
            ctx->pc = 0x2DA080u;
            goto label_2da080;
        }
    }
    ctx->pc = 0x2D9FD0u;
    // 0x2d9fd0: 0x1107001f  beq         $t0, $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D9FD0u;
    {
        const bool branch_taken_0x2d9fd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x2D9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FD0u;
        // 0x2d9fd4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fd0) {
            ctx->pc = 0x2DA050u;
            goto label_2da050;
        }
    }
    ctx->pc = 0x2D9FD8u;
    // 0x2d9fd8: 0x11030003  beq         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9FD8u;
    {
        const bool branch_taken_0x2d9fd8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9fd8) {
            ctx->pc = 0x2D9FE8u;
            goto label_2d9fe8;
        }
    }
    ctx->pc = 0x2D9FE0u;
    // 0x2d9fe0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2D9FE0u;
    {
        const bool branch_taken_0x2d9fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9fe0) {
            ctx->pc = 0x2DA0E8u;
            goto label_2da0e8;
        }
    }
    ctx->pc = 0x2D9FE8u;
label_2d9fe8:
    // 0x2d9fe8: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x2d9fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9fec: 0x9085001c  lbu         $a1, 0x1C($a0)
    ctx->pc = 0x2d9fecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d9ff0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2d9ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2d9ff4: 0x24636630  addiu       $v1, $v1, 0x6630
    ctx->pc = 0x2d9ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26160));
    // 0x2d9ff8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2d9ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2d9ffc: 0xa085001c  sb          $a1, 0x1C($a0)
    ctx->pc = 0x2d9ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x2da000: 0x9086004a  lbu         $a2, 0x4A($a0)
    ctx->pc = 0x2da000u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 74)));
    // 0x2da004: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2da004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2da008: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2da008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2da00c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2da00cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2da010: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2da010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2da014: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2da014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2da018: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2da018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2da01c: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x2da01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2da020: 0x84a60006  lh          $a2, 0x6($a1)
    ctx->pc = 0x2da020u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2da024: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x2da024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x2da028: 0x84a50008  lh          $a1, 0x8($a1)
    ctx->pc = 0x2da028u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2da02c: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x2da02cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da030: 0x52823  negu        $a1, $a1
    ctx->pc = 0x2da030u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2da034: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x2da034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2da038: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2da038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2da03c: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x2da03cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da040: 0xa4850024  sh          $a1, 0x24($a0)
    ctx->pc = 0x2da040u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 5));
    // 0x2da044: 0xa4860026  sh          $a2, 0x26($a0)
    ctx->pc = 0x2da044u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 6));
    // 0x2da048: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DA048u;
    {
        const bool branch_taken_0x2da048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA048u;
        // 0x2da04c: 0xa0870049  sb          $a3, 0x49($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da048) {
            ctx->pc = 0x2DA0E8u;
            goto label_2da0e8;
        }
    }
    ctx->pc = 0x2DA050u;
label_2da050:
    // 0x2da050: 0x84830024  lh          $v1, 0x24($a0)
    ctx->pc = 0x2da050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2da054: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2da054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2da058: 0xa4830024  sh          $v1, 0x24($a0)
    ctx->pc = 0x2da058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x2da05c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2da05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2da060: 0x84830024  lh          $v1, 0x24($a0)
    ctx->pc = 0x2da060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2da064: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x2da064u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2da068: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2da068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2da06c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DA06Cu;
    {
        const bool branch_taken_0x2da06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da06c) {
            ctx->pc = 0x2DA0E8u;
            goto label_2da0e8;
        }
    }
    ctx->pc = 0x2DA074u;
    // 0x2da074: 0xa4850024  sh          $a1, 0x24($a0)
    ctx->pc = 0x2da074u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 5));
    // 0x2da078: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2DA078u;
    {
        const bool branch_taken_0x2da078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA078u;
        // 0x2da07c: 0xa0860049  sb          $a2, 0x49($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da078) {
            ctx->pc = 0x2DA0E8u;
            goto label_2da0e8;
        }
    }
    ctx->pc = 0x2DA080u;
label_2da080:
    // 0x2da080: 0x9083004b  lbu         $v1, 0x4B($a0)
    ctx->pc = 0x2da080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x2da084: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2da084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2da088: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DA088u;
    {
        const bool branch_taken_0x2da088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da088) {
            ctx->pc = 0x2DA0E8u;
            goto label_2da0e8;
        }
    }
    ctx->pc = 0x2DA090u;
    // 0x2da090: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DA090u;
    {
        const bool branch_taken_0x2da090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA090u;
        // 0x2da094: 0xa0850049  sb          $a1, 0x49($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da090) {
            ctx->pc = 0x2DA0E8u;
            goto label_2da0e8;
        }
    }
    ctx->pc = 0x2DA098u;
label_2da098:
    // 0x2da098: 0xa0830049  sb          $v1, 0x49($a0)
    ctx->pc = 0x2da098u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da09c: 0x9085001c  lbu         $a1, 0x1C($a0)
    ctx->pc = 0x2da09cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2da0a0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2da0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2da0a4: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x2da0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x2da0a8: 0xa085001c  sb          $a1, 0x1C($a0)
    ctx->pc = 0x2da0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 5));
    // 0x2da0ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DA0ACu;
    {
        const bool branch_taken_0x2da0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0ACu;
        // 0x2da0b0: 0xa0830037  sb          $v1, 0x37($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0ac) {
            ctx->pc = 0x2DA0E8u;
            goto label_2da0e8;
        }
    }
    ctx->pc = 0x2DA0B4u;
    // 0x2da0b4: 0x0  nop
    ctx->pc = 0x2da0b4u;
    // NOP
label_2da0b8:
    // 0x2da0b8: 0x90830037  lbu         $v1, 0x37($a0)
    ctx->pc = 0x2da0b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2da0bc: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2da0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2da0c0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA0C0u;
    {
        const bool branch_taken_0x2da0c0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2da0c0) {
            ctx->pc = 0x2DA0D0u;
            goto label_2da0d0;
        }
    }
    ctx->pc = 0x2DA0C8u;
    // 0x2da0c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA0C8u;
    {
        const bool branch_taken_0x2da0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA0C8u;
        // 0x2da0cc: 0xa0830037  sb          $v1, 0x37($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0c8) {
            ctx->pc = 0x2DA0E8u;
            goto label_2da0e8;
        }
    }
    ctx->pc = 0x2DA0D0u;
label_2da0d0:
    // 0x2da0d0: 0xa0800037  sb          $zero, 0x37($a0)
    ctx->pc = 0x2da0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da0d4: 0x9083004b  lbu         $v1, 0x4B($a0)
    ctx->pc = 0x2da0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x2da0d8: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x2da0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x2da0dc: 0xa083004b  sb          $v1, 0x4B($a0)
    ctx->pc = 0x2da0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 75), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da0e0: 0xa0800049  sb          $zero, 0x49($a0)
    ctx->pc = 0x2da0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da0e4: 0x0  nop
    ctx->pc = 0x2da0e4u;
    // NOP
label_2da0e8:
    // 0x2da0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA0F0u;
}

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

// Function: sub_002C59F0
// Address: 0x2c59f0 - 0x2c5f7c
void sub_002C59F0_0x2c59f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C59F0_0x2c59f0");
#endif

    ctx->pc = 0x2c59f0u;

    // 0x2c59f0: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x2c59f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2c59f4: 0x90c90001  lbu         $t1, 0x1($a2)
    ctx->pc = 0x2c59f4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c59f8: 0x84c50006  lh          $a1, 0x6($a2)
    ctx->pc = 0x2c59f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2c59fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c5a00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c5a04: 0x8448003e  lh          $t0, 0x3E($v0)
    ctx->pc = 0x2c5a04u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x2c5a08: 0x2443003e  addiu       $v1, $v0, 0x3E
    ctx->pc = 0x2c5a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 62));
    // 0x2c5a0c: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x2c5a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2c5a10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5A10u;
    {
        const bool branch_taken_0x2c5a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A10u;
        // 0x2c5a14: 0x84c70004  lh          $a3, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a10) {
            ctx->pc = 0x2C5A30u;
            goto label_2c5a30;
        }
    }
    ctx->pc = 0x2C5A18u;
    // 0x2c5a18: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c5a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5a1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5a1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5a20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c5a24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c5a28: 0x8447003e  lh          $a3, 0x3E($v0)
    ctx->pc = 0x2c5a28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x2c5a2c: 0x0  nop
    ctx->pc = 0x2c5a2cu;
    // NOP
label_2c5a30:
    // 0x2c5a30: 0x31220002  andi        $v0, $t1, 0x2
    ctx->pc = 0x2c5a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x2c5a34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5A34u;
    {
        const bool branch_taken_0x2c5a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a34) {
            ctx->pc = 0x2C5A50u;
            goto label_2c5a50;
        }
    }
    ctx->pc = 0x2C5A3Cu;
    // 0x2c5a3c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5a40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5a40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5a44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c5a48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c5a4c: 0x8445003e  lh          $a1, 0x3E($v0)
    ctx->pc = 0x2c5a4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
label_2c5a50:
    // 0x2c5a50: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2c5a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c5a54: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2c5a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2c5a58: 0x1044013f  beq         $v0, $a0, . + 4 + (0x13F << 2)
    ctx->pc = 0x2C5A58u;
    {
        const bool branch_taken_0x2c5a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5a58) {
            ctx->pc = 0x2C5F58u;
            goto label_2c5f58;
        }
    }
    ctx->pc = 0x2C5A60u;
    // 0x2c5a60: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2c5a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2c5a64: 0x10440136  beq         $v0, $a0, . + 4 + (0x136 << 2)
    ctx->pc = 0x2C5A64u;
    {
        const bool branch_taken_0x2c5a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5a64) {
            ctx->pc = 0x2C5F40u;
            goto label_2c5f40;
        }
    }
    ctx->pc = 0x2C5A6Cu;
    // 0x2c5a6c: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x2c5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2c5a70: 0x1044012b  beq         $v0, $a0, . + 4 + (0x12B << 2)
    ctx->pc = 0x2C5A70u;
    {
        const bool branch_taken_0x2c5a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5a70) {
            ctx->pc = 0x2C5F20u;
            goto label_2c5f20;
        }
    }
    ctx->pc = 0x2C5A78u;
    // 0x2c5a78: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x2c5a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2c5a7c: 0x10440122  beq         $v0, $a0, . + 4 + (0x122 << 2)
    ctx->pc = 0x2C5A7Cu;
    {
        const bool branch_taken_0x2c5a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5a7c) {
            ctx->pc = 0x2C5F08u;
            goto label_2c5f08;
        }
    }
    ctx->pc = 0x2C5A84u;
    // 0x2c5a84: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x2c5a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2c5a88: 0x10440117  beq         $v0, $a0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2C5A88u;
    {
        const bool branch_taken_0x2c5a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5a88) {
            ctx->pc = 0x2C5EE8u;
            goto label_2c5ee8;
        }
    }
    ctx->pc = 0x2C5A90u;
    // 0x2c5a90: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2c5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c5a94: 0x1044010c  beq         $v0, $a0, . + 4 + (0x10C << 2)
    ctx->pc = 0x2C5A94u;
    {
        const bool branch_taken_0x2c5a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5a94) {
            ctx->pc = 0x2C5EC8u;
            goto label_2c5ec8;
        }
    }
    ctx->pc = 0x2C5A9Cu;
    // 0x2c5a9c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c5aa0: 0x104400fb  beq         $v0, $a0, . + 4 + (0xFB << 2)
    ctx->pc = 0x2C5AA0u;
    {
        const bool branch_taken_0x2c5aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5aa0) {
            ctx->pc = 0x2C5E90u;
            goto label_2c5e90;
        }
    }
    ctx->pc = 0x2C5AA8u;
    // 0x2c5aa8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2c5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c5aac: 0x104400e8  beq         $v0, $a0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2C5AACu;
    {
        const bool branch_taken_0x2c5aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5aac) {
            ctx->pc = 0x2C5E50u;
            goto label_2c5e50;
        }
    }
    ctx->pc = 0x2C5AB4u;
    // 0x2c5ab4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2c5ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c5ab8: 0x104400df  beq         $v0, $a0, . + 4 + (0xDF << 2)
    ctx->pc = 0x2C5AB8u;
    {
        const bool branch_taken_0x2c5ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5ab8) {
            ctx->pc = 0x2C5E38u;
            goto label_2c5e38;
        }
    }
    ctx->pc = 0x2C5AC0u;
    // 0x2c5ac0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2c5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2c5ac4: 0x104400ca  beq         $v0, $a0, . + 4 + (0xCA << 2)
    ctx->pc = 0x2C5AC4u;
    {
        const bool branch_taken_0x2c5ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5ac4) {
            ctx->pc = 0x2C5DF0u;
            goto label_2c5df0;
        }
    }
    ctx->pc = 0x2C5ACCu;
    // 0x2c5acc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2c5accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c5ad0: 0x104400b5  beq         $v0, $a0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2C5AD0u;
    {
        const bool branch_taken_0x2c5ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5ad0) {
            ctx->pc = 0x2C5DA8u;
            goto label_2c5da8;
        }
    }
    ctx->pc = 0x2C5AD8u;
    // 0x2c5ad8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c5adc: 0x104400a8  beq         $v0, $a0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2C5ADCu;
    {
        const bool branch_taken_0x2c5adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5adc) {
            ctx->pc = 0x2C5D80u;
            goto label_2c5d80;
        }
    }
    ctx->pc = 0x2C5AE4u;
    // 0x2c5ae4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2c5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c5ae8: 0x1044009b  beq         $v0, $a0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2C5AE8u;
    {
        const bool branch_taken_0x2c5ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5ae8) {
            ctx->pc = 0x2C5D58u;
            goto label_2c5d58;
        }
    }
    ctx->pc = 0x2C5AF0u;
    // 0x2c5af0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c5af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c5af4: 0x10440090  beq         $v0, $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2C5AF4u;
    {
        const bool branch_taken_0x2c5af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5af4) {
            ctx->pc = 0x2C5D38u;
            goto label_2c5d38;
        }
    }
    ctx->pc = 0x2C5AFCu;
    // 0x2c5afc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2c5afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c5b00: 0x10440085  beq         $v0, $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2C5B00u;
    {
        const bool branch_taken_0x2c5b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b00) {
            ctx->pc = 0x2C5D18u;
            goto label_2c5d18;
        }
    }
    ctx->pc = 0x2C5B08u;
    // 0x2c5b08: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c5b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c5b0c: 0x1044007a  beq         $v0, $a0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2C5B0Cu;
    {
        const bool branch_taken_0x2c5b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b0c) {
            ctx->pc = 0x2C5CF8u;
            goto label_2c5cf8;
        }
    }
    ctx->pc = 0x2C5B14u;
    // 0x2c5b14: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2c5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c5b18: 0x1044006f  beq         $v0, $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C5B18u;
    {
        const bool branch_taken_0x2c5b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b18) {
            ctx->pc = 0x2C5CD8u;
            goto label_2c5cd8;
        }
    }
    ctx->pc = 0x2C5B20u;
    // 0x2c5b20: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2c5b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c5b24: 0x10440064  beq         $v0, $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2C5B24u;
    {
        const bool branch_taken_0x2c5b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b24) {
            ctx->pc = 0x2C5CB8u;
            goto label_2c5cb8;
        }
    }
    ctx->pc = 0x2C5B2Cu;
    // 0x2c5b2c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c5b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c5b30: 0x10440059  beq         $v0, $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2C5B30u;
    {
        const bool branch_taken_0x2c5b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b30) {
            ctx->pc = 0x2C5C98u;
            goto label_2c5c98;
        }
    }
    ctx->pc = 0x2C5B38u;
    // 0x2c5b38: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2c5b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c5b3c: 0x1044004e  beq         $v0, $a0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2C5B3Cu;
    {
        const bool branch_taken_0x2c5b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b3c) {
            ctx->pc = 0x2C5C78u;
            goto label_2c5c78;
        }
    }
    ctx->pc = 0x2C5B44u;
    // 0x2c5b44: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c5b48: 0x10440043  beq         $v0, $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C5B48u;
    {
        const bool branch_taken_0x2c5b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b48) {
            ctx->pc = 0x2C5C58u;
            goto label_2c5c58;
        }
    }
    ctx->pc = 0x2C5B50u;
    // 0x2c5b50: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c5b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c5b54: 0x10440034  beq         $v0, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C5B54u;
    {
        const bool branch_taken_0x2c5b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b54) {
            ctx->pc = 0x2C5C28u;
            goto label_2c5c28;
        }
    }
    ctx->pc = 0x2C5B5Cu;
    // 0x2c5b5c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c5b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c5b60: 0x10440025  beq         $v0, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C5B60u;
    {
        const bool branch_taken_0x2c5b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b60) {
            ctx->pc = 0x2C5BF8u;
            goto label_2c5bf8;
        }
    }
    ctx->pc = 0x2C5B68u;
    // 0x2c5b68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5b6c: 0x1044001a  beq         $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C5B6Cu;
    {
        const bool branch_taken_0x2c5b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b6c) {
            ctx->pc = 0x2C5BD8u;
            goto label_2c5bd8;
        }
    }
    ctx->pc = 0x2C5B74u;
    // 0x2c5b74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c5b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5b78: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C5B78u;
    {
        const bool branch_taken_0x2c5b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b78) {
            ctx->pc = 0x2C5BB8u;
            goto label_2c5bb8;
        }
    }
    ctx->pc = 0x2C5B80u;
    // 0x2c5b80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5b84: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5B84u;
    {
        const bool branch_taken_0x2c5b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5b84) {
            ctx->pc = 0x2C5B98u;
            goto label_2c5b98;
        }
    }
    ctx->pc = 0x2C5B8Cu;
    // 0x2c5b8c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2C5B8Cu;
    {
        const bool branch_taken_0x2c5b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5b8c) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5B94u;
    // 0x2c5b94: 0x0  nop
    ctx->pc = 0x2c5b94u;
    // NOP
label_2c5b98:
    // 0x2c5b98: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5b9c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5ba0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5ba0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5ba4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5ba4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5ba8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5bac: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5bacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5bb0: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x2C5BB0u;
    {
        const bool branch_taken_0x2c5bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BB0u;
        // 0x2c5bb4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bb0) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5BB8u;
label_2c5bb8:
    // 0x2c5bb8: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5bbc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5bc0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5bc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5bc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5bc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5bc8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2c5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5bcc: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5bccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5bd0: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x2C5BD0u;
    {
        const bool branch_taken_0x2c5bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BD0u;
        // 0x2c5bd4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bd0) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5BD8u;
label_2c5bd8:
    // 0x2c5bd8: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5bdc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5be0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5be0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5be4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5be4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5be8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2c5be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c5bec: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5becu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5bf0: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x2C5BF0u;
    {
        const bool branch_taken_0x2c5bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BF0u;
        // 0x2c5bf4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bf0) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5BF8u;
label_2c5bf8:
    // 0x2c5bf8: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5bfc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5c00: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5c00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5c04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5c04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5c08: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2c5c08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c5c0c: 0x0  nop
    ctx->pc = 0x2c5c0cu;
    // NOP
    // 0x2c5c10: 0x0  nop
    ctx->pc = 0x2c5c10u;
    // NOP
    // 0x2c5c14: 0x1012  mflo        $v0
    ctx->pc = 0x2c5c14u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2c5c18: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5c18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5c1c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2C5C1Cu;
    {
        const bool branch_taken_0x2c5c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C1Cu;
        // 0x2c5c20: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c1c) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5C24u;
    // 0x2c5c24: 0x0  nop
    ctx->pc = 0x2c5c24u;
    // NOP
label_2c5c28:
    // 0x2c5c28: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5c2c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5c30: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5c30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5c34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5c38: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2c5c38u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c5c3c: 0x0  nop
    ctx->pc = 0x2c5c3cu;
    // NOP
    // 0x2c5c40: 0x0  nop
    ctx->pc = 0x2c5c40u;
    // NOP
    // 0x2c5c44: 0x1010  mfhi        $v0
    ctx->pc = 0x2c5c44u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c5c48: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5c48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5c4c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2C5C4Cu;
    {
        const bool branch_taken_0x2c5c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C4Cu;
        // 0x2c5c50: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c4c) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5C54u;
    // 0x2c5c54: 0x0  nop
    ctx->pc = 0x2c5c54u;
    // NOP
label_2c5c58:
    // 0x2c5c58: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5c5c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5c60: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5c60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5c64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5c64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5c68: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2c5c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2c5c6c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5c6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5c70: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2C5C70u;
    {
        const bool branch_taken_0x2c5c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C70u;
        // 0x2c5c74: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c70) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5C78u;
label_2c5c78:
    // 0x2c5c78: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5c7c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5c80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5c80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5c84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5c84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5c88: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2c5c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2c5c8c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5c8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5c90: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2C5C90u;
    {
        const bool branch_taken_0x2c5c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C90u;
        // 0x2c5c94: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c90) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5C98u;
label_2c5c98:
    // 0x2c5c98: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5c9c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5ca0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5ca0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5ca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5ca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5ca8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x2c5ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2c5cac: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5cacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5cb0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2C5CB0u;
    {
        const bool branch_taken_0x2c5cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CB0u;
        // 0x2c5cb4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5cb0) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5CB8u;
label_2c5cb8:
    // 0x2c5cb8: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5cbc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5cc0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5cc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5cc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5cc8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x2c5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c5ccc: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5cccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5cd0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2C5CD0u;
    {
        const bool branch_taken_0x2c5cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CD0u;
        // 0x2c5cd4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5cd0) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5CD8u;
label_2c5cd8:
    // 0x2c5cd8: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5cdc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5ce0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5ce0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5ce4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5ce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5ce8: 0x441007  srav        $v0, $a0, $v0
    ctx->pc = 0x2c5ce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c5cec: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5cecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5cf0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2C5CF0u;
    {
        const bool branch_taken_0x2c5cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CF0u;
        // 0x2c5cf4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5cf0) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5CF8u;
label_2c5cf8:
    // 0x2c5cf8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5cfc: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x2c5cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2c5d00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5d00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5d04: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x2c5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c5d08: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5d08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5d0c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2C5D0Cu;
    {
        const bool branch_taken_0x2c5d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D0Cu;
        // 0x2c5d10: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d0c) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5D14u;
    // 0x2c5d14: 0x0  nop
    ctx->pc = 0x2c5d14u;
    // NOP
label_2c5d18:
    // 0x2c5d18: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5d1c: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x2c5d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2c5d20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5d20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5d24: 0x441007  srav        $v0, $a0, $v0
    ctx->pc = 0x2c5d24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c5d28: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5d28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5d2c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2C5D2Cu;
    {
        const bool branch_taken_0x2c5d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D2Cu;
        // 0x2c5d30: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d2c) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5D34u;
    // 0x2c5d34: 0x0  nop
    ctx->pc = 0x2c5d34u;
    // NOP
label_2c5d38:
    // 0x2c5d38: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c5d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5d3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5d3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5d40: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5D40u;
    {
        const bool branch_taken_0x2c5d40 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2c5d40) {
            ctx->pc = 0x2C5D4Cu;
            goto label_2c5d4c;
        }
    }
    ctx->pc = 0x2C5D48u;
    // 0x2c5d48: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2c5d4c:
    // 0x2c5d4c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5d4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5d50: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2C5D50u;
    {
        const bool branch_taken_0x2c5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D50u;
        // 0x2c5d54: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d50) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5D58u;
label_2c5d58:
    // 0x2c5d58: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5d5c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5d60: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5d60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5d64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5d68: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2c5d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5d6c: 0xa1380a  movz        $a3, $a1, $at
    ctx->pc = 0x2c5d6cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x2c5d70: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x2c5d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5d74: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2C5D74u;
    {
        const bool branch_taken_0x2c5d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D74u;
        // 0x2c5d78: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d74) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5D7Cu;
    // 0x2c5d7c: 0x0  nop
    ctx->pc = 0x2c5d7cu;
    // NOP
label_2c5d80:
    // 0x2c5d80: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5d84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5d88: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5d88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5d8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5d8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5d90: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2c5d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c5d94: 0xa1380a  movz        $a3, $a1, $at
    ctx->pc = 0x2c5d94u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x2c5d98: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x2c5d98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5d9c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2C5D9Cu;
    {
        const bool branch_taken_0x2c5d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D9Cu;
        // 0x2c5da0: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d9c) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5DA4u;
    // 0x2c5da4: 0x0  nop
    ctx->pc = 0x2c5da4u;
    // NOP
label_2c5da8:
    // 0x2c5da8: 0x8243c  dsll32      $a0, $t0, 16
    ctx->pc = 0x2c5da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2c5dac: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c5dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5db0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5db0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5db4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5db4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5db8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2c5db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5dbc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5DBCu;
    {
        const bool branch_taken_0x2c5dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DBCu;
        // 0x2c5dc0: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5dbc) {
            ctx->pc = 0x2C5DD0u;
            goto label_2c5dd0;
        }
    }
    ctx->pc = 0x2C5DC4u;
    // 0x2c5dc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5DC4u;
    {
        const bool branch_taken_0x2c5dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DC4u;
        // 0x2c5dc8: 0x7443c  dsll32      $t0, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5dc4) {
            ctx->pc = 0x2C5DE4u;
            goto label_2c5de4;
        }
    }
    ctx->pc = 0x2C5DCCu;
    // 0x2c5dcc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2c5dd0:
    // 0x2c5dd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5dd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5dd4: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2c5dd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c5dd8: 0x101280a  movz        $a1, $t0, $at
    ctx->pc = 0x2c5dd8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x2c5ddc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c5ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5de0: 0x7443c  dsll32      $t0, $a3, 16
    ctx->pc = 0x2c5de0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 16));
label_2c5de4:
    // 0x2c5de4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2C5DE4u;
    {
        const bool branch_taken_0x2c5de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DE4u;
        // 0x2c5de8: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5de4) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5DECu;
    // 0x2c5dec: 0x0  nop
    ctx->pc = 0x2c5decu;
    // NOP
label_2c5df0:
    // 0x2c5df0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c5df0u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c5df4: 0x48242001  qmfc2.i     $a0, $vf4
    ctx->pc = 0x2c5df4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c5df8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5dfc: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x2c5dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5e00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5e04: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2c5e04u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2c5e08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c5e0c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2c5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c5e10: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2c5e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2c5e14: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2c5e14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c5e18: 0x0  nop
    ctx->pc = 0x2c5e18u;
    // NOP
    // 0x2c5e1c: 0x0  nop
    ctx->pc = 0x2c5e1cu;
    // NOP
    // 0x2c5e20: 0x1010  mfhi        $v0
    ctx->pc = 0x2c5e20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c5e24: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2c5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c5e28: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5e28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5e2c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2C5E2Cu;
    {
        const bool branch_taken_0x2c5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E2Cu;
        // 0x2c5e30: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e2c) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5E34u;
    // 0x2c5e34: 0x0  nop
    ctx->pc = 0x2c5e34u;
    // NOP
label_2c5e38:
    // 0x2c5e38: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c5e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5e3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5e3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5e40: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x2c5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x2c5e44: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5e44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5e48: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2C5E48u;
    {
        const bool branch_taken_0x2c5e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E48u;
        // 0x2c5e4c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e48) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5E50u;
label_2c5e50:
    // 0x2c5e50: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5e54: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5e58: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5e58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5e5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5e5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5e60: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x2c5e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2c5e64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5e68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c5e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5e6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5e6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5e70: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x2c5e70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2c5e74: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5E74u;
    {
        const bool branch_taken_0x2c5e74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5e74) {
            ctx->pc = 0x2C5E80u;
            goto label_2c5e80;
        }
    }
    ctx->pc = 0x2C5E7Cu;
    // 0x2c5e7c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2c5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_2c5e80:
    // 0x2c5e80: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5e80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5e84: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2C5E84u;
    {
        const bool branch_taken_0x2c5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E84u;
        // 0x2c5e88: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e84) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5E8Cu;
    // 0x2c5e8c: 0x0  nop
    ctx->pc = 0x2c5e8cu;
    // NOP
label_2c5e90:
    // 0x2c5e90: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5e94: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5e98: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5e98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5e9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5ea0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2c5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5ea4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c5ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5ea8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5ea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5eac: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5EACu;
    {
        const bool branch_taken_0x2c5eac = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2c5eac) {
            ctx->pc = 0x2C5EB8u;
            goto label_2c5eb8;
        }
    }
    ctx->pc = 0x2C5EB4u;
    // 0x2c5eb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5eb8:
    // 0x2c5eb8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2c5eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5ebc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C5EBCu;
    {
        const bool branch_taken_0x2c5ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EBCu;
        // 0x2c5ec0: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ebc) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5EC4u;
    // 0x2c5ec4: 0x0  nop
    ctx->pc = 0x2c5ec4u;
    // NOP
label_2c5ec8:
    // 0x2c5ec8: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5ecc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5ed0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5ed0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5ed4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5ed4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5ed8: 0x824026  xor         $t0, $a0, $v0
    ctx->pc = 0x2c5ed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2c5edc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C5EDCu;
    {
        const bool branch_taken_0x2c5edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EDCu;
        // 0x2c5ee0: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5edc) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5EE4u;
    // 0x2c5ee4: 0x0  nop
    ctx->pc = 0x2c5ee4u;
    // NOP
label_2c5ee8:
    // 0x2c5ee8: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5eec: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5ef0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5ef0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5ef4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5ef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5ef8: 0x824026  xor         $t0, $a0, $v0
    ctx->pc = 0x2c5ef8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2c5efc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C5EFCu;
    {
        const bool branch_taken_0x2c5efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EFCu;
        // 0x2c5f00: 0x8402b  sltu        $t0, $zero, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5efc) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5F04u;
    // 0x2c5f04: 0x0  nop
    ctx->pc = 0x2c5f04u;
    // NOP
label_2c5f08:
    // 0x2c5f08: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5f0c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5f10: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5f10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5f14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5f14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5f18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5F18u;
    {
        const bool branch_taken_0x2c5f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F18u;
        // 0x2c5f1c: 0x82402a  slt         $t0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f18) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5F20u;
label_2c5f20:
    // 0x2c5f20: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5f24: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5f28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5f28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5f2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5f2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5f30: 0x44402a  slt         $t0, $v0, $a0
    ctx->pc = 0x2c5f30u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c5f34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C5F34u;
    {
        const bool branch_taken_0x2c5f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F34u;
        // 0x2c5f38: 0x39080001  xori        $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f34) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5F3Cu;
    // 0x2c5f3c: 0x0  nop
    ctx->pc = 0x2c5f3cu;
    // NOP
label_2c5f40:
    // 0x2c5f40: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5f44: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5f48: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5f48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5f4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5f4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5f50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5F50u;
    {
        const bool branch_taken_0x2c5f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F50u;
        // 0x2c5f54: 0x44402a  slt         $t0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f50) {
            ctx->pc = 0x2C5F70u;
            goto label_2c5f70;
        }
    }
    ctx->pc = 0x2C5F58u;
label_2c5f58:
    // 0x2c5f58: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x2c5f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c5f5c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c5f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5f60: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c5f60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c5f64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5f64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c5f68: 0x82402a  slt         $t0, $a0, $v0
    ctx->pc = 0x2c5f68u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c5f6c: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x2c5f6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_2c5f70:
    // 0x2c5f70: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x2c5f70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2c5f74: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F74u;
        // 0x2c5f78: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5F7Cu;
}

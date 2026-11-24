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

// Function: sub_002DAA00
// Address: 0x2daa00 - 0x2dac3c
void sub_002DAA00_0x2daa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAA00_0x2daa00");
#endif

    switch (ctx->pc) {
        case 0x2dac20u: goto label_2dac20;
        default: break;
    }

    ctx->pc = 0x2daa00u;

    // 0x2daa00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2daa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2daa04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2daa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2daa08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2daa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2daa0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2daa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2daa10: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2daa10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2daa14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2daa14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa18: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2daa18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2daa1c: 0x10800082  beqz        $a0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2DAA1Cu;
    {
        const bool branch_taken_0x2daa1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa1c) {
            ctx->pc = 0x2DAC28u;
            goto label_2dac28;
        }
    }
    ctx->pc = 0x2DAA24u;
    // 0x2daa24: 0x8cad0004  lw          $t5, 0x4($a1)
    ctx->pc = 0x2daa24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2daa28: 0x306e0004  andi        $t6, $v1, 0x4
    ctx->pc = 0x2daa28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2daa2c: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x2daa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2daa30: 0x85ac0004  lh          $t4, 0x4($t5)
    ctx->pc = 0x2daa30u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2daa34: 0x85ab0006  lh          $t3, 0x6($t5)
    ctx->pc = 0x2daa34u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x2daa38: 0x85aa0008  lh          $t2, 0x8($t5)
    ctx->pc = 0x2daa38u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2daa3c: 0x85a9000a  lh          $t1, 0xA($t5)
    ctx->pc = 0x2daa3cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x2daa40: 0x8da7000c  lw          $a3, 0xC($t5)
    ctx->pc = 0x2daa40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x2daa44: 0x8223c  dsll32      $a0, $t0, 8
    ctx->pc = 0x2daa44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 8));
    // 0x2daa48: 0x8da60010  lw          $a2, 0x10($t5)
    ctx->pc = 0x2daa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x2daa4c: 0x84602  srl         $t0, $t0, 24
    ctx->pc = 0x2daa4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x2daa50: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x2daa50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x2daa54: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x2DAA54u;
    {
        const bool branch_taken_0x2daa54 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA54u;
        // 0x2daa58: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa54) {
            ctx->pc = 0x2DAA80u;
            goto label_2daa80;
        }
    }
    ctx->pc = 0x2DAA5Cu;
    // 0x2daa5c: 0x84af0008  lh          $t7, 0x8($a1)
    ctx->pc = 0x2daa5cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2daa60: 0x84ae000a  lh          $t6, 0xA($a1)
    ctx->pc = 0x2daa60u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2daa64: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x2daa64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x2daa68: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x2daa68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x2daa6c: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x2daa6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
    // 0x2daa70: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x2daa70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x2daa74: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x2daa74u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x2daa78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAA78u;
    {
        const bool branch_taken_0x2daa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA78u;
        // 0x2daa7c: 0xb5c3f  dsra32      $t3, $t3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa78) {
            ctx->pc = 0x2DAA98u;
            goto label_2daa98;
        }
    }
    ctx->pc = 0x2DAA80u;
label_2daa80:
    // 0x2daa80: 0x306e0002  andi        $t6, $v1, 0x2
    ctx->pc = 0x2daa80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2daa84: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAA84u;
    {
        const bool branch_taken_0x2daa84 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa84) {
            ctx->pc = 0x2DAA98u;
            goto label_2daa98;
        }
    }
    ctx->pc = 0x2DAA8Cu;
    // 0x2daa8c: 0x84ac0008  lh          $t4, 0x8($a1)
    ctx->pc = 0x2daa8cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2daa90: 0x84ab000a  lh          $t3, 0xA($a1)
    ctx->pc = 0x2daa90u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2daa94: 0x0  nop
    ctx->pc = 0x2daa94u;
    // NOP
label_2daa98:
    // 0x2daa98: 0x306e0010  andi        $t6, $v1, 0x10
    ctx->pc = 0x2daa98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2daa9c: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x2DAA9Cu;
    {
        const bool branch_taken_0x2daa9c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa9c) {
            ctx->pc = 0x2DAAC8u;
            goto label_2daac8;
        }
    }
    ctx->pc = 0x2DAAA4u;
    // 0x2daaa4: 0x84af000c  lh          $t7, 0xC($a1)
    ctx->pc = 0x2daaa4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2daaa8: 0x84ae000e  lh          $t6, 0xE($a1)
    ctx->pc = 0x2daaa8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x2daaac: 0x14f5021  addu        $t2, $t2, $t7
    ctx->pc = 0x2daaacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x2daab0: 0x12e4821  addu        $t1, $t1, $t6
    ctx->pc = 0x2daab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x2daab4: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x2daab4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x2daab8: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x2daab8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x2daabc: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x2daabcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x2daac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DAAC0u;
    {
        const bool branch_taken_0x2daac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAAC0u;
        // 0x2daac4: 0x94c3f  dsra32      $t1, $t1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daac0) {
            ctx->pc = 0x2DAAE0u;
            goto label_2daae0;
        }
    }
    ctx->pc = 0x2DAAC8u;
label_2daac8:
    // 0x2daac8: 0x306e0008  andi        $t6, $v1, 0x8
    ctx->pc = 0x2daac8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2daacc: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAACCu;
    {
        const bool branch_taken_0x2daacc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daacc) {
            ctx->pc = 0x2DAAE0u;
            goto label_2daae0;
        }
    }
    ctx->pc = 0x2DAAD4u;
    // 0x2daad4: 0x84aa000c  lh          $t2, 0xC($a1)
    ctx->pc = 0x2daad4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2daad8: 0x84a9000e  lh          $t1, 0xE($a1)
    ctx->pc = 0x2daad8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x2daadc: 0x0  nop
    ctx->pc = 0x2daadcu;
    // NOP
label_2daae0:
    // 0x2daae0: 0x306e0020  andi        $t6, $v1, 0x20
    ctx->pc = 0x2daae0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2daae4: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DAAE4u;
    {
        const bool branch_taken_0x2daae4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daae4) {
            ctx->pc = 0x2DAAF0u;
            goto label_2daaf0;
        }
    }
    ctx->pc = 0x2DAAECu;
    // 0x2daaec: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x2daaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2daaf0:
    // 0x2daaf0: 0x306e0040  andi        $t6, $v1, 0x40
    ctx->pc = 0x2daaf0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2daaf4: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAAF4u;
    {
        const bool branch_taken_0x2daaf4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daaf4) {
            ctx->pc = 0x2DAB10u;
            goto label_2dab10;
        }
    }
    ctx->pc = 0x2DAAFCu;
    // 0x2daafc: 0x90a8001b  lbu         $t0, 0x1B($a1)
    ctx->pc = 0x2daafcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 27)));
    // 0x2dab00: 0x4723c  dsll32      $t6, $a0, 8
    ctx->pc = 0x2dab00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 8));
    // 0x2dab04: 0xe723e  dsrl32      $t6, $t6, 8
    ctx->pc = 0x2dab04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 8));
    // 0x2dab08: 0x82600  sll         $a0, $t0, 24
    ctx->pc = 0x2dab08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2dab0c: 0x1c42025  or          $a0, $t6, $a0
    ctx->pc = 0x2dab0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
label_2dab10:
    // 0x2dab10: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2dab10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2dab14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAB14u;
    {
        const bool branch_taken_0x2dab14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dab14) {
            ctx->pc = 0x2DAB28u;
            goto label_2dab28;
        }
    }
    ctx->pc = 0x2DAB1Cu;
    // 0x2dab1c: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x2dab1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2dab20: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x2dab20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2dab24: 0x0  nop
    ctx->pc = 0x2dab24u;
    // NOP
label_2dab28:
    // 0x2dab28: 0xa2c3c  dsll32      $a1, $t2, 16
    ctx->pc = 0x2dab28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 16));
    // 0x2dab2c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2dab2cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2dab30: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAB30u;
    {
        const bool branch_taken_0x2dab30 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x2dab30) {
            ctx->pc = 0x2DAB48u;
            goto label_2dab48;
        }
    }
    ctx->pc = 0x2DAB38u;
    // 0x2dab38: 0x94c3c  dsll32      $t1, $t1, 16
    ctx->pc = 0x2dab38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x2dab3c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2dab3cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2dab40: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAB40u;
    {
        const bool branch_taken_0x2dab40 = (GPR_S64(ctx, 9) >= 0);
        if (branch_taken_0x2dab40) {
            ctx->pc = 0x2DAB50u;
            goto label_2dab50;
        }
    }
    ctx->pc = 0x2DAB48u;
label_2dab48:
    // 0x2dab48: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2DAB48u;
    {
        const bool branch_taken_0x2dab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dab48) {
            ctx->pc = 0x2DAC28u;
            goto label_2dac28;
        }
    }
    ctx->pc = 0x2DAB50u;
label_2dab50:
    // 0x2dab50: 0xc143c  dsll32      $v0, $t4, 16
    ctx->pc = 0x2dab50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 16));
    // 0x2dab54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dab54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dab58: 0x8e110040  lw          $s1, 0x40($s0)
    ctx->pc = 0x2dab58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2dab5c: 0x24430700  addiu       $v1, $v0, 0x700
    ctx->pc = 0x2dab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x2dab60: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x2dab64: 0xb143c  dsll32      $v0, $t3, 16
    ctx->pc = 0x2dab64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 16));
    // 0x2dab68: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dab68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dab6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dab6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dab70: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2dab70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2dab74: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2dab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2dab78: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x2dab78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x2dab7c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2dab7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dab80: 0xae2c0000  sw          $t4, 0x0($s1)
    ctx->pc = 0x2dab80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 12));
    // 0x2dab84: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2dab84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2dab88: 0x91500  sll         $v0, $t1, 20
    ctx->pc = 0x2dab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 20));
    // 0x2dab8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2dab8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dab90: 0x3c052028  lui         $a1, 0x2028
    ctx->pc = 0x2dab90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8232 << 16));
    // 0x2dab94: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x2dab94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2dab98: 0x34a50156  ori         $a1, $a1, 0x156
    ctx->pc = 0x2dab98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)342);
    // 0x2dab9c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2dab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2daba0: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x2daba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x2daba4: 0x825825  or          $t3, $a0, $v0
    ctx->pc = 0x2daba4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2daba8: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x2daba8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2dabac: 0xae2b0008  sw          $t3, 0x8($s1)
    ctx->pc = 0x2dabacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 11));
    // 0x2dabb0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2dabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2dabb4: 0xae2a0020  sw          $t2, 0x20($s1)
    ctx->pc = 0x2dabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 10));
    // 0x2dabb8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2dabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2dabbc: 0x9e0a0044  lwu         $t2, 0x44($s0)
    ctx->pc = 0x2dabbcu;
    SET_GPR_ZE32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2dabc0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2dabc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2dabc4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2dabc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2dabc8: 0x12a482f  dsubu       $t1, $t1, $t2
    ctx->pc = 0x2dabc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) - GPR_U64(ctx, 10));
    // 0x2dabcc: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x2dabccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2dabd0: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2dabd0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2dabd4: 0xae290024  sw          $t1, 0x24($s1)
    ctx->pc = 0x2dabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 9));
    // 0x2dabd8: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x2dabd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x2dabdc: 0xae270018  sw          $a3, 0x18($s1)
    ctx->pc = 0x2dabdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 7));
    // 0x2dabe0: 0xae26001c  sw          $a2, 0x1C($s1)
    ctx->pc = 0x2dabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 6));
    // 0x2dabe4: 0x81a30014  lb          $v1, 0x14($t5)
    ctx->pc = 0x2dabe4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x2dabe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2dabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dabec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2dabecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2dabf0: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2dabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2dabf4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2dabf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2dabf8: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x2dabf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dabfc: 0x81a30015  lb          $v1, 0x15($t5)
    ctx->pc = 0x2dabfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 21)));
    // 0x2dac00: 0xa6230016  sh          $v1, 0x16($s1)
    ctx->pc = 0x2dac00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dac04: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2dac04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2dac08: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dac08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dac0c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2dac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2dac10: 0xa228000f  sb          $t0, 0xF($s1)
    ctx->pc = 0x2dac10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 8));
    // 0x2dac14: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x2dac14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2dac18: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2DAC18u;
    SET_GPR_U32(ctx, 31, 0x2DAC20u);
    ctx->pc = 0x2DAC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAC18u;
    // 0x2dac1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2DAC18u, 0x2DAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC20u;
label_2dac20:
    // 0x2dac20: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x2dac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2dac24: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2dac24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_2dac28:
    // 0x2dac28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dac28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dac2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dac2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dac30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dac30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dac34: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAC34u;
        // 0x2dac38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAC3Cu;
}

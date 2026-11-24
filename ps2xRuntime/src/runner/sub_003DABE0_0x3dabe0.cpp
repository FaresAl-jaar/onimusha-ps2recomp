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

// Function: sub_003DABE0
// Address: 0x3dabe0 - 0x3db15c
void sub_003DABE0_0x3dabe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DABE0_0x3dabe0");
#endif

    switch (ctx->pc) {
        case 0x3dacbcu: goto label_3dacbc;
        case 0x3dacd8u: goto label_3dacd8;
        case 0x3dace4u: goto label_3dace4;
        case 0x3dad10u: goto label_3dad10;
        case 0x3dad3cu: goto label_3dad3c;
        case 0x3dadccu: goto label_3dadcc;
        case 0x3dae00u: goto label_3dae00;
        case 0x3dae74u: goto label_3dae74;
        case 0x3daf88u: goto label_3daf88;
        case 0x3dafccu: goto label_3dafcc;
        case 0x3db004u: goto label_3db004;
        case 0x3db07cu: goto label_3db07c;
        case 0x3db0b0u: goto label_3db0b0;
        case 0x3db0bcu: goto label_3db0bc;
        case 0x3db128u: goto label_3db128;
        default: break;
    }

    ctx->pc = 0x3dabe0u;

    // 0x3dabe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dabe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3dabe4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3dabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3dabe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dabe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dabec: 0x2463e5d0  addiu       $v1, $v1, -0x1A30
    ctx->pc = 0x3dabecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960592));
    // 0x3dabf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dabf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dabf4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3dabf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3dabf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dabf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dabfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dabfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dac00: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x3dac00u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x65E5D0u));
    // 0x3dac04: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x3dac04u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x65E5E0u));
    // 0x3dac08: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x3dac08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x3dac0c: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x3dac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x3dac10: 0xfce50010  sd          $a1, 0x10($a3)
    ctx->pc = 0x3dac10u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 5));
    // 0x3dac14: 0x9084065c  lbu         $a0, 0x65C($a0)
    ctx->pc = 0x3dac14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3dac18: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3DAC18u;
    {
        const bool branch_taken_0x3dac18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC18u;
        // 0x3dac1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dac18) {
            ctx->pc = 0x3DAC50u;
            goto label_3dac50;
        }
    }
    ctx->pc = 0x3DAC20u;
    // 0x3dac20: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x3dac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3dac24: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAC24u;
    {
        const bool branch_taken_0x3dac24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC24u;
        // 0x3dac28: 0x240300fb  addiu       $v1, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dac24) {
            ctx->pc = 0x3DAC48u;
            goto label_3dac48;
        }
    }
    ctx->pc = 0x3DAC2Cu;
    // 0x3dac2c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DAC2Cu;
    {
        const bool branch_taken_0x3dac2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dac2c) {
            ctx->pc = 0x3DAC40u;
            goto label_3dac40;
        }
    }
    ctx->pc = 0x3DAC34u;
    // 0x3dac34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAC34u;
    {
        const bool branch_taken_0x3dac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dac34) {
            ctx->pc = 0x3DAC58u;
            goto label_3dac58;
        }
    }
    ctx->pc = 0x3DAC3Cu;
    // 0x3dac3c: 0x0  nop
    ctx->pc = 0x3dac3cu;
    // NOP
label_3dac40:
    // 0x3dac40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3DAC40u;
    {
        const bool branch_taken_0x3dac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dac40) {
            ctx->pc = 0x3DAC58u;
            goto label_3dac58;
        }
    }
    ctx->pc = 0x3DAC48u;
label_3dac48:
    // 0x3dac48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DAC48u;
    {
        const bool branch_taken_0x3dac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC48u;
        // 0x3dac4c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dac48) {
            ctx->pc = 0x3DAC58u;
            goto label_3dac58;
        }
    }
    ctx->pc = 0x3DAC50u;
label_3dac50:
    // 0x3dac50: 0x64100002  daddiu      $s0, $zero, 0x2
    ctx->pc = 0x3dac50u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x3dac54: 0x0  nop
    ctx->pc = 0x3dac54u;
    // NOP
label_3dac58:
    // 0x3dac58: 0x92262be5  lbu         $a2, 0x2BE5($s1)
    ctx->pc = 0x3dac58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11237)));
    // 0x3dac5c: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x3dac5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x3dac60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DAC60u;
    {
        const bool branch_taken_0x3dac60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dac60) {
            ctx->pc = 0x3DAC70u;
            goto label_3dac70;
        }
    }
    ctx->pc = 0x3DAC68u;
    // 0x3dac68: 0x64100003  daddiu      $s0, $zero, 0x3
    ctx->pc = 0x3dac68u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x3dac6c: 0x0  nop
    ctx->pc = 0x3dac6cu;
    // NOP
label_3dac70:
    // 0x3dac70: 0x92250821  lbu         $a1, 0x821($s1)
    ctx->pc = 0x3dac70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3dac74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3dac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3dac78: 0x10a40129  beq         $a1, $a0, . + 4 + (0x129 << 2)
    ctx->pc = 0x3DAC78u;
    {
        const bool branch_taken_0x3dac78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3DAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAC78u;
        // 0x3dac7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dac78) {
            ctx->pc = 0x3DB120u;
            goto label_3db120;
        }
    }
    ctx->pc = 0x3DAC80u;
    // 0x3dac80: 0x10a30059  beq         $a1, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x3DAC80u;
    {
        const bool branch_taken_0x3dac80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dac80) {
            ctx->pc = 0x3DADE8u;
            goto label_3dade8;
        }
    }
    ctx->pc = 0x3DAC88u;
    // 0x3dac88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dac88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dac8c: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3DAC8Cu;
    {
        const bool branch_taken_0x3dac8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dac8c) {
            ctx->pc = 0x3DAD20u;
            goto label_3dad20;
        }
    }
    ctx->pc = 0x3DAC94u;
    // 0x3dac94: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DAC94u;
    {
        const bool branch_taken_0x3dac94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dac94) {
            ctx->pc = 0x3DACA8u;
            goto label_3daca8;
        }
    }
    ctx->pc = 0x3DAC9Cu;
    // 0x3dac9c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x3DAC9Cu;
    {
        const bool branch_taken_0x3dac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dac9c) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DACA4u;
    // 0x3daca4: 0x0  nop
    ctx->pc = 0x3daca4u;
    // NOP
label_3daca8:
    // 0x3daca8: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x3daca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x3dacac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DACACu;
    {
        const bool branch_taken_0x3dacac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACACu;
        // 0x3dacb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dacac) {
            ctx->pc = 0x3DACC0u;
            goto label_3dacc0;
        }
    }
    ctx->pc = 0x3DACB4u;
    // 0x3dacb4: 0xc0f6cc8  jal         func_3DB320
    ctx->pc = 0x3DACB4u;
    SET_GPR_U32(ctx, 31, 0x3DACBCu);
    ctx->pc = 0x3DB320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB320u, 0x3DACB4u, 0x3DACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DACBCu;
label_3dacbc:
    // 0x3dacbc: 0x0  nop
    ctx->pc = 0x3dacbcu;
    // NOP
label_3dacc0:
    // 0x3dacc0: 0x92222be5  lbu         $v0, 0x2BE5($s1)
    ctx->pc = 0x3dacc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11237)));
    // 0x3dacc4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3dacc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3dacc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DACC8u;
    {
        const bool branch_taken_0x3dacc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACC8u;
        // 0x3daccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dacc8) {
            ctx->pc = 0x3DACE8u;
            goto label_3dace8;
        }
    }
    ctx->pc = 0x3DACD0u;
    // 0x3dacd0: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x3DACD0u;
    SET_GPR_U32(ctx, 31, 0x3DACD8u);
    ctx->pc = 0x3DACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DACD0u;
    // 0x3dacd4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x3DACD0u, 0x3DACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DACD8u;
label_3dacd8:
    // 0x3dacd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dacd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dacdc: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x3DACDCu;
    SET_GPR_U32(ctx, 31, 0x3DACE4u);
    ctx->pc = 0x3DACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DACDCu;
    // 0x3dace0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x3DACDCu, 0x3DACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DACE4u;
label_3dace4:
    // 0x3dace4: 0x0  nop
    ctx->pc = 0x3dace4u;
    // NOP
label_3dace8:
    // 0x3dace8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3dace8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3dacec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3dacecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dacf0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3dacf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dacf4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3dacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3dacf8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dacf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dacfc: 0x34460040  ori         $a2, $v0, 0x40
    ctx->pc = 0x3dacfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3dad00: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x3dad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3dad04: 0x94450030  lhu         $a1, 0x30($v0)
    ctx->pc = 0x3dad04u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3dad08: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3DAD08u;
    SET_GPR_U32(ctx, 31, 0x3DAD10u);
    ctx->pc = 0x3DAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD08u;
    // 0x3dad0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3DAD08u, 0x3DAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD10u;
label_3dad10:
    // 0x3dad10: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3dad10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3dad14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dad18: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x3DAD18u;
    {
        const bool branch_taken_0x3dad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD18u;
        // 0x3dad1c: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad18) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DAD20u;
label_3dad20:
    // 0x3dad20: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3dad20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x3dad24: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAD24u;
    {
        const bool branch_taken_0x3dad24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD24u;
        // 0x3dad28: 0x30c30004  andi        $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad24) {
            ctx->pc = 0x3DAD48u;
            goto label_3dad48;
        }
    }
    ctx->pc = 0x3DAD2Cu;
    // 0x3dad2c: 0x10600106  beqz        $v1, . + 4 + (0x106 << 2)
    ctx->pc = 0x3DAD2Cu;
    {
        const bool branch_taken_0x3dad2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD2Cu;
        // 0x3dad30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad2c) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DAD34u;
    // 0x3dad34: 0xc0f6d00  jal         func_3DB400
    ctx->pc = 0x3DAD34u;
    SET_GPR_U32(ctx, 31, 0x3DAD3Cu);
    ctx->pc = 0x3DB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB400u, 0x3DAD34u, 0x3DAD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD3Cu;
label_3dad3c:
    // 0x3dad3c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x3DAD3Cu;
    {
        const bool branch_taken_0x3dad3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dad3c) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DAD44u;
    // 0x3dad44: 0x0  nop
    ctx->pc = 0x3dad44u;
    // NOP
label_3dad48:
    // 0x3dad48: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x3dad48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dad4c: 0xa6200828  sh          $zero, 0x828($s1)
    ctx->pc = 0x3dad4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dad50: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x3dad50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3dad54: 0xa620082e  sh          $zero, 0x82E($s1)
    ctx->pc = 0x3dad54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dad58: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3DAD58u;
    {
        const bool branch_taken_0x3dad58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3DAD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD58u;
        // 0x3dad5c: 0xa620082a  sh          $zero, 0x82A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad58) {
            ctx->pc = 0x3DAD90u;
            goto label_3dad90;
        }
    }
    ctx->pc = 0x3DAD60u;
    // 0x3dad60: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3dad60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3dad64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dad64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dad68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3dad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3dad6c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3dad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3dad70: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3dad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3dad74: 0x94840032  lhu         $a0, 0x32($a0)
    ctx->pc = 0x3dad74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x3dad78: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3dad78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dad7c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3dad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dad80: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3dad80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3dad84: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3dad84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dad88: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3DAD88u;
    {
        const bool branch_taken_0x3dad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD88u;
        // 0x3dad8c: 0xae2307ec  sw          $v1, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dad88) {
            ctx->pc = 0x3DADD8u;
            goto label_3dadd8;
        }
    }
    ctx->pc = 0x3DAD90u;
label_3dad90:
    // 0x3dad90: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3dad90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3dad94: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x3dad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dad98: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3dad98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3dad9c: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x3dad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x3dada0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3dada0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3dada4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3dada4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3dada8: 0x94630032  lhu         $v1, 0x32($v1)
    ctx->pc = 0x3dada8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x3dadac: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3dadacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dadb0: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3dadb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dadb4: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x3dadb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3dadb8: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3dadb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dadbc: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x3dadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x3dadc0: 0x92250826  lbu         $a1, 0x826($s1)
    ctx->pc = 0x3dadc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3dadc4: 0xc0f7098  jal         func_3DC260
    ctx->pc = 0x3DADC4u;
    SET_GPR_U32(ctx, 31, 0x3DADCCu);
    ctx->pc = 0x3DADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DADC4u;
    // 0x3dadc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC260u, 0x3DADC4u, 0x3DADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DADCCu;
label_3dadcc:
    // 0x3dadcc: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3dadccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3dadd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dadd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dadd4: 0xa6230826  sh          $v1, 0x826($s1)
    ctx->pc = 0x3dadd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
label_3dadd8:
    // 0x3dadd8: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3dadd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3daddc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3daddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dade0: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3dade0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dade4: 0x0  nop
    ctx->pc = 0x3dade4u;
    // NOP
label_3dade8:
    // 0x3dade8: 0x92242be5  lbu         $a0, 0x2BE5($s1)
    ctx->pc = 0x3dade8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11237)));
    // 0x3dadec: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x3dadecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3dadf0: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x3DADF0u;
    {
        const bool branch_taken_0x3dadf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dadf0) {
            ctx->pc = 0x3DAFA8u;
            goto label_3dafa8;
        }
    }
    ctx->pc = 0x3DADF8u;
    // 0x3dadf8: 0xc0f6d00  jal         func_3DB400
    ctx->pc = 0x3DADF8u;
    SET_GPR_U32(ctx, 31, 0x3DAE00u);
    ctx->pc = 0x3DADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DADF8u;
    // 0x3dadfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB400u, 0x3DADF8u, 0x3DAE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE00u;
label_3dae00:
    // 0x3dae00: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3dae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dae04: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x3dae04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x3dae08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3dae08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dae0c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3dae10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dae10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dae14: 0x0  nop
    ctx->pc = 0x3dae14u;
    // NOP
    // 0x3dae18: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3dae18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3dae1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dae1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dae20: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DAE20u;
    {
        const bool branch_taken_0x3dae20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE20u;
        // 0x3dae24: 0x9625082e  lhu         $a1, 0x82E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2094)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae20) {
            ctx->pc = 0x3DAE38u;
            goto label_3dae38;
        }
    }
    ctx->pc = 0x3DAE28u;
    // 0x3dae28: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dae28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dae2c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dae2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dae30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAE30u;
    {
        const bool branch_taken_0x3dae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE30u;
        // 0x3dae34: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae30) {
            ctx->pc = 0x3DAE54u;
            goto label_3dae54;
        }
    }
    ctx->pc = 0x3DAE38u;
label_3dae38:
    // 0x3dae38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3dae38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3dae3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dae40: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dae40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dae44: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dae44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dae48: 0x0  nop
    ctx->pc = 0x3dae48u;
    // NOP
    // 0x3dae4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3dae4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3dae50: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3dae50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3dae54:
    // 0x3dae54: 0x1020008e  beqz        $at, . + 4 + (0x8E << 2)
    ctx->pc = 0x3DAE54u;
    {
        const bool branch_taken_0x3dae54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dae54) {
            ctx->pc = 0x3DB090u;
            goto label_3db090;
        }
    }
    ctx->pc = 0x3DAE5Cu;
    // 0x3dae5c: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3dae5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3dae60: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3dae60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3dae64: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3DAE64u;
    {
        const bool branch_taken_0x3dae64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE64u;
        // 0x3dae68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae64) {
            ctx->pc = 0x3DAE90u;
            goto label_3dae90;
        }
    }
    ctx->pc = 0x3DAE6Cu;
    // 0x3dae6c: 0xc0f6ea4  jal         func_3DBA90
    ctx->pc = 0x3DAE6Cu;
    SET_GPR_U32(ctx, 31, 0x3DAE74u);
    ctx->pc = 0x3DBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA90u, 0x3DAE6Cu, 0x3DAE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE74u;
label_3dae74:
    // 0x3dae74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DAE74u;
    {
        const bool branch_taken_0x3dae74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dae74) {
            ctx->pc = 0x3DAE90u;
            goto label_3dae90;
        }
    }
    ctx->pc = 0x3DAE7Cu;
    // 0x3dae7c: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3dae7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3dae80: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3dae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3dae84: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x3dae84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x3dae88: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3dae88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3dae8c: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x3dae8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
label_3dae90:
    // 0x3dae90: 0x96260826  lhu         $a2, 0x826($s1)
    ctx->pc = 0x3dae90u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3dae94: 0x62082  srl         $a0, $a2, 2
    ctx->pc = 0x3dae94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x3dae98: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x3dae98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x3dae9c: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DAE9Cu;
    {
        const bool branch_taken_0x3dae9c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3DAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE9Cu;
        // 0x3daea0: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dae9c) {
            ctx->pc = 0x3DAEB0u;
            goto label_3daeb0;
        }
    }
    ctx->pc = 0x3DAEA4u;
    // 0x3daea4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DAEA4u;
    {
        const bool branch_taken_0x3daea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3daea4) {
            ctx->pc = 0x3DAEB0u;
            goto label_3daeb0;
        }
    }
    ctx->pc = 0x3DAEACu;
    // 0x3daeac: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3daeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3daeb0:
    // 0x3daeb0: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3daeb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3daeb4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x3daeb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3daeb8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3daeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3daebc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3daebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3daec0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3daec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3daec4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DAEC4u;
    {
        const bool branch_taken_0x3daec4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3DAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAEC4u;
        // 0x3daec8: 0x9626082e  lhu         $a2, 0x82E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2094)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daec4) {
            ctx->pc = 0x3DAED8u;
            goto label_3daed8;
        }
    }
    ctx->pc = 0x3DAECCu;
    // 0x3daecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3daeccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3daed0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAED0u;
    {
        const bool branch_taken_0x3daed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAED0u;
        // 0x3daed4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daed0) {
            ctx->pc = 0x3DAEF4u;
            goto label_3daef4;
        }
    }
    ctx->pc = 0x3DAED8u;
label_3daed8:
    // 0x3daed8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3daed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3daedc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3daedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3daee0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3daee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3daee4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3daee4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3daee8: 0x0  nop
    ctx->pc = 0x3daee8u;
    // NOP
    // 0x3daeec: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3daeecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3daef0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3daef0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3daef4:
    // 0x3daef4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3daef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3daef8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3daef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3daefc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3daefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3daf00: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3daf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3daf04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3daf04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3daf08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3daf08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3daf0c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3daf0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3daf10: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3daf10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3daf14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3daf14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3daf18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DAF18u;
    {
        const bool branch_taken_0x3daf18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3daf18) {
            ctx->pc = 0x3DAF30u;
            goto label_3daf30;
        }
    }
    ctx->pc = 0x3DAF20u;
    // 0x3daf20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3daf20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3daf24: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3daf24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3daf28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAF28u;
    {
        const bool branch_taken_0x3daf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF28u;
        // 0x3daf2c: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daf28) {
            ctx->pc = 0x3DAF4Cu;
            goto label_3daf4c;
        }
    }
    ctx->pc = 0x3DAF30u;
label_3daf30:
    // 0x3daf30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3daf30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3daf34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3daf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3daf38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3daf38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3daf3c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3daf3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3daf40: 0x0  nop
    ctx->pc = 0x3daf40u;
    // NOP
    // 0x3daf44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3daf44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3daf48: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3daf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_3daf4c:
    // 0x3daf4c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x3daf4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3daf50: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DAF50u;
    {
        const bool branch_taken_0x3daf50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3daf50) {
            ctx->pc = 0x3DAF98u;
            goto label_3daf98;
        }
    }
    ctx->pc = 0x3DAF58u;
    // 0x3daf58: 0x9622082a  lhu         $v0, 0x82A($s1)
    ctx->pc = 0x3daf58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3daf5c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3daf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3daf60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DAF60u;
    {
        const bool branch_taken_0x3daf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3daf60) {
            ctx->pc = 0x3DAF78u;
            goto label_3daf78;
        }
    }
    ctx->pc = 0x3DAF68u;
    // 0x3daf68: 0x96220828  lhu         $v0, 0x828($s1)
    ctx->pc = 0x3daf68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x3daf6c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x3daf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x3daf70: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3daf70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3daf74: 0x0  nop
    ctx->pc = 0x3daf74u;
    // NOP
label_3daf78:
    // 0x3daf78: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x3daf78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3daf7c: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x3daf7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3daf80: 0xc0f7004  jal         func_3DC010
    ctx->pc = 0x3DAF80u;
    SET_GPR_U32(ctx, 31, 0x3DAF88u);
    ctx->pc = 0x3DAF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAF80u;
    // 0x3daf84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC010u, 0x3DAF80u, 0x3DAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAF88u;
label_3daf88:
    // 0x3daf88: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3daf88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3daf8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3daf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3daf90: 0xa6230826  sh          $v1, 0x826($s1)
    ctx->pc = 0x3daf90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x3daf94: 0x0  nop
    ctx->pc = 0x3daf94u;
    // NOP
label_3daf98:
    // 0x3daf98: 0x9623082e  lhu         $v1, 0x82E($s1)
    ctx->pc = 0x3daf98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2094)));
    // 0x3daf9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3daf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dafa0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3DAFA0u;
    {
        const bool branch_taken_0x3dafa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAFA0u;
        // 0x3dafa4: 0xa623082e  sh          $v1, 0x82E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dafa0) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DAFA8u;
label_3dafa8:
    // 0x3dafa8: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x3dafa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x3dafac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3DAFACu;
    {
        const bool branch_taken_0x3dafac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dafac) {
            ctx->pc = 0x3DAFE0u;
            goto label_3dafe0;
        }
    }
    ctx->pc = 0x3DAFB4u;
    // 0x3dafb4: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3dafb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3dafb8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3dafb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3dafbc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAFBCu;
    {
        const bool branch_taken_0x3dafbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAFBCu;
        // 0x3dafc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dafbc) {
            ctx->pc = 0x3DAFE0u;
            goto label_3dafe0;
        }
    }
    ctx->pc = 0x3DAFC4u;
    // 0x3dafc4: 0xc0f6ea4  jal         func_3DBA90
    ctx->pc = 0x3DAFC4u;
    SET_GPR_U32(ctx, 31, 0x3DAFCCu);
    ctx->pc = 0x3DBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA90u, 0x3DAFC4u, 0x3DAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAFCCu;
label_3dafcc:
    // 0x3dafcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DAFCCu;
    {
        const bool branch_taken_0x3dafcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dafcc) {
            ctx->pc = 0x3DAFE0u;
            goto label_3dafe0;
        }
    }
    ctx->pc = 0x3DAFD4u;
    // 0x3dafd4: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3dafd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3dafd8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3dafd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3dafdc: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x3dafdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
label_3dafe0:
    // 0x3dafe0: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3dafe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x3dafe4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3DAFE4u;
    {
        const bool branch_taken_0x3dafe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dafe4) {
            ctx->pc = 0x3DB010u;
            goto label_3db010;
        }
    }
    ctx->pc = 0x3DAFECu;
    // 0x3dafec: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3dafecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3daff0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3daff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3daff4: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x3DAFF4u;
    {
        const bool branch_taken_0x3daff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAFF4u;
        // 0x3daff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daff4) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DAFFCu;
    // 0x3daffc: 0xc0f6d00  jal         func_3DB400
    ctx->pc = 0x3DAFFCu;
    SET_GPR_U32(ctx, 31, 0x3DB004u);
    ctx->pc = 0x3DB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB400u, 0x3DAFFCu, 0x3DB004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB004u;
label_3db004:
    // 0x3db004: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x3DB004u;
    {
        const bool branch_taken_0x3db004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db004) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DB00Cu;
    // 0x3db00c: 0x0  nop
    ctx->pc = 0x3db00cu;
    // NOP
label_3db010:
    // 0x3db010: 0x92232be5  lbu         $v1, 0x2BE5($s1)
    ctx->pc = 0x3db010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11237)));
    // 0x3db014: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3db014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3db018: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DB018u;
    {
        const bool branch_taken_0x3db018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db018) {
            ctx->pc = 0x3DB030u;
            goto label_3db030;
        }
    }
    ctx->pc = 0x3DB020u;
    // 0x3db020: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3db020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3db024: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3db024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3db028: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3DB028u;
    {
        const bool branch_taken_0x3db028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3db028) {
            ctx->pc = 0x3DB090u;
            goto label_3db090;
        }
    }
    ctx->pc = 0x3DB030u;
label_3db030:
    // 0x3db030: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3db030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3db034: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x3db034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3db038: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x3DB038u;
    {
        const bool branch_taken_0x3db038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB038u;
        // 0x3db03c: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db038) {
            ctx->pc = 0x3DB090u;
            goto label_3db090;
        }
    }
    ctx->pc = 0x3DB040u;
    // 0x3db040: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x3db040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x3db044: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3db044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3db048: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3db048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3db04c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3db04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3db050: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3db050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3db054: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3db054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3db058: 0x94630032  lhu         $v1, 0x32($v1)
    ctx->pc = 0x3db058u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x3db05c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3db05cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3db060: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3db060u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3db064: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x3db064u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3db068: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3db068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3db06c: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x3db06cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x3db070: 0x92250826  lbu         $a1, 0x826($s1)
    ctx->pc = 0x3db070u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3db074: 0xc0f7098  jal         func_3DC260
    ctx->pc = 0x3DB074u;
    SET_GPR_U32(ctx, 31, 0x3DB07Cu);
    ctx->pc = 0x3DB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB074u;
    // 0x3db078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC260u, 0x3DB074u, 0x3DB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB07Cu;
label_3db07c:
    // 0x3db07c: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3db07cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3db080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3db080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3db084: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3DB084u;
    {
        const bool branch_taken_0x3db084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB084u;
        // 0x3db088: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db084) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DB08Cu;
    // 0x3db08c: 0x0  nop
    ctx->pc = 0x3db08cu;
    // NOP
label_3db090:
    // 0x3db090: 0x92242be5  lbu         $a0, 0x2BE5($s1)
    ctx->pc = 0x3db090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11237)));
    // 0x3db094: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3db094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3db098: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3DB098u;
    {
        const bool branch_taken_0x3db098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB098u;
        // 0x3db09c: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db098) {
            ctx->pc = 0x3DB0D8u;
            goto label_3db0d8;
        }
    }
    ctx->pc = 0x3DB0A0u;
    // 0x3db0a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB0A0u;
    {
        const bool branch_taken_0x3db0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB0A0u;
        // 0x3db0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db0a0) {
            ctx->pc = 0x3DB0C0u;
            goto label_3db0c0;
        }
    }
    ctx->pc = 0x3DB0A8u;
    // 0x3db0a8: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x3DB0A8u;
    SET_GPR_U32(ctx, 31, 0x3DB0B0u);
    ctx->pc = 0x3DB0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB0A8u;
    // 0x3db0ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x3DB0A8u, 0x3DB0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB0B0u;
label_3db0b0:
    // 0x3db0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3db0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db0b4: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x3DB0B4u;
    SET_GPR_U32(ctx, 31, 0x3DB0BCu);
    ctx->pc = 0x3DB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB0B4u;
    // 0x3db0b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x3DB0B4u, 0x3DB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB0BCu;
label_3db0bc:
    // 0x3db0bc: 0x0  nop
    ctx->pc = 0x3db0bcu;
    // NOP
label_3db0c0:
    // 0x3db0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3db0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3db0c4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3db0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db0c8: 0xa2232be3  sb          $v1, 0x2BE3($s1)
    ctx->pc = 0x3db0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db0cc: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3db0ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3db0d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3db0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3db0d4: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3db0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3db0d8:
    // 0x3db0d8: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x3db0d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3db0dc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3db0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3db0e0: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3db0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3db0e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3db0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3db0e8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3db0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3db0ec: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3db0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3db0f0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3db0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3db0f4: 0x94840034  lhu         $a0, 0x34($a0)
    ctx->pc = 0x3db0f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3db0f8: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3db0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3db0fc: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3db0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3db100: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3db100u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3db104: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3db104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3db108: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3db108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x3db10c: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3db10cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3db110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3db110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3db114: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DB114u;
    {
        const bool branch_taken_0x3db114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB114u;
        // 0x3db118: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db114) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DB11Cu;
    // 0x3db11c: 0x0  nop
    ctx->pc = 0x3db11cu;
    // NOP
label_3db120:
    // 0x3db120: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3DB120u;
    SET_GPR_U32(ctx, 31, 0x3DB128u);
    ctx->pc = 0x3DB124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB120u;
    // 0x3db124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3DB120u, 0x3DB128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB128u;
label_3db128:
    // 0x3db128: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB128u;
    {
        const bool branch_taken_0x3db128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB128u;
        // 0x3db12c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db128) {
            ctx->pc = 0x3DB148u;
            goto label_3db148;
        }
    }
    ctx->pc = 0x3DB130u;
    // 0x3db130: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3db130u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db134: 0xa2232be3  sb          $v1, 0x2BE3($s1)
    ctx->pc = 0x3db134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db138: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3db138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3db13c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3db13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3db140: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3db140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3db144: 0x0  nop
    ctx->pc = 0x3db144u;
    // NOP
label_3db148:
    // 0x3db148: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3db148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3db14c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3db150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db154: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB154u;
        // 0x3db158: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB15Cu;
}

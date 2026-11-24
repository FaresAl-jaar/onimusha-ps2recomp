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

// Function: sub_001A0D60
// Address: 0x1a0d60 - 0x1a1014
void sub_001A0D60_0x1a0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0D60_0x1a0d60");
#endif

    switch (ctx->pc) {
        case 0x1a0ec8u: goto label_1a0ec8;
        case 0x1a0f74u: goto label_1a0f74;
        case 0x1a0f88u: goto label_1a0f88;
        case 0x1a0f98u: goto label_1a0f98;
        case 0x1a0fa8u: goto label_1a0fa8;
        case 0x1a0fc0u: goto label_1a0fc0;
        default: break;
    }

    ctx->pc = 0x1a0d60u;

    // 0x1a0d60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0d64: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1a0d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1a0d68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a0d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0d6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a0d70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0d7c: 0x8ca90058  lw          $t1, 0x58($a1)
    ctx->pc = 0x1a0d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1a0d80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d84: 0x902529e3  lbu         $a1, 0x29E3($at)
    ctx->pc = 0x1a0d84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8129E3u));
    // 0x1a0d88: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x1a0d88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1a0d8c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1a0d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1a0d90: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a0d90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a0d94: 0x902329e2  lbu         $v1, 0x29E2($at)
    ctx->pc = 0x1a0d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 10722)));
    // 0x1a0d98: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a0d9c: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1a0d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0da0: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x1a0da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1a0da4: 0x8d080040  lw          $t0, 0x40($t0)
    ctx->pc = 0x1a0da4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x1a0da8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0DA8u;
    {
        const bool branch_taken_0x1a0da8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DA8u;
        // 0x1a0dac: 0x8d26000c  lw          $a2, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0da8) {
            ctx->pc = 0x1A0DC0u;
            goto label_1a0dc0;
        }
    }
    ctx->pc = 0x1A0DB0u;
    // 0x1a0db0: 0x240a0f00  addiu       $t2, $zero, 0xF00
    ctx->pc = 0x1a0db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x1a0db4: 0x10ca0014  beq         $a2, $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A0DB4u;
    {
        const bool branch_taken_0x1a0db4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x1a0db4) {
            ctx->pc = 0x1A0E08u;
            goto label_1a0e08;
        }
    }
    ctx->pc = 0x1A0DBCu;
    // 0x1a0dbc: 0x0  nop
    ctx->pc = 0x1a0dbcu;
    // NOP
label_1a0dc0:
    // 0x1a0dc0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a0dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0dc4: 0x14ea0004  bne         $a3, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0DC4u;
    {
        const bool branch_taken_0x1a0dc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x1A0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DC4u;
        // 0x1a0dc8: 0x240a0f07  addiu       $t2, $zero, 0xF07 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0dc4) {
            ctx->pc = 0x1A0DD8u;
            goto label_1a0dd8;
        }
    }
    ctx->pc = 0x1A0DCCu;
    // 0x1a0dcc: 0x10ca000e  beq         $a2, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0DCCu;
    {
        const bool branch_taken_0x1a0dcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x1a0dcc) {
            ctx->pc = 0x1A0E08u;
            goto label_1a0e08;
        }
    }
    ctx->pc = 0x1A0DD4u;
    // 0x1a0dd4: 0x0  nop
    ctx->pc = 0x1a0dd4u;
    // NOP
label_1a0dd8:
    // 0x1a0dd8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a0dd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0ddc: 0x14ea0004  bne         $a3, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0DDCu;
    {
        const bool branch_taken_0x1a0ddc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x1A0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DDCu;
        // 0x1a0de0: 0x240a0f1c  addiu       $t2, $zero, 0xF1C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3868));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ddc) {
            ctx->pc = 0x1A0DF0u;
            goto label_1a0df0;
        }
    }
    ctx->pc = 0x1A0DE4u;
    // 0x1a0de4: 0x10ca0008  beq         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0DE4u;
    {
        const bool branch_taken_0x1a0de4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x1a0de4) {
            ctx->pc = 0x1A0E08u;
            goto label_1a0e08;
        }
    }
    ctx->pc = 0x1A0DECu;
    // 0x1a0dec: 0x0  nop
    ctx->pc = 0x1a0decu;
    // NOP
label_1a0df0:
    // 0x1a0df0: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a0df0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a0df4: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0DF4u;
    {
        const bool branch_taken_0x1a0df4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x1A0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DF4u;
        // 0x1a0df8: 0x240a00a6  addiu       $t2, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0df4) {
            ctx->pc = 0x1A0E18u;
            goto label_1a0e18;
        }
    }
    ctx->pc = 0x1A0DFCu;
    // 0x1a0dfc: 0x14ca0006  bne         $a2, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0DFCu;
    {
        const bool branch_taken_0x1a0dfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        if (branch_taken_0x1a0dfc) {
            ctx->pc = 0x1A0E18u;
            goto label_1a0e18;
        }
    }
    ctx->pc = 0x1A0E04u;
    // 0x1a0e04: 0x0  nop
    ctx->pc = 0x1a0e04u;
    // NOP
label_1a0e08:
    // 0x1a0e08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0e0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a0e10: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A0E10u;
    {
        const bool branch_taken_0x1a0e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E10u;
        // 0x1a0e14: 0x8c680080  lw          $t0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e10) {
            ctx->pc = 0x1A0EB8u;
            goto label_1a0eb8;
        }
    }
    ctx->pc = 0x1A0E18u;
label_1a0e18:
    // 0x1a0e18: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0E18u;
    {
        const bool branch_taken_0x1a0e18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E18u;
        // 0x1a0e1c: 0x240a0f01  addiu       $t2, $zero, 0xF01 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3841));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e18) {
            ctx->pc = 0x1A0E28u;
            goto label_1a0e28;
        }
    }
    ctx->pc = 0x1A0E20u;
    // 0x1a0e20: 0x10ca0007  beq         $a2, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0E20u;
    {
        const bool branch_taken_0x1a0e20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x1a0e20) {
            ctx->pc = 0x1A0E40u;
            goto label_1a0e40;
        }
    }
    ctx->pc = 0x1A0E28u;
label_1a0e28:
    // 0x1a0e28: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a0e28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0e2c: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0E2Cu;
    {
        const bool branch_taken_0x1a0e2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x1A0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E2Cu;
        // 0x1a0e30: 0x240a0f1d  addiu       $t2, $zero, 0xF1D (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3869));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e2c) {
            ctx->pc = 0x1A0E50u;
            goto label_1a0e50;
        }
    }
    ctx->pc = 0x1A0E34u;
    // 0x1a0e34: 0x14ca0006  bne         $a2, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0E34u;
    {
        const bool branch_taken_0x1a0e34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        if (branch_taken_0x1a0e34) {
            ctx->pc = 0x1A0E50u;
            goto label_1a0e50;
        }
    }
    ctx->pc = 0x1A0E3Cu;
    // 0x1a0e3c: 0x0  nop
    ctx->pc = 0x1a0e3cu;
    // NOP
label_1a0e40:
    // 0x1a0e40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0e44: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a0e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a0e48: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A0E48u;
    {
        const bool branch_taken_0x1a0e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E48u;
        // 0x1a0e4c: 0x8c680100  lw          $t0, 0x100($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e48) {
            ctx->pc = 0x1A0EB8u;
            goto label_1a0eb8;
        }
    }
    ctx->pc = 0x1A0E50u;
label_1a0e50:
    // 0x1a0e50: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0E50u;
    {
        const bool branch_taken_0x1a0e50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E50u;
        // 0x1a0e54: 0x240a0f02  addiu       $t2, $zero, 0xF02 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3842));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e50) {
            ctx->pc = 0x1A0E60u;
            goto label_1a0e60;
        }
    }
    ctx->pc = 0x1A0E58u;
    // 0x1a0e58: 0x10ca0013  beq         $a2, $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A0E58u;
    {
        const bool branch_taken_0x1a0e58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x1a0e58) {
            ctx->pc = 0x1A0EA8u;
            goto label_1a0ea8;
        }
    }
    ctx->pc = 0x1A0E60u;
label_1a0e60:
    // 0x1a0e60: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a0e60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0e64: 0x14ea0004  bne         $a3, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0E64u;
    {
        const bool branch_taken_0x1a0e64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x1A0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E64u;
        // 0x1a0e68: 0x240a0f02  addiu       $t2, $zero, 0xF02 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3842));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e64) {
            ctx->pc = 0x1A0E78u;
            goto label_1a0e78;
        }
    }
    ctx->pc = 0x1A0E6Cu;
    // 0x1a0e6c: 0x10ca000e  beq         $a2, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0E6Cu;
    {
        const bool branch_taken_0x1a0e6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x1a0e6c) {
            ctx->pc = 0x1A0EA8u;
            goto label_1a0ea8;
        }
    }
    ctx->pc = 0x1A0E74u;
    // 0x1a0e74: 0x0  nop
    ctx->pc = 0x1a0e74u;
    // NOP
label_1a0e78:
    // 0x1a0e78: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a0e78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0e7c: 0x14ea0004  bne         $a3, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0E7Cu;
    {
        const bool branch_taken_0x1a0e7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x1A0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E7Cu;
        // 0x1a0e80: 0x240a0f1e  addiu       $t2, $zero, 0xF1E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3870));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e7c) {
            ctx->pc = 0x1A0E90u;
            goto label_1a0e90;
        }
    }
    ctx->pc = 0x1A0E84u;
    // 0x1a0e84: 0x10ca0008  beq         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0E84u;
    {
        const bool branch_taken_0x1a0e84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x1a0e84) {
            ctx->pc = 0x1A0EA8u;
            goto label_1a0ea8;
        }
    }
    ctx->pc = 0x1A0E8Cu;
    // 0x1a0e8c: 0x0  nop
    ctx->pc = 0x1a0e8cu;
    // NOP
label_1a0e90:
    // 0x1a0e90: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1a0e90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a0e94: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0E94u;
    {
        const bool branch_taken_0x1a0e94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x1A0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E94u;
        // 0x1a0e98: 0x240a00b0  addiu       $t2, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e94) {
            ctx->pc = 0x1A0EB8u;
            goto label_1a0eb8;
        }
    }
    ctx->pc = 0x1A0E9Cu;
    // 0x1a0e9c: 0x14ca0006  bne         $a2, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0E9Cu;
    {
        const bool branch_taken_0x1a0e9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        if (branch_taken_0x1a0e9c) {
            ctx->pc = 0x1A0EB8u;
            goto label_1a0eb8;
        }
    }
    ctx->pc = 0x1A0EA4u;
    // 0x1a0ea4: 0x0  nop
    ctx->pc = 0x1a0ea4u;
    // NOP
label_1a0ea8:
    // 0x1a0ea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0eac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a0eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a0eb0: 0x8c680140  lw          $t0, 0x140($v1)
    ctx->pc = 0x1a0eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x1a0eb4: 0x0  nop
    ctx->pc = 0x1a0eb4u;
    // NOP
label_1a0eb8:
    // 0x1a0eb8: 0x15000047  bnez        $t0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1A0EB8u;
    {
        const bool branch_taken_0x1a0eb8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0eb8) {
            ctx->pc = 0x1A0FD8u;
            goto label_1a0fd8;
        }
    }
    ctx->pc = 0x1A0EC0u;
    // 0x1a0ec0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1A0EC0u;
    {
        const bool branch_taken_0x1a0ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ec0) {
            ctx->pc = 0x1A0FF8u;
            goto label_1a0ff8;
        }
    }
    ctx->pc = 0x1A0EC8u;
label_1a0ec8:
    // 0x1a0ec8: 0x146e0039  bne         $v1, $t6, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A0EC8u;
    {
        const bool branch_taken_0x1a0ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        if (branch_taken_0x1a0ec8) {
            ctx->pc = 0x1A0FB0u;
            goto label_1a0fb0;
        }
    }
    ctx->pc = 0x1A0ED0u;
    // 0x1a0ed0: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x1a0ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1a0ed4: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A0ED4u;
    {
        const bool branch_taken_0x1a0ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ed4) {
            ctx->pc = 0x1A0FB0u;
            goto label_1a0fb0;
        }
    }
    ctx->pc = 0x1A0EDCu;
    // 0x1a0edc: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x1a0edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a0ee0: 0x14670033  bne         $v1, $a3, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A0EE0u;
    {
        const bool branch_taken_0x1a0ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1a0ee0) {
            ctx->pc = 0x1A0FB0u;
            goto label_1a0fb0;
        }
    }
    ctx->pc = 0x1A0EE8u;
    // 0x1a0ee8: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x1a0ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x1a0eec: 0x14660030  bne         $v1, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A0EECu;
    {
        const bool branch_taken_0x1a0eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a0eec) {
            ctx->pc = 0x1A0FB0u;
            goto label_1a0fb0;
        }
    }
    ctx->pc = 0x1A0EF4u;
    // 0x1a0ef4: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0EF4u;
    {
        const bool branch_taken_0x1a0ef4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ef4) {
            ctx->pc = 0x1A0F40u;
            goto label_1a0f40;
        }
    }
    ctx->pc = 0x1A0EFCu;
    // 0x1a0efc: 0x14ed0004  bne         $a3, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0EFCu;
    {
        const bool branch_taken_0x1a0efc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        if (branch_taken_0x1a0efc) {
            ctx->pc = 0x1A0F10u;
            goto label_1a0f10;
        }
    }
    ctx->pc = 0x1A0F04u;
    // 0x1a0f04: 0x10cc000e  beq         $a2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1A0F04u;
    {
        const bool branch_taken_0x1a0f04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        if (branch_taken_0x1a0f04) {
            ctx->pc = 0x1A0F40u;
            goto label_1a0f40;
        }
    }
    ctx->pc = 0x1A0F0Cu;
    // 0x1a0f0c: 0x0  nop
    ctx->pc = 0x1a0f0cu;
    // NOP
label_1a0f10:
    // 0x1a0f10: 0x14eb0003  bne         $a3, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0F10u;
    {
        const bool branch_taken_0x1a0f10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x1a0f10) {
            ctx->pc = 0x1A0F20u;
            goto label_1a0f20;
        }
    }
    ctx->pc = 0x1A0F18u;
    // 0x1a0f18: 0x10ca0009  beq         $a2, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0F18u;
    {
        const bool branch_taken_0x1a0f18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x1a0f18) {
            ctx->pc = 0x1A0F40u;
            goto label_1a0f40;
        }
    }
    ctx->pc = 0x1A0F20u;
label_1a0f20:
    // 0x1a0f20: 0x14eb0003  bne         $a3, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0F20u;
    {
        const bool branch_taken_0x1a0f20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x1a0f20) {
            ctx->pc = 0x1A0F30u;
            goto label_1a0f30;
        }
    }
    ctx->pc = 0x1A0F28u;
    // 0x1a0f28: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0F28u;
    {
        const bool branch_taken_0x1a0f28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a0f28) {
            ctx->pc = 0x1A0F40u;
            goto label_1a0f40;
        }
    }
    ctx->pc = 0x1A0F30u;
label_1a0f30:
    // 0x1a0f30: 0x9104000a  lbu         $a0, 0xA($t0)
    ctx->pc = 0x1a0f30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x1a0f34: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x1a0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1a0f38: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A0F38u;
    {
        const bool branch_taken_0x1a0f38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0f38) {
            ctx->pc = 0x1A0FB0u;
            goto label_1a0fb0;
        }
    }
    ctx->pc = 0x1A0F40u;
label_1a0f40:
    // 0x1a0f40: 0x9104000b  lbu         $a0, 0xB($t0)
    ctx->pc = 0x1a0f40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x1a0f44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0f48: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A0F48u;
    {
        const bool branch_taken_0x1a0f48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0f48) {
            ctx->pc = 0x1A0FB0u;
            goto label_1a0fb0;
        }
    }
    ctx->pc = 0x1A0F50u;
    // 0x1a0f50: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1a0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a0f54: 0x25120010  addiu       $s2, $t0, 0x10
    ctx->pc = 0x1a0f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1a0f58: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1a0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0f5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a0f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f60: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a0f64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a0f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a0f68: 0x439818  mult        $s3, $v0, $v1
    ctx->pc = 0x1a0f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x1a0f6c: 0xc049522  jal         func_125488
    ctx->pc = 0x1A0F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A0F74u);
    ctx->pc = 0x1A0F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F6Cu;
    // 0x1a0f70: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A0F6Cu, 0x1A0F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F74u;
label_1a0f74:
    // 0x1a0f74: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1a0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a0f78: 0x2538821  addu        $s1, $s2, $s3
    ctx->pc = 0x1a0f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1a0f7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a0f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f80: 0xc049522  jal         func_125488
    ctx->pc = 0x1A0F80u;
    SET_GPR_U32(ctx, 31, 0x1A0F88u);
    ctx->pc = 0x1A0F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F80u;
    // 0x1a0f84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A0F80u, 0x1A0F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F88u;
label_1a0f88:
    // 0x1a0f88: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1a0f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a0f8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a0f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f90: 0xc049522  jal         func_125488
    ctx->pc = 0x1A0F90u;
    SET_GPR_U32(ctx, 31, 0x1A0F98u);
    ctx->pc = 0x1A0F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F90u;
    // 0x1a0f94: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A0F90u, 0x1A0F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F98u;
label_1a0f98:
    // 0x1a0f98: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a0f9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a0f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fa0: 0xc049522  jal         func_125488
    ctx->pc = 0x1A0FA0u;
    SET_GPR_U32(ctx, 31, 0x1A0FA8u);
    ctx->pc = 0x1A0FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0FA0u;
    // 0x1a0fa4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A0FA0u, 0x1A0FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0FA8u;
label_1a0fa8:
    // 0x1a0fa8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A0FA8u;
    {
        const bool branch_taken_0x1a0fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0fa8) {
            ctx->pc = 0x1A0FF8u;
            goto label_1a0ff8;
        }
    }
    ctx->pc = 0x1A0FB0u;
label_1a0fb0:
    // 0x1a0fb0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1a0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a0fb4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1a0fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a0fb8: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x1a0fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a0fbc: 0x0  nop
    ctx->pc = 0x1a0fbcu;
    // NOP
label_1a0fc0:
    // 0x1a0fc0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x1a0fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a0fc4: 0x1c3082a  slt         $at, $t6, $v1
    ctx->pc = 0x1a0fc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a0fc8: 0x1020ffbf  beqz        $at, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1A0FC8u;
    {
        const bool branch_taken_0x1a0fc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0fc8) {
            ctx->pc = 0x1A0EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0ec8;
        }
    }
    ctx->pc = 0x1A0FD0u;
    // 0x1a0fd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0FD0u;
    {
        const bool branch_taken_0x1a0fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0fd0) {
            ctx->pc = 0x1A0FF8u;
            goto label_1a0ff8;
        }
    }
    ctx->pc = 0x1A0FD8u;
label_1a0fd8:
    // 0x1a0fd8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1a0fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1a0fdc: 0x942e29e8  lhu         $t6, 0x29E8($at)
    ctx->pc = 0x1a0fdcu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)FAST_READ16(0x8129E8u));
    // 0x1a0fe0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1a0fe0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0fe4: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1a0fe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0fe8: 0x24050f1d  addiu       $a1, $zero, 0xF1D
    ctx->pc = 0x1a0fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3869));
    // 0x1a0fec: 0x240a0f1c  addiu       $t2, $zero, 0xF1C
    ctx->pc = 0x1a0fecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3868));
    // 0x1a0ff0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1A0FF0u;
    {
        const bool branch_taken_0x1a0ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FF0u;
        // 0x1a0ff4: 0x240c0f07  addiu       $t4, $zero, 0xF07 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ff0) {
            ctx->pc = 0x1A0FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0fc0;
        }
    }
    ctx->pc = 0x1A0FF8u;
label_1a0ff8:
    // 0x1a0ff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a0ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ffc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a0ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a1000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a100c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A100Cu;
        // 0x1a1010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1014u;
}

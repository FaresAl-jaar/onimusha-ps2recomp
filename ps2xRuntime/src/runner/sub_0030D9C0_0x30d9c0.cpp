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

// Function: sub_0030D9C0
// Address: 0x30d9c0 - 0x30dd20
void sub_0030D9C0_0x30d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D9C0_0x30d9c0");
#endif

    switch (ctx->pc) {
        case 0x30da10u: goto label_30da10;
        case 0x30da98u: goto label_30da98;
        case 0x30dbf0u: goto label_30dbf0;
        case 0x30dc48u: goto label_30dc48;
        case 0x30dca8u: goto label_30dca8;
        case 0x30dcb8u: goto label_30dcb8;
        case 0x30dcc8u: goto label_30dcc8;
        case 0x30dcd8u: goto label_30dcd8;
        case 0x30dcf8u: goto label_30dcf8;
        default: break;
    }

    ctx->pc = 0x30d9c0u;

    // 0x30d9c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30d9c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30d9c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30d9cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30d9d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30d9d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30d9d8: 0x3c14008e  lui         $s4, 0x8E
    ctx->pc = 0x30d9d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)142 << 16));
    // 0x30d9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30d9e0: 0x2694fd88  addiu       $s4, $s4, -0x278
    ctx->pc = 0x30d9e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966664));
    // 0x30d9e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30d9e8: 0x128000c3  beqz        $s4, . + 4 + (0xC3 << 2)
    ctx->pc = 0x30D9E8u;
    {
        const bool branch_taken_0x30d9e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D9E8u;
        // 0x30d9ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d9e8) {
            ctx->pc = 0x30DCF8u;
            goto label_30dcf8;
        }
    }
    ctx->pc = 0x30D9F0u;
    // 0x30d9f0: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x30d9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x30d9f4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x30d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30d9f8: 0x8c26fd84  lw          $a2, -0x27C($at)
    ctx->pc = 0x30d9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8DFD84u));
    // 0x30d9fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30d9fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30da00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da04: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x30DA04u;
    {
        const bool branch_taken_0x30da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA04u;
        // 0x30da08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da04) {
            ctx->pc = 0x30DA78u;
            goto label_30da78;
        }
    }
    ctx->pc = 0x30DA0Cu;
    // 0x30da0c: 0x0  nop
    ctx->pc = 0x30da0cu;
    // NOP
label_30da10:
    // 0x30da10: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x30da10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x30da14: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x30da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30da18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x30da18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30da1c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x30da1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x30da20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30da20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30da24: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30DA24u;
    {
        const bool branch_taken_0x30da24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30da24) {
            ctx->pc = 0x30DA70u;
            goto label_30da70;
        }
    }
    ctx->pc = 0x30DA2Cu;
    // 0x30da2c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x30DA2Cu;
    {
        const bool branch_taken_0x30da2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA2Cu;
        // 0x30da30: 0x90a20003  lbu         $v0, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da2c) {
            ctx->pc = 0x30DA50u;
            goto label_30da50;
        }
    }
    ctx->pc = 0x30DA34u;
    // 0x30da34: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x30da34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30da38: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x30da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x30da3c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x30da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30da40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30da40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30da44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30DA44u;
    {
        const bool branch_taken_0x30da44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA44u;
        // 0x30da48: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da44) {
            ctx->pc = 0x30DA58u;
            goto label_30da58;
        }
    }
    ctx->pc = 0x30DA4Cu;
    // 0x30da4c: 0x0  nop
    ctx->pc = 0x30da4cu;
    // NOP
label_30da50:
    // 0x30da50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30da50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da54: 0x0  nop
    ctx->pc = 0x30da54u;
    // NOP
label_30da58:
    // 0x30da58: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x30da58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30da5c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30DA5Cu;
    {
        const bool branch_taken_0x30da5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x30da5c) {
            ctx->pc = 0x30DA70u;
            goto label_30da70;
        }
    }
    ctx->pc = 0x30DA64u;
    // 0x30da64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30DA64u;
    {
        const bool branch_taken_0x30da64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA64u;
        // 0x30da68: 0x309300ff  andi        $s3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da64) {
            ctx->pc = 0x30DA88u;
            goto label_30da88;
        }
    }
    ctx->pc = 0x30DA6Cu;
    // 0x30da6c: 0x0  nop
    ctx->pc = 0x30da6cu;
    // NOP
label_30da70:
    // 0x30da70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30da70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30da74: 0x0  nop
    ctx->pc = 0x30da74u;
    // NOP
label_30da78:
    // 0x30da78: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x30da78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30da7c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30DA7Cu;
    {
        const bool branch_taken_0x30da7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30da7c) {
            ctx->pc = 0x30DA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30da10;
        }
    }
    ctx->pc = 0x30DA84u;
    // 0x30da84: 0x0  nop
    ctx->pc = 0x30da84u;
    // NOP
label_30da88:
    // 0x30da88: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x30da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x30da8c: 0xaea20600  sw          $v0, 0x600($s5)
    ctx->pc = 0x30da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1536), GPR_U32(ctx, 2));
    // 0x30da90: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x30DA90u;
    {
        const bool branch_taken_0x30da90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA90u;
        // 0x30da94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da90) {
            ctx->pc = 0x30DC30u;
            goto label_30dc30;
        }
    }
    ctx->pc = 0x30DA98u;
label_30da98:
    // 0x30da98: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x30da98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30da9c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x30da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30daa0: 0x8ea30600  lw          $v1, 0x600($s5)
    ctx->pc = 0x30daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1536)));
    // 0x30daa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30daa8: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x30daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x30daac: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x30daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x30dab0: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x30dab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30dab4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x30dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30dab8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30dab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30dabc: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x30dabcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30dac0: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30DAC0u;
    {
        const bool branch_taken_0x30dac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAC0u;
        // 0x30dac4: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dac0) {
            ctx->pc = 0x30DB60u;
            goto label_30db60;
        }
    }
    ctx->pc = 0x30DAC8u;
    // 0x30dac8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30DAC8u;
    {
        const bool branch_taken_0x30dac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dac8) {
            ctx->pc = 0x30DB50u;
            goto label_30db50;
        }
    }
    ctx->pc = 0x30DAD0u;
    // 0x30dad0: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x30dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x30dad4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30DAD4u;
    {
        const bool branch_taken_0x30dad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAD4u;
        // 0x30dad8: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dad4) {
            ctx->pc = 0x30DB50u;
            goto label_30db50;
        }
    }
    ctx->pc = 0x30DADCu;
    // 0x30dadc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DADCu;
    {
        const bool branch_taken_0x30dadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dadc) {
            ctx->pc = 0x30DB50u;
            goto label_30db50;
        }
    }
    ctx->pc = 0x30DAE4u;
    // 0x30dae4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30dae8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30DAE8u;
    {
        const bool branch_taken_0x30dae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAE8u;
        // 0x30daec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dae8) {
            ctx->pc = 0x30DB50u;
            goto label_30db50;
        }
    }
    ctx->pc = 0x30DAF0u;
    // 0x30daf0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30DAF0u;
    {
        const bool branch_taken_0x30daf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30daf0) {
            ctx->pc = 0x30DB48u;
            goto label_30db48;
        }
    }
    ctx->pc = 0x30DAF8u;
    // 0x30daf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30dafc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30DAFCu;
    {
        const bool branch_taken_0x30dafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAFCu;
        // 0x30db00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dafc) {
            ctx->pc = 0x30DB38u;
            goto label_30db38;
        }
    }
    ctx->pc = 0x30DB04u;
    // 0x30db04: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30DB04u;
    {
        const bool branch_taken_0x30db04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30db04) {
            ctx->pc = 0x30DB38u;
            goto label_30db38;
        }
    }
    ctx->pc = 0x30DB0Cu;
    // 0x30db0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30db10: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DB10u;
    {
        const bool branch_taken_0x30db10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30db10) {
            ctx->pc = 0x30DB28u;
            goto label_30db28;
        }
    }
    ctx->pc = 0x30DB18u;
    // 0x30db18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DB18u;
    {
        const bool branch_taken_0x30db18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db18) {
            ctx->pc = 0x30DB28u;
            goto label_30db28;
        }
    }
    ctx->pc = 0x30DB20u;
    // 0x30db20: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30DB20u;
    {
        const bool branch_taken_0x30db20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db20) {
            ctx->pc = 0x30DB68u;
            goto label_30db68;
        }
    }
    ctx->pc = 0x30DB28u;
label_30db28:
    // 0x30db28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30db2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30DB2Cu;
    {
        const bool branch_taken_0x30db2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB2Cu;
        // 0x30db30: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db2c) {
            ctx->pc = 0x30DB68u;
            goto label_30db68;
        }
    }
    ctx->pc = 0x30DB34u;
    // 0x30db34: 0x0  nop
    ctx->pc = 0x30db34u;
    // NOP
label_30db38:
    // 0x30db38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30db3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30DB3Cu;
    {
        const bool branch_taken_0x30db3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB3Cu;
        // 0x30db40: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db3c) {
            ctx->pc = 0x30DB68u;
            goto label_30db68;
        }
    }
    ctx->pc = 0x30DB44u;
    // 0x30db44: 0x0  nop
    ctx->pc = 0x30db44u;
    // NOP
label_30db48:
    // 0x30db48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30DB48u;
    {
        const bool branch_taken_0x30db48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB48u;
        // 0x30db4c: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db48) {
            ctx->pc = 0x30DB68u;
            goto label_30db68;
        }
    }
    ctx->pc = 0x30DB50u;
label_30db50:
    // 0x30db50: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30db54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30DB54u;
    {
        const bool branch_taken_0x30db54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB54u;
        // 0x30db58: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db54) {
            ctx->pc = 0x30DB68u;
            goto label_30db68;
        }
    }
    ctx->pc = 0x30DB5Cu;
    // 0x30db5c: 0x0  nop
    ctx->pc = 0x30db5cu;
    // NOP
label_30db60:
    // 0x30db60: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x30db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30db64: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x30db64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_30db68:
    // 0x30db68: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x30db68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x30db6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30db70: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x30db70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x30db74: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x30db74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x30db78: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x30db78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x30db7c: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x30db7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30db80: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x30db80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x30db84: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x30db84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x30db88: 0xa2000023  sb          $zero, 0x23($s0)
    ctx->pc = 0x30db88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x30db8c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x30db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x30db90: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x30db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x30db94: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x30db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x30db98: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30db98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30db9c: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x30DB9Cu;
    {
        const bool branch_taken_0x30db9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DB9Cu;
        // 0x30dba0: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db9c) {
            ctx->pc = 0x30DBD8u;
            goto label_30dbd8;
        }
    }
    ctx->pc = 0x30DBA4u;
    // 0x30dba4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x30dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30dba8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x30dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30dbac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30dbb0: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x30dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x30dbb4: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x30dbb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30dbb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DBB8u;
    {
        const bool branch_taken_0x30dbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dbb8) {
            ctx->pc = 0x30DBD8u;
            goto label_30dbd8;
        }
    }
    ctx->pc = 0x30DBC0u;
    // 0x30dbc0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30dbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30dbc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30dbc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30dbc8: 0x0  nop
    ctx->pc = 0x30dbc8u;
    // NOP
    // 0x30dbcc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x30dbccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30dbd0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x30DBD0u;
    {
        const bool branch_taken_0x30dbd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30dbd0) {
            ctx->pc = 0x30DC28u;
            goto label_30dc28;
        }
    }
    ctx->pc = 0x30DBD8u;
label_30dbd8:
    // 0x30dbd8: 0x92220172  lbu         $v0, 0x172($s1)
    ctx->pc = 0x30dbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 370)));
    // 0x30dbdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30dbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30dbe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DBE0u;
    {
        const bool branch_taken_0x30dbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBE0u;
        // 0x30dbe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbe0) {
            ctx->pc = 0x30DBF0u;
            goto label_30dbf0;
        }
    }
    ctx->pc = 0x30DBE8u;
    // 0x30dbe8: 0xc0a7044  jal         func_29C110
    ctx->pc = 0x30DBE8u;
    SET_GPR_U32(ctx, 31, 0x30DBF0u);
    ctx->pc = 0x30DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DBE8u;
    // 0x30dbec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C110u, 0x30DBE8u, 0x30DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DBF0u;
label_30dbf0:
    // 0x30dbf0: 0x26240180  addiu       $a0, $s1, 0x180
    ctx->pc = 0x30dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x30dbf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30dbf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dbf8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x30dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30dbfc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x30dbfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30dc00: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30dc00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30dc04: 0x92220172  lbu         $v0, 0x172($s1)
    ctx->pc = 0x30dc04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 370)));
    // 0x30dc08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30dc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30dc0c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30dc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x30dc10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DC10u;
    {
        const bool branch_taken_0x30dc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dc10) {
            ctx->pc = 0x30DC20u;
            goto label_30dc20;
        }
    }
    ctx->pc = 0x30DC18u;
    // 0x30dc18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30DC18u;
    {
        const bool branch_taken_0x30dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC18u;
        // 0x30dc1c: 0xa2000034  sb          $zero, 0x34($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc18) {
            ctx->pc = 0x30DC28u;
            goto label_30dc28;
        }
    }
    ctx->pc = 0x30DC20u;
label_30dc20:
    // 0x30dc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dc24: 0xa2020034  sb          $v0, 0x34($s0)
    ctx->pc = 0x30dc24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
label_30dc28:
    // 0x30dc28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30dc28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30dc2c: 0x0  nop
    ctx->pc = 0x30dc2cu;
    // NOP
label_30dc30:
    // 0x30dc30: 0x8ea20604  lw          $v0, 0x604($s5)
    ctx->pc = 0x30dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1540)));
    // 0x30dc34: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x30dc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30dc38: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x30DC38u;
    {
        const bool branch_taken_0x30dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC38u;
        // 0x30dc3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc38) {
            ctx->pc = 0x30DA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30da98;
        }
    }
    ctx->pc = 0x30DC40u;
    // 0x30dc40: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x30DC40u;
    {
        const bool branch_taken_0x30dc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dc40) {
            ctx->pc = 0x30DCE0u;
            goto label_30dce0;
        }
    }
    ctx->pc = 0x30DC48u;
label_30dc48:
    // 0x30dc48: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x30dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x30dc4c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x30dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30dc50: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x30dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30dc54: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x30dc54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x30dc58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30dc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30dc5c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30DC5Cu;
    {
        const bool branch_taken_0x30dc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dc5c) {
            ctx->pc = 0x30DCD8u;
            goto label_30dcd8;
        }
    }
    ctx->pc = 0x30DC64u;
    // 0x30dc64: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x30dc64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30dc68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30dc6c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x30dc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x30dc70: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30DC70u;
    {
        const bool branch_taken_0x30dc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC70u;
        // 0x30dc74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc70) {
            ctx->pc = 0x30DCD0u;
            goto label_30dcd0;
        }
    }
    ctx->pc = 0x30DC78u;
    // 0x30dc78: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30DC78u;
    {
        const bool branch_taken_0x30dc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dc78) {
            ctx->pc = 0x30DCC0u;
            goto label_30dcc0;
        }
    }
    ctx->pc = 0x30DC80u;
    // 0x30dc80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30dc84: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30DC84u;
    {
        const bool branch_taken_0x30dc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC84u;
        // 0x30dc88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc84) {
            ctx->pc = 0x30DCB0u;
            goto label_30dcb0;
        }
    }
    ctx->pc = 0x30DC8Cu;
    // 0x30dc8c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30DC8Cu;
    {
        const bool branch_taken_0x30dc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dc8c) {
            ctx->pc = 0x30DCA0u;
            goto label_30dca0;
        }
    }
    ctx->pc = 0x30DC94u;
    // 0x30dc94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30DC94u;
    {
        const bool branch_taken_0x30dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dc94) {
            ctx->pc = 0x30DCD8u;
            goto label_30dcd8;
        }
    }
    ctx->pc = 0x30DC9Cu;
    // 0x30dc9c: 0x0  nop
    ctx->pc = 0x30dc9cu;
    // NOP
label_30dca0:
    // 0x30dca0: 0xc0c37d0  jal         func_30DF40
    ctx->pc = 0x30DCA0u;
    SET_GPR_U32(ctx, 31, 0x30DCA8u);
    ctx->pc = 0x30DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DCA0u;
    // 0x30dca4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DF40u, 0x30DCA0u, 0x30DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DCA8u;
label_30dca8:
    // 0x30dca8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30DCA8u;
    {
        const bool branch_taken_0x30dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dca8) {
            ctx->pc = 0x30DCD8u;
            goto label_30dcd8;
        }
    }
    ctx->pc = 0x30DCB0u;
label_30dcb0:
    // 0x30dcb0: 0xc0c3998  jal         func_30E660
    ctx->pc = 0x30DCB0u;
    SET_GPR_U32(ctx, 31, 0x30DCB8u);
    ctx->pc = 0x30DCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DCB0u;
    // 0x30dcb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E660u, 0x30DCB0u, 0x30DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DCB8u;
label_30dcb8:
    // 0x30dcb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30DCB8u;
    {
        const bool branch_taken_0x30dcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dcb8) {
            ctx->pc = 0x30DCD8u;
            goto label_30dcd8;
        }
    }
    ctx->pc = 0x30DCC0u;
label_30dcc0:
    // 0x30dcc0: 0xc0c3bc8  jal         func_30EF20
    ctx->pc = 0x30DCC0u;
    SET_GPR_U32(ctx, 31, 0x30DCC8u);
    ctx->pc = 0x30DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DCC0u;
    // 0x30dcc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EF20u, 0x30DCC0u, 0x30DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DCC8u;
label_30dcc8:
    // 0x30dcc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30DCC8u;
    {
        const bool branch_taken_0x30dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dcc8) {
            ctx->pc = 0x30DCD8u;
            goto label_30dcd8;
        }
    }
    ctx->pc = 0x30DCD0u;
label_30dcd0:
    // 0x30dcd0: 0xc0c3e84  jal         func_30FA10
    ctx->pc = 0x30DCD0u;
    SET_GPR_U32(ctx, 31, 0x30DCD8u);
    ctx->pc = 0x30DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DCD0u;
    // 0x30dcd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA10u, 0x30DCD0u, 0x30DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DCD8u;
label_30dcd8:
    // 0x30dcd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30dcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30dcdc: 0x0  nop
    ctx->pc = 0x30dcdcu;
    // NOP
label_30dce0:
    // 0x30dce0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x30dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30dce4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x30dce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30dce8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x30DCE8u;
    {
        const bool branch_taken_0x30dce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DCE8u;
        // 0x30dcec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dce8) {
            ctx->pc = 0x30DC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dc48;
        }
    }
    ctx->pc = 0x30DCF0u;
    // 0x30dcf0: 0xc0c3748  jal         func_30DD20
    ctx->pc = 0x30DCF0u;
    SET_GPR_U32(ctx, 31, 0x30DCF8u);
    ctx->pc = 0x30DD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DD20u, 0x30DCF0u, 0x30DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DCF8u;
label_30dcf8:
    // 0x30dcf8: 0xaea00604  sw          $zero, 0x604($s5)
    ctx->pc = 0x30dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1540), GPR_U32(ctx, 0));
    // 0x30dcfc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30dcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30dd00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30dd00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30dd04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30dd04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30dd08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30dd08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30dd0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30dd0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dd10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30dd10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dd14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30dd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dd18: 0x3e00008  jr          $ra
    ctx->pc = 0x30DD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD18u;
        // 0x30dd1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DD20u;
}

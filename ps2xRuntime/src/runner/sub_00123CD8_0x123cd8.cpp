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

// Function: sub_00123CD8
// Address: 0x123cd8 - 0x123de8
void sub_00123CD8_0x123cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123CD8_0x123cd8");
#endif

    switch (ctx->pc) {
        case 0x123d40u: goto label_123d40;
        case 0x123d50u: goto label_123d50;
        case 0x123d68u: goto label_123d68;
        case 0x123d90u: goto label_123d90;
        case 0x123dacu: goto label_123dac;
        default: break;
    }

    ctx->pc = 0x123cd8u;

    // 0x123cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x123cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x123cdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ce0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123ce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123ce8: 0xc59018  mult        $s2, $a2, $a1
    ctx->pc = 0x123ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x123cec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x123cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x123cf0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x123cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x123cf4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x123cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123cf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123cfc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x123cfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123d04: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x123d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x123d08: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x123d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x123d0c: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x123D0Cu;
    {
        const bool branch_taken_0x123d0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D0Cu;
        // 0x123d10: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d0c) {
            ctx->pc = 0x123DACu;
            goto label_123dac;
        }
    }
    ctx->pc = 0x123D14u;
    // 0x123d14: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x123d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x123d18: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x123D18u;
    {
        const bool branch_taken_0x123d18 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x123D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D18u;
        // 0x123d1c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d18) {
            ctx->pc = 0x123D2Cu;
            goto label_123d2c;
        }
    }
    ctx->pc = 0x123D20u;
    // 0x123d20: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x123d20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x123d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d28: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x123d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_123d2c:
    // 0x123d2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x123d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d30: 0xd2782b  sltu        $t7, $a2, $s2
    ctx->pc = 0x123d30u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x123d34: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x123D34u;
    {
        const bool branch_taken_0x123d34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D34u;
        // 0x123d38: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d34) {
            ctx->pc = 0x123D80u;
            goto label_123d80;
        }
    }
    ctx->pc = 0x123D3Cu;
    // 0x123d3c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x123d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_123d40:
    // 0x123d40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x123d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x123d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d48: 0xc049522  jal         func_125488
    ctx->pc = 0x123D48u;
    SET_GPR_U32(ctx, 31, 0x123D50u);
    ctx->pc = 0x123D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D48u;
    // 0x123d4c: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x123D48u, 0x123D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D50u;
label_123d50:
    // 0x123d50: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x123d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x123d54: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x123d54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d5c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x123d5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x123d60: 0xc049b8a  jal         func_126E28
    ctx->pc = 0x123D60u;
    SET_GPR_U32(ctx, 31, 0x123D68u);
    ctx->pc = 0x123D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D60u;
    // 0x123d64: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E28u, 0x123D60u, 0x123D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D68u;
label_123d68:
    // 0x123d68: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x123D68u;
    {
        const bool branch_taken_0x123d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D68u;
        // 0x123d6c: 0x2d27823  subu        $t7, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d68) {
            ctx->pc = 0x123DD4u;
            goto label_123dd4;
        }
    }
    ctx->pc = 0x123D70u;
    // 0x123d70: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x123d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x123d74: 0x212782b  sltu        $t7, $s0, $s2
    ctx->pc = 0x123d74u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x123d78: 0x55e0fff1  bnel        $t7, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x123D78u;
    {
        const bool branch_taken_0x123d78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x123d78) {
            ctx->pc = 0x123D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123D78u;
            // 0x123d7c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123d40;
        }
    }
    ctx->pc = 0x123D80u;
label_123d80:
    // 0x123d80: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x123d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123d84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x123d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d88: 0xc049522  jal         func_125488
    ctx->pc = 0x123D88u;
    SET_GPR_U32(ctx, 31, 0x123D90u);
    ctx->pc = 0x123D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D88u;
    // 0x123d8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x123D88u, 0x123D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D90u;
label_123d90:
    // 0x123d90: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x123d90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x123d94: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x123d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d98: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x123d98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123d9c: 0x1d27023  subu        $t6, $t6, $s2
    ctx->pc = 0x123d9cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x123da0: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x123da0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x123da4: 0xae2e0004  sw          $t6, 0x4($s1)
    ctx->pc = 0x123da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
    // 0x123da8: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x123da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_123dac:
    // 0x123dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123db0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123db4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123db4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123db8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123db8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123dbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x123dbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123dc0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x123dc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x123dc4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x123dc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123dc8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x123dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x123dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x123DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DCCu;
        // 0x123dd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123DD4u;
label_123dd4:
    // 0x123dd4: 0x1f4001b  divu        $zero, $t7, $s4
    ctx->pc = 0x123dd4u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x123dd8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x123DD8u;
    {
        const bool branch_taken_0x123dd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x123dd8) {
            ctx->pc = 0x123DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123DD8u;
            // 0x123ddc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x123DE0u;
            goto label_123de0;
        }
    }
    ctx->pc = 0x123DE0u;
label_123de0:
    // 0x123de0: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x123DE0u;
    {
        const bool branch_taken_0x123de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DE0u;
        // 0x123de4: 0x1012  mflo        $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->lo);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123de0) {
            ctx->pc = 0x123DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123dac;
        }
    }
    ctx->pc = 0x123DE8u;
}

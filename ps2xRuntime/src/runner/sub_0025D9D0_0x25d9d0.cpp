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

// Function: sub_0025D9D0
// Address: 0x25d9d0 - 0x25daa4
void sub_0025D9D0_0x25d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D9D0_0x25d9d0");
#endif

    switch (ctx->pc) {
        case 0x25da04u: goto label_25da04;
        case 0x25da14u: goto label_25da14;
        case 0x25da28u: goto label_25da28;
        default: break;
    }

    ctx->pc = 0x25d9d0u;

    // 0x25d9d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25d9d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25d9d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25d9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25d9e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25d9e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d9e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25d9e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d9f0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25d9f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25d9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25d9f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d9fc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25D9FCu;
    SET_GPR_U32(ctx, 31, 0x25DA04u);
    ctx->pc = 0x25DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D9FCu;
    // 0x25da00: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25D9FCu, 0x25DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA04u;
label_25da04:
    // 0x25da04: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25da04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25da08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25da08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da0c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25DA0Cu;
    SET_GPR_U32(ctx, 31, 0x25DA14u);
    ctx->pc = 0x25DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA0Cu;
    // 0x25da10: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25DA0Cu, 0x25DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA14u;
label_25da14:
    // 0x25da14: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25da14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25da18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25da18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da1c: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x25da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x25da20: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25DA20u;
    SET_GPR_U32(ctx, 31, 0x25DA28u);
    ctx->pc = 0x25DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA20u;
    // 0x25da24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25DA20u, 0x25DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA28u;
label_25da28:
    // 0x25da28: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25DA28u;
    {
        const bool branch_taken_0x25da28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da28) {
            ctx->pc = 0x25DA88u;
            goto label_25da88;
        }
    }
    ctx->pc = 0x25DA30u;
    // 0x25da30: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x25da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x25da34: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25da34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25da38: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25DA38u;
    {
        const bool branch_taken_0x25da38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da38) {
            ctx->pc = 0x25DA88u;
            goto label_25da88;
        }
    }
    ctx->pc = 0x25DA40u;
    // 0x25da40: 0x960529de  lhu         $a1, 0x29DE($s0)
    ctx->pc = 0x25da40u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x25da44: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x25da44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x25da48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25da48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25da4c: 0x833004  sllv        $a2, $v1, $a0
    ctx->pc = 0x25da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x25da50: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x25da50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x25da54: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25DA54u;
    {
        const bool branch_taken_0x25da54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA54u;
        // 0x25da58: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da54) {
            ctx->pc = 0x25DA88u;
            goto label_25da88;
        }
    }
    ctx->pc = 0x25DA5Cu;
    // 0x25da5c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x25da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25da60: 0x8c832a04  lw          $v1, 0x2A04($a0)
    ctx->pc = 0x25da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10756)));
    // 0x25da64: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25DA64u;
    {
        const bool branch_taken_0x25da64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x25da64) {
            ctx->pc = 0x25DA88u;
            goto label_25da88;
        }
    }
    ctx->pc = 0x25DA6Cu;
    // 0x25da6c: 0x8c832a44  lw          $v1, 0x2A44($a0)
    ctx->pc = 0x25da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10820)));
    // 0x25da70: 0x16430005  bne         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DA70u;
    {
        const bool branch_taken_0x25da70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x25DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA70u;
        // 0x25da74: 0xc01827  not         $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da70) {
            ctx->pc = 0x25DA88u;
            goto label_25da88;
        }
    }
    ctx->pc = 0x25DA78u;
    // 0x25da78: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25da78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25da7c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x25da7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x25da80: 0xa60329de  sh          $v1, 0x29DE($s0)
    ctx->pc = 0x25da80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x25da84: 0x0  nop
    ctx->pc = 0x25da84u;
    // NOP
label_25da88:
    // 0x25da88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25da88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25da8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25da8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25da90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25da90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25da94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25da94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25da98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25da98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25da9c: 0x3e00008  jr          $ra
    ctx->pc = 0x25DA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA9Cu;
        // 0x25daa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DAA4u;
}

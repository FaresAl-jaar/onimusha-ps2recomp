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

// Function: sub_0026DF30
// Address: 0x26df30 - 0x26e048
void sub_0026DF30_0x26df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DF30_0x26df30");
#endif

    switch (ctx->pc) {
        case 0x26df98u: goto label_26df98;
        case 0x26e000u: goto label_26e000;
        default: break;
    }

    ctx->pc = 0x26df30u;

    // 0x26df30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26df34: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x26df34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x26df38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26df3c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x26df3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x26df40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26df44: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x26df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x26df48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26df4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26df4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26df54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26df54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df58: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x26df58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x26df5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26df5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26df60: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26DF60u;
    {
        const bool branch_taken_0x26df60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF60u;
        // 0x26df64: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df60) {
            ctx->pc = 0x26DFC0u;
            goto label_26dfc0;
        }
    }
    ctx->pc = 0x26DF68u;
    // 0x26df68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26df6c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26df70: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26df70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26df74: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26df78: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26df78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26df7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26df7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26df80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26df84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26df88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26df8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df90: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26DF90u;
    SET_GPR_U32(ctx, 31, 0x26DF98u);
    ctx->pc = 0x26DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF90u;
    // 0x26df94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26DF90u, 0x26DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF98u;
label_26df98:
    // 0x26df98: 0xa25100a4  sb          $s1, 0xA4($s2)
    ctx->pc = 0x26df98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 164), (uint8_t)GPR_U32(ctx, 17));
    // 0x26df9c: 0x3c028090  lui         $v0, 0x8090
    ctx->pc = 0x26df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32912 << 16));
    // 0x26dfa0: 0x34429090  ori         $v0, $v0, 0x9090
    ctx->pc = 0x26dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37008);
    // 0x26dfa4: 0xa24000a9  sb          $zero, 0xA9($s2)
    ctx->pc = 0x26dfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x26dfa8: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x26dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x26dfac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26dfb0: 0xa24200a0  sb          $v0, 0xA0($s2)
    ctx->pc = 0x26dfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x26dfb4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26DFB4u;
    {
        const bool branch_taken_0x26dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFB4u;
        // 0x26dfb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfb4) {
            ctx->pc = 0x26E030u;
            goto label_26e030;
        }
    }
    ctx->pc = 0x26DFBCu;
    // 0x26dfbc: 0x0  nop
    ctx->pc = 0x26dfbcu;
    // NOP
label_26dfc0:
    // 0x26dfc0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26dfc4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x26dfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x26dfc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26dfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26dfcc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26DFCCu;
    {
        const bool branch_taken_0x26dfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFCCu;
        // 0x26dfd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfcc) {
            ctx->pc = 0x26E028u;
            goto label_26e028;
        }
    }
    ctx->pc = 0x26DFD4u;
    // 0x26dfd4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26dfd8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26dfdc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26dfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26dfe0: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x26dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x26dfe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26dfe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfe8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26dfe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26dfecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dff0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26dff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dff4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26dff4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dff8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26DFF8u;
    SET_GPR_U32(ctx, 31, 0x26E000u);
    ctx->pc = 0x26DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DFF8u;
    // 0x26dffc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26DFF8u, 0x26E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E000u;
label_26e000:
    // 0x26e000: 0xa25000a4  sb          $s0, 0xA4($s2)
    ctx->pc = 0x26e000u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 164), (uint8_t)GPR_U32(ctx, 16));
    // 0x26e004: 0x3c028090  lui         $v0, 0x8090
    ctx->pc = 0x26e004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32912 << 16));
    // 0x26e008: 0x34429090  ori         $v0, $v0, 0x9090
    ctx->pc = 0x26e008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37008);
    // 0x26e00c: 0xa24000a9  sb          $zero, 0xA9($s2)
    ctx->pc = 0x26e00cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e010: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x26e010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    // 0x26e014: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x26e014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26e018: 0xa24200a0  sb          $v0, 0xA0($s2)
    ctx->pc = 0x26e018u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e01c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26E01Cu;
    {
        const bool branch_taken_0x26e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E01Cu;
        // 0x26e020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e01c) {
            ctx->pc = 0x26E030u;
            goto label_26e030;
        }
    }
    ctx->pc = 0x26E024u;
    // 0x26e024: 0x0  nop
    ctx->pc = 0x26e024u;
    // NOP
label_26e028:
    // 0x26e028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26e028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e02c: 0x0  nop
    ctx->pc = 0x26e02cu;
    // NOP
label_26e030:
    // 0x26e030: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26e030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e034: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26e034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26e038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e03c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e040: 0x3e00008  jr          $ra
    ctx->pc = 0x26E040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E040u;
        // 0x26e044: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E048u;
}

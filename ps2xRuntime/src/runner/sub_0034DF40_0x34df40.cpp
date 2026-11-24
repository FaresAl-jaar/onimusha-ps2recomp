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

// Function: sub_0034DF40
// Address: 0x34df40 - 0x34dfe0
void sub_0034DF40_0x34df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DF40_0x34df40");
#endif

    switch (ctx->pc) {
        case 0x34dfa0u: goto label_34dfa0;
        default: break;
    }

    ctx->pc = 0x34df40u;

    // 0x34df40: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x34DF40u;
    {
        const bool branch_taken_0x34df40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DF40u;
        // 0x34df44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34df40) {
            ctx->pc = 0x34DF78u;
            goto label_34df78;
        }
    }
    ctx->pc = 0x34DF48u;
    // 0x34df48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34df48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34df4c: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x34df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
    // 0x34df50: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x34df50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
    // 0x34df54: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x34df54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34df58: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x34df58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34df5c: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x34df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x34df60: 0x0  nop
    ctx->pc = 0x34df60u;
    // NOP
    // 0x34df64: 0x1010  mfhi        $v0
    ctx->pc = 0x34df64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x34df68: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x34df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x34df6c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x34df6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x34df70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34df74: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x34df74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34df78:
    // 0x34df78: 0x90830024  lbu         $v1, 0x24($a0)
    ctx->pc = 0x34df78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x34df7c: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x34df7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34df80: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x34DF80u;
    {
        const bool branch_taken_0x34df80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34df80) {
            ctx->pc = 0x34DFD0u;
            goto label_34dfd0;
        }
    }
    ctx->pc = 0x34DF88u;
    // 0x34df88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x34df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34df8c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x34df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x34df90: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x34df90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34df94: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x34df94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34df98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34df98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34df9c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x34df9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_34dfa0:
    // 0x34dfa0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x34dfa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34dfa4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DFA4u;
    {
        const bool branch_taken_0x34dfa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x34DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFA4u;
        // 0x34dfa8: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfa4) {
            ctx->pc = 0x34DFC0u;
            goto label_34dfc0;
        }
    }
    ctx->pc = 0x34DFACu;
    // 0x34dfac: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x34dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34dfb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34dfb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34DFB4u;
    {
        const bool branch_taken_0x34dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFB4u;
        // 0x34dfb8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfb4) {
            ctx->pc = 0x34DFD8u;
            goto label_34dfd8;
        }
    }
    ctx->pc = 0x34DFBCu;
    // 0x34dfbc: 0x0  nop
    ctx->pc = 0x34dfbcu;
    // NOP
label_34dfc0:
    // 0x34dfc0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34dfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34dfc4: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x34dfc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34dfc8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x34DFC8u;
    {
        const bool branch_taken_0x34dfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFC8u;
        // 0x34dfcc: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfc8) {
            ctx->pc = 0x34DFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34dfa0;
        }
    }
    ctx->pc = 0x34DFD0u;
label_34dfd0:
    // 0x34dfd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34dfd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dfd4: 0x0  nop
    ctx->pc = 0x34dfd4u;
    // NOP
label_34dfd8:
    // 0x34dfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x34DFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DFE0u;
}

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

// Function: sub_0034DFE0
// Address: 0x34dfe0 - 0x34e060
void sub_0034DFE0_0x34dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DFE0_0x34dfe0");
#endif

    switch (ctx->pc) {
        case 0x34e028u: goto label_34e028;
        default: break;
    }

    ctx->pc = 0x34dfe0u;

    // 0x34dfe0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x34DFE0u;
    {
        const bool branch_taken_0x34dfe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFE0u;
        // 0x34dfe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfe0) {
            ctx->pc = 0x34E008u;
            goto label_34e008;
        }
    }
    ctx->pc = 0x34DFE8u;
    // 0x34dfe8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x34dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34dfec: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x34dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34dff0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34DFF0u;
    {
        const bool branch_taken_0x34dff0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x34DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DFF0u;
        // 0x34dff4: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dff0) {
            ctx->pc = 0x34E000u;
            goto label_34e000;
        }
    }
    ctx->pc = 0x34DFF8u;
    // 0x34dff8: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x34dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x34dffc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x34dffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_34e000:
    // 0x34e000: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x34e000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34e004: 0x0  nop
    ctx->pc = 0x34e004u;
    // NOP
label_34e008:
    // 0x34e008: 0x90830025  lbu         $v1, 0x25($a0)
    ctx->pc = 0x34e008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x34e00c: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x34e00cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34e010: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x34E010u;
    {
        const bool branch_taken_0x34e010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e010) {
            ctx->pc = 0x34E050u;
            goto label_34e050;
        }
    }
    ctx->pc = 0x34E018u;
    // 0x34e018: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x34e018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34e01c: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x34e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x34e020: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x34e020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34e024: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x34e024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_34e028:
    // 0x34e028: 0x90c20010  lbu         $v0, 0x10($a2)
    ctx->pc = 0x34e028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x34e02c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E02Cu;
    {
        const bool branch_taken_0x34e02c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x34E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E02Cu;
        // 0x34e030: 0x71140  sll         $v0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e02c) {
            ctx->pc = 0x34E040u;
            goto label_34e040;
        }
    }
    ctx->pc = 0x34E034u;
    // 0x34e034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E034u;
    {
        const bool branch_taken_0x34e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E034u;
        // 0x34e038: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e034) {
            ctx->pc = 0x34E058u;
            goto label_34e058;
        }
    }
    ctx->pc = 0x34E03Cu;
    // 0x34e03c: 0x0  nop
    ctx->pc = 0x34e03cu;
    // NOP
label_34e040:
    // 0x34e040: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34e040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34e044: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x34e044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34e048: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34E048u;
    {
        const bool branch_taken_0x34e048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E048u;
        // 0x34e04c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e048) {
            ctx->pc = 0x34E028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e028;
        }
    }
    ctx->pc = 0x34E050u;
label_34e050:
    // 0x34e050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34e050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e054: 0x0  nop
    ctx->pc = 0x34e054u;
    // NOP
label_34e058:
    // 0x34e058: 0x3e00008  jr          $ra
    ctx->pc = 0x34E058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E060u;
}

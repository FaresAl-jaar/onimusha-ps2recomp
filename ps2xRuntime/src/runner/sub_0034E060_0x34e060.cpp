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

// Function: sub_0034E060
// Address: 0x34e060 - 0x34e0e0
void sub_0034E060_0x34e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E060_0x34e060");
#endif

    switch (ctx->pc) {
        case 0x34e0a8u: goto label_34e0a8;
        default: break;
    }

    ctx->pc = 0x34e060u;

    // 0x34e060: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E060u;
    {
        const bool branch_taken_0x34e060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E060u;
        // 0x34e064: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e060) {
            ctx->pc = 0x34E088u;
            goto label_34e088;
        }
    }
    ctx->pc = 0x34E068u;
    // 0x34e068: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x34e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34e06c: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x34e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34e070: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E070u;
    {
        const bool branch_taken_0x34e070 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x34E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E070u;
        // 0x34e074: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e070) {
            ctx->pc = 0x34E080u;
            goto label_34e080;
        }
    }
    ctx->pc = 0x34E078u;
    // 0x34e078: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x34e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x34e07c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x34e07cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_34e080:
    // 0x34e080: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x34e080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34e084: 0x0  nop
    ctx->pc = 0x34e084u;
    // NOP
label_34e088:
    // 0x34e088: 0x90830026  lbu         $v1, 0x26($a0)
    ctx->pc = 0x34e088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x34e08c: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x34e08cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34e090: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x34E090u;
    {
        const bool branch_taken_0x34e090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e090) {
            ctx->pc = 0x34E0D0u;
            goto label_34e0d0;
        }
    }
    ctx->pc = 0x34E098u;
    // 0x34e098: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x34e098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34e09c: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x34e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x34e0a0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x34e0a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34e0a4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x34e0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_34e0a8:
    // 0x34e0a8: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x34e0a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x34e0ac: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E0ACu;
    {
        const bool branch_taken_0x34e0ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x34E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E0ACu;
        // 0x34e0b0: 0x71140  sll         $v0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0ac) {
            ctx->pc = 0x34E0C0u;
            goto label_34e0c0;
        }
    }
    ctx->pc = 0x34E0B4u;
    // 0x34e0b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E0B4u;
    {
        const bool branch_taken_0x34e0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E0B4u;
        // 0x34e0b8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0b4) {
            ctx->pc = 0x34E0D8u;
            goto label_34e0d8;
        }
    }
    ctx->pc = 0x34E0BCu;
    // 0x34e0bc: 0x0  nop
    ctx->pc = 0x34e0bcu;
    // NOP
label_34e0c0:
    // 0x34e0c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34e0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34e0c4: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x34e0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34e0c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34E0C8u;
    {
        const bool branch_taken_0x34e0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E0C8u;
        // 0x34e0cc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e0c8) {
            ctx->pc = 0x34E0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e0a8;
        }
    }
    ctx->pc = 0x34E0D0u;
label_34e0d0:
    // 0x34e0d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34e0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e0d4: 0x0  nop
    ctx->pc = 0x34e0d4u;
    // NOP
label_34e0d8:
    // 0x34e0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x34E0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E0E0u;
}

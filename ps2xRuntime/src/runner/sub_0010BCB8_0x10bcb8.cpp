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

// Function: sub_0010BCB8
// Address: 0x10bcb8 - 0x10bd0c
void sub_0010BCB8_0x10bcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BCB8_0x10bcb8");
#endif

    ctx->pc = 0x10bcb8u;

    // 0x10bcb8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10bcbc: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x10bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x10bcc0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BCC0u;
    {
        const bool branch_taken_0x10bcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bcc0) {
            ctx->pc = 0x10BCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BCC0u;
            // 0x10bcc4: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BCC8u;
            goto label_10bcc8;
        }
    }
    ctx->pc = 0x10BCC8u;
label_10bcc8:
    // 0x10bcc8: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x10bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x10bccc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BCCCu;
    {
        const bool branch_taken_0x10bccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bccc) {
            ctx->pc = 0x10BCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BCCCu;
            // 0x10bcd0: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BCD4u;
            goto label_10bcd4;
        }
    }
    ctx->pc = 0x10BCD4u;
label_10bcd4:
    // 0x10bcd4: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x10bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x10bcd8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BCD8u;
    {
        const bool branch_taken_0x10bcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bcd8) {
            ctx->pc = 0x10BCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BCD8u;
            // 0x10bcdc: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BCE0u;
            goto label_10bce0;
        }
    }
    ctx->pc = 0x10BCE0u;
label_10bce0:
    // 0x10bce0: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x10bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
    // 0x10bce4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BCE4u;
    {
        const bool branch_taken_0x10bce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bce4) {
            ctx->pc = 0x10BCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BCE4u;
            // 0x10bce8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BCECu;
            goto label_10bcec;
        }
    }
    ctx->pc = 0x10BCECu;
label_10bcec:
    // 0x10bcec: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x10bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x10bcf0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BCF0u;
    {
        const bool branch_taken_0x10bcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bcf0) {
            ctx->pc = 0x10BCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BCF0u;
            // 0x10bcf4: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BCF8u;
            goto label_10bcf8;
        }
    }
    ctx->pc = 0x10BCF8u;
label_10bcf8:
    // 0x10bcf8: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x10bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x10bcfc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BCFCu;
    {
        const bool branch_taken_0x10bcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bcfc) {
            ctx->pc = 0x10BD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BCFCu;
            // 0x10bd00: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BD04u;
            goto label_10bd04;
        }
    }
    ctx->pc = 0x10BD04u;
label_10bd04:
    // 0x10bd04: 0x3e00008  jr          $ra
    ctx->pc = 0x10BD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD04u;
        // 0x10bd08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BD0Cu;
}

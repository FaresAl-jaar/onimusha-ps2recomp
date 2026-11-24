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

// Function: sub_00111BE8
// Address: 0x111be8 - 0x111c34
void sub_00111BE8_0x111be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111BE8_0x111be8");
#endif

    switch (ctx->pc) {
        case 0x111bf8u: goto label_111bf8;
        case 0x111c08u: goto label_111c08;
        default: break;
    }

    ctx->pc = 0x111be8u;

    // 0x111be8: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x111be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x111bec: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x111BECu;
    {
        const bool branch_taken_0x111bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x111bec) {
            ctx->pc = 0x111C2Cu;
            goto label_111c2c;
        }
    }
    ctx->pc = 0x111BF4u;
    // 0x111bf4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x111bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_111bf8:
    // 0x111bf8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x111BF8u;
    {
        const bool branch_taken_0x111bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111bf8) {
            ctx->pc = 0x111BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111BF8u;
            // 0x111bfc: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111C24u;
            goto label_111c24;
        }
    }
    ctx->pc = 0x111C00u;
    // 0x111c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x111c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111c04: 0x0  nop
    ctx->pc = 0x111c04u;
    // NOP
label_111c08:
    // 0x111c08: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111C08u;
    {
        const bool branch_taken_0x111c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x111c08) {
            ctx->pc = 0x111C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C08u;
            // 0x111c0c: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111C18u;
            goto label_111c18;
        }
    }
    ctx->pc = 0x111C10u;
    // 0x111c10: 0x3e00008  jr          $ra
    ctx->pc = 0x111C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C10u;
        // 0x111c14: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C18u;
label_111c18:
    // 0x111c18: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x111C18u;
    {
        const bool branch_taken_0x111c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111c18) {
            ctx->pc = 0x111C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C18u;
            // 0x111c1c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111c08;
        }
    }
    ctx->pc = 0x111C20u;
    // 0x111c20: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x111c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_111c24:
    // 0x111c24: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x111C24u;
    {
        const bool branch_taken_0x111c24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x111c24) {
            ctx->pc = 0x111C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111C24u;
            // 0x111c28: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111bf8;
        }
    }
    ctx->pc = 0x111C2Cu;
label_111c2c:
    // 0x111c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x111C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C2Cu;
        // 0x111c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C34u;
}

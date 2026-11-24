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

// Function: sub_0021FE68
// Address: 0x21fe68 - 0x21fe98
void sub_0021FE68_0x21fe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FE68_0x21fe68");
#endif

    ctx->pc = 0x21fe68u;

    // 0x21fe68: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x21fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21fe6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21fe70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21fe74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21fe78: 0x8c421f38  lw          $v0, 0x1F38($v0)
    ctx->pc = 0x21fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7992)));
    // 0x21fe7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FE7Cu;
    {
        const bool branch_taken_0x21fe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe7c) {
            ctx->pc = 0x21FE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE7Cu;
            // 0x21fe80: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE90u;
            goto label_21fe90;
        }
    }
    ctx->pc = 0x21FE84u;
    // 0x21fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x21FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE84u;
        // 0x21fe88: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FE8Cu;
    // 0x21fe8c: 0x0  nop
    ctx->pc = 0x21fe8cu;
    // NOP
label_21fe90:
    // 0x21fe90: 0x3e00008  jr          $ra
    ctx->pc = 0x21FE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE90u;
        // 0x21fe94: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FE98u;
}

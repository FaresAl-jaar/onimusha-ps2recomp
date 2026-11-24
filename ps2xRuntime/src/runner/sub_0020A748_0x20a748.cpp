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

// Function: sub_0020A748
// Address: 0x20a748 - 0x20a774
void sub_0020A748_0x20a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A748_0x20a748");
#endif

    ctx->pc = 0x20a748u;

    // 0x20a748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a74c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20a750: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x20a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x20a754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A754u;
    {
        const bool branch_taken_0x20a754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A754u;
        // 0x20a758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a754) {
            ctx->pc = 0x20A768u;
            goto label_20a768;
        }
    }
    ctx->pc = 0x20A75Cu;
    // 0x20a75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a760: 0x8092f70  j           func_24BDC0
    ctx->pc = 0x20A760u;
    ctx->pc = 0x20A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A760u;
    // 0x20a764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BDC0u;
    sub_0024BDC0_0x24bdc0(rdram, ctx, runtime); return;
    ctx->pc = 0x20A768u;
label_20a768:
    // 0x20a768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A76Cu;
        // 0x20a770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A774u;
}

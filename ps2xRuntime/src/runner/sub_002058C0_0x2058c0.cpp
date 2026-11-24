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

// Function: sub_002058C0
// Address: 0x2058c0 - 0x2058f0
void sub_002058C0_0x2058c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002058C0_0x2058c0");
#endif

    ctx->pc = 0x2058c0u;

    // 0x2058c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2058c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2058c4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2058c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2058c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2058c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2058cc: 0x244286d8  addiu       $v0, $v0, -0x7928
    ctx->pc = 0x2058ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936280));
    // 0x2058d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2058d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B86D8u));
    // 0x2058d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2058D4u;
    {
        const bool branch_taken_0x2058d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2058D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058D4u;
        // 0x2058d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2058d4) {
            ctx->pc = 0x2058E8u;
            goto label_2058e8;
        }
    }
    ctx->pc = 0x2058DCu;
    // 0x2058dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2058dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2058e0: 0x808154e  j           func_205538
    ctx->pc = 0x2058E0u;
    ctx->pc = 0x2058E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2058E0u;
    // 0x2058e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205538u;
    sub_00205538_0x205538(rdram, ctx, runtime); return;
    ctx->pc = 0x2058E8u;
label_2058e8:
    // 0x2058e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2058E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2058ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2058E8u;
        // 0x2058ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2058E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2058F0u;
}

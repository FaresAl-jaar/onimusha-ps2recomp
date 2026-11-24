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

// Function: sub_001F5178
// Address: 0x1f5178 - 0x1f51b0
void sub_001F5178_0x1f5178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5178_0x1f5178");
#endif

    ctx->pc = 0x1f5178u;

    // 0x1f5178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f517c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1f517cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1f5180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5184: 0x24848120  addiu       $a0, $a0, -0x7EE0
    ctx->pc = 0x1f5184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    // 0x1f5188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f518c: 0x807d466  j           func_1F5198
    ctx->pc = 0x1F518Cu;
    ctx->pc = 0x1F5190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F518Cu;
    // 0x1f5190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5198u;
    goto label_1f5198;
    ctx->pc = 0x1F5194u;
    // 0x1f5194: 0x0  nop
    ctx->pc = 0x1f5194u;
    // NOP
label_1f5198:
    // 0x1f5198: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f5198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1f519c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f519cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f51a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f51a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1f51a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f51a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f51a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F51A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51A8u;
        // 0x1f51ac: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F51A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F51B0u;
}

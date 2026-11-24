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

// Function: sub_0025B2A0
// Address: 0x25b2a0 - 0x25b2d4
void sub_0025B2A0_0x25b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B2A0_0x25b2a0");
#endif

    switch (ctx->pc) {
        case 0x25b2c4u: goto label_25b2c4;
        default: break;
    }

    ctx->pc = 0x25b2a0u;

    // 0x25b2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25b2a4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x25b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25b2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b2ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25b2b0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x25b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x25b2b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25b2b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25b2bc: 0xc07b9b0  jal         func_1EE6C0
    ctx->pc = 0x25B2BCu;
    SET_GPR_U32(ctx, 31, 0x25B2C4u);
    ctx->pc = 0x25B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2BCu;
    // 0x25b2c0: 0x24460050  addiu       $a2, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE6C0u, 0x25B2BCu, 0x25B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B2C4u;
label_25b2c4:
    // 0x25b2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b2c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25b2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25b2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x25B2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B2CCu;
        // 0x25b2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B2D4u;
}

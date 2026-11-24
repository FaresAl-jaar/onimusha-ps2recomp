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

// Function: sub_003640D0
// Address: 0x3640d0 - 0x3640f8
void sub_003640D0_0x3640d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003640D0_0x3640d0");
#endif

    switch (ctx->pc) {
        case 0x3640e0u: goto label_3640e0;
        default: break;
    }

    ctx->pc = 0x3640d0u;

    // 0x3640d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3640d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3640d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3640d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3640d8: 0xc0d8fd4  jal         func_363F50
    ctx->pc = 0x3640D8u;
    SET_GPR_U32(ctx, 31, 0x3640E0u);
    ctx->pc = 0x363F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363F50u, 0x3640D8u, 0x3640E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640E0u;
label_3640e0:
    // 0x3640e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3640e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3640e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3640e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3640e8: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x3640e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
    // 0x3640ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3640ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3640f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3640F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3640F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640F0u;
        // 0x3640f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3640F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3640F8u;
}

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

// Function: sub_0034E9E0
// Address: 0x34e9e0 - 0x34ea24
void sub_0034E9E0_0x34e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E9E0_0x34e9e0");
#endif

    switch (ctx->pc) {
        case 0x34e9fcu: goto label_34e9fc;
        case 0x34ea10u: goto label_34ea10;
        default: break;
    }

    ctx->pc = 0x34e9e0u;

    // 0x34e9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e9e8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x34e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x34e9ec: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E9ECu;
    {
        const bool branch_taken_0x34e9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x34e9ec) {
            ctx->pc = 0x34EA08u;
            goto label_34ea08;
        }
    }
    ctx->pc = 0x34E9F4u;
    // 0x34e9f4: 0xc0d3a60  jal         func_34E980
    ctx->pc = 0x34E9F4u;
    SET_GPR_U32(ctx, 31, 0x34E9FCu);
    ctx->pc = 0x34E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E980u, 0x34E9F4u, 0x34E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E9FCu;
label_34e9fc:
    // 0x34e9fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34E9FCu;
    {
        const bool branch_taken_0x34e9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e9fc) {
            ctx->pc = 0x34EA18u;
            goto label_34ea18;
        }
    }
    ctx->pc = 0x34EA04u;
    // 0x34ea04: 0x0  nop
    ctx->pc = 0x34ea04u;
    // NOP
label_34ea08:
    // 0x34ea08: 0xc0d3a34  jal         func_34E8D0
    ctx->pc = 0x34EA08u;
    SET_GPR_U32(ctx, 31, 0x34EA10u);
    ctx->pc = 0x34E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E8D0u, 0x34EA08u, 0x34EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA10u;
label_34ea10:
    // 0x34ea10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34ea10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea14: 0x0  nop
    ctx->pc = 0x34ea14u;
    // NOP
label_34ea18:
    // 0x34ea18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ea18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ea1c: 0x3e00008  jr          $ra
    ctx->pc = 0x34EA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA1Cu;
        // 0x34ea20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EA24u;
}

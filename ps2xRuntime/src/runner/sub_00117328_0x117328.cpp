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

// Function: sub_00117328
// Address: 0x117328 - 0x117344
void sub_00117328_0x117328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117328_0x117328");
#endif

    switch (ctx->pc) {
        case 0x117338u: goto label_117338;
        default: break;
    }

    ctx->pc = 0x117328u;

    // 0x117328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11732c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117330: 0xc045c88  jal         func_117220
    ctx->pc = 0x117330u;
    SET_GPR_U32(ctx, 31, 0x117338u);
    ctx->pc = 0x117334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117330u;
    // 0x117334: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117220u, 0x117330u, 0x117338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117338u;
label_117338:
    // 0x117338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11733c: 0x3e00008  jr          $ra
    ctx->pc = 0x11733Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11733Cu;
        // 0x117340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11733Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117344u;
}

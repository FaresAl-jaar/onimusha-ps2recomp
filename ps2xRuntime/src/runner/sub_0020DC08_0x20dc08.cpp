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

// Function: sub_0020DC08
// Address: 0x20dc08 - 0x20dc2c
void sub_0020DC08_0x20dc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DC08_0x20dc08");
#endif

    switch (ctx->pc) {
        case 0x20dc18u: goto label_20dc18;
        default: break;
    }

    ctx->pc = 0x20dc08u;

    // 0x20dc08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20dc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20dc0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20dc10: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x20DC10u;
    SET_GPR_U32(ctx, 31, 0x20DC18u);
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x20DC10u, 0x20DC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC18u;
label_20dc18:
    // 0x20dc18: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20dc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20dc1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dc20: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20dc20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20dc24: 0x3e00008  jr          $ra
    ctx->pc = 0x20DC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC24u;
        // 0x20dc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DC2Cu;
}

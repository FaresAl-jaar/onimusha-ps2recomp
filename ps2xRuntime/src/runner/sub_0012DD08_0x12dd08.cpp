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

// Function: sub_0012DD08
// Address: 0x12dd08 - 0x12dd28
void sub_0012DD08_0x12dd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DD08_0x12dd08");
#endif

    switch (ctx->pc) {
        case 0x12dd18u: goto label_12dd18;
        default: break;
    }

    ctx->pc = 0x12dd08u;

    // 0x12dd08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12dd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dd0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12dd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12dd10: 0xc04b74a  jal         func_12DD28
    ctx->pc = 0x12DD10u;
    SET_GPR_U32(ctx, 31, 0x12DD18u);
    ctx->pc = 0x12DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD10u;
    // 0x12dd14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD28u, 0x12DD10u, 0x12DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD18u;
label_12dd18:
    // 0x12dd18: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x12dd18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dd1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12dd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dd20: 0x3e00008  jr          $ra
    ctx->pc = 0x12DD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD20u;
        // 0x12dd24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DD28u;
}

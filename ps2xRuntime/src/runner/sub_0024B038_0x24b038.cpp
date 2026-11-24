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

// Function: sub_0024B038
// Address: 0x24b038 - 0x24b05c
void sub_0024B038_0x24b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B038_0x24b038");
#endif

    switch (ctx->pc) {
        case 0x24b048u: goto label_24b048;
        default: break;
    }

    ctx->pc = 0x24b038u;

    // 0x24b038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b03c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b040: 0xc092ba4  jal         func_24AE90
    ctx->pc = 0x24B040u;
    SET_GPR_U32(ctx, 31, 0x24B048u);
    ctx->pc = 0x24B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B040u;
    // 0x24b044: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE90u, 0x24B040u, 0x24B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B048u;
label_24b048:
    // 0x24b048: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x24b048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24b04c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24b04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b050: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24b050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24b054: 0x3e00008  jr          $ra
    ctx->pc = 0x24B054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B054u;
        // 0x24b058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B05Cu;
}

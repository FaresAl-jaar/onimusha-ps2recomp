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

// Function: sub_0024C7F0
// Address: 0x24c7f0 - 0x24c810
void sub_0024C7F0_0x24c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C7F0_0x24c7f0");
#endif

    switch (ctx->pc) {
        case 0x24c800u: goto label_24c800;
        default: break;
    }

    ctx->pc = 0x24c7f0u;

    // 0x24c7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c7f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24c7f8: 0xc0931b6  jal         func_24C6D8
    ctx->pc = 0x24C7F8u;
    SET_GPR_U32(ctx, 31, 0x24C800u);
    ctx->pc = 0x24C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C7F8u;
    // 0x24c7fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C6D8u, 0x24C7F8u, 0x24C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C800u;
label_24c800:
    // 0x24c800: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c808: 0x3e00008  jr          $ra
    ctx->pc = 0x24C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C808u;
        // 0x24c80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C810u;
}

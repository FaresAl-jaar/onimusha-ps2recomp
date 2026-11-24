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

// Function: sub_00210510
// Address: 0x210510 - 0x210530
void sub_00210510_0x210510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210510_0x210510");
#endif

    switch (ctx->pc) {
        case 0x210520u: goto label_210520;
        default: break;
    }

    ctx->pc = 0x210510u;

    // 0x210510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210518: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x210518u;
    SET_GPR_U32(ctx, 31, 0x210520u);
    ctx->pc = 0x21051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210518u;
    // 0x21051c: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x210518u, 0x210520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210520u;
label_210520:
    // 0x210520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210524: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x210524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x210528: 0x3e00008  jr          $ra
    ctx->pc = 0x210528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210528u;
        // 0x21052c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210530u;
}

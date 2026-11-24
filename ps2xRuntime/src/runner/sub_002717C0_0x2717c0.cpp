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

// Function: sub_002717C0
// Address: 0x2717c0 - 0x2717e8
void sub_002717C0_0x2717c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002717C0_0x2717c0");
#endif

    switch (ctx->pc) {
        case 0x2717dcu: goto label_2717dc;
        default: break;
    }

    ctx->pc = 0x2717c0u;

    // 0x2717c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2717c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2717c4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2717c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2717c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2717c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2717cc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2717ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2717d0: 0x84890008  lh          $t1, 0x8($a0)
    ctx->pc = 0x2717d0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2717d4: 0xc09c540  jal         func_271500
    ctx->pc = 0x2717D4u;
    SET_GPR_U32(ctx, 31, 0x2717DCu);
    ctx->pc = 0x2717D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717D4u;
    // 0x2717d8: 0x848a000a  lh          $t2, 0xA($a0) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271500u, 0x2717D4u, 0x2717DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717DCu;
label_2717dc:
    // 0x2717dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2717dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2717e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2717E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2717E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717E0u;
        // 0x2717e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2717E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2717E8u;
}

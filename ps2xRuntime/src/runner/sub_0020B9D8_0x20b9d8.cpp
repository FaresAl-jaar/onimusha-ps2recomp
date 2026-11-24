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

// Function: sub_0020B9D8
// Address: 0x20b9d8 - 0x20b9fc
void sub_0020B9D8_0x20b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B9D8_0x20b9d8");
#endif

    switch (ctx->pc) {
        case 0x20b9e8u: goto label_20b9e8;
        default: break;
    }

    ctx->pc = 0x20b9d8u;

    // 0x20b9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b9e0: 0xc087df8  jal         func_21F7E0
    ctx->pc = 0x20B9E0u;
    SET_GPR_U32(ctx, 31, 0x20B9E8u);
    ctx->pc = 0x21F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F7E0u, 0x20B9E0u, 0x20B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9E8u;
label_20b9e8:
    // 0x20b9e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20b9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20b9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b9f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20b9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20b9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20B9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9F4u;
        // 0x20b9f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B9FCu;
}

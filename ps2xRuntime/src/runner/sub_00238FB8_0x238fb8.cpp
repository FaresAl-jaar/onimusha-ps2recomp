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

// Function: sub_00238FB8
// Address: 0x238fb8 - 0x238ff0
void sub_00238FB8_0x238fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238FB8_0x238fb8");
#endif

    switch (ctx->pc) {
        case 0x238fccu: goto label_238fcc;
        case 0x238fd4u: goto label_238fd4;
        case 0x238fdcu: goto label_238fdc;
        default: break;
    }

    ctx->pc = 0x238fb8u;

    // 0x238fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238fc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x238fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x238fc4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x238FC4u;
    SET_GPR_U32(ctx, 31, 0x238FCCu);
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x238FC4u, 0x238FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FCCu;
label_238fcc:
    // 0x238fcc: 0xc08e3fc  jal         func_238FF0
    ctx->pc = 0x238FCCu;
    SET_GPR_U32(ctx, 31, 0x238FD4u);
    ctx->pc = 0x238FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238FF0u, 0x238FCCu, 0x238FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FD4u;
label_238fd4:
    // 0x238fd4: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x238FD4u;
    SET_GPR_U32(ctx, 31, 0x238FDCu);
    ctx->pc = 0x238FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238FD4u;
    // 0x238fd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x238FD4u, 0x238FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238FDCu;
label_238fdc:
    // 0x238fdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238fe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x238FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FE8u;
        // 0x238fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238FF0u;
}

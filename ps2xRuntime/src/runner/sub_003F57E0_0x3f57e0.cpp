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

// Function: sub_003F57E0
// Address: 0x3f57e0 - 0x3f5824
void sub_003F57E0_0x3f57e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F57E0_0x3f57e0");
#endif

    switch (ctx->pc) {
        case 0x3f57f8u: goto label_3f57f8;
        case 0x3f5808u: goto label_3f5808;
        case 0x3f5818u: goto label_3f5818;
        default: break;
    }

    ctx->pc = 0x3f57e0u;

    // 0x3f57e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f57e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f57e4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f57e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f57e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f57ec: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3f57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3f57f0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3F57F0u;
    SET_GPR_U32(ctx, 31, 0x3F57F8u);
    ctx->pc = 0x3F57F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57F0u;
    // 0x3f57f4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3F57F0u, 0x3F57F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57F8u;
label_3f57f8:
    // 0x3f57f8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f57f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f57fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3f57fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3f5800: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3F5800u;
    SET_GPR_U32(ctx, 31, 0x3F5808u);
    ctx->pc = 0x3F5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5800u;
    // 0x3f5804: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3F5800u, 0x3F5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5808u;
label_3f5808:
    // 0x3f5808: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f5808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f580c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3f580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3f5810: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3F5810u;
    SET_GPR_U32(ctx, 31, 0x3F5818u);
    ctx->pc = 0x3F5814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5810u;
    // 0x3f5814: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3F5810u, 0x3F5818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5818u;
label_3f5818:
    // 0x3f5818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f5818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f581c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F581Cu;
        // 0x3f5820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F581Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5824u;
}

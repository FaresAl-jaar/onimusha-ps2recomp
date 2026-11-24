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

// Function: sub_003D8AF0
// Address: 0x3d8af0 - 0x3d8b18
void sub_003D8AF0_0x3d8af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8AF0_0x3d8af0");
#endif

    switch (ctx->pc) {
        case 0x3d8b00u: goto label_3d8b00;
        default: break;
    }

    ctx->pc = 0x3d8af0u;

    // 0x3d8af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8af8: 0xc0f6298  jal         func_3D8A60
    ctx->pc = 0x3D8AF8u;
    SET_GPR_U32(ctx, 31, 0x3D8B00u);
    ctx->pc = 0x3D8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8A60u, 0x3D8AF8u, 0x3D8B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8B00u;
label_3d8b00:
    // 0x3d8b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8b04: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3d8b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d8b08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3d8b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3d8b0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3d8b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d8b10: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8B10u;
        // 0x3d8b14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8B18u;
}

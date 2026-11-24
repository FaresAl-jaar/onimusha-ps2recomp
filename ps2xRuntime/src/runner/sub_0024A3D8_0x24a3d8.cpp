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

// Function: sub_0024A3D8
// Address: 0x24a3d8 - 0x24a408
void sub_0024A3D8_0x24a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A3D8_0x24a3d8");
#endif

    switch (ctx->pc) {
        case 0x24a3e8u: goto label_24a3e8;
        default: break;
    }

    ctx->pc = 0x24a3d8u;

    // 0x24a3d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a3e0: 0xc0928d4  jal         func_24A350
    ctx->pc = 0x24A3E0u;
    SET_GPR_U32(ctx, 31, 0x24A3E8u);
    ctx->pc = 0x24A350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A350u, 0x24A3E0u, 0x24A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3E8u;
label_24a3e8:
    // 0x24a3e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x24a3ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24a3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24a3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a3f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24a3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24a3f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24a3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24a3fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24a3fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x24a400: 0x3e00008  jr          $ra
    ctx->pc = 0x24A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A400u;
        // 0x24a404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A408u;
}

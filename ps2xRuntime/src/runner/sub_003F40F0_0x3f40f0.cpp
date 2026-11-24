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

// Function: sub_003F40F0
// Address: 0x3f40f0 - 0x3f413c
void sub_003F40F0_0x3f40f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F40F0_0x3f40f0");
#endif

    switch (ctx->pc) {
        case 0x3f4120u: goto label_3f4120;
        case 0x3f4130u: goto label_3f4130;
        default: break;
    }

    ctx->pc = 0x3f40f0u;

    // 0x3f40f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f40f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f40f4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3f40f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3f40f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f40fc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3F40FCu;
    {
        const bool branch_taken_0x3f40fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F40FCu;
        // 0x3f4100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f40fc) {
            ctx->pc = 0x3F4128u;
            goto label_3f4128;
        }
    }
    ctx->pc = 0x3F4104u;
    // 0x3f4104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4108: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F4108u;
    {
        const bool branch_taken_0x3f4108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4108) {
            ctx->pc = 0x3F4118u;
            goto label_3f4118;
        }
    }
    ctx->pc = 0x3F4110u;
    // 0x3f4110: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F4110u;
    {
        const bool branch_taken_0x3f4110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4110) {
            ctx->pc = 0x3F4130u;
            goto label_3f4130;
        }
    }
    ctx->pc = 0x3F4118u;
label_3f4118:
    // 0x3f4118: 0xc0fcf64  jal         func_3F3D90
    ctx->pc = 0x3F4118u;
    SET_GPR_U32(ctx, 31, 0x3F4120u);
    ctx->pc = 0x3F3D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F3D90u, 0x3F4118u, 0x3F4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4120u;
label_3f4120:
    // 0x3f4120: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F4120u;
    {
        const bool branch_taken_0x3f4120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4120) {
            ctx->pc = 0x3F4130u;
            goto label_3f4130;
        }
    }
    ctx->pc = 0x3F4128u;
label_3f4128:
    // 0x3f4128: 0xc0fcfb8  jal         func_3F3EE0
    ctx->pc = 0x3F4128u;
    SET_GPR_U32(ctx, 31, 0x3F4130u);
    ctx->pc = 0x3F3EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F3EE0u, 0x3F4128u, 0x3F4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F4130u;
label_3f4130:
    // 0x3f4130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f4130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f4134: 0x3e00008  jr          $ra
    ctx->pc = 0x3F4134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F4138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F4134u;
        // 0x3f4138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F4134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F413Cu;
}

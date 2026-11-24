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

// Function: sub_003F32F0
// Address: 0x3f32f0 - 0x3f3374
void sub_003F32F0_0x3f32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F32F0_0x3f32f0");
#endif

    switch (ctx->pc) {
        case 0x3f3338u: goto label_3f3338;
        case 0x3f3348u: goto label_3f3348;
        case 0x3f3358u: goto label_3f3358;
        case 0x3f3368u: goto label_3f3368;
        default: break;
    }

    ctx->pc = 0x3f32f0u;

    // 0x3f32f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f32f4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3f32f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3f32f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f32fc: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F32FCu;
    {
        const bool branch_taken_0x3f32fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F32FCu;
        // 0x3f3300: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32fc) {
            ctx->pc = 0x3F3360u;
            goto label_3f3360;
        }
    }
    ctx->pc = 0x3F3304u;
    // 0x3f3304: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f3304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f3308: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F3308u;
    {
        const bool branch_taken_0x3f3308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3308u;
        // 0x3f330c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3308) {
            ctx->pc = 0x3F3350u;
            goto label_3f3350;
        }
    }
    ctx->pc = 0x3F3310u;
    // 0x3f3310: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3F3310u;
    {
        const bool branch_taken_0x3f3310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3310) {
            ctx->pc = 0x3F3340u;
            goto label_3f3340;
        }
    }
    ctx->pc = 0x3F3318u;
    // 0x3f3318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f3318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f331c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F331Cu;
    {
        const bool branch_taken_0x3f331c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f331c) {
            ctx->pc = 0x3F3330u;
            goto label_3f3330;
        }
    }
    ctx->pc = 0x3F3324u;
    // 0x3f3324: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3F3324u;
    {
        const bool branch_taken_0x3f3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3324) {
            ctx->pc = 0x3F3368u;
            goto label_3f3368;
        }
    }
    ctx->pc = 0x3F332Cu;
    // 0x3f332c: 0x0  nop
    ctx->pc = 0x3f332cu;
    // NOP
label_3f3330:
    // 0x3f3330: 0xc0fcb20  jal         func_3F2C80
    ctx->pc = 0x3F3330u;
    SET_GPR_U32(ctx, 31, 0x3F3338u);
    ctx->pc = 0x3F2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2C80u, 0x3F3330u, 0x3F3338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3338u;
label_3f3338:
    // 0x3f3338: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F3338u;
    {
        const bool branch_taken_0x3f3338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3338) {
            ctx->pc = 0x3F3368u;
            goto label_3f3368;
        }
    }
    ctx->pc = 0x3F3340u;
label_3f3340:
    // 0x3f3340: 0xc0fcb78  jal         func_3F2DE0
    ctx->pc = 0x3F3340u;
    SET_GPR_U32(ctx, 31, 0x3F3348u);
    ctx->pc = 0x3F2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2DE0u, 0x3F3340u, 0x3F3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3348u;
label_3f3348:
    // 0x3f3348: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F3348u;
    {
        const bool branch_taken_0x3f3348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3348) {
            ctx->pc = 0x3F3368u;
            goto label_3f3368;
        }
    }
    ctx->pc = 0x3F3350u;
label_3f3350:
    // 0x3f3350: 0xc0fcbd0  jal         func_3F2F40
    ctx->pc = 0x3F3350u;
    SET_GPR_U32(ctx, 31, 0x3F3358u);
    ctx->pc = 0x3F2F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2F40u, 0x3F3350u, 0x3F3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3358u;
label_3f3358:
    // 0x3f3358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F3358u;
    {
        const bool branch_taken_0x3f3358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3358) {
            ctx->pc = 0x3F3368u;
            goto label_3f3368;
        }
    }
    ctx->pc = 0x3F3360u;
label_3f3360:
    // 0x3f3360: 0xc0fcc28  jal         func_3F30A0
    ctx->pc = 0x3F3360u;
    SET_GPR_U32(ctx, 31, 0x3F3368u);
    ctx->pc = 0x3F30A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F30A0u, 0x3F3360u, 0x3F3368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3368u;
label_3f3368:
    // 0x3f3368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f336c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F336Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F336Cu;
        // 0x3f3370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F336Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F3374u;
}

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

// Function: sub_003F37D0
// Address: 0x3f37d0 - 0x3f381c
void sub_003F37D0_0x3f37d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F37D0_0x3f37d0");
#endif

    switch (ctx->pc) {
        case 0x3f3800u: goto label_3f3800;
        case 0x3f3810u: goto label_3f3810;
        default: break;
    }

    ctx->pc = 0x3f37d0u;

    // 0x3f37d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f37d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f37d4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3f37d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3f37d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f37dc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3F37DCu;
    {
        const bool branch_taken_0x3f37dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F37DCu;
        // 0x3f37e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f37dc) {
            ctx->pc = 0x3F3808u;
            goto label_3f3808;
        }
    }
    ctx->pc = 0x3F37E4u;
    // 0x3f37e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f37e8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F37E8u;
    {
        const bool branch_taken_0x3f37e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f37e8) {
            ctx->pc = 0x3F37F8u;
            goto label_3f37f8;
        }
    }
    ctx->pc = 0x3F37F0u;
    // 0x3f37f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F37F0u;
    {
        const bool branch_taken_0x3f37f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f37f0) {
            ctx->pc = 0x3F3810u;
            goto label_3f3810;
        }
    }
    ctx->pc = 0x3F37F8u;
label_3f37f8:
    // 0x3f37f8: 0xc0fcd1c  jal         func_3F3470
    ctx->pc = 0x3F37F8u;
    SET_GPR_U32(ctx, 31, 0x3F3800u);
    ctx->pc = 0x3F3470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F3470u, 0x3F37F8u, 0x3F3800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3800u;
label_3f3800:
    // 0x3f3800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F3800u;
    {
        const bool branch_taken_0x3f3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3800) {
            ctx->pc = 0x3F3810u;
            goto label_3f3810;
        }
    }
    ctx->pc = 0x3F3808u;
label_3f3808:
    // 0x3f3808: 0xc0fcd70  jal         func_3F35C0
    ctx->pc = 0x3F3808u;
    SET_GPR_U32(ctx, 31, 0x3F3810u);
    ctx->pc = 0x3F35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F35C0u, 0x3F3808u, 0x3F3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3810u;
label_3f3810:
    // 0x3f3810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3814: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3814u;
        // 0x3f3818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F381Cu;
}

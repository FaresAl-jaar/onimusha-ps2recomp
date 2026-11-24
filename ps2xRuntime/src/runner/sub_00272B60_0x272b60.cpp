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

// Function: sub_00272B60
// Address: 0x272b60 - 0x272ba8
void sub_00272B60_0x272b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272B60_0x272b60");
#endif

    switch (ctx->pc) {
        case 0x272b90u: goto label_272b90;
        case 0x272b9cu: goto label_272b9c;
        default: break;
    }

    ctx->pc = 0x272b60u;

    // 0x272b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x272b64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x272b6c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x272b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x272b70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x272b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272b74: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x272B74u;
    {
        const bool branch_taken_0x272b74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x272B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B74u;
        // 0x272b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b74) {
            ctx->pc = 0x272B80u;
            goto label_272b80;
        }
    }
    ctx->pc = 0x272B7Cu;
    // 0x272b7c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x272b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_272b80:
    // 0x272b80: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x272b80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x272b84: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x272b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x272b88: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x272B88u;
    SET_GPR_U32(ctx, 31, 0x272B90u);
    ctx->pc = 0x272B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B88u;
    // 0x272b8c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x272B88u, 0x272B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B90u;
label_272b90:
    // 0x272b90: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x272b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x272b94: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x272B94u;
    SET_GPR_U32(ctx, 31, 0x272B9Cu);
    ctx->pc = 0x272B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B94u;
    // 0x272b98: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x272B94u, 0x272B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B9Cu;
label_272b9c:
    // 0x272b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x272BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BA0u;
        // 0x272ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272BA8u;
}

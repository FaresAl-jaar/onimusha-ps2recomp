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

// Function: sub_00350890
// Address: 0x350890 - 0x3508c8
void sub_00350890_0x350890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350890_0x350890");
#endif

    switch (ctx->pc) {
        case 0x3508a0u: goto label_3508a0;
        case 0x3508b0u: goto label_3508b0;
        default: break;
    }

    ctx->pc = 0x350890u;

    // 0x350890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350898: 0xc0d37d0  jal         func_34DF40
    ctx->pc = 0x350898u;
    SET_GPR_U32(ctx, 31, 0x3508A0u);
    ctx->pc = 0x35089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350898u;
    // 0x35089c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF40u, 0x350898u, 0x3508A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508A0u;
label_3508a0:
    // 0x3508a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3508A0u;
    {
        const bool branch_taken_0x3508a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3508A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3508A0u;
        // 0x3508a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3508a0) {
            ctx->pc = 0x3508B8u;
            goto label_3508b8;
        }
    }
    ctx->pc = 0x3508A8u;
    // 0x3508a8: 0xc0d4448  jal         func_351120
    ctx->pc = 0x3508A8u;
    SET_GPR_U32(ctx, 31, 0x3508B0u);
    ctx->pc = 0x351120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351120u, 0x3508A8u, 0x3508B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3508B0u;
label_3508b0:
    // 0x3508b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3508B0u;
    {
        const bool branch_taken_0x3508b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3508B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3508B0u;
        // 0x3508b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3508b0) {
            ctx->pc = 0x3508C0u;
            goto label_3508c0;
        }
    }
    ctx->pc = 0x3508B8u;
label_3508b8:
    // 0x3508b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3508b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3508bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3508bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3508c0:
    // 0x3508c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3508C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3508C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3508C0u;
        // 0x3508c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3508C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3508C8u;
}

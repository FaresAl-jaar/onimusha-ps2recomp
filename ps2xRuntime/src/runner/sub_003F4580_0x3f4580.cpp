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

// Function: sub_003F4580
// Address: 0x3f4580 - 0x3f45cc
void sub_003F4580_0x3f4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4580_0x3f4580");
#endif

    switch (ctx->pc) {
        case 0x3f45b0u: goto label_3f45b0;
        case 0x3f45c0u: goto label_3f45c0;
        default: break;
    }

    ctx->pc = 0x3f4580u;

    // 0x3f4580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f4580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f4584: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3f4584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3f4588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f458c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3F458Cu;
    {
        const bool branch_taken_0x3f458c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F458Cu;
        // 0x3f4590: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f458c) {
            ctx->pc = 0x3F45B8u;
            goto label_3f45b8;
        }
    }
    ctx->pc = 0x3F4594u;
    // 0x3f4594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f4594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f4598: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F4598u;
    {
        const bool branch_taken_0x3f4598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4598) {
            ctx->pc = 0x3F45A8u;
            goto label_3f45a8;
        }
    }
    ctx->pc = 0x3F45A0u;
    // 0x3f45a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F45A0u;
    {
        const bool branch_taken_0x3f45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f45a0) {
            ctx->pc = 0x3F45C0u;
            goto label_3f45c0;
        }
    }
    ctx->pc = 0x3F45A8u;
label_3f45a8:
    // 0x3f45a8: 0xc0fd088  jal         func_3F4220
    ctx->pc = 0x3F45A8u;
    SET_GPR_U32(ctx, 31, 0x3F45B0u);
    ctx->pc = 0x3F4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4220u, 0x3F45A8u, 0x3F45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F45B0u;
label_3f45b0:
    // 0x3f45b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F45B0u;
    {
        const bool branch_taken_0x3f45b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f45b0) {
            ctx->pc = 0x3F45C0u;
            goto label_3f45c0;
        }
    }
    ctx->pc = 0x3F45B8u;
label_3f45b8:
    // 0x3f45b8: 0xc0fd0dc  jal         func_3F4370
    ctx->pc = 0x3F45B8u;
    SET_GPR_U32(ctx, 31, 0x3F45C0u);
    ctx->pc = 0x3F4370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F4370u, 0x3F45B8u, 0x3F45C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F45C0u;
label_3f45c0:
    // 0x3f45c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f45c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f45c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F45C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F45C4u;
        // 0x3f45c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F45C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F45CCu;
}

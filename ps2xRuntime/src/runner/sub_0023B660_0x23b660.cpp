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

// Function: sub_0023B660
// Address: 0x23b660 - 0x23b690
void sub_0023B660_0x23b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B660_0x23b660");
#endif

    switch (ctx->pc) {
        case 0x23b678u: goto label_23b678;
        default: break;
    }

    ctx->pc = 0x23b660u;

    // 0x23b660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b664: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B664u;
    {
        const bool branch_taken_0x23b664 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B664u;
        // 0x23b668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b664) {
            ctx->pc = 0x23B680u;
            goto label_23b680;
        }
    }
    ctx->pc = 0x23B66Cu;
    // 0x23b66c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23b670: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23B670u;
    SET_GPR_U32(ctx, 31, 0x23B678u);
    ctx->pc = 0x23B674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B670u;
    // 0x23b674: 0x2484b550  addiu       $a0, $a0, -0x4AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23B670u, 0x23B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B678u;
label_23b678:
    // 0x23b678: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23B678u;
    {
        const bool branch_taken_0x23b678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B678u;
        // 0x23b67c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b678) {
            ctx->pc = 0x23B684u;
            goto label_23b684;
        }
    }
    ctx->pc = 0x23B680u;
label_23b680:
    // 0x23b680: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x23b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_23b684:
    // 0x23b684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b688: 0x3e00008  jr          $ra
    ctx->pc = 0x23B688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B688u;
        // 0x23b68c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B690u;
}

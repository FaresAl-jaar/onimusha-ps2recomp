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

// Function: sub_0020CFB8
// Address: 0x20cfb8 - 0x20cfe4
void sub_0020CFB8_0x20cfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CFB8_0x20cfb8");
#endif

    switch (ctx->pc) {
        case 0x20cfb8u: goto label_20cfb8;
        case 0x20cfbcu: goto label_20cfbc;
        case 0x20cfc0u: goto label_20cfc0;
        case 0x20cfc4u: goto label_20cfc4;
        case 0x20cfc8u: goto label_20cfc8;
        case 0x20cfccu: goto label_20cfcc;
        case 0x20cfd0u: goto label_20cfd0;
        case 0x20cfd4u: goto label_20cfd4;
        case 0x20cfd8u: goto label_20cfd8;
        case 0x20cfdcu: goto label_20cfdc;
        case 0x20cfe0u: goto label_20cfe0;
        default: break;
    }

    ctx->pc = 0x20cfb8u;

label_20cfb8:
    // 0x20cfb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20cfbc:
    // 0x20cfbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20cfc0:
    // 0x20cfc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20cfc4:
    // 0x20cfc4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20cfc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20cfc8:
    // 0x20cfc8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20cfc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20cfcc:
    // 0x20cfcc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_20cfd0:
    // 0x20cfd0: 0x40f809  jalr        $v0
label_20cfd4:
    if (ctx->pc == 0x20CFD4u) {
        ctx->pc = 0x20CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFD0u;
        // 0x20cfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CFD8u;
        goto label_20cfd8;
    }
    ctx->pc = 0x20CFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CFD8u);
        ctx->pc = 0x20CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFD0u;
        // 0x20cfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFD0u, 0x20CFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CFD8u;
label_20cfd8:
    // 0x20cfd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cfdc:
    // 0x20cfdc: 0x3e00008  jr          $ra
label_20cfe0:
    if (ctx->pc == 0x20CFE0u) {
        ctx->pc = 0x20CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFDCu;
        // 0x20cfe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CFE4u;
        goto label_fallthrough_0x20cfdc;
    }
    ctx->pc = 0x20CFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFDCu;
        // 0x20cfe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20cfdc:
    ctx->pc = 0x20CFE4u;
}

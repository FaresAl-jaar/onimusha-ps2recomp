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

// Function: sub_001F50B0
// Address: 0x1f50b0 - 0x1f50d8
void sub_001F50B0_0x1f50b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F50B0_0x1f50b0");
#endif

    switch (ctx->pc) {
        case 0x1f50b0u: goto label_1f50b0;
        case 0x1f50b4u: goto label_1f50b4;
        case 0x1f50b8u: goto label_1f50b8;
        case 0x1f50bcu: goto label_1f50bc;
        case 0x1f50c0u: goto label_1f50c0;
        case 0x1f50c4u: goto label_1f50c4;
        case 0x1f50c8u: goto label_1f50c8;
        case 0x1f50ccu: goto label_1f50cc;
        case 0x1f50d0u: goto label_1f50d0;
        case 0x1f50d4u: goto label_1f50d4;
        default: break;
    }

    ctx->pc = 0x1f50b0u;

label_1f50b0:
    // 0x1f50b0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1f50b4:
    // 0x1f50b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f50b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f50b8:
    // 0x1f50b8: 0x8c42810c  lw          $v0, -0x7EF4($v0)
    ctx->pc = 0x1f50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934796)));
label_1f50bc:
    // 0x1f50bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f50c0:
    if (ctx->pc == 0x1F50C0u) {
        ctx->pc = 0x1F50C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50BCu;
        // 0x1f50c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F50C4u;
        goto label_1f50c4;
    }
    ctx->pc = 0x1F50BCu;
    {
        const bool branch_taken_0x1f50bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F50C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50BCu;
        // 0x1f50c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50bc) {
            ctx->pc = 0x1F50CCu;
            goto label_1f50cc;
        }
    }
    ctx->pc = 0x1F50C4u;
label_1f50c4:
    // 0x1f50c4: 0x40f809  jalr        $v0
label_1f50c8:
    if (ctx->pc == 0x1F50C8u) {
        ctx->pc = 0x1F50CCu;
        goto label_1f50cc;
    }
    ctx->pc = 0x1F50C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F50CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F50C4u, 0x1F50CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F50CCu;
label_1f50cc:
    // 0x1f50cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f50ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f50d0:
    // 0x1f50d0: 0x3e00008  jr          $ra
label_1f50d4:
    if (ctx->pc == 0x1F50D4u) {
        ctx->pc = 0x1F50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50D0u;
        // 0x1f50d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F50D8u;
        goto label_fallthrough_0x1f50d0;
    }
    ctx->pc = 0x1F50D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50D0u;
        // 0x1f50d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F50D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f50d0:
    ctx->pc = 0x1F50D8u;
}

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

// Function: sub_0020C1B8
// Address: 0x20c1b8 - 0x20c1e8
void sub_0020C1B8_0x20c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C1B8_0x20c1b8");
#endif

    switch (ctx->pc) {
        case 0x20c1b8u: goto label_20c1b8;
        case 0x20c1bcu: goto label_20c1bc;
        case 0x20c1c0u: goto label_20c1c0;
        case 0x20c1c4u: goto label_20c1c4;
        case 0x20c1c8u: goto label_20c1c8;
        case 0x20c1ccu: goto label_20c1cc;
        case 0x20c1d0u: goto label_20c1d0;
        case 0x20c1d4u: goto label_20c1d4;
        case 0x20c1d8u: goto label_20c1d8;
        case 0x20c1dcu: goto label_20c1dc;
        case 0x20c1e0u: goto label_20c1e0;
        case 0x20c1e4u: goto label_20c1e4;
        default: break;
    }

    ctx->pc = 0x20c1b8u;

label_20c1b8:
    // 0x20c1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20c1bc:
    // 0x20c1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c1c0:
    // 0x20c1c0: 0xc081544  jal         func_205510
label_20c1c4:
    if (ctx->pc == 0x20C1C4u) {
        ctx->pc = 0x20C1C8u;
        goto label_20c1c8;
    }
    ctx->pc = 0x20C1C0u;
    SET_GPR_U32(ctx, 31, 0x20C1C8u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C1C0u, 0x20C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1C8u;
label_20c1c8:
    // 0x20c1c8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x20c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_20c1cc:
    // 0x20c1cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20c1d0:
    if (ctx->pc == 0x20C1D0u) {
        ctx->pc = 0x20C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1CCu;
        // 0x20c1d0: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1D4u;
        goto label_20c1d4;
    }
    ctx->pc = 0x20C1CCu;
    {
        const bool branch_taken_0x20c1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1CCu;
        // 0x20c1d0: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1cc) {
            ctx->pc = 0x20C1DCu;
            goto label_20c1dc;
        }
    }
    ctx->pc = 0x20C1D4u;
label_20c1d4:
    // 0x20c1d4: 0x60f809  jalr        $v1
label_20c1d8:
    if (ctx->pc == 0x20C1D8u) {
        ctx->pc = 0x20C1DCu;
        goto label_20c1dc;
    }
    ctx->pc = 0x20C1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C1DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C1D4u, 0x20C1DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C1DCu;
label_20c1dc:
    // 0x20c1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c1e0:
    // 0x20c1e0: 0x3e00008  jr          $ra
label_20c1e4:
    if (ctx->pc == 0x20C1E4u) {
        ctx->pc = 0x20C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1E0u;
        // 0x20c1e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1E8u;
        goto label_fallthrough_0x20c1e0;
    }
    ctx->pc = 0x20C1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1E0u;
        // 0x20c1e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20c1e0:
    ctx->pc = 0x20C1E8u;
}

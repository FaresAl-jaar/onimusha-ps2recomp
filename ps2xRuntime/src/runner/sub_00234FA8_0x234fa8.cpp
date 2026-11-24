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

// Function: sub_00234FA8
// Address: 0x234fa8 - 0x234fd8
void sub_00234FA8_0x234fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234FA8_0x234fa8");
#endif

    switch (ctx->pc) {
        case 0x234fa8u: goto label_234fa8;
        case 0x234facu: goto label_234fac;
        case 0x234fb0u: goto label_234fb0;
        case 0x234fb4u: goto label_234fb4;
        case 0x234fb8u: goto label_234fb8;
        case 0x234fbcu: goto label_234fbc;
        case 0x234fc0u: goto label_234fc0;
        case 0x234fc4u: goto label_234fc4;
        case 0x234fc8u: goto label_234fc8;
        case 0x234fccu: goto label_234fcc;
        case 0x234fd0u: goto label_234fd0;
        case 0x234fd4u: goto label_234fd4;
        default: break;
    }

    ctx->pc = 0x234fa8u;

label_234fa8:
    // 0x234fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_234fac:
    // 0x234fac: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x234facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_234fb0:
    // 0x234fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_234fb4:
    // 0x234fb4: 0x24425ad8  addiu       $v0, $v0, 0x5AD8
    ctx->pc = 0x234fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23256));
label_234fb8:
    // 0x234fb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234fbc:
    // 0x234fbc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_234fc0:
    if (ctx->pc == 0x234FC0u) {
        ctx->pc = 0x234FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FBCu;
        // 0x234fc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FC4u;
        goto label_234fc4;
    }
    ctx->pc = 0x234FBCu;
    {
        const bool branch_taken_0x234fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234fbc) {
            ctx->pc = 0x234FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234FBCu;
            // 0x234fc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234FD0u;
            goto label_234fd0;
        }
    }
    ctx->pc = 0x234FC4u;
label_234fc4:
    // 0x234fc4: 0x60f809  jalr        $v1
label_234fc8:
    if (ctx->pc == 0x234FC8u) {
        ctx->pc = 0x234FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FC4u;
        // 0x234fc8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FCCu;
        goto label_234fcc;
    }
    ctx->pc = 0x234FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x234FCCu);
        ctx->pc = 0x234FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FC4u;
        // 0x234fc8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234FC4u, 0x234FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234FCCu;
label_234fcc:
    // 0x234fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234fd0:
    // 0x234fd0: 0x3e00008  jr          $ra
label_234fd4:
    if (ctx->pc == 0x234FD4u) {
        ctx->pc = 0x234FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FD0u;
        // 0x234fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FD8u;
        goto label_fallthrough_0x234fd0;
    }
    ctx->pc = 0x234FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FD0u;
        // 0x234fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x234fd0:
    ctx->pc = 0x234FD8u;
}

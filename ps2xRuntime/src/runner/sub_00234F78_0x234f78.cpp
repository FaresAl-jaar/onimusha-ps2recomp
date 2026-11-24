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

// Function: sub_00234F78
// Address: 0x234f78 - 0x234fa8
void sub_00234F78_0x234f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234F78_0x234f78");
#endif

    switch (ctx->pc) {
        case 0x234f78u: goto label_234f78;
        case 0x234f7cu: goto label_234f7c;
        case 0x234f80u: goto label_234f80;
        case 0x234f84u: goto label_234f84;
        case 0x234f88u: goto label_234f88;
        case 0x234f8cu: goto label_234f8c;
        case 0x234f90u: goto label_234f90;
        case 0x234f94u: goto label_234f94;
        case 0x234f98u: goto label_234f98;
        case 0x234f9cu: goto label_234f9c;
        case 0x234fa0u: goto label_234fa0;
        case 0x234fa4u: goto label_234fa4;
        default: break;
    }

    ctx->pc = 0x234f78u;

label_234f78:
    // 0x234f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_234f7c:
    // 0x234f7c: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x234f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_234f80:
    // 0x234f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_234f84:
    // 0x234f84: 0x24425ad0  addiu       $v0, $v0, 0x5AD0
    ctx->pc = 0x234f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23248));
label_234f88:
    // 0x234f88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234f8c:
    // 0x234f8c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_234f90:
    if (ctx->pc == 0x234F90u) {
        ctx->pc = 0x234F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F8Cu;
        // 0x234f90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F94u;
        goto label_234f94;
    }
    ctx->pc = 0x234F8Cu;
    {
        const bool branch_taken_0x234f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f8c) {
            ctx->pc = 0x234F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234F8Cu;
            // 0x234f90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234FA0u;
            goto label_234fa0;
        }
    }
    ctx->pc = 0x234F94u;
label_234f94:
    // 0x234f94: 0x60f809  jalr        $v1
label_234f98:
    if (ctx->pc == 0x234F98u) {
        ctx->pc = 0x234F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F94u;
        // 0x234f98: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234F9Cu;
        goto label_234f9c;
    }
    ctx->pc = 0x234F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x234F9Cu);
        ctx->pc = 0x234F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234F94u;
        // 0x234f98: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234F94u, 0x234F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234F9Cu;
label_234f9c:
    // 0x234f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234fa0:
    // 0x234fa0: 0x3e00008  jr          $ra
label_234fa4:
    if (ctx->pc == 0x234FA4u) {
        ctx->pc = 0x234FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FA0u;
        // 0x234fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FA8u;
        goto label_fallthrough_0x234fa0;
    }
    ctx->pc = 0x234FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FA0u;
        // 0x234fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x234fa0:
    ctx->pc = 0x234FA8u;
}

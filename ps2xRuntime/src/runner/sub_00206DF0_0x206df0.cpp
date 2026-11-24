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

// Function: sub_00206DF0
// Address: 0x206df0 - 0x206e2c
void sub_00206DF0_0x206df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206DF0_0x206df0");
#endif

    switch (ctx->pc) {
        case 0x206e0cu: goto label_206e0c;
        case 0x206e20u: goto label_206e20;
        default: break;
    }

    ctx->pc = 0x206df0u;

    // 0x206df0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x206df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x206df4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206df8: 0x8c439f84  lw          $v1, -0x607C($v0)
    ctx->pc = 0x206df8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B9F84u));
    // 0x206dfc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x206DFCu;
    {
        const bool branch_taken_0x206dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DFCu;
        // 0x206e00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206dfc) {
            ctx->pc = 0x206E18u;
            goto label_206e18;
        }
    }
    ctx->pc = 0x206E04u;
    // 0x206e04: 0xc081b98  jal         func_206E60
    ctx->pc = 0x206E04u;
    SET_GPR_U32(ctx, 31, 0x206E0Cu);
    ctx->pc = 0x206E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206E60u, 0x206E04u, 0x206E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E0Cu;
label_206e0c:
    // 0x206e0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206E0Cu;
    {
        const bool branch_taken_0x206e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E0Cu;
        // 0x206e10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e0c) {
            ctx->pc = 0x206E24u;
            goto label_206e24;
        }
    }
    ctx->pc = 0x206E14u;
    // 0x206e14: 0x0  nop
    ctx->pc = 0x206e14u;
    // NOP
label_206e18:
    // 0x206e18: 0xc081b8c  jal         func_206E30
    ctx->pc = 0x206E18u;
    SET_GPR_U32(ctx, 31, 0x206E20u);
    ctx->pc = 0x206E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206E30u, 0x206E18u, 0x206E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E20u;
label_206e20:
    // 0x206e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206e24:
    // 0x206e24: 0x3e00008  jr          $ra
    ctx->pc = 0x206E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E24u;
        // 0x206e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206E2Cu;
}

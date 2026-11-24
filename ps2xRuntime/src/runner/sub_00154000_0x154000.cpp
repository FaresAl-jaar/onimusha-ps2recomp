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

// Function: sub_00154000
// Address: 0x154000 - 0x154028
void sub_00154000_0x154000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154000_0x154000");
#endif

    switch (ctx->pc) {
        case 0x154014u: goto label_154014;
        default: break;
    }

    ctx->pc = 0x154000u;

    // 0x154000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154004: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x154004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x154008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15400c: 0xc08c550  jal         func_231540
    ctx->pc = 0x15400Cu;
    SET_GPR_U32(ctx, 31, 0x154014u);
    ctx->pc = 0x154010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15400Cu;
    // 0x154010: 0x8c24ee98  lw          $a0, -0x1168($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962840)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231540u, 0x15400Cu, 0x154014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154014u;
label_154014:
    // 0x154014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154018: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x154018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x15401c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15401cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x154020: 0x3e00008  jr          $ra
    ctx->pc = 0x154020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154020u;
        // 0x154024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154028u;
}

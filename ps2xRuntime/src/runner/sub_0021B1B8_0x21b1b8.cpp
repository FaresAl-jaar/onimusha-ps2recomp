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

// Function: sub_0021B1B8
// Address: 0x21b1b8 - 0x21b1fc
void sub_0021B1B8_0x21b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B1B8_0x21b1b8");
#endif

    switch (ctx->pc) {
        case 0x21b1d4u: goto label_21b1d4;
        default: break;
    }

    ctx->pc = 0x21b1b8u;

    // 0x21b1b8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21b1bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b1bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b1c0: 0x8c43a200  lw          $v1, -0x5E00($v0)
    ctx->pc = 0x21b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BA200u));
    // 0x21b1c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21B1C4u;
    {
        const bool branch_taken_0x21b1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1C4u;
        // 0x21b1c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1c4) {
            ctx->pc = 0x21B1F0u;
            goto label_21b1f0;
        }
    }
    ctx->pc = 0x21B1CCu;
    // 0x21b1cc: 0xc042e24  jal         func_10B890
    ctx->pc = 0x21B1CCu;
    SET_GPR_U32(ctx, 31, 0x21B1D4u);
    ctx->pc = 0x10B890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B890u, 0x21B1CCu, 0x21B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B1D4u;
label_21b1d4:
    // 0x21b1d4: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x21b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x21b1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b1dc: 0x248459f0  addiu       $a0, $a0, 0x59F0
    ctx->pc = 0x21b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23024));
    // 0x21b1e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1e4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x21b1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x21b1e8: 0x807ec50  j           func_1FB140
    ctx->pc = 0x21B1E8u;
    ctx->pc = 0x21B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B1E8u;
    // 0x21b1ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB140u;
    sub_001FB140_0x1fb140(rdram, ctx, runtime); return;
    ctx->pc = 0x21B1F0u;
label_21b1f0:
    // 0x21b1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x21B1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1F4u;
        // 0x21b1f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B1FCu;
}

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

// Function: sub_00363430
// Address: 0x363430 - 0x363464
void sub_00363430_0x363430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363430_0x363430");
#endif

    switch (ctx->pc) {
        case 0x363454u: goto label_363454;
        default: break;
    }

    ctx->pc = 0x363430u;

    // 0x363430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363434: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x363434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x363438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36343c: 0x8c23c0f0  lw          $v1, -0x3F10($at)
    ctx->pc = 0x36343cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x91C0F0u));
    // 0x363440: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x363440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x363444: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x363444u;
    {
        const bool branch_taken_0x363444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x363448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363444u;
        // 0x363448: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363444) {
            ctx->pc = 0x363458u;
            goto label_363458;
        }
    }
    ctx->pc = 0x36344Cu;
    // 0x36344c: 0xc0d8b70  jal         func_362DC0
    ctx->pc = 0x36344Cu;
    SET_GPR_U32(ctx, 31, 0x363454u);
    ctx->pc = 0x363450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36344Cu;
    // 0x363450: 0xac24c0f0  sw          $a0, -0x3F10($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294951152), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362DC0u, 0x36344Cu, 0x363454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363454u;
label_363454:
    // 0x363454: 0x0  nop
    ctx->pc = 0x363454u;
    // NOP
label_363458:
    // 0x363458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36345c: 0x3e00008  jr          $ra
    ctx->pc = 0x36345Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36345Cu;
        // 0x363460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36345Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363464u;
}

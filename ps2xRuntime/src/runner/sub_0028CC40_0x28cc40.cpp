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

// Function: sub_0028CC40
// Address: 0x28cc40 - 0x28cc6c
void sub_0028CC40_0x28cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CC40_0x28cc40");
#endif

    switch (ctx->pc) {
        case 0x28cc60u: goto label_28cc60;
        default: break;
    }

    ctx->pc = 0x28cc40u;

    // 0x28cc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28cc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28cc48: 0x9083015d  lbu         $v1, 0x15D($a0)
    ctx->pc = 0x28cc48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 349)));
    // 0x28cc4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CC4Cu;
    {
        const bool branch_taken_0x28cc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC4Cu;
        // 0x28cc50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc4c) {
            ctx->pc = 0x28CC60u;
            goto label_28cc60;
        }
    }
    ctx->pc = 0x28CC54u;
    // 0x28cc54: 0x8c860150  lw          $a2, 0x150($a0)
    ctx->pc = 0x28cc54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x28cc58: 0xc0a2bf0  jal         func_28AFC0
    ctx->pc = 0x28CC58u;
    SET_GPR_U32(ctx, 31, 0x28CC60u);
    ctx->pc = 0x28CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC58u;
    // 0x28cc5c: 0x248500a0  addiu       $a1, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AFC0u, 0x28CC58u, 0x28CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC60u;
label_28cc60:
    // 0x28cc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cc64: 0x3e00008  jr          $ra
    ctx->pc = 0x28CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC64u;
        // 0x28cc68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CC6Cu;
}

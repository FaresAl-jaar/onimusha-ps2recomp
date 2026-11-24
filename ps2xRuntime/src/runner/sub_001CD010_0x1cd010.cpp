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

// Function: sub_001CD010
// Address: 0x1cd010 - 0x1cd06c
void sub_001CD010_0x1cd010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD010_0x1cd010");
#endif

    switch (ctx->pc) {
        case 0x1cd034u: goto label_1cd034;
        case 0x1cd048u: goto label_1cd048;
        case 0x1cd05cu: goto label_1cd05c;
        default: break;
    }

    ctx->pc = 0x1cd010u;

    // 0x1cd010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd014: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x1cd014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x1cd018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd01c: 0x248481b0  addiu       $a0, $a0, -0x7E50
    ctx->pc = 0x1cd01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
    // 0x1cd020: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd028: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd02c: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1CD02Cu;
    SET_GPR_U32(ctx, 31, 0x1CD034u);
    ctx->pc = 0x1CD030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD02Cu;
    // 0x1cd030: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1CD02Cu, 0x1CD034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD034u;
label_1cd034:
    // 0x1cd034: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x1cd034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x1cd038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd03c: 0x248481d0  addiu       $a0, $a0, -0x7E30
    ctx->pc = 0x1cd03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934992));
    // 0x1cd040: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1CD040u;
    SET_GPR_U32(ctx, 31, 0x1CD048u);
    ctx->pc = 0x1CD044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD040u;
    // 0x1cd044: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1CD040u, 0x1CD048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD048u;
label_1cd048:
    // 0x1cd048: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x1cd048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x1cd04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd050: 0x248481d0  addiu       $a0, $a0, -0x7E30
    ctx->pc = 0x1cd050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934992));
    // 0x1cd054: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1CD054u;
    SET_GPR_U32(ctx, 31, 0x1CD05Cu);
    ctx->pc = 0x1CD058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD054u;
    // 0x1cd058: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1CD054u, 0x1CD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD05Cu;
label_1cd05c:
    // 0x1cd05c: 0xa78087d0  sh          $zero, -0x7830($gp)
    ctx->pc = 0x1cd05cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936528), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cd060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd064: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD064u;
        // 0x1cd068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD06Cu;
}

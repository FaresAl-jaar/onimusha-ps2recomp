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

// Function: sub_00685D40
// Address: 0x685d40 - 0x685d7c
void sub_00685D40_0x685d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685D40_0x685d40");
#endif

    switch (ctx->pc) {
        case 0x685d54u: goto label_685d54;
        case 0x685d70u: goto label_685d70;
        default: break;
    }

    ctx->pc = 0x685d40u;

    // 0x685d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x685d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x685d44: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x685d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x685d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x685d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x685d4c: 0xc09c394  jal         func_270E50
    ctx->pc = 0x685D4Cu;
    SET_GPR_U32(ctx, 31, 0x685D54u);
    ctx->pc = 0x685D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685D4Cu;
    // 0x685d50: 0x24840620  addiu       $a0, $a0, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E50u, 0x685D4Cu, 0x685D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685D54u;
label_685d54:
    // 0x685d54: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x685d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x685d58: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x685d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x685d5c: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x685d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
    // 0x685d60: 0x24840620  addiu       $a0, $a0, 0x620
    ctx->pc = 0x685d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1568));
    // 0x685d64: 0x24a50e60  addiu       $a1, $a1, 0xE60
    ctx->pc = 0x685d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3680));
    // 0x685d68: 0xc040244  jal         func_100910
    ctx->pc = 0x685D68u;
    SET_GPR_U32(ctx, 31, 0x685D70u);
    ctx->pc = 0x685D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685D68u;
    // 0x685d6c: 0x24c60608  addiu       $a2, $a2, 0x608 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100910u, 0x685D68u, 0x685D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685D70u;
label_685d70:
    // 0x685d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x685d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x685d74: 0x3e00008  jr          $ra
    ctx->pc = 0x685D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x685D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x685D74u;
        // 0x685d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685D7Cu;
}

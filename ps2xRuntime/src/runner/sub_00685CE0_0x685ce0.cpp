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

// Function: sub_00685CE0
// Address: 0x685ce0 - 0x685d1c
void sub_00685CE0_0x685ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685CE0_0x685ce0");
#endif

    switch (ctx->pc) {
        case 0x685cf4u: goto label_685cf4;
        case 0x685d10u: goto label_685d10;
        default: break;
    }

    ctx->pc = 0x685ce0u;

    // 0x685ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x685ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x685ce4: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x685ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x685ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x685ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x685cec: 0xc0742c8  jal         func_1D0B20
    ctx->pc = 0x685CECu;
    SET_GPR_U32(ctx, 31, 0x685CF4u);
    ctx->pc = 0x685CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685CECu;
    // 0x685cf0: 0x2484cff0  addiu       $a0, $a0, -0x3010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B20u, 0x685CECu, 0x685CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685CF4u;
label_685cf4:
    // 0x685cf4: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x685cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x685cf8: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x685cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x685cfc: 0x3c060087  lui         $a2, 0x87
    ctx->pc = 0x685cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)135 << 16));
    // 0x685d00: 0x2484cff0  addiu       $a0, $a0, -0x3010
    ctx->pc = 0x685d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    // 0x685d04: 0x24a50cf0  addiu       $a1, $a1, 0xCF0
    ctx->pc = 0x685d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3312));
    // 0x685d08: 0xc040244  jal         func_100910
    ctx->pc = 0x685D08u;
    SET_GPR_U32(ctx, 31, 0x685D10u);
    ctx->pc = 0x685D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685D08u;
    // 0x685d0c: 0x24c6cfe0  addiu       $a2, $a2, -0x3020 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100910u, 0x685D08u, 0x685D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685D10u;
label_685d10:
    // 0x685d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x685d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x685d14: 0x3e00008  jr          $ra
    ctx->pc = 0x685D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x685D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x685D14u;
        // 0x685d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685D1Cu;
}

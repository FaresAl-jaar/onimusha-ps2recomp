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

// Function: sub_00207AF0
// Address: 0x207af0 - 0x207b1c
void sub_00207AF0_0x207af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207AF0_0x207af0");
#endif

    switch (ctx->pc) {
        case 0x207b04u: goto label_207b04;
        default: break;
    }

    ctx->pc = 0x207af0u;

    // 0x207af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x207af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x207af8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x207af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207afc: 0xc0877ec  jal         func_21DFB0
    ctx->pc = 0x207AFCu;
    SET_GPR_U32(ctx, 31, 0x207B04u);
    ctx->pc = 0x207B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207AFCu;
    // 0x207b00: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DFB0u, 0x207AFCu, 0x207B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B04u;
label_207b04:
    // 0x207b04: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x207b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x207b08: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x207b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x207b0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x207b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207b10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207b14: 0x3e00008  jr          $ra
    ctx->pc = 0x207B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B14u;
        // 0x207b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207B1Cu;
}

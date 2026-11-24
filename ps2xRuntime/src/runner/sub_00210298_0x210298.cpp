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

// Function: sub_00210298
// Address: 0x210298 - 0x2102c0
void sub_00210298_0x210298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210298_0x210298");
#endif

    switch (ctx->pc) {
        case 0x2102a8u: goto label_2102a8;
        default: break;
    }

    ctx->pc = 0x210298u;

    // 0x210298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21029c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2102a0: 0xc083d3c  jal         func_20F4F0
    ctx->pc = 0x2102A0u;
    SET_GPR_U32(ctx, 31, 0x2102A8u);
    ctx->pc = 0x2102A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102A0u;
    // 0x2102a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F4F0u, 0x2102A0u, 0x2102A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102A8u;
label_2102a8:
    // 0x2102a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2102a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2102ac: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2102acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2102b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2102b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2102b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2102b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2102b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2102B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2102BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102B8u;
        // 0x2102bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2102B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2102C0u;
}

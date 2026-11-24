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

// Function: sub_003F64A0
// Address: 0x3f64a0 - 0x3f64d4
void sub_003F64A0_0x3f64a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F64A0_0x3f64a0");
#endif

    switch (ctx->pc) {
        case 0x3f64c0u: goto label_3f64c0;
        case 0x3f64c8u: goto label_3f64c8;
        default: break;
    }

    ctx->pc = 0x3f64a0u;

    // 0x3f64a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f64a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f64a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f64a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f64a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f64a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f64ac: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x3f64acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f64b0: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x3f64b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f64b4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f64b8: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x3F64B8u;
    SET_GPR_U32(ctx, 31, 0x3F64C0u);
    ctx->pc = 0x3F64BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F64B8u;
    // 0x3f64bc: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x3F64B8u, 0x3F64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F64C0u;
label_3f64c0:
    // 0x3f64c0: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x3F64C0u;
    SET_GPR_U32(ctx, 31, 0x3F64C8u);
    ctx->pc = 0x3F64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F64C0u;
    // 0x3f64c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x3F64C0u, 0x3F64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F64C8u;
label_3f64c8:
    // 0x3f64c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f64c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f64cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F64CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F64CCu;
        // 0x3f64d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F64CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F64D4u;
}

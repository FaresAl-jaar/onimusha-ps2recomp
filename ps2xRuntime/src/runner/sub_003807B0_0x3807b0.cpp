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

// Function: sub_003807B0
// Address: 0x3807b0 - 0x3807e0
void sub_003807B0_0x3807b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003807B0_0x3807b0");
#endif

    switch (ctx->pc) {
        case 0x3807c4u: goto label_3807c4;
        default: break;
    }

    ctx->pc = 0x3807b0u;

    // 0x3807b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3807b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3807b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3807b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3807b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3807b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3807bc: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3807BCu;
    SET_GPR_U32(ctx, 31, 0x3807C4u);
    ctx->pc = 0x3807C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3807BCu;
    // 0x3807c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3807BCu, 0x3807C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3807C4u;
label_3807c4:
    // 0x3807c4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3807c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3807c8: 0x64630002  daddiu      $v1, $v1, 0x2
    ctx->pc = 0x3807c8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2);
    // 0x3807cc: 0xa2032b79  sb          $v1, 0x2B79($s0)
    ctx->pc = 0x3807ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11129), (uint8_t)GPR_U32(ctx, 3));
    // 0x3807d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3807d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3807d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3807d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3807d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3807D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3807DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3807D8u;
        // 0x3807dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3807D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3807E0u;
}

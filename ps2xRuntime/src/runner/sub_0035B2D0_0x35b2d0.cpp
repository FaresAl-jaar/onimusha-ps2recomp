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

// Function: sub_0035B2D0
// Address: 0x35b2d0 - 0x35b330
void sub_0035B2D0_0x35b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B2D0_0x35b2d0");
#endif

    switch (ctx->pc) {
        case 0x35b300u: goto label_35b300;
        case 0x35b318u: goto label_35b318;
        default: break;
    }

    ctx->pc = 0x35b2d0u;

    // 0x35b2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b2d4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35b2d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b2dc: 0x24428630  addiu       $v0, $v0, -0x79D0
    ctx->pc = 0x35b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
    // 0x35b2e0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35b2e0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x658630u));
    // 0x35b2e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x35b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35b2e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35b2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b2ec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x35b2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x35b2f0: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b2f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b2f8: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35B2F8u;
    SET_GPR_U32(ctx, 31, 0x35B300u);
    ctx->pc = 0x35B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B2F8u;
    // 0x35b2fc: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35B2F8u, 0x35B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B300u;
label_35b300:
    // 0x35b300: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b304: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x35b304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35b308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35b308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b30c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b310: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35B310u;
    SET_GPR_U32(ctx, 31, 0x35B318u);
    ctx->pc = 0x35B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B310u;
    // 0x35b314: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35B310u, 0x35B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B318u;
label_35b318:
    // 0x35b318: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b31c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b320: 0xa06403a2  sb          $a0, 0x3A2($v1)
    ctx->pc = 0x35b320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 930), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b328: 0x3e00008  jr          $ra
    ctx->pc = 0x35B328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B328u;
        // 0x35b32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B330u;
}

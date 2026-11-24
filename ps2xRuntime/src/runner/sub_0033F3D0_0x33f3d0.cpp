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

// Function: sub_0033F3D0
// Address: 0x33f3d0 - 0x33f418
void sub_0033F3D0_0x33f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F3D0_0x33f3d0");
#endif

    ctx->pc = 0x33f3d0u;

    // 0x33f3d0: 0x93838a94  lbu         $v1, -0x756C($gp)
    ctx->pc = 0x33f3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937236)));
    // 0x33f3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f3d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33F3D8u;
    {
        const bool branch_taken_0x33f3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33f3d8) {
            ctx->pc = 0x33F3E8u;
            goto label_33f3e8;
        }
    }
    ctx->pc = 0x33F3E0u;
    // 0x33f3e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33F3E0u;
    {
        const bool branch_taken_0x33f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f3e0) {
            ctx->pc = 0x33F410u;
            goto label_33f410;
        }
    }
    ctx->pc = 0x33F3E8u;
label_33f3e8:
    // 0x33f3e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f3ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33F3ECu;
    {
        const bool branch_taken_0x33f3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33f3ec) {
            ctx->pc = 0x33F408u;
            goto label_33f408;
        }
    }
    ctx->pc = 0x33F3F4u;
    // 0x33f3f4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x33f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x33f3f8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x33f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x33f3fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x33f3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x33f400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33F400u;
    {
        const bool branch_taken_0x33f400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F400u;
        // 0x33f404: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f400) {
            ctx->pc = 0x33F410u;
            goto label_33f410;
        }
    }
    ctx->pc = 0x33F408u;
label_33f408:
    // 0x33f408: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x33f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x33f40c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x33f40cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33f410:
    // 0x33f410: 0x3e00008  jr          $ra
    ctx->pc = 0x33F410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F418u;
}

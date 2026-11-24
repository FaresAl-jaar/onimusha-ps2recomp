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

// Function: sub_002283D0
// Address: 0x2283d0 - 0x228420
void sub_002283D0_0x2283d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002283D0_0x2283d0");
#endif

    switch (ctx->pc) {
        case 0x228404u: goto label_228404;
        default: break;
    }

    ctx->pc = 0x2283d0u;

    // 0x2283d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2283d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2283d4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2283d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2283d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2283d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2283dc: 0x2450ad68  addiu       $s0, $v0, -0x5298
    ctx->pc = 0x2283dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946152));
    // 0x2283e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2283e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BAD68u));
    // 0x2283e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2283e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2283e8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2283E8u;
    {
        const bool branch_taken_0x2283e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2283ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283E8u;
        // 0x2283ec: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2283e8) {
            ctx->pc = 0x228408u;
            goto label_228408;
        }
    }
    ctx->pc = 0x2283F0u;
    // 0x2283f0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2283f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2283f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2283f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283f8: 0x2484ad78  addiu       $a0, $a0, -0x5288
    ctx->pc = 0x2283f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    // 0x2283fc: 0xc049590  jal         func_125640
    ctx->pc = 0x2283FCu;
    SET_GPR_U32(ctx, 31, 0x228404u);
    ctx->pc = 0x228400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2283FCu;
    // 0x228400: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2283FCu, 0x228404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228404u;
label_228404:
    // 0x228404: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x228404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_228408:
    // 0x228408: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x228408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22840c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x228410: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x228410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x228414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228418: 0x3e00008  jr          $ra
    ctx->pc = 0x228418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228418u;
        // 0x22841c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228420u;
}

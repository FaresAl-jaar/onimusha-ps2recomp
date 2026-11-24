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

// Function: sub_00228380
// Address: 0x228380 - 0x2283cc
void sub_00228380_0x228380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228380_0x228380");
#endif

    switch (ctx->pc) {
        case 0x2283b0u: goto label_2283b0;
        default: break;
    }

    ctx->pc = 0x228380u;

    // 0x228380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228384: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x228384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x228388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22838c: 0x2470ad68  addiu       $s0, $v1, -0x5298
    ctx->pc = 0x22838cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946152));
    // 0x228390: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x228390u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BAD68u));
    // 0x228394: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228394u;
    {
        const bool branch_taken_0x228394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x228398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228394u;
        // 0x228398: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228394) {
            ctx->pc = 0x2283B4u;
            goto label_2283b4;
        }
    }
    ctx->pc = 0x22839Cu;
    // 0x22839c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22839cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2283a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2283a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2283a4: 0x2484ad78  addiu       $a0, $a0, -0x5288
    ctx->pc = 0x2283a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946168));
    // 0x2283a8: 0xc049590  jal         func_125640
    ctx->pc = 0x2283A8u;
    SET_GPR_U32(ctx, 31, 0x2283B0u);
    ctx->pc = 0x2283ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2283A8u;
    // 0x2283ac: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2283A8u, 0x2283B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2283B0u;
label_2283b0:
    // 0x2283b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2283b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2283b4:
    // 0x2283b4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2283b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2283b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2283b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2283bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2283bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2283c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2283c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2283c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2283C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2283C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283C4u;
        // 0x2283c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2283CCu;
}

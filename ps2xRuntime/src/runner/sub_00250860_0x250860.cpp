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

// Function: sub_00250860
// Address: 0x250860 - 0x2508ac
void sub_00250860_0x250860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250860_0x250860");
#endif

    ctx->pc = 0x250860u;

    // 0x250860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250864: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x250864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x250868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25086c: 0x2463ad78  addiu       $v1, $v1, -0x5288
    ctx->pc = 0x25086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946168));
    // 0x250870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x250870u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DAD78u));
    // 0x250874: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x250874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x250878: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x250878u;
    {
        const bool branch_taken_0x250878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250878u;
        // 0x25087c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250878) {
            ctx->pc = 0x2508A0u;
            goto label_2508a0;
        }
    }
    ctx->pc = 0x250880u;
    // 0x250880: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x250880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x250884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25088c: 0x2484ad80  addiu       $a0, $a0, -0x5280
    ctx->pc = 0x25088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946176));
    // 0x250890: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x250890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x250894: 0x8049590  j           func_125640
    ctx->pc = 0x250894u;
    ctx->pc = 0x250898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250894u;
    // 0x250898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x25089Cu;
    // 0x25089c: 0x0  nop
    ctx->pc = 0x25089cu;
    // NOP
label_2508a0:
    // 0x2508a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2508a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2508a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2508A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2508A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508A4u;
        // 0x2508a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2508ACu;
}

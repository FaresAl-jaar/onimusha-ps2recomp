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

// Function: sub_0020D828
// Address: 0x20d828 - 0x20d850
void sub_0020D828_0x20d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D828_0x20d828");
#endif

    switch (ctx->pc) {
        case 0x20d83cu: goto label_20d83c;
        default: break;
    }

    ctx->pc = 0x20d828u;

    // 0x20d828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d82c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d830: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x20d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20d834: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x20D834u;
    SET_GPR_U32(ctx, 31, 0x20D83Cu);
    ctx->pc = 0x20D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D834u;
    // 0x20d838: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x20D834u, 0x20D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D83Cu;
label_20d83c:
    // 0x20d83c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x20d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x20d840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d844: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20d844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20d848: 0x3e00008  jr          $ra
    ctx->pc = 0x20D848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D848u;
        // 0x20d84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D850u;
}

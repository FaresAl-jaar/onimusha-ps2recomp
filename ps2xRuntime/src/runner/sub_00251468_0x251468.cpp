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

// Function: sub_00251468
// Address: 0x251468 - 0x2514b4
void sub_00251468_0x251468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251468_0x251468");
#endif

    ctx->pc = 0x251468u;

    // 0x251468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25146c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x25146cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x251470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x251474: 0x2463edb0  addiu       $v1, $v1, -0x1250
    ctx->pc = 0x251474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962608));
    // 0x251478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x251478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DEDB0u));
    // 0x25147c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x251480: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251480u;
    {
        const bool branch_taken_0x251480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251480u;
        // 0x251484: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251480) {
            ctx->pc = 0x2514A8u;
            goto label_2514a8;
        }
    }
    ctx->pc = 0x251488u;
    // 0x251488: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x251488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x25148c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25148cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x251490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251494: 0x2484edb8  addiu       $a0, $a0, -0x1248
    ctx->pc = 0x251494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962616));
    // 0x251498: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x251498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x25149c: 0x8049590  j           func_125640
    ctx->pc = 0x25149Cu;
    ctx->pc = 0x2514A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25149Cu;
    // 0x2514a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x2514A4u;
    // 0x2514a4: 0x0  nop
    ctx->pc = 0x2514a4u;
    // NOP
label_2514a8:
    // 0x2514a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2514a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2514ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2514ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2514B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514ACu;
        // 0x2514b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2514ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2514B4u;
}

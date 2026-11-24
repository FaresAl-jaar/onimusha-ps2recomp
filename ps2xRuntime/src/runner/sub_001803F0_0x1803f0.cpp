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

// Function: sub_001803F0
// Address: 0x1803f0 - 0x18041c
void sub_001803F0_0x1803f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001803F0_0x1803f0");
#endif

    switch (ctx->pc) {
        case 0x180410u: goto label_180410;
        default: break;
    }

    ctx->pc = 0x1803f0u;

    // 0x1803f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1803f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1803f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1803f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1803f8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1803f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1803fc: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x1803fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x180400: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180400u;
    {
        const bool branch_taken_0x180400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180400u;
        // 0x180404: 0xac8600bc  sw          $a2, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180400) {
            ctx->pc = 0x180410u;
            goto label_180410;
        }
    }
    ctx->pc = 0x180408u;
    // 0x180408: 0xc0601a4  jal         func_180690
    ctx->pc = 0x180408u;
    SET_GPR_U32(ctx, 31, 0x180410u);
    ctx->pc = 0x18040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180408u;
    // 0x18040c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180690u, 0x180408u, 0x180410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180410u;
label_180410:
    // 0x180410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180414: 0x3e00008  jr          $ra
    ctx->pc = 0x180414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180414u;
        // 0x180418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18041Cu;
}

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

// Function: sub_00211760
// Address: 0x211760 - 0x211784
void sub_00211760_0x211760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211760_0x211760");
#endif

    switch (ctx->pc) {
        case 0x211770u: goto label_211770;
        default: break;
    }

    ctx->pc = 0x211760u;

    // 0x211760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211768: 0xc0845e2  jal         func_211788
    ctx->pc = 0x211768u;
    SET_GPR_U32(ctx, 31, 0x211770u);
    ctx->pc = 0x211788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211788u, 0x211768u, 0x211770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211770u;
label_211770:
    // 0x211770: 0x384201bf  xori        $v0, $v0, 0x1BF
    ctx->pc = 0x211770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)447);
    // 0x211774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211778: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x211778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x21177c: 0x3e00008  jr          $ra
    ctx->pc = 0x21177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21177Cu;
        // 0x211780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21177Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211784u;
}

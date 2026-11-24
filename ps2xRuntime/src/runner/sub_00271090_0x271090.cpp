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

// Function: sub_00271090
// Address: 0x271090 - 0x2710dc
void sub_00271090_0x271090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271090_0x271090");
#endif

    switch (ctx->pc) {
        case 0x2710b4u: goto label_2710b4;
        case 0x2710c0u: goto label_2710c0;
        case 0x2710d0u: goto label_2710d0;
        default: break;
    }

    ctx->pc = 0x271090u;

    // 0x271090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x271090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x271094: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x271094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x271098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27109c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x27109cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2710a0: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2710a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2710a4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x2710a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x2710a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2710a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710ac: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x2710ACu;
    SET_GPR_U32(ctx, 31, 0x2710B4u);
    ctx->pc = 0x2710B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710ACu;
    // 0x2710b0: 0xaf828894  sw          $v0, -0x776C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936724), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x2710ACu, 0x2710B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710B4u;
label_2710b4:
    // 0x2710b4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2710b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2710b8: 0xc052260  jal         func_148980
    ctx->pc = 0x2710B8u;
    SET_GPR_U32(ctx, 31, 0x2710C0u);
    ctx->pc = 0x2710BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710B8u;
    // 0x2710bc: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x2710B8u, 0x2710C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710C0u;
label_2710c0:
    // 0x2710c0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2710c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2710c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2710c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710c8: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x2710C8u;
    SET_GPR_U32(ctx, 31, 0x2710D0u);
    ctx->pc = 0x2710CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710C8u;
    // 0x2710cc: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x2710C8u, 0x2710D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710D0u;
label_2710d0:
    // 0x2710d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2710d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2710d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2710D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2710D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710D4u;
        // 0x2710d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2710D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2710DCu;
}

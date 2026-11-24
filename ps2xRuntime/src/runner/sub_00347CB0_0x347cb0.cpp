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

// Function: sub_00347CB0
// Address: 0x347cb0 - 0x347ce8
void sub_00347CB0_0x347cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347CB0_0x347cb0");
#endif

    switch (ctx->pc) {
        case 0x347cc4u: goto label_347cc4;
        case 0x347cccu: goto label_347ccc;
        case 0x347cdcu: goto label_347cdc;
        default: break;
    }

    ctx->pc = 0x347cb0u;

    // 0x347cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347cb4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x347cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x347cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347cbc: 0xc0c8a14  jal         func_322850
    ctx->pc = 0x347CBCu;
    SET_GPR_U32(ctx, 31, 0x347CC4u);
    ctx->pc = 0x347CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347CBCu;
    // 0x347cc0: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322850u, 0x347CBCu, 0x347CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CC4u;
label_347cc4:
    // 0x347cc4: 0xc0cfc98  jal         func_33F260
    ctx->pc = 0x347CC4u;
    SET_GPR_U32(ctx, 31, 0x347CCCu);
    ctx->pc = 0x347CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347CC4u;
    // 0x347cc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F260u, 0x347CC4u, 0x347CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CCCu;
label_347ccc:
    // 0x347ccc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x347cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x347cd0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x347cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347cd4: 0xc0d0a70  jal         func_3429C0
    ctx->pc = 0x347CD4u;
    SET_GPR_U32(ctx, 31, 0x347CDCu);
    ctx->pc = 0x347CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347CD4u;
    // 0x347cd8: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429C0u, 0x347CD4u, 0x347CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CDCu;
label_347cdc:
    // 0x347cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x347CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CE0u;
        // 0x347ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347CE8u;
}

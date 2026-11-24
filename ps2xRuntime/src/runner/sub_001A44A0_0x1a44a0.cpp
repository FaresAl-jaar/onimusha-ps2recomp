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

// Function: sub_001A44A0
// Address: 0x1a44a0 - 0x1a44dc
void sub_001A44A0_0x1a44a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A44A0_0x1a44a0");
#endif

    switch (ctx->pc) {
        case 0x1a44bcu: goto label_1a44bc;
        case 0x1a44c8u: goto label_1a44c8;
        default: break;
    }

    ctx->pc = 0x1a44a0u;

    // 0x1a44a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a44a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a44a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a44a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a44a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a44a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a44ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a44acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a44b0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x1a44b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x1a44b4: 0xc0c8bb0  jal         func_322EC0
    ctx->pc = 0x1A44B4u;
    SET_GPR_U32(ctx, 31, 0x1A44BCu);
    ctx->pc = 0x1A44B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44B4u;
    // 0x1a44b8: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322EC0u, 0x1A44B4u, 0x1A44BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44BCu;
label_1a44bc:
    // 0x1a44bc: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x1a44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x1a44c0: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x1A44C0u;
    SET_GPR_U32(ctx, 31, 0x1A44C8u);
    ctx->pc = 0x1A44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44C0u;
    // 0x1a44c4: 0x2484ea40  addiu       $a0, $a0, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212A0u, 0x1A44C0u, 0x1A44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44C8u;
label_1a44c8:
    // 0x1a44c8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1a44c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a44cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a44ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a44d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a44d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a44d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A44D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44D4u;
        // 0x1a44d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44DCu;
}

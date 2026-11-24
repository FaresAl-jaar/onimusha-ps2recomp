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

// Function: sub_00230D50
// Address: 0x230d50 - 0x230d88
void sub_00230D50_0x230d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230D50_0x230d50");
#endif

    switch (ctx->pc) {
        case 0x230d64u: goto label_230d64;
        case 0x230d6cu: goto label_230d6c;
        case 0x230d74u: goto label_230d74;
        default: break;
    }

    ctx->pc = 0x230d50u;

    // 0x230d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x230d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230d58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x230d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x230d5c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x230D5Cu;
    SET_GPR_U32(ctx, 31, 0x230D64u);
    ctx->pc = 0x230D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D5Cu;
    // 0x230d60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x230D5Cu, 0x230D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D64u;
label_230d64:
    // 0x230d64: 0xc08c362  jal         func_230D88
    ctx->pc = 0x230D64u;
    SET_GPR_U32(ctx, 31, 0x230D6Cu);
    ctx->pc = 0x230D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D64u;
    // 0x230d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D88u, 0x230D64u, 0x230D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D6Cu;
label_230d6c:
    // 0x230d6c: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x230D6Cu;
    SET_GPR_U32(ctx, 31, 0x230D74u);
    ctx->pc = 0x230D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D6Cu;
    // 0x230d70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x230D6Cu, 0x230D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D74u;
label_230d74:
    // 0x230d74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x230d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230d78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230d80: 0x3e00008  jr          $ra
    ctx->pc = 0x230D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D80u;
        // 0x230d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D88u;
}

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

// Function: sub_002B0100
// Address: 0x2b0100 - 0x2b0138
void sub_002B0100_0x2b0100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0100_0x2b0100");
#endif

    switch (ctx->pc) {
        case 0x2b0120u: goto label_2b0120;
        case 0x2b0128u: goto label_2b0128;
        default: break;
    }

    ctx->pc = 0x2b0100u;

    // 0x2b0100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b0104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b0108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b010c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b0110: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0110u;
    {
        const bool branch_taken_0x2b0110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0110u;
        // 0x2b0114: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0110) {
            ctx->pc = 0x2B0120u;
            goto label_2b0120;
        }
    }
    ctx->pc = 0x2B0118u;
    // 0x2b0118: 0xc08d4ec  jal         func_2353B0
    ctx->pc = 0x2B0118u;
    SET_GPR_U32(ctx, 31, 0x2B0120u);
    ctx->pc = 0x2353B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2353B0u, 0x2B0118u, 0x2B0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0120u;
label_2b0120:
    // 0x2b0120: 0xc08163c  jal         func_2058F0
    ctx->pc = 0x2B0120u;
    SET_GPR_U32(ctx, 31, 0x2B0128u);
    ctx->pc = 0x2B0124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0120u;
    // 0x2b0124: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058F0u, 0x2B0120u, 0x2B0128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0128u;
label_2b0128:
    // 0x2b0128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b012c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b012cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0130: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0130u;
        // 0x2b0134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0138u;
}

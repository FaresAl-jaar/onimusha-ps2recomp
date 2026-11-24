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

// Function: sub_003B59C0
// Address: 0x3b59c0 - 0x3b5a08
void sub_003B59C0_0x3b59c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B59C0_0x3b59c0");
#endif

    switch (ctx->pc) {
        case 0x3b59d4u: goto label_3b59d4;
        case 0x3b59ecu: goto label_3b59ec;
        case 0x3b59f8u: goto label_3b59f8;
        default: break;
    }

    ctx->pc = 0x3b59c0u;

    // 0x3b59c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b59c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b59c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b59c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b59c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b59c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b59cc: 0xc0ed644  jal         func_3B5910
    ctx->pc = 0x3B59CCu;
    SET_GPR_U32(ctx, 31, 0x3B59D4u);
    ctx->pc = 0x3B59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B59CCu;
    // 0x3b59d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5910u, 0x3B59CCu, 0x3B59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B59D4u;
label_3b59d4:
    // 0x3b59d4: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x3b59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3b59d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b59d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b59dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B59DCu;
    {
        const bool branch_taken_0x3b59dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B59DCu;
        // 0x3b59e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b59dc) {
            ctx->pc = 0x3B59F0u;
            goto label_3b59f0;
        }
    }
    ctx->pc = 0x3B59E4u;
    // 0x3b59e4: 0xc0ed64c  jal         func_3B5930
    ctx->pc = 0x3B59E4u;
    SET_GPR_U32(ctx, 31, 0x3B59ECu);
    ctx->pc = 0x3B5930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5930u, 0x3B59E4u, 0x3B59ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B59ECu;
label_3b59ec:
    // 0x3b59ec: 0x0  nop
    ctx->pc = 0x3b59ecu;
    // NOP
label_3b59f0:
    // 0x3b59f0: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3B59F0u;
    SET_GPR_U32(ctx, 31, 0x3B59F8u);
    ctx->pc = 0x3B59F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B59F0u;
    // 0x3b59f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3B59F0u, 0x3B59F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B59F8u;
label_3b59f8:
    // 0x3b59f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b59f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b59fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b59fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5a00: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5A00u;
        // 0x3b5a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5A08u;
}

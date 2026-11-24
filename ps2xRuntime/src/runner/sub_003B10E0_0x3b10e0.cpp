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

// Function: sub_003B10E0
// Address: 0x3b10e0 - 0x3b1114
void sub_003B10E0_0x3b10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B10E0_0x3b10e0");
#endif

    switch (ctx->pc) {
        case 0x3b10f8u: goto label_3b10f8;
        case 0x3b1104u: goto label_3b1104;
        default: break;
    }

    ctx->pc = 0x3b10e0u;

    // 0x3b10e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b10e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b10e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b10e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b10e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b10e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b10ec: 0x8c850550  lw          $a1, 0x550($a0)
    ctx->pc = 0x3b10ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x3b10f0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3B10F0u;
    SET_GPR_U32(ctx, 31, 0x3B10F8u);
    ctx->pc = 0x3B10F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B10F0u;
    // 0x3b10f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3B10F0u, 0x3B10F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B10F8u;
label_3b10f8:
    // 0x3b10f8: 0x8e050554  lw          $a1, 0x554($s0)
    ctx->pc = 0x3b10f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x3b10fc: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3B10FCu;
    SET_GPR_U32(ctx, 31, 0x3B1104u);
    ctx->pc = 0x3B1100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B10FCu;
    // 0x3b1100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3B10FCu, 0x3B1104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1104u;
label_3b1104:
    // 0x3b1104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b1108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b110c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B110Cu;
        // 0x3b1110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B110Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1114u;
}

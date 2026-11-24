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

// Function: sub_003C8CE0
// Address: 0x3c8ce0 - 0x3c8d10
void sub_003C8CE0_0x3c8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8CE0_0x3c8ce0");
#endif

    switch (ctx->pc) {
        case 0x3c8cf8u: goto label_3c8cf8;
        case 0x3c8d00u: goto label_3c8d00;
        default: break;
    }

    ctx->pc = 0x3c8ce0u;

    // 0x3c8ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c8ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c8ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c8ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c8ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c8ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c8cec: 0x8c8505a0  lw          $a1, 0x5A0($a0)
    ctx->pc = 0x3c8cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
    // 0x3c8cf0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3C8CF0u;
    SET_GPR_U32(ctx, 31, 0x3C8CF8u);
    ctx->pc = 0x3C8CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8CF0u;
    // 0x3c8cf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3C8CF0u, 0x3C8CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8CF8u;
label_3c8cf8:
    // 0x3c8cf8: 0xc0f1ea4  jal         func_3C7A90
    ctx->pc = 0x3C8CF8u;
    SET_GPR_U32(ctx, 31, 0x3C8D00u);
    ctx->pc = 0x3C8CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8CF8u;
    // 0x3c8cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7A90u, 0x3C8CF8u, 0x3C8D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D00u;
label_3c8d00:
    // 0x3c8d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c8d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c8d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8d08: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D08u;
        // 0x3c8d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C8D10u;
}

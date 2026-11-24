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

// Function: sub_0038D8C0
// Address: 0x38d8c0 - 0x38d8f8
void sub_0038D8C0_0x38d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D8C0_0x38d8c0");
#endif

    switch (ctx->pc) {
        case 0x38d8e4u: goto label_38d8e4;
        default: break;
    }

    ctx->pc = 0x38d8c0u;

    // 0x38d8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38d8c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38d8c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38d8cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d8d0: 0x8c840408  lw          $a0, 0x408($a0)
    ctx->pc = 0x38d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1032)));
    // 0x38d8d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D8D4u;
    {
        const bool branch_taken_0x38d8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8D4u;
        // 0x38d8d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d8d4) {
            ctx->pc = 0x38D8E8u;
            goto label_38d8e8;
        }
    }
    ctx->pc = 0x38D8DCu;
    // 0x38d8dc: 0xc09985c  jal         func_266170
    ctx->pc = 0x38D8DCu;
    SET_GPR_U32(ctx, 31, 0x38D8E4u);
    ctx->pc = 0x38D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D8DCu;
    // 0x38d8e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266170u, 0x38D8DCu, 0x38D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D8E4u;
label_38d8e4:
    // 0x38d8e4: 0xae000408  sw          $zero, 0x408($s0)
    ctx->pc = 0x38d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 0));
label_38d8e8:
    // 0x38d8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d8ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x38D8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8F0u;
        // 0x38d8f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D8F8u;
}

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

// Function: sub_002A7D00
// Address: 0x2a7d00 - 0x2a7d3c
void sub_002A7D00_0x2a7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7D00_0x2a7d00");
#endif

    switch (ctx->pc) {
        case 0x2a7d30u: goto label_2a7d30;
        default: break;
    }

    ctx->pc = 0x2a7d00u;

    // 0x2a7d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7d04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d08: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7d08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d0c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a7d0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7d14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d18: 0x3405fab4  ori         $a1, $zero, 0xFAB4
    ctx->pc = 0x2a7d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64180);
    // 0x2a7d1c: 0x24060114  addiu       $a2, $zero, 0x114
    ctx->pc = 0x2a7d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x2a7d20: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7d24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7d24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d28: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A7D28u;
    SET_GPR_U32(ctx, 31, 0x2A7D30u);
    ctx->pc = 0x2A7D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7D28u;
    // 0x2a7d2c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A7D28u, 0x2A7D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D30u;
label_2a7d30:
    // 0x2a7d30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7d34: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D34u;
        // 0x2a7d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7D3Cu;
}

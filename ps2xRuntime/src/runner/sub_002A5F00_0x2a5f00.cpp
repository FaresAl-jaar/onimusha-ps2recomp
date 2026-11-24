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

// Function: sub_002A5F00
// Address: 0x2a5f00 - 0x2a5f3c
void sub_002A5F00_0x2a5f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5F00_0x2a5f00");
#endif

    switch (ctx->pc) {
        case 0x2a5f30u: goto label_2a5f30;
        default: break;
    }

    ctx->pc = 0x2a5f00u;

    // 0x2a5f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5f04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a5f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f08: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a5f08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f0c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a5f0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5f14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f18: 0x24057f20  addiu       $a1, $zero, 0x7F20
    ctx->pc = 0x2a5f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32544));
    // 0x2a5f1c: 0x24060174  addiu       $a2, $zero, 0x174
    ctx->pc = 0x2a5f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x2a5f20: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5f24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5f24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f28: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A5F28u;
    SET_GPR_U32(ctx, 31, 0x2A5F30u);
    ctx->pc = 0x2A5F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F28u;
    // 0x2a5f2c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A5F28u, 0x2A5F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F30u;
label_2a5f30:
    // 0x2a5f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F34u;
        // 0x2a5f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5F3Cu;
}

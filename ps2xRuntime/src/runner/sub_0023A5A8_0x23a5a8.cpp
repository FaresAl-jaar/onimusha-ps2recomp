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

// Function: sub_0023A5A8
// Address: 0x23a5a8 - 0x23a5e0
void sub_0023A5A8_0x23a5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A5A8_0x23a5a8");
#endif

    switch (ctx->pc) {
        case 0x23a5bcu: goto label_23a5bc;
        case 0x23a5c4u: goto label_23a5c4;
        case 0x23a5ccu: goto label_23a5cc;
        default: break;
    }

    ctx->pc = 0x23a5a8u;

    // 0x23a5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a5b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23a5b4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23A5B4u;
    SET_GPR_U32(ctx, 31, 0x23A5BCu);
    ctx->pc = 0x23A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A5B4u;
    // 0x23a5b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23A5B4u, 0x23A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A5BCu;
label_23a5bc:
    // 0x23a5bc: 0xc08e978  jal         func_23A5E0
    ctx->pc = 0x23A5BCu;
    SET_GPR_U32(ctx, 31, 0x23A5C4u);
    ctx->pc = 0x23A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A5BCu;
    // 0x23a5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5E0u, 0x23A5BCu, 0x23A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A5C4u;
label_23a5c4:
    // 0x23a5c4: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23A5C4u;
    SET_GPR_U32(ctx, 31, 0x23A5CCu);
    ctx->pc = 0x23A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A5C4u;
    // 0x23a5c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23A5C4u, 0x23A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A5CCu;
label_23a5cc:
    // 0x23a5cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23a5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a5d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x23A5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5D8u;
        // 0x23a5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A5E0u;
}

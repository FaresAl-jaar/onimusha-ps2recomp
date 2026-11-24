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

// Function: sub_002A7BB0
// Address: 0x2a7bb0 - 0x2a7bec
void sub_002A7BB0_0x2a7bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7BB0_0x2a7bb0");
#endif

    switch (ctx->pc) {
        case 0x2a7be0u: goto label_2a7be0;
        default: break;
    }

    ctx->pc = 0x2a7bb0u;

    // 0x2a7bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7bb4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bb8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7bb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bbc: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a7bbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bc8: 0x3405f3c0  ori         $a1, $zero, 0xF3C0
    ctx->pc = 0x2a7bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62400);
    // 0x2a7bcc: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x2a7bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2a7bd0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7bd4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7bd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bd8: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A7BD8u;
    SET_GPR_U32(ctx, 31, 0x2A7BE0u);
    ctx->pc = 0x2A7BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7BD8u;
    // 0x2a7bdc: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A7BD8u, 0x2A7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BE0u;
label_2a7be0:
    // 0x2a7be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BE4u;
        // 0x2a7be8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7BECu;
}

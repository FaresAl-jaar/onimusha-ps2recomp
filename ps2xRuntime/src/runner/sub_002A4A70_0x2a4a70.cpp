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

// Function: sub_002A4A70
// Address: 0x2a4a70 - 0x2a4ab0
void sub_002A4A70_0x2a4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4A70_0x2a4a70");
#endif

    switch (ctx->pc) {
        case 0x2a4aa4u: goto label_2a4aa4;
        default: break;
    }

    ctx->pc = 0x2a4a70u;

    // 0x2a4a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4a74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a4a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a4a7c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a4a7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a80: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a4a80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a84: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2a4a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2a4a88: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4a8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a90: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a4a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a4a94: 0x24052d00  addiu       $a1, $zero, 0x2D00
    ctx->pc = 0x2a4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11520));
    // 0x2a4a98: 0x24060108  addiu       $a2, $zero, 0x108
    ctx->pc = 0x2a4a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x2a4a9c: 0xc0f8304  jal         func_3E0C10
    ctx->pc = 0x2A4A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A4AA4u);
    ctx->pc = 0x2A4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A9Cu;
    // 0x2a4aa0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0C10u, 0x2A4A9Cu, 0x2A4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AA4u;
label_2a4aa4:
    // 0x2a4aa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4AA8u;
        // 0x2a4aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4AB0u;
}

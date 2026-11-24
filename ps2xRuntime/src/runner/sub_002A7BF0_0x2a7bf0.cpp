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

// Function: sub_002A7BF0
// Address: 0x2a7bf0 - 0x2a7c38
void sub_002A7BF0_0x2a7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7BF0_0x2a7bf0");
#endif

    switch (ctx->pc) {
        case 0x2a7c2cu: goto label_2a7c2c;
        default: break;
    }

    ctx->pc = 0x2a7bf0u;

    // 0x2a7bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a7bf4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a7bf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7bf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a7bfc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a7c00: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a7c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a7c04: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7c04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c08: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a7c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a7c0c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a7c0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c10: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c14: 0x3405f670  ori         $a1, $zero, 0xF670
    ctx->pc = 0x2a7c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63088);
    // 0x2a7c18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c1c: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2a7c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2a7c20: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7c24: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A7C24u;
    SET_GPR_U32(ctx, 31, 0x2A7C2Cu);
    ctx->pc = 0x2A7C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7C24u;
    // 0x2a7c28: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A7C24u, 0x2A7C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C2Cu;
label_2a7c2c:
    // 0x2a7c2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a7c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7c30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C30u;
        // 0x2a7c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7C38u;
}

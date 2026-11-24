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

// Function: sub_002A6C10
// Address: 0x2a6c10 - 0x2a6c4c
void sub_002A6C10_0x2a6c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6C10_0x2a6c10");
#endif

    switch (ctx->pc) {
        case 0x2a6c40u: goto label_2a6c40;
        default: break;
    }

    ctx->pc = 0x2a6c10u;

    // 0x2a6c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6c14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a6c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c18: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a6c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c1c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a6c1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6c24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c28: 0x3405ad14  ori         $a1, $zero, 0xAD14
    ctx->pc = 0x2a6c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44308);
    // 0x2a6c2c: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x2a6c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2a6c30: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6c34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6c34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c38: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A6C38u;
    SET_GPR_U32(ctx, 31, 0x2A6C40u);
    ctx->pc = 0x2A6C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6C38u;
    // 0x2a6c3c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A6C38u, 0x2A6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C40u;
label_2a6c40:
    // 0x2a6c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C44u;
        // 0x2a6c48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6C4Cu;
}

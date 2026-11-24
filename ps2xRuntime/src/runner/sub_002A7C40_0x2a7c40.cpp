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

// Function: sub_002A7C40
// Address: 0x2a7c40 - 0x2a7c80
void sub_002A7C40_0x2a7c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7C40_0x2a7c40");
#endif

    switch (ctx->pc) {
        case 0x2a7c74u: goto label_2a7c74;
        default: break;
    }

    ctx->pc = 0x2a7c40u;

    // 0x2a7c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7c44: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7c44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7c4c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a7c4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c50: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a7c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a7c54: 0x3405f6ec  ori         $a1, $zero, 0xF6EC
    ctx->pc = 0x2a7c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63212);
    // 0x2a7c58: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c5c: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x2a7c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x2a7c60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c64: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7c68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7c68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7c6c: 0xc097cdc  jal         func_25F370
    ctx->pc = 0x2A7C6Cu;
    SET_GPR_U32(ctx, 31, 0x2A7C74u);
    ctx->pc = 0x2A7C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7C6Cu;
    // 0x2a7c70: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F370u, 0x2A7C6Cu, 0x2A7C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C74u;
label_2a7c74:
    // 0x2a7c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7c78: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C78u;
        // 0x2a7c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7C80u;
}

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

// Function: sub_002A7B30
// Address: 0x2a7b30 - 0x2a7b6c
void sub_002A7B30_0x2a7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7B30_0x2a7b30");
#endif

    switch (ctx->pc) {
        case 0x2a7b60u: goto label_2a7b60;
        default: break;
    }

    ctx->pc = 0x2a7b30u;

    // 0x2a7b30: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a7b30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7b38: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7b38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b3c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a7b3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b40: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7b48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b4c: 0x3405f084  ori         $a1, $zero, 0xF084
    ctx->pc = 0x2a7b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61572);
    // 0x2a7b50: 0x240601e0  addiu       $a2, $zero, 0x1E0
    ctx->pc = 0x2a7b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x2a7b54: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7b58: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A7B58u;
    SET_GPR_U32(ctx, 31, 0x2A7B60u);
    ctx->pc = 0x2A7B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7B58u;
    // 0x2a7b5c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A7B58u, 0x2A7B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B60u;
label_2a7b60:
    // 0x2a7b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7b64: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B64u;
        // 0x2a7b68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7B6Cu;
}

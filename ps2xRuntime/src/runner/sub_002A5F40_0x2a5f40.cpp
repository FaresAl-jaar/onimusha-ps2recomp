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

// Function: sub_002A5F40
// Address: 0x2a5f40 - 0x2a5f7c
void sub_002A5F40_0x2a5f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5F40_0x2a5f40");
#endif

    switch (ctx->pc) {
        case 0x2a5f70u: goto label_2a5f70;
        default: break;
    }

    ctx->pc = 0x2a5f40u;

    // 0x2a5f40: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a5f40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5f48: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a5f48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f4c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a5f4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f50: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a5f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5f58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5f5c: 0x340580e4  ori         $a1, $zero, 0x80E4
    ctx->pc = 0x2a5f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32996);
    // 0x2a5f60: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2a5f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a5f64: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5f68: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A5F68u;
    SET_GPR_U32(ctx, 31, 0x2A5F70u);
    ctx->pc = 0x2A5F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5F68u;
    // 0x2a5f6c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A5F68u, 0x2A5F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F70u;
label_2a5f70:
    // 0x2a5f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5f74: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5F74u;
        // 0x2a5f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5F7Cu;
}

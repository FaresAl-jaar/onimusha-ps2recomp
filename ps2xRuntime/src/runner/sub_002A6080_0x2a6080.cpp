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

// Function: sub_002A6080
// Address: 0x2a6080 - 0x2a60bc
void sub_002A6080_0x2a6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6080_0x2a6080");
#endif

    switch (ctx->pc) {
        case 0x2a60b0u: goto label_2a60b0;
        default: break;
    }

    ctx->pc = 0x2a6080u;

    // 0x2a6080: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a6080u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6084: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6088: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a6088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a608c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a608cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6090: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a6090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a609c: 0x34058328  ori         $a1, $zero, 0x8328
    ctx->pc = 0x2a609cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33576);
    // 0x2a60a0: 0x24060108  addiu       $a2, $zero, 0x108
    ctx->pc = 0x2a60a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x2a60a4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a60a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a60a8: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A60A8u;
    SET_GPR_U32(ctx, 31, 0x2A60B0u);
    ctx->pc = 0x2A60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A60A8u;
    // 0x2a60ac: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A60A8u, 0x2A60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A60B0u;
label_2a60b0:
    // 0x2a60b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a60b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a60b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A60B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A60B4u;
        // 0x2a60b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A60B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A60BCu;
}

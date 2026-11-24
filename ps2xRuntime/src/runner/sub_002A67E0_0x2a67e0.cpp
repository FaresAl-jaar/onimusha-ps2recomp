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

// Function: sub_002A67E0
// Address: 0x2a67e0 - 0x2a681c
void sub_002A67E0_0x2a67e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A67E0_0x2a67e0");
#endif

    switch (ctx->pc) {
        case 0x2a6810u: goto label_2a6810;
        default: break;
    }

    ctx->pc = 0x2a67e0u;

    // 0x2a67e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a67e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a67e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a67e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67e8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a67e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67ec: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a67ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a67f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a67f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a67f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67f8: 0x3405a0c4  ori         $a1, $zero, 0xA0C4
    ctx->pc = 0x2a67f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41156);
    // 0x2a67fc: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x2a67fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2a6800: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6804: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6804u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6808: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A6808u;
    SET_GPR_U32(ctx, 31, 0x2A6810u);
    ctx->pc = 0x2A680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6808u;
    // 0x2a680c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A6808u, 0x2A6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6810u;
label_2a6810:
    // 0x2a6810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6814: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6814u;
        // 0x2a6818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A681Cu;
}

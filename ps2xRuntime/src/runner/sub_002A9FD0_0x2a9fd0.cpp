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

// Function: sub_002A9FD0
// Address: 0x2a9fd0 - 0x2aa014
void sub_002A9FD0_0x2a9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9FD0_0x2a9fd0");
#endif

    switch (ctx->pc) {
        case 0x2aa008u: goto label_2aa008;
        default: break;
    }

    ctx->pc = 0x2a9fd0u;

    // 0x2a9fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9fd4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a9fd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a9fdc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a9fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fe0: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a9fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a9fe4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a9fe8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a9fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fec: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x2a9fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2a9ff0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a9ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ff4: 0x3445bb94  ori         $a1, $v0, 0xBB94
    ctx->pc = 0x2a9ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48020);
    // 0x2a9ff8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a9ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9ffc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a9ffcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa000: 0xc097cdc  jal         func_25F370
    ctx->pc = 0x2AA000u;
    SET_GPR_U32(ctx, 31, 0x2AA008u);
    ctx->pc = 0x2AA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA000u;
    // 0x2aa004: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F370u, 0x2AA000u, 0x2AA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA008u;
label_2aa008:
    // 0x2aa008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa00c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA00Cu;
        // 0x2aa010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA014u;
}

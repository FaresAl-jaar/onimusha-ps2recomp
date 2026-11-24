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

// Function: sub_002A63E0
// Address: 0x2a63e0 - 0x2a641c
void sub_002A63E0_0x2a63e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A63E0_0x2a63e0");
#endif

    switch (ctx->pc) {
        case 0x2a6410u: goto label_2a6410;
        default: break;
    }

    ctx->pc = 0x2a63e0u;

    // 0x2a63e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a63e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a63e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a63e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a63e8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a63e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a63ec: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a63ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a63f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a63f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a63f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a63f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a63f8: 0x34058fec  ori         $a1, $zero, 0x8FEC
    ctx->pc = 0x2a63f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36844);
    // 0x2a63fc: 0x2406014c  addiu       $a2, $zero, 0x14C
    ctx->pc = 0x2a63fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x2a6400: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6404: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6404u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6408: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A6408u;
    SET_GPR_U32(ctx, 31, 0x2A6410u);
    ctx->pc = 0x2A640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6408u;
    // 0x2a640c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A6408u, 0x2A6410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6410u;
label_2a6410:
    // 0x2a6410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6414: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6414u;
        // 0x2a6418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A641Cu;
}

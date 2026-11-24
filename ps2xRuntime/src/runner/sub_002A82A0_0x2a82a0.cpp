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

// Function: sub_002A82A0
// Address: 0x2a82a0 - 0x2a82e0
void sub_002A82A0_0x2a82a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A82A0_0x2a82a0");
#endif

    switch (ctx->pc) {
        case 0x2a82d4u: goto label_2a82d4;
        default: break;
    }

    ctx->pc = 0x2a82a0u;

    // 0x2a82a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a82a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a82a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a82a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82a8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a82a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a82acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a82b0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a82b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a82b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a82b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82bc: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2a82bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2a82c0: 0x344515ec  ori         $a1, $v0, 0x15EC
    ctx->pc = 0x2a82c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5612);
    // 0x2a82c4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a82c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a82c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a82c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82cc: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A82CCu;
    SET_GPR_U32(ctx, 31, 0x2A82D4u);
    ctx->pc = 0x2A82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82CCu;
    // 0x2a82d0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A82CCu, 0x2A82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82D4u;
label_2a82d4:
    // 0x2a82d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a82d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a82d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A82D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82D8u;
        // 0x2a82dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A82D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A82E0u;
}

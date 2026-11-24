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

// Function: sub_002A8DE0
// Address: 0x2a8de0 - 0x2a8e20
void sub_002A8DE0_0x2a8de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8DE0_0x2a8de0");
#endif

    switch (ctx->pc) {
        case 0x2a8e14u: goto label_2a8e14;
        default: break;
    }

    ctx->pc = 0x2a8de0u;

    // 0x2a8de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8de4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8de8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a8de8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8df0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8df0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8df4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8df8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8dfc: 0x24060164  addiu       $a2, $zero, 0x164
    ctx->pc = 0x2a8dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x2a8e00: 0x34454b8c  ori         $a1, $v0, 0x4B8C
    ctx->pc = 0x2a8e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19340);
    // 0x2a8e04: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8e08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8e08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e0c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A8E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A8E14u);
    ctx->pc = 0x2A8E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8E0Cu;
    // 0x2a8e10: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A8E0Cu, 0x2A8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E14u;
label_2a8e14:
    // 0x2a8e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8e18: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8E18u;
        // 0x2a8e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8E20u;
}

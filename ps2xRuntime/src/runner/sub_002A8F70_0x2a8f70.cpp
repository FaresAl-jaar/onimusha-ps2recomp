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

// Function: sub_002A8F70
// Address: 0x2a8f70 - 0x2a8fb0
void sub_002A8F70_0x2a8f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8F70_0x2a8f70");
#endif

    switch (ctx->pc) {
        case 0x2a8fa4u: goto label_2a8fa4;
        default: break;
    }

    ctx->pc = 0x2a8f70u;

    // 0x2a8f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8f74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f78: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a8f78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8f80: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8f80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8f88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f8c: 0x2406013c  addiu       $a2, $zero, 0x13C
    ctx->pc = 0x2a8f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x2a8f90: 0x344559bc  ori         $a1, $v0, 0x59BC
    ctx->pc = 0x2a8f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22972);
    // 0x2a8f94: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8f98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8f98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f9c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A8F9Cu;
    SET_GPR_U32(ctx, 31, 0x2A8FA4u);
    ctx->pc = 0x2A8FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8F9Cu;
    // 0x2a8fa0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A8F9Cu, 0x2A8FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FA4u;
label_2a8fa4:
    // 0x2a8fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FA8u;
        // 0x2a8fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8FB0u;
}

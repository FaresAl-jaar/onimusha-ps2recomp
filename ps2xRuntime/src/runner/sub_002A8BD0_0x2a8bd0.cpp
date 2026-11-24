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

// Function: sub_002A8BD0
// Address: 0x2a8bd0 - 0x2a8c10
void sub_002A8BD0_0x2a8bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8BD0_0x2a8bd0");
#endif

    switch (ctx->pc) {
        case 0x2a8c04u: goto label_2a8c04;
        default: break;
    }

    ctx->pc = 0x2a8bd0u;

    // 0x2a8bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8bd4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bd8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a8bd8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8be0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8be0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8be4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8be8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bec: 0x24060378  addiu       $a2, $zero, 0x378
    ctx->pc = 0x2a8becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 888));
    // 0x2a8bf0: 0x3445427c  ori         $a1, $v0, 0x427C
    ctx->pc = 0x2a8bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17020);
    // 0x2a8bf4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8bf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8bf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8bfc: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A8BFCu;
    SET_GPR_U32(ctx, 31, 0x2A8C04u);
    ctx->pc = 0x2A8C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8BFCu;
    // 0x2a8c00: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A8BFCu, 0x2A8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8C04u;
label_2a8c04:
    // 0x2a8c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8c08: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8C08u;
        // 0x2a8c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8C10u;
}

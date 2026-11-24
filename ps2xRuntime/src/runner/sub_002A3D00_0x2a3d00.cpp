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

// Function: sub_002A3D00
// Address: 0x2a3d00 - 0x2a3d40
void sub_002A3D00_0x2a3d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3D00_0x2a3d00");
#endif

    switch (ctx->pc) {
        case 0x2a3d34u: goto label_2a3d34;
        default: break;
    }

    ctx->pc = 0x2a3d00u;

    // 0x2a3d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3d04: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a3d04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3d0c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a3d0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d10: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a3d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a3d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d18: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a3d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d1c: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x2a3d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2a3d20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a3d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d24: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a3d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3d28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a3d28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d2c: 0xc097e7c  jal         func_25F9F0
    ctx->pc = 0x2A3D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A3D34u);
    ctx->pc = 0x2A3D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3D2Cu;
    // 0x2a3d30: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F9F0u, 0x2A3D2Cu, 0x2A3D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D34u;
label_2a3d34:
    // 0x2a3d34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D38u;
        // 0x2a3d3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3D40u;
}

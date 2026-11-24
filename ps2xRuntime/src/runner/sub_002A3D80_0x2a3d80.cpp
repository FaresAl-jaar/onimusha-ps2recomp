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

// Function: sub_002A3D80
// Address: 0x2a3d80 - 0x2a3dc0
void sub_002A3D80_0x2a3d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3D80_0x2a3d80");
#endif

    switch (ctx->pc) {
        case 0x2a3db4u: goto label_2a3db4;
        default: break;
    }

    ctx->pc = 0x2a3d80u;

    // 0x2a3d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3d84: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a3d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3d8c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a3d8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d90: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a3d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a3d94: 0x24050250  addiu       $a1, $zero, 0x250
    ctx->pc = 0x2a3d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x2a3d98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a3d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d9c: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x2a3d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x2a3da0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a3da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3da4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a3da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3da8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a3da8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3dac: 0xc097e7c  jal         func_25F9F0
    ctx->pc = 0x2A3DACu;
    SET_GPR_U32(ctx, 31, 0x2A3DB4u);
    ctx->pc = 0x2A3DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3DACu;
    // 0x2a3db0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F9F0u, 0x2A3DACu, 0x2A3DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DB4u;
label_2a3db4:
    // 0x2a3db4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3db8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DB8u;
        // 0x2a3dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3DC0u;
}

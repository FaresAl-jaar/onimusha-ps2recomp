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

// Function: sub_002DF3A0
// Address: 0x2df3a0 - 0x2df3e0
void sub_002DF3A0_0x2df3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF3A0_0x2df3a0");
#endif

    switch (ctx->pc) {
        case 0x2df3ccu: goto label_2df3cc;
        default: break;
    }

    ctx->pc = 0x2df3a0u;

    // 0x2df3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df3a4: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2df3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2df3a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df3ac: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2df3acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2df3b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df3b4: 0x24a5f3e0  addiu       $a1, $a1, -0xC20
    ctx->pc = 0x2df3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964192));
    // 0x2df3b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df3bc: 0x24c6f350  addiu       $a2, $a2, -0xCB0
    ctx->pc = 0x2df3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964048));
    // 0x2df3c0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2df3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2df3c4: 0xc0400fc  jal         func_1003F0
    ctx->pc = 0x2DF3C4u;
    SET_GPR_U32(ctx, 31, 0x2DF3CCu);
    ctx->pc = 0x2DF3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF3C4u;
    // 0x2df3c8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003F0u, 0x2DF3C4u, 0x2DF3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF3CCu;
label_2df3cc:
    // 0x2df3cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2df3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df3d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df3d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3D8u;
        // 0x2df3dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF3E0u;
}

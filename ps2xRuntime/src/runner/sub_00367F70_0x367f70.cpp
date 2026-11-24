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

// Function: sub_00367F70
// Address: 0x367f70 - 0x367fbc
void sub_00367F70_0x367f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367F70_0x367f70");
#endif

    switch (ctx->pc) {
        case 0x367fa0u: goto label_367fa0;
        case 0x367facu: goto label_367fac;
        default: break;
    }

    ctx->pc = 0x367f70u;

    // 0x367f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367f74: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x367f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x367f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x367f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x367f7c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x367f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x367f80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x367f84: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x367f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367f88: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x367f88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x367f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x367f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f90: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x367f90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x367f94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f98: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x367F98u;
    SET_GPR_U32(ctx, 31, 0x367FA0u);
    ctx->pc = 0x367F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F98u;
    // 0x367f9c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x367F98u, 0x367FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FA0u;
label_367fa0:
    // 0x367fa0: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x367fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x367fa4: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x367FA4u;
    SET_GPR_U32(ctx, 31, 0x367FACu);
    ctx->pc = 0x367FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367FA4u;
    // 0x367fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x367FA4u, 0x367FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FACu;
label_367fac:
    // 0x367fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x367facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x367FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367FB4u;
        // 0x367fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367FBCu;
}

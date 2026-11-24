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

// Function: sub_001E19B0
// Address: 0x1e19b0 - 0x1e19e8
void sub_001E19B0_0x1e19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E19B0_0x1e19b0");
#endif

    switch (ctx->pc) {
        case 0x1e19d0u: goto label_1e19d0;
        default: break;
    }

    ctx->pc = 0x1e19b0u;

    // 0x1e19b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e19b4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1e19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1e19b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e19bc: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1e19bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1e19c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e19c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e19c4: 0x344617fd  ori         $a2, $v0, 0x17FD
    ctx->pc = 0x1e19c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x1e19c8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1E19C8u;
    SET_GPR_U32(ctx, 31, 0x1E19D0u);
    ctx->pc = 0x1E19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19C8u;
    // 0x1e19cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1E19C8u, 0x1E19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19D0u;
label_1e19d0:
    // 0x1e19d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e19d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e19d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e19d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e19d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e19d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e19dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e19e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E19E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19E0u;
        // 0x1e19e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E19E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E19E8u;
}

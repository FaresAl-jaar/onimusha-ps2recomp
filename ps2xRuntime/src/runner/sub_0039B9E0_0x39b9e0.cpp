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

// Function: sub_0039B9E0
// Address: 0x39b9e0 - 0x39ba14
void sub_0039B9E0_0x39b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B9E0_0x39b9e0");
#endif

    switch (ctx->pc) {
        case 0x39b9f8u: goto label_39b9f8;
        case 0x39ba04u: goto label_39ba04;
        default: break;
    }

    ctx->pc = 0x39b9e0u;

    // 0x39b9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39b9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39b9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39b9ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39b9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b9f0: 0xc097834  jal         func_25E0D0
    ctx->pc = 0x39B9F0u;
    SET_GPR_U32(ctx, 31, 0x39B9F8u);
    ctx->pc = 0x39B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9F0u;
    // 0x39b9f4: 0x8c842b5c  lw          $a0, 0x2B5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0D0u, 0x39B9F0u, 0x39B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B9F8u;
label_39b9f8:
    // 0x39b9f8: 0xae022b5c  sw          $v0, 0x2B5C($s0)
    ctx->pc = 0x39b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11100), GPR_U32(ctx, 2));
    // 0x39b9fc: 0xc0a6188  jal         func_298620
    ctx->pc = 0x39B9FCu;
    SET_GPR_U32(ctx, 31, 0x39BA04u);
    ctx->pc = 0x39BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9FCu;
    // 0x39ba00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x39B9FCu, 0x39BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA04u;
label_39ba04:
    // 0x39ba04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ba04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ba08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39ba08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ba0c: 0x3e00008  jr          $ra
    ctx->pc = 0x39BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA0Cu;
        // 0x39ba10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BA14u;
}

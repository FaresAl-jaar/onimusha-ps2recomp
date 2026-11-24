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

// Function: sub_00388E40
// Address: 0x388e40 - 0x388e74
void sub_00388E40_0x388e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388E40_0x388e40");
#endif

    switch (ctx->pc) {
        case 0x388e58u: goto label_388e58;
        case 0x388e64u: goto label_388e64;
        default: break;
    }

    ctx->pc = 0x388e40u;

    // 0x388e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x388e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x388e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x388e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x388e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x388e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388e50: 0xc097834  jal         func_25E0D0
    ctx->pc = 0x388E50u;
    SET_GPR_U32(ctx, 31, 0x388E58u);
    ctx->pc = 0x388E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E50u;
    // 0x388e54: 0x8c842b74  lw          $a0, 0x2B74($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0D0u, 0x388E50u, 0x388E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388E58u;
label_388e58:
    // 0x388e58: 0xae022b74  sw          $v0, 0x2B74($s0)
    ctx->pc = 0x388e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11124), GPR_U32(ctx, 2));
    // 0x388e5c: 0xc0a6188  jal         func_298620
    ctx->pc = 0x388E5Cu;
    SET_GPR_U32(ctx, 31, 0x388E64u);
    ctx->pc = 0x388E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E5Cu;
    // 0x388e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x388E5Cu, 0x388E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388E64u;
label_388e64:
    // 0x388e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x388e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x388E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E6Cu;
        // 0x388e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388E74u;
}

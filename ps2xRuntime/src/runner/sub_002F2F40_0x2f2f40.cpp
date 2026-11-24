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

// Function: sub_002F2F40
// Address: 0x2f2f40 - 0x2f2f70
void sub_002F2F40_0x2f2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2F40_0x2f2f40");
#endif

    switch (ctx->pc) {
        case 0x2f2f58u: goto label_2f2f58;
        case 0x2f2f60u: goto label_2f2f60;
        default: break;
    }

    ctx->pc = 0x2f2f40u;

    // 0x2f2f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f2f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f2f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f2f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f2f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f2f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f50: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x2F2F50u;
    SET_GPR_U32(ctx, 31, 0x2F2F58u);
    ctx->pc = 0x2F2F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F50u;
    // 0x2f2f54: 0x8c842b28  lw          $a0, 0x2B28($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x2F2F50u, 0x2F2F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F58u;
label_2f2f58:
    // 0x2f2f58: 0xc0a4d18  jal         func_293460
    ctx->pc = 0x2F2F58u;
    SET_GPR_U32(ctx, 31, 0x2F2F60u);
    ctx->pc = 0x2F2F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F58u;
    // 0x2f2f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293460u, 0x2F2F58u, 0x2F2F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F60u;
label_2f2f60:
    // 0x2f2f60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f2f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2f68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F68u;
        // 0x2f2f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2F70u;
}

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

// Function: sub_00344F60
// Address: 0x344f60 - 0x344f94
void sub_00344F60_0x344f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344F60_0x344f60");
#endif

    switch (ctx->pc) {
        case 0x344f78u: goto label_344f78;
        case 0x344f84u: goto label_344f84;
        default: break;
    }

    ctx->pc = 0x344f60u;

    // 0x344f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x344f6c: 0x8c850570  lw          $a1, 0x570($a0)
    ctx->pc = 0x344f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1392)));
    // 0x344f70: 0xc0c0844  jal         func_302110
    ctx->pc = 0x344F70u;
    SET_GPR_U32(ctx, 31, 0x344F78u);
    ctx->pc = 0x344F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F70u;
    // 0x344f74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x344F70u, 0x344F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F78u;
label_344f78:
    // 0x344f78: 0x8e050574  lw          $a1, 0x574($s0)
    ctx->pc = 0x344f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x344f7c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x344F7Cu;
    SET_GPR_U32(ctx, 31, 0x344F84u);
    ctx->pc = 0x344F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F7Cu;
    // 0x344f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x344F7Cu, 0x344F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F84u;
label_344f84:
    // 0x344f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x344F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F8Cu;
        // 0x344f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344F94u;
}

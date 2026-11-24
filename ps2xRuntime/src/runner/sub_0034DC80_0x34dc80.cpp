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

// Function: sub_0034DC80
// Address: 0x34dc80 - 0x34dcac
void sub_0034DC80_0x34dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DC80_0x34dc80");
#endif

    switch (ctx->pc) {
        case 0x34dc94u: goto label_34dc94;
        case 0x34dc9cu: goto label_34dc9c;
        default: break;
    }

    ctx->pc = 0x34dc80u;

    // 0x34dc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34dc84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34dc88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34dc8c: 0xc0d3704  jal         func_34DC10
    ctx->pc = 0x34DC8Cu;
    SET_GPR_U32(ctx, 31, 0x34DC94u);
    ctx->pc = 0x34DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC8Cu;
    // 0x34dc90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DC10u, 0x34DC8Cu, 0x34DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC94u;
label_34dc94:
    // 0x34dc94: 0xc0d371c  jal         func_34DC70
    ctx->pc = 0x34DC94u;
    SET_GPR_U32(ctx, 31, 0x34DC9Cu);
    ctx->pc = 0x34DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DC94u;
    // 0x34dc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DC70u, 0x34DC94u, 0x34DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DC9Cu;
label_34dc9c:
    // 0x34dc9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34dc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34dca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34dca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dca4: 0x3e00008  jr          $ra
    ctx->pc = 0x34DCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DCA4u;
        // 0x34dca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DCACu;
}

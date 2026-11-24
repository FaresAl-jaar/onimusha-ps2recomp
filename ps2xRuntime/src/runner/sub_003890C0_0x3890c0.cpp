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

// Function: sub_003890C0
// Address: 0x3890c0 - 0x3890ec
void sub_003890C0_0x3890c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003890C0_0x3890c0");
#endif

    switch (ctx->pc) {
        case 0x3890d4u: goto label_3890d4;
        case 0x3890dcu: goto label_3890dc;
        default: break;
    }

    ctx->pc = 0x3890c0u;

    // 0x3890c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3890c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3890c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3890c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3890c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3890c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3890cc: 0xc0e1e64  jal         func_387990
    ctx->pc = 0x3890CCu;
    SET_GPR_U32(ctx, 31, 0x3890D4u);
    ctx->pc = 0x3890D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3890CCu;
    // 0x3890d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387990u, 0x3890CCu, 0x3890D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3890D4u;
label_3890d4:
    // 0x3890d4: 0xc0a4e30  jal         func_2938C0
    ctx->pc = 0x3890D4u;
    SET_GPR_U32(ctx, 31, 0x3890DCu);
    ctx->pc = 0x3890D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3890D4u;
    // 0x3890d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938C0u, 0x3890D4u, 0x3890DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3890DCu;
label_3890dc:
    // 0x3890dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3890dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3890e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3890e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3890e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3890E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3890E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890E4u;
        // 0x3890e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3890E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3890ECu;
}

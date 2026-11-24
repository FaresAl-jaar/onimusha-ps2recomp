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

// Function: sub_00330030
// Address: 0x330030 - 0x330070
void sub_00330030_0x330030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330030_0x330030");
#endif

    switch (ctx->pc) {
        case 0x330050u: goto label_330050;
        case 0x33005cu: goto label_33005c;
        default: break;
    }

    ctx->pc = 0x330030u;

    // 0x330030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x330030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x330034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x330034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x330038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x330038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33003c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x330040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x330040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330044: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x330044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330048: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x330048u;
    SET_GPR_U32(ctx, 31, 0x330050u);
    ctx->pc = 0x33004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330048u;
    // 0x33004c: 0x26241c88  addiu       $a0, $s1, 0x1C88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x330048u, 0x330050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330050u;
label_330050:
    // 0x330050: 0x26241c98  addiu       $a0, $s1, 0x1C98
    ctx->pc = 0x330050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7320));
    // 0x330054: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x330054u;
    SET_GPR_U32(ctx, 31, 0x33005Cu);
    ctx->pc = 0x330058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330054u;
    // 0x330058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x330054u, 0x33005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33005Cu;
label_33005c:
    // 0x33005c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33005cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x330060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x330064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330068: 0x3e00008  jr          $ra
    ctx->pc = 0x330068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330068u;
        // 0x33006c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330070u;
}

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

// Function: sub_00369B10
// Address: 0x369b10 - 0x369b44
void sub_00369B10_0x369b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369B10_0x369b10");
#endif

    switch (ctx->pc) {
        case 0x369b28u: goto label_369b28;
        case 0x369b34u: goto label_369b34;
        default: break;
    }

    ctx->pc = 0x369b10u;

    // 0x369b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x369b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x369b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x369b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x369b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369b1c: 0x8c850574  lw          $a1, 0x574($a0)
    ctx->pc = 0x369b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1396)));
    // 0x369b20: 0xc0c0844  jal         func_302110
    ctx->pc = 0x369B20u;
    SET_GPR_U32(ctx, 31, 0x369B28u);
    ctx->pc = 0x369B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B20u;
    // 0x369b24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x369B20u, 0x369B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B28u;
label_369b28:
    // 0x369b28: 0x8e050578  lw          $a1, 0x578($s0)
    ctx->pc = 0x369b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
    // 0x369b2c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x369B2Cu;
    SET_GPR_U32(ctx, 31, 0x369B34u);
    ctx->pc = 0x369B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369B2Cu;
    // 0x369b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x369B2Cu, 0x369B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B34u;
label_369b34:
    // 0x369b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x369b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x369B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B3Cu;
        // 0x369b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369B44u;
}

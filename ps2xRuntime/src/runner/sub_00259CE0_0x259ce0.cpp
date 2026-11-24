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

// Function: sub_00259CE0
// Address: 0x259ce0 - 0x259d38
void sub_00259CE0_0x259ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259CE0_0x259ce0");
#endif

    ctx->pc = 0x259ce0u;

    // 0x259ce0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x259ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x259ce4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x259ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x259ce8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x259ce8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x259cec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259cecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259cf0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x259cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259cf4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x259cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259cf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259cfc: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x259cfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x259d00: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x259D00u;
    {
        const bool branch_taken_0x259d00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x259d00) {
            ctx->pc = 0x259D18u;
            goto label_259d18;
        }
    }
    ctx->pc = 0x259D08u;
    // 0x259d08: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x259d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x259d0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x259d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259d10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x259D10u;
    {
        const bool branch_taken_0x259d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D10u;
        // 0x259d14: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d10) {
            ctx->pc = 0x259D30u;
            goto label_259d30;
        }
    }
    ctx->pc = 0x259D18u;
label_259d18:
    // 0x259d18: 0x2841f800  slti        $at, $v0, -0x800
    ctx->pc = 0x259d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
    // 0x259d1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D1Cu;
    {
        const bool branch_taken_0x259d1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d1c) {
            ctx->pc = 0x259D30u;
            goto label_259d30;
        }
    }
    ctx->pc = 0x259D24u;
    // 0x259d24: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x259d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x259d28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x259d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259d2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259d2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_259d30:
    // 0x259d30: 0x3e00008  jr          $ra
    ctx->pc = 0x259D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259D38u;
}

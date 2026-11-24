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

// Function: sub_00259F30
// Address: 0x259f30 - 0x259f78
void sub_00259F30_0x259f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259F30_0x259f30");
#endif

    ctx->pc = 0x259f30u;

    // 0x259f30: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x259f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x259f34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259f34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259f38: 0x2841f800  slti        $at, $v0, -0x800
    ctx->pc = 0x259f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
    // 0x259f3c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x259F3Cu;
    {
        const bool branch_taken_0x259f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F3Cu;
        // 0x259f40: 0x24821000  addiu       $v0, $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f3c) {
            ctx->pc = 0x259F50u;
            goto label_259f50;
        }
    }
    ctx->pc = 0x259F44u;
    // 0x259f44: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x259f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259f48: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x259f48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x259f4c: 0x0  nop
    ctx->pc = 0x259f4cu;
    // NOP
label_259f50:
    // 0x259f50: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x259f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x259f54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259f58: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x259f58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x259f5c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x259F5Cu;
    {
        const bool branch_taken_0x259f5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x259F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F5Cu;
        // 0x259f60: 0x2482f000  addiu       $v0, $a0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f5c) {
            ctx->pc = 0x259F70u;
            goto label_259f70;
        }
    }
    ctx->pc = 0x259F64u;
    // 0x259f64: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x259f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259f68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x259f68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x259f6c: 0x0  nop
    ctx->pc = 0x259f6cu;
    // NOP
label_259f70:
    // 0x259f70: 0x3e00008  jr          $ra
    ctx->pc = 0x259F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F70u;
        // 0x259f74: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259F78u;
}

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

// Function: sub_00203D28
// Address: 0x203d28 - 0x203d74
void sub_00203D28_0x203d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203D28_0x203d28");
#endif

    ctx->pc = 0x203d28u;

    // 0x203d28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x203d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x203d2c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203D2Cu;
    {
        const bool branch_taken_0x203d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D2Cu;
        // 0x203d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d2c) {
            ctx->pc = 0x203D58u;
            goto label_203d58;
        }
    }
    ctx->pc = 0x203D34u;
    // 0x203d34: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x203d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x203d38: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x203D38u;
    {
        const bool branch_taken_0x203d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D38u;
        // 0x203d3c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d38) {
            ctx->pc = 0x203D6Cu;
            goto label_203d6c;
        }
    }
    ctx->pc = 0x203D40u;
    // 0x203d40: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x203d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x203d44: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x203D44u;
    {
        const bool branch_taken_0x203d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203d44) {
            ctx->pc = 0x203D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203D44u;
            // 0x203d48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203D68u;
            goto label_203d68;
        }
    }
    ctx->pc = 0x203D4Cu;
    // 0x203d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x203D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D4Cu;
        // 0x203d50: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203D54u;
    // 0x203d54: 0x0  nop
    ctx->pc = 0x203d54u;
    // NOP
label_203d58:
    // 0x203d58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x203d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x203d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203d60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x203d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203d64: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x203d64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_203d68:
    // 0x203d68: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x203d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203d6c:
    // 0x203d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x203D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203D74u;
}

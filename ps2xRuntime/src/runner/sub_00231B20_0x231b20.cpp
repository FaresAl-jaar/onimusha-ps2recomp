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

// Function: sub_00231B20
// Address: 0x231b20 - 0x231b58
void sub_00231B20_0x231b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231B20_0x231b20");
#endif

    switch (ctx->pc) {
        case 0x231b34u: goto label_231b34;
        case 0x231b3cu: goto label_231b3c;
        case 0x231b44u: goto label_231b44;
        default: break;
    }

    ctx->pc = 0x231b20u;

    // 0x231b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231b28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231b2c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x231B2Cu;
    SET_GPR_U32(ctx, 31, 0x231B34u);
    ctx->pc = 0x231B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B2Cu;
    // 0x231b30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x231B2Cu, 0x231B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B34u;
label_231b34:
    // 0x231b34: 0xc08c6d6  jal         func_231B58
    ctx->pc = 0x231B34u;
    SET_GPR_U32(ctx, 31, 0x231B3Cu);
    ctx->pc = 0x231B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B34u;
    // 0x231b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B58u, 0x231B34u, 0x231B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B3Cu;
label_231b3c:
    // 0x231b3c: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x231B3Cu;
    SET_GPR_U32(ctx, 31, 0x231B44u);
    ctx->pc = 0x231B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B3Cu;
    // 0x231b40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x231B3Cu, 0x231B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B44u;
label_231b44:
    // 0x231b44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231b48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231b50: 0x3e00008  jr          $ra
    ctx->pc = 0x231B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231B50u;
        // 0x231b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231B58u;
}

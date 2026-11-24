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

// Function: sub_0012EE38
// Address: 0x12ee38 - 0x12ee84
void sub_0012EE38_0x12ee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EE38_0x12ee38");
#endif

    switch (ctx->pc) {
        case 0x12ee58u: goto label_12ee58;
        case 0x12ee68u: goto label_12ee68;
        case 0x12ee74u: goto label_12ee74;
        default: break;
    }

    ctx->pc = 0x12ee38u;

    // 0x12ee38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12ee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12ee3c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x12ee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x12ee40: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x12ee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x12ee44: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12ee48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12ee4c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x12ee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x12ee50: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12EE50u;
    SET_GPR_U32(ctx, 31, 0x12EE58u);
    ctx->pc = 0x12EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE50u;
    // 0x12ee54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12EE50u, 0x12EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE58u;
label_12ee58:
    // 0x12ee58: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x12ee58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ee5c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x12ee5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x12ee60: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12EE60u;
    SET_GPR_U32(ctx, 31, 0x12EE68u);
    ctx->pc = 0x12EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE60u;
    // 0x12ee64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12EE60u, 0x12EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE68u;
label_12ee68:
    // 0x12ee68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ee68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee6c: 0xc04bb4e  jal         func_12ED38
    ctx->pc = 0x12EE6Cu;
    SET_GPR_U32(ctx, 31, 0x12EE74u);
    ctx->pc = 0x12EE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE6Cu;
    // 0x12ee70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED38u, 0x12EE6Cu, 0x12EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE74u;
label_12ee74:
    // 0x12ee74: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x12ee74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ee78: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12ee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12ee7c: 0x3e00008  jr          $ra
    ctx->pc = 0x12EE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE7Cu;
        // 0x12ee80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EE84u;
}

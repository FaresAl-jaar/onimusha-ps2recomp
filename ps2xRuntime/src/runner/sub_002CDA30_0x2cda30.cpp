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

// Function: sub_002CDA30
// Address: 0x2cda30 - 0x2cda64
void sub_002CDA30_0x2cda30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDA30_0x2cda30");
#endif

    switch (ctx->pc) {
        case 0x2cda58u: goto label_2cda58;
        default: break;
    }

    ctx->pc = 0x2cda30u;

    // 0x2cda30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cda30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cda34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cda34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cda38: 0x8f838a04  lw          $v1, -0x75FC($gp)
    ctx->pc = 0x2cda38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
    // 0x2cda3c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDA3Cu;
    {
        const bool branch_taken_0x2cda3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cda3c) {
            ctx->pc = 0x2CDA58u;
            goto label_2cda58;
        }
    }
    ctx->pc = 0x2CDA44u;
    // 0x2cda44: 0x8f838a14  lw          $v1, -0x75EC($gp)
    ctx->pc = 0x2cda44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x2cda48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDA48u;
    {
        const bool branch_taken_0x2cda48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA48u;
        // 0x2cda4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda48) {
            ctx->pc = 0x2CDA58u;
            goto label_2cda58;
        }
    }
    ctx->pc = 0x2CDA50u;
    // 0x2cda50: 0xc0b2cd8  jal         func_2CB360
    ctx->pc = 0x2CDA50u;
    SET_GPR_U32(ctx, 31, 0x2CDA58u);
    ctx->pc = 0x2CB360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB360u, 0x2CDA50u, 0x2CDA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA58u;
label_2cda58:
    // 0x2cda58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cda58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cda5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA5Cu;
        // 0x2cda60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDA64u;
}

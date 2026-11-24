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

// Function: sub_00221B90
// Address: 0x221b90 - 0x221bc8
void sub_00221B90_0x221b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221B90_0x221b90");
#endif

    switch (ctx->pc) {
        case 0x221bb4u: goto label_221bb4;
        default: break;
    }

    ctx->pc = 0x221b90u;

    // 0x221b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221b94: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x221b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x221b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221b9c: 0x24505a48  addiu       $s0, $v0, 0x5A48
    ctx->pc = 0x221b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23112));
    // 0x221ba0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x221ba0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x885A48u));
    // 0x221ba4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x221BA4u;
    {
        const bool branch_taken_0x221ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BA4u;
        // 0x221ba8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ba4) {
            ctx->pc = 0x221BB8u;
            goto label_221bb8;
        }
    }
    ctx->pc = 0x221BACu;
    // 0x221bac: 0xc0886b8  jal         func_221AE0
    ctx->pc = 0x221BACu;
    SET_GPR_U32(ctx, 31, 0x221BB4u);
    ctx->pc = 0x221AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AE0u, 0x221BACu, 0x221BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BB4u;
label_221bb4:
    // 0x221bb4: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x221bb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_221bb8:
    // 0x221bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221bbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x221BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BC0u;
        // 0x221bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221BC8u;
}

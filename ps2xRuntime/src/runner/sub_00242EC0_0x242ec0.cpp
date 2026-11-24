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

// Function: sub_00242EC0
// Address: 0x242ec0 - 0x242eec
void sub_00242EC0_0x242ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242EC0_0x242ec0");
#endif

    switch (ctx->pc) {
        case 0x242ed8u: goto label_242ed8;
        default: break;
    }

    ctx->pc = 0x242ec0u;

    // 0x242ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ecc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x242eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x242ed0: 0xc08fc9a  jal         func_23F268
    ctx->pc = 0x242ED0u;
    SET_GPR_U32(ctx, 31, 0x242ED8u);
    ctx->pc = 0x242ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242ED0u;
    // 0x242ed4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F268u, 0x242ED0u, 0x242ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242ED8u;
label_242ed8:
    // 0x242ed8: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x242ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x242edc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x242EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EE4u;
        // 0x242ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242EECu;
}

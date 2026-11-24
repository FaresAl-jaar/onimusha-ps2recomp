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

// Function: sub_00210270
// Address: 0x210270 - 0x210298
void sub_00210270_0x210270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210270_0x210270");
#endif

    switch (ctx->pc) {
        case 0x210280u: goto label_210280;
        default: break;
    }

    ctx->pc = 0x210270u;

    // 0x210270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x210274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x210278: 0xc083d42  jal         func_20F508
    ctx->pc = 0x210278u;
    SET_GPR_U32(ctx, 31, 0x210280u);
    ctx->pc = 0x21027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210278u;
    // 0x21027c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F508u, 0x210278u, 0x210280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210280u;
label_210280:
    // 0x210280: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x210280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x210284: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x210284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x210288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x210288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21028c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210290: 0x3e00008  jr          $ra
    ctx->pc = 0x210290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210290u;
        // 0x210294: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210298u;
}

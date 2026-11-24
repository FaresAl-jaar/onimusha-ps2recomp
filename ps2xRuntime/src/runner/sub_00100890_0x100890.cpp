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

// Function: sub_00100890
// Address: 0x100890 - 0x1008b4
void sub_00100890_0x100890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100890_0x100890");
#endif

    switch (ctx->pc) {
        case 0x100890u: goto label_100890;
        case 0x100894u: goto label_100894;
        case 0x100898u: goto label_100898;
        case 0x10089cu: goto label_10089c;
        case 0x1008a0u: goto label_1008a0;
        case 0x1008a4u: goto label_1008a4;
        case 0x1008a8u: goto label_1008a8;
        case 0x1008acu: goto label_1008ac;
        case 0x1008b0u: goto label_1008b0;
        default: break;
    }

    ctx->pc = 0x100890u;

label_100890:
    // 0x100890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_100894:
    // 0x100894: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x100894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
label_100898:
    // 0x100898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10089c:
    // 0x10089c: 0x8c222800  lw          $v0, 0x2800($at)
    ctx->pc = 0x10089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10240)));
label_1008a0:
    // 0x1008a0: 0x40f809  jalr        $v0
label_1008a4:
    if (ctx->pc == 0x1008A4u) {
        ctx->pc = 0x1008A8u;
        goto label_1008a8;
    }
    ctx->pc = 0x1008A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1008A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008A0u, 0x1008A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1008A8u;
label_1008a8:
    // 0x1008a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1008a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1008ac:
    // 0x1008ac: 0x3e00008  jr          $ra
label_1008b0:
    if (ctx->pc == 0x1008B0u) {
        ctx->pc = 0x1008B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008ACu;
        // 0x1008b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008B4u;
        goto label_fallthrough_0x1008ac;
    }
    ctx->pc = 0x1008ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1008B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008ACu;
        // 0x1008b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1008ac:
    ctx->pc = 0x1008B4u;
}

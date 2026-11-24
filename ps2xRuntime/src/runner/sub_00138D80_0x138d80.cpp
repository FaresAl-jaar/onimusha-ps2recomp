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

// Function: sub_00138D80
// Address: 0x138d80 - 0x138dac
void sub_00138D80_0x138d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138D80_0x138d80");
#endif

    switch (ctx->pc) {
        case 0x138d98u: goto label_138d98;
        default: break;
    }

    ctx->pc = 0x138d80u;

    // 0x138d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138d84: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x138D84u;
    {
        const bool branch_taken_0x138d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D84u;
        // 0x138d88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d84) {
            ctx->pc = 0x138D90u;
            goto label_138d90;
        }
    }
    ctx->pc = 0x138D8Cu;
    // 0x138d8c: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x138d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
label_138d90:
    // 0x138d90: 0xc04e36c  jal         func_138DB0
    ctx->pc = 0x138D90u;
    SET_GPR_U32(ctx, 31, 0x138D98u);
    ctx->pc = 0x138DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138DB0u, 0x138D90u, 0x138D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D98u;
label_138d98:
    // 0x138d98: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x138d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x138d9c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x138d9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x138da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138da4: 0x3e00008  jr          $ra
    ctx->pc = 0x138DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DA4u;
        // 0x138da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138DACu;
}

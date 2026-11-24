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

// Function: sub_00229AA0
// Address: 0x229aa0 - 0x229acc
void sub_00229AA0_0x229aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229AA0_0x229aa0");
#endif

    switch (ctx->pc) {
        case 0x229aa0u: goto label_229aa0;
        case 0x229aa4u: goto label_229aa4;
        case 0x229aa8u: goto label_229aa8;
        case 0x229aacu: goto label_229aac;
        case 0x229ab0u: goto label_229ab0;
        case 0x229ab4u: goto label_229ab4;
        case 0x229ab8u: goto label_229ab8;
        case 0x229abcu: goto label_229abc;
        case 0x229ac0u: goto label_229ac0;
        case 0x229ac4u: goto label_229ac4;
        case 0x229ac8u: goto label_229ac8;
        default: break;
    }

    ctx->pc = 0x229aa0u;

label_229aa0:
    // 0x229aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_229aa4:
    // 0x229aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_229aa8:
    // 0x229aa8: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x229aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_229aac:
    // 0x229aac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_229ab0:
    if (ctx->pc == 0x229AB0u) {
        ctx->pc = 0x229AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AACu;
        // 0x229ab0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AB4u;
        goto label_229ab4;
    }
    ctx->pc = 0x229AACu;
    {
        const bool branch_taken_0x229aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AACu;
        // 0x229ab0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229aac) {
            ctx->pc = 0x229AC0u;
            goto label_229ac0;
        }
    }
    ctx->pc = 0x229AB4u;
label_229ab4:
    // 0x229ab4: 0x8c43b0c8  lw          $v1, -0x4F38($v0)
    ctx->pc = 0x229ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947016)));
label_229ab8:
    // 0x229ab8: 0x60f809  jalr        $v1
label_229abc:
    if (ctx->pc == 0x229ABCu) {
        ctx->pc = 0x229AC0u;
        goto label_229ac0;
    }
    ctx->pc = 0x229AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x229AC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229AB8u, 0x229AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229AC0u;
label_229ac0:
    // 0x229ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_229ac4:
    // 0x229ac4: 0x3e00008  jr          $ra
label_229ac8:
    if (ctx->pc == 0x229AC8u) {
        ctx->pc = 0x229AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AC4u;
        // 0x229ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229ACCu;
        goto label_fallthrough_0x229ac4;
    }
    ctx->pc = 0x229AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AC4u;
        // 0x229ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x229ac4:
    ctx->pc = 0x229ACCu;
}

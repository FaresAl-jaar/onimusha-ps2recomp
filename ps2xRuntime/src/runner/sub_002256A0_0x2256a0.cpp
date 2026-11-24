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

// Function: sub_002256A0
// Address: 0x2256a0 - 0x2256c8
void sub_002256A0_0x2256a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002256A0_0x2256a0");
#endif

    switch (ctx->pc) {
        case 0x2256a0u: goto label_2256a0;
        case 0x2256a4u: goto label_2256a4;
        case 0x2256a8u: goto label_2256a8;
        case 0x2256acu: goto label_2256ac;
        case 0x2256b0u: goto label_2256b0;
        case 0x2256b4u: goto label_2256b4;
        case 0x2256b8u: goto label_2256b8;
        case 0x2256bcu: goto label_2256bc;
        case 0x2256c0u: goto label_2256c0;
        case 0x2256c4u: goto label_2256c4;
        default: break;
    }

    ctx->pc = 0x2256a0u;

label_2256a0:
    // 0x2256a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2256a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2256a4:
    // 0x2256a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2256a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2256a8:
    // 0x2256a8: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2256a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2256ac:
    // 0x2256ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2256b0:
    if (ctx->pc == 0x2256B0u) {
        ctx->pc = 0x2256B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256ACu;
        // 0x2256b0: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256B4u;
        goto label_2256b4;
    }
    ctx->pc = 0x2256ACu;
    {
        const bool branch_taken_0x2256ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2256B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256ACu;
        // 0x2256b0: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256ac) {
            ctx->pc = 0x2256BCu;
            goto label_2256bc;
        }
    }
    ctx->pc = 0x2256B4u;
label_2256b4:
    // 0x2256b4: 0x40f809  jalr        $v0
label_2256b8:
    if (ctx->pc == 0x2256B8u) {
        ctx->pc = 0x2256BCu;
        goto label_2256bc;
    }
    ctx->pc = 0x2256B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2256BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2256B4u, 0x2256BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2256BCu;
label_2256bc:
    // 0x2256bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2256bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2256c0:
    // 0x2256c0: 0x3e00008  jr          $ra
label_2256c4:
    if (ctx->pc == 0x2256C4u) {
        ctx->pc = 0x2256C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256C0u;
        // 0x2256c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2256C8u;
        goto label_fallthrough_0x2256c0;
    }
    ctx->pc = 0x2256C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2256C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256C0u;
        // 0x2256c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2256C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2256c0:
    ctx->pc = 0x2256C8u;
}

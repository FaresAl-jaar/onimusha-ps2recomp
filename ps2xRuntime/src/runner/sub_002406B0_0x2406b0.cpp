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

// Function: sub_002406B0
// Address: 0x2406b0 - 0x2406d8
void sub_002406B0_0x2406b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002406B0_0x2406b0");
#endif

    switch (ctx->pc) {
        case 0x2406b0u: goto label_2406b0;
        case 0x2406b4u: goto label_2406b4;
        case 0x2406b8u: goto label_2406b8;
        case 0x2406bcu: goto label_2406bc;
        case 0x2406c0u: goto label_2406c0;
        case 0x2406c4u: goto label_2406c4;
        case 0x2406c8u: goto label_2406c8;
        case 0x2406ccu: goto label_2406cc;
        case 0x2406d0u: goto label_2406d0;
        case 0x2406d4u: goto label_2406d4;
        default: break;
    }

    ctx->pc = 0x2406b0u;

label_2406b0:
    // 0x2406b0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2406b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_2406b4:
    // 0x2406b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2406b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2406b8:
    // 0x2406b8: 0x8c428f94  lw          $v0, -0x706C($v0)
    ctx->pc = 0x2406b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938516)));
label_2406bc:
    // 0x2406bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2406c0:
    if (ctx->pc == 0x2406C0u) {
        ctx->pc = 0x2406C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406BCu;
        // 0x2406c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406C4u;
        goto label_2406c4;
    }
    ctx->pc = 0x2406BCu;
    {
        const bool branch_taken_0x2406bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406BCu;
        // 0x2406c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406bc) {
            ctx->pc = 0x2406CCu;
            goto label_2406cc;
        }
    }
    ctx->pc = 0x2406C4u;
label_2406c4:
    // 0x2406c4: 0x40f809  jalr        $v0
label_2406c8:
    if (ctx->pc == 0x2406C8u) {
        ctx->pc = 0x2406CCu;
        goto label_2406cc;
    }
    ctx->pc = 0x2406C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2406CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2406C4u, 0x2406CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2406CCu;
label_2406cc:
    // 0x2406cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2406ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2406d0:
    // 0x2406d0: 0x3e00008  jr          $ra
label_2406d4:
    if (ctx->pc == 0x2406D4u) {
        ctx->pc = 0x2406D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406D0u;
        // 0x2406d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406D8u;
        goto label_fallthrough_0x2406d0;
    }
    ctx->pc = 0x2406D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2406D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406D0u;
        // 0x2406d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2406D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2406d0:
    ctx->pc = 0x2406D8u;
}

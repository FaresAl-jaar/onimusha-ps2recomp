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

// Function: sub_00229098
// Address: 0x229098 - 0x2290c0
void sub_00229098_0x229098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229098_0x229098");
#endif

    switch (ctx->pc) {
        case 0x229098u: goto label_229098;
        case 0x22909cu: goto label_22909c;
        case 0x2290a0u: goto label_2290a0;
        case 0x2290a4u: goto label_2290a4;
        case 0x2290a8u: goto label_2290a8;
        case 0x2290acu: goto label_2290ac;
        case 0x2290b0u: goto label_2290b0;
        case 0x2290b4u: goto label_2290b4;
        case 0x2290b8u: goto label_2290b8;
        case 0x2290bcu: goto label_2290bc;
        default: break;
    }

    ctx->pc = 0x229098u;

label_229098:
    // 0x229098: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x229098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_22909c:
    // 0x22909c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22909cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2290a0:
    // 0x2290a0: 0x8c428f98  lw          $v0, -0x7068($v0)
    ctx->pc = 0x2290a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938520)));
label_2290a4:
    // 0x2290a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2290a8:
    if (ctx->pc == 0x2290A8u) {
        ctx->pc = 0x2290A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290A4u;
        // 0x2290a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2290ACu;
        goto label_2290ac;
    }
    ctx->pc = 0x2290A4u;
    {
        const bool branch_taken_0x2290a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2290A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290A4u;
        // 0x2290a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290a4) {
            ctx->pc = 0x2290B4u;
            goto label_2290b4;
        }
    }
    ctx->pc = 0x2290ACu;
label_2290ac:
    // 0x2290ac: 0x40f809  jalr        $v0
label_2290b0:
    if (ctx->pc == 0x2290B0u) {
        ctx->pc = 0x2290B4u;
        goto label_2290b4;
    }
    ctx->pc = 0x2290ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2290B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2290ACu, 0x2290B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2290B4u;
label_2290b4:
    // 0x2290b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2290b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2290b8:
    // 0x2290b8: 0x3e00008  jr          $ra
label_2290bc:
    if (ctx->pc == 0x2290BCu) {
        ctx->pc = 0x2290BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290B8u;
        // 0x2290bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2290C0u;
        goto label_fallthrough_0x2290b8;
    }
    ctx->pc = 0x2290B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2290BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2290B8u;
        // 0x2290bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2290B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2290b8:
    ctx->pc = 0x2290C0u;
}

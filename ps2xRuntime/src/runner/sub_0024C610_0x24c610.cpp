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

// Function: sub_0024C610
// Address: 0x24c610 - 0x24c640
void sub_0024C610_0x24c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C610_0x24c610");
#endif

    switch (ctx->pc) {
        case 0x24c610u: goto label_24c610;
        case 0x24c614u: goto label_24c614;
        case 0x24c618u: goto label_24c618;
        case 0x24c61cu: goto label_24c61c;
        case 0x24c620u: goto label_24c620;
        case 0x24c624u: goto label_24c624;
        case 0x24c628u: goto label_24c628;
        case 0x24c62cu: goto label_24c62c;
        case 0x24c630u: goto label_24c630;
        case 0x24c634u: goto label_24c634;
        case 0x24c638u: goto label_24c638;
        case 0x24c63cu: goto label_24c63c;
        default: break;
    }

    ctx->pc = 0x24c610u;

label_24c610:
    // 0x24c610: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24c610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24c614:
    // 0x24c614: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24c618:
    // 0x24c618: 0x8c435a84  lw          $v1, 0x5A84($v0)
    ctx->pc = 0x24c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23172)));
label_24c61c:
    // 0x24c61c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24c61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c620:
    // 0x24c620: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_24c624:
    if (ctx->pc == 0x24C624u) {
        ctx->pc = 0x24C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C620u;
        // 0x24c624: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C628u;
        goto label_24c628;
    }
    ctx->pc = 0x24C620u;
    {
        const bool branch_taken_0x24c620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C620u;
        // 0x24c624: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c620) {
            ctx->pc = 0x24C634u;
            goto label_24c634;
        }
    }
    ctx->pc = 0x24C628u;
label_24c628:
    // 0x24c628: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24c628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24c62c:
    // 0x24c62c: 0x60f809  jalr        $v1
label_24c630:
    if (ctx->pc == 0x24C630u) {
        ctx->pc = 0x24C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C62Cu;
        // 0x24c630: 0x8c445a88  lw          $a0, 0x5A88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C634u;
        goto label_24c634;
    }
    ctx->pc = 0x24C62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24C634u);
        ctx->pc = 0x24C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C62Cu;
        // 0x24c630: 0x8c445a88  lw          $a0, 0x5A88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C62Cu, 0x24C634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C634u;
label_24c634:
    // 0x24c634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c638:
    // 0x24c638: 0x3e00008  jr          $ra
label_24c63c:
    if (ctx->pc == 0x24C63Cu) {
        ctx->pc = 0x24C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C638u;
        // 0x24c63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C640u;
        goto label_fallthrough_0x24c638;
    }
    ctx->pc = 0x24C638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C638u;
        // 0x24c63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24c638:
    ctx->pc = 0x24C640u;
}

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

// Function: sub_002435F8
// Address: 0x2435f8 - 0x243624
void sub_002435F8_0x2435f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002435F8_0x2435f8");
#endif

    switch (ctx->pc) {
        case 0x2435f8u: goto label_2435f8;
        case 0x2435fcu: goto label_2435fc;
        case 0x243600u: goto label_243600;
        case 0x243604u: goto label_243604;
        case 0x243608u: goto label_243608;
        case 0x24360cu: goto label_24360c;
        case 0x243610u: goto label_243610;
        case 0x243614u: goto label_243614;
        case 0x243618u: goto label_243618;
        case 0x24361cu: goto label_24361c;
        case 0x243620u: goto label_243620;
        default: break;
    }

    ctx->pc = 0x2435f8u;

label_2435f8:
    // 0x2435f8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2435f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_2435fc:
    // 0x2435fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2435fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_243600:
    // 0x243600: 0x8c43e974  lw          $v1, -0x168C($v0)
    ctx->pc = 0x243600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961524)));
label_243604:
    // 0x243604: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_243608:
    if (ctx->pc == 0x243608u) {
        ctx->pc = 0x243608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243604u;
        // 0x243608: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24360Cu;
        goto label_24360c;
    }
    ctx->pc = 0x243604u;
    {
        const bool branch_taken_0x243604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243604u;
        // 0x243608: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243604) {
            ctx->pc = 0x243618u;
            goto label_243618;
        }
    }
    ctx->pc = 0x24360Cu;
label_24360c:
    // 0x24360c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24360cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_243610:
    // 0x243610: 0x60f809  jalr        $v1
label_243614:
    if (ctx->pc == 0x243614u) {
        ctx->pc = 0x243614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243610u;
        // 0x243614: 0x8c44e978  lw          $a0, -0x1688($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243618u;
        goto label_243618;
    }
    ctx->pc = 0x243610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x243618u);
        ctx->pc = 0x243614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243610u;
        // 0x243614: 0x8c44e978  lw          $a0, -0x1688($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961528)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243610u, 0x243618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243618u;
label_243618:
    // 0x243618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24361c:
    // 0x24361c: 0x3e00008  jr          $ra
label_243620:
    if (ctx->pc == 0x243620u) {
        ctx->pc = 0x243620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24361Cu;
        // 0x243620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243624u;
        goto label_fallthrough_0x24361c;
    }
    ctx->pc = 0x24361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24361Cu;
        // 0x243620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24361c:
    ctx->pc = 0x243624u;
}

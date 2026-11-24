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

// Function: sub_00239540
// Address: 0x239540 - 0x239568
void sub_00239540_0x239540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239540_0x239540");
#endif

    switch (ctx->pc) {
        case 0x239540u: goto label_239540;
        case 0x239544u: goto label_239544;
        case 0x239548u: goto label_239548;
        case 0x23954cu: goto label_23954c;
        case 0x239550u: goto label_239550;
        case 0x239554u: goto label_239554;
        case 0x239558u: goto label_239558;
        case 0x23955cu: goto label_23955c;
        case 0x239560u: goto label_239560;
        case 0x239564u: goto label_239564;
        default: break;
    }

    ctx->pc = 0x239540u;

label_239540:
    // 0x239540: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x239540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_239544:
    // 0x239544: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_239548:
    // 0x239548: 0x8c428f98  lw          $v0, -0x7068($v0)
    ctx->pc = 0x239548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938520)));
label_23954c:
    // 0x23954c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_239550:
    if (ctx->pc == 0x239550u) {
        ctx->pc = 0x239550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23954Cu;
        // 0x239550: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239554u;
        goto label_239554;
    }
    ctx->pc = 0x23954Cu;
    {
        const bool branch_taken_0x23954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23954Cu;
        // 0x239550: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23954c) {
            ctx->pc = 0x23955Cu;
            goto label_23955c;
        }
    }
    ctx->pc = 0x239554u;
label_239554:
    // 0x239554: 0x40f809  jalr        $v0
label_239558:
    if (ctx->pc == 0x239558u) {
        ctx->pc = 0x23955Cu;
        goto label_23955c;
    }
    ctx->pc = 0x239554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23955Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239554u, 0x23955Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23955Cu;
label_23955c:
    // 0x23955c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23955cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239560:
    // 0x239560: 0x3e00008  jr          $ra
label_239564:
    if (ctx->pc == 0x239564u) {
        ctx->pc = 0x239564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239560u;
        // 0x239564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239568u;
        goto label_fallthrough_0x239560;
    }
    ctx->pc = 0x239560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239560u;
        // 0x239564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x239560:
    ctx->pc = 0x239568u;
}

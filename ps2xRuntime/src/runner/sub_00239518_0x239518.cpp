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

// Function: sub_00239518
// Address: 0x239518 - 0x239540
void sub_00239518_0x239518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239518_0x239518");
#endif

    switch (ctx->pc) {
        case 0x239518u: goto label_239518;
        case 0x23951cu: goto label_23951c;
        case 0x239520u: goto label_239520;
        case 0x239524u: goto label_239524;
        case 0x239528u: goto label_239528;
        case 0x23952cu: goto label_23952c;
        case 0x239530u: goto label_239530;
        case 0x239534u: goto label_239534;
        case 0x239538u: goto label_239538;
        case 0x23953cu: goto label_23953c;
        default: break;
    }

    ctx->pc = 0x239518u;

label_239518:
    // 0x239518: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x239518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_23951c:
    // 0x23951c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23951cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_239520:
    // 0x239520: 0x8c428f94  lw          $v0, -0x706C($v0)
    ctx->pc = 0x239520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938516)));
label_239524:
    // 0x239524: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_239528:
    if (ctx->pc == 0x239528u) {
        ctx->pc = 0x239528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239524u;
        // 0x239528: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23952Cu;
        goto label_23952c;
    }
    ctx->pc = 0x239524u;
    {
        const bool branch_taken_0x239524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239524u;
        // 0x239528: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239524) {
            ctx->pc = 0x239534u;
            goto label_239534;
        }
    }
    ctx->pc = 0x23952Cu;
label_23952c:
    // 0x23952c: 0x40f809  jalr        $v0
label_239530:
    if (ctx->pc == 0x239530u) {
        ctx->pc = 0x239534u;
        goto label_239534;
    }
    ctx->pc = 0x23952Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239534u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23952Cu, 0x239534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239534u;
label_239534:
    // 0x239534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239538:
    // 0x239538: 0x3e00008  jr          $ra
label_23953c:
    if (ctx->pc == 0x23953Cu) {
        ctx->pc = 0x23953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239538u;
        // 0x23953c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239540u;
        goto label_fallthrough_0x239538;
    }
    ctx->pc = 0x239538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239538u;
        // 0x23953c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x239538:
    ctx->pc = 0x239540u;
}

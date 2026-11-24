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

// Function: sub_0024D950
// Address: 0x24d950 - 0x24d978
void sub_0024D950_0x24d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D950_0x24d950");
#endif

    switch (ctx->pc) {
        case 0x24d950u: goto label_24d950;
        case 0x24d954u: goto label_24d954;
        case 0x24d958u: goto label_24d958;
        case 0x24d95cu: goto label_24d95c;
        case 0x24d960u: goto label_24d960;
        case 0x24d964u: goto label_24d964;
        case 0x24d968u: goto label_24d968;
        case 0x24d96cu: goto label_24d96c;
        case 0x24d970u: goto label_24d970;
        case 0x24d974u: goto label_24d974;
        default: break;
    }

    ctx->pc = 0x24d950u;

label_24d950:
    // 0x24d950: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24d954:
    // 0x24d954: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24d958:
    // 0x24d958: 0x8c428fa0  lw          $v0, -0x7060($v0)
    ctx->pc = 0x24d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938528)));
label_24d95c:
    // 0x24d95c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24d960:
    if (ctx->pc == 0x24D960u) {
        ctx->pc = 0x24D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D95Cu;
        // 0x24d960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D964u;
        goto label_24d964;
    }
    ctx->pc = 0x24D95Cu;
    {
        const bool branch_taken_0x24d95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D95Cu;
        // 0x24d960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d95c) {
            ctx->pc = 0x24D96Cu;
            goto label_24d96c;
        }
    }
    ctx->pc = 0x24D964u;
label_24d964:
    // 0x24d964: 0x40f809  jalr        $v0
label_24d968:
    if (ctx->pc == 0x24D968u) {
        ctx->pc = 0x24D96Cu;
        goto label_24d96c;
    }
    ctx->pc = 0x24D964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D96Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D964u, 0x24D96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D96Cu;
label_24d96c:
    // 0x24d96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24d970:
    // 0x24d970: 0x3e00008  jr          $ra
label_24d974:
    if (ctx->pc == 0x24D974u) {
        ctx->pc = 0x24D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D970u;
        // 0x24d974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D978u;
        goto label_fallthrough_0x24d970;
    }
    ctx->pc = 0x24D970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D970u;
        // 0x24d974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24d970:
    ctx->pc = 0x24D978u;
}

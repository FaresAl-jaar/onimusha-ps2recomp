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

// Function: sub_001F5058
// Address: 0x1f5058 - 0x1f5080
void sub_001F5058_0x1f5058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5058_0x1f5058");
#endif

    switch (ctx->pc) {
        case 0x1f5058u: goto label_1f5058;
        case 0x1f505cu: goto label_1f505c;
        case 0x1f5060u: goto label_1f5060;
        case 0x1f5064u: goto label_1f5064;
        case 0x1f5068u: goto label_1f5068;
        case 0x1f506cu: goto label_1f506c;
        case 0x1f5070u: goto label_1f5070;
        case 0x1f5074u: goto label_1f5074;
        case 0x1f5078u: goto label_1f5078;
        case 0x1f507cu: goto label_1f507c;
        default: break;
    }

    ctx->pc = 0x1f5058u;

label_1f5058:
    // 0x1f5058: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f5058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1f505c:
    // 0x1f505c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f505cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f5060:
    // 0x1f5060: 0x8c428104  lw          $v0, -0x7EFC($v0)
    ctx->pc = 0x1f5060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934788)));
label_1f5064:
    // 0x1f5064: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5068:
    if (ctx->pc == 0x1F5068u) {
        ctx->pc = 0x1F5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5064u;
        // 0x1f5068: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F506Cu;
        goto label_1f506c;
    }
    ctx->pc = 0x1F5064u;
    {
        const bool branch_taken_0x1f5064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5064u;
        // 0x1f5068: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5064) {
            ctx->pc = 0x1F5074u;
            goto label_1f5074;
        }
    }
    ctx->pc = 0x1F506Cu;
label_1f506c:
    // 0x1f506c: 0x40f809  jalr        $v0
label_1f5070:
    if (ctx->pc == 0x1F5070u) {
        ctx->pc = 0x1F5074u;
        goto label_1f5074;
    }
    ctx->pc = 0x1F506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5074u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F506Cu, 0x1F5074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5074u;
label_1f5074:
    // 0x1f5074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5078:
    // 0x1f5078: 0x3e00008  jr          $ra
label_1f507c:
    if (ctx->pc == 0x1F507Cu) {
        ctx->pc = 0x1F507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5078u;
        // 0x1f507c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5080u;
        goto label_fallthrough_0x1f5078;
    }
    ctx->pc = 0x1F5078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5078u;
        // 0x1f507c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5078:
    ctx->pc = 0x1F5080u;
}

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

// Function: sub_001F5150
// Address: 0x1f5150 - 0x1f5178
void sub_001F5150_0x1f5150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5150_0x1f5150");
#endif

    switch (ctx->pc) {
        case 0x1f5150u: goto label_1f5150;
        case 0x1f5154u: goto label_1f5154;
        case 0x1f5158u: goto label_1f5158;
        case 0x1f515cu: goto label_1f515c;
        case 0x1f5160u: goto label_1f5160;
        case 0x1f5164u: goto label_1f5164;
        case 0x1f5168u: goto label_1f5168;
        case 0x1f516cu: goto label_1f516c;
        case 0x1f5170u: goto label_1f5170;
        case 0x1f5174u: goto label_1f5174;
        default: break;
    }

    ctx->pc = 0x1f5150u;

label_1f5150:
    // 0x1f5150: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f5150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1f5154:
    // 0x1f5154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f5158:
    // 0x1f5158: 0x8c42811c  lw          $v0, -0x7EE4($v0)
    ctx->pc = 0x1f5158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934812)));
label_1f515c:
    // 0x1f515c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5160:
    if (ctx->pc == 0x1F5160u) {
        ctx->pc = 0x1F5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F515Cu;
        // 0x1f5160: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5164u;
        goto label_1f5164;
    }
    ctx->pc = 0x1F515Cu;
    {
        const bool branch_taken_0x1f515c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F515Cu;
        // 0x1f5160: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f515c) {
            ctx->pc = 0x1F516Cu;
            goto label_1f516c;
        }
    }
    ctx->pc = 0x1F5164u;
label_1f5164:
    // 0x1f5164: 0x40f809  jalr        $v0
label_1f5168:
    if (ctx->pc == 0x1F5168u) {
        ctx->pc = 0x1F516Cu;
        goto label_1f516c;
    }
    ctx->pc = 0x1F5164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F516Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5164u, 0x1F516Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F516Cu;
label_1f516c:
    // 0x1f516c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f516cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5170:
    // 0x1f5170: 0x3e00008  jr          $ra
label_1f5174:
    if (ctx->pc == 0x1F5174u) {
        ctx->pc = 0x1F5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5170u;
        // 0x1f5174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5178u;
        goto label_fallthrough_0x1f5170;
    }
    ctx->pc = 0x1F5170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5170u;
        // 0x1f5174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5170:
    ctx->pc = 0x1F5178u;
}

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

// Function: sub_001F4EF0
// Address: 0x1f4ef0 - 0x1f4f18
void sub_001F4EF0_0x1f4ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4EF0_0x1f4ef0");
#endif

    switch (ctx->pc) {
        case 0x1f4ef0u: goto label_1f4ef0;
        case 0x1f4ef4u: goto label_1f4ef4;
        case 0x1f4ef8u: goto label_1f4ef8;
        case 0x1f4efcu: goto label_1f4efc;
        case 0x1f4f00u: goto label_1f4f00;
        case 0x1f4f04u: goto label_1f4f04;
        case 0x1f4f08u: goto label_1f4f08;
        case 0x1f4f0cu: goto label_1f4f0c;
        case 0x1f4f10u: goto label_1f4f10;
        case 0x1f4f14u: goto label_1f4f14;
        default: break;
    }

    ctx->pc = 0x1f4ef0u;

label_1f4ef0:
    // 0x1f4ef0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1f4ef4:
    // 0x1f4ef4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f4ef8:
    // 0x1f4ef8: 0x8c4280e0  lw          $v0, -0x7F20($v0)
    ctx->pc = 0x1f4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934752)));
label_1f4efc:
    // 0x1f4efc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f4f00:
    if (ctx->pc == 0x1F4F00u) {
        ctx->pc = 0x1F4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EFCu;
        // 0x1f4f00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4F04u;
        goto label_1f4f04;
    }
    ctx->pc = 0x1F4EFCu;
    {
        const bool branch_taken_0x1f4efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EFCu;
        // 0x1f4f00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4efc) {
            ctx->pc = 0x1F4F0Cu;
            goto label_1f4f0c;
        }
    }
    ctx->pc = 0x1F4F04u;
label_1f4f04:
    // 0x1f4f04: 0x40f809  jalr        $v0
label_1f4f08:
    if (ctx->pc == 0x1F4F08u) {
        ctx->pc = 0x1F4F0Cu;
        goto label_1f4f0c;
    }
    ctx->pc = 0x1F4F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F4F0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4F04u, 0x1F4F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4F0Cu;
label_1f4f0c:
    // 0x1f4f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4f10:
    // 0x1f4f10: 0x3e00008  jr          $ra
label_1f4f14:
    if (ctx->pc == 0x1F4F14u) {
        ctx->pc = 0x1F4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F10u;
        // 0x1f4f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4F18u;
        goto label_fallthrough_0x1f4f10;
    }
    ctx->pc = 0x1F4F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F10u;
        // 0x1f4f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f4f10:
    ctx->pc = 0x1F4F18u;
}

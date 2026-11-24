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

// Function: sub_001F5030
// Address: 0x1f5030 - 0x1f5058
void sub_001F5030_0x1f5030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5030_0x1f5030");
#endif

    switch (ctx->pc) {
        case 0x1f5030u: goto label_1f5030;
        case 0x1f5034u: goto label_1f5034;
        case 0x1f5038u: goto label_1f5038;
        case 0x1f503cu: goto label_1f503c;
        case 0x1f5040u: goto label_1f5040;
        case 0x1f5044u: goto label_1f5044;
        case 0x1f5048u: goto label_1f5048;
        case 0x1f504cu: goto label_1f504c;
        case 0x1f5050u: goto label_1f5050;
        case 0x1f5054u: goto label_1f5054;
        default: break;
    }

    ctx->pc = 0x1f5030u;

label_1f5030:
    // 0x1f5030: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f5030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1f5034:
    // 0x1f5034: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f5038:
    // 0x1f5038: 0x8c428100  lw          $v0, -0x7F00($v0)
    ctx->pc = 0x1f5038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934784)));
label_1f503c:
    // 0x1f503c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5040:
    if (ctx->pc == 0x1F5040u) {
        ctx->pc = 0x1F5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F503Cu;
        // 0x1f5040: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5044u;
        goto label_1f5044;
    }
    ctx->pc = 0x1F503Cu;
    {
        const bool branch_taken_0x1f503c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F503Cu;
        // 0x1f5040: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f503c) {
            ctx->pc = 0x1F504Cu;
            goto label_1f504c;
        }
    }
    ctx->pc = 0x1F5044u;
label_1f5044:
    // 0x1f5044: 0x40f809  jalr        $v0
label_1f5048:
    if (ctx->pc == 0x1F5048u) {
        ctx->pc = 0x1F504Cu;
        goto label_1f504c;
    }
    ctx->pc = 0x1F5044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F504Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5044u, 0x1F504Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F504Cu;
label_1f504c:
    // 0x1f504c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f504cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5050:
    // 0x1f5050: 0x3e00008  jr          $ra
label_1f5054:
    if (ctx->pc == 0x1F5054u) {
        ctx->pc = 0x1F5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5050u;
        // 0x1f5054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5058u;
        goto label_fallthrough_0x1f5050;
    }
    ctx->pc = 0x1F5050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5050u;
        // 0x1f5054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5050:
    ctx->pc = 0x1F5058u;
}

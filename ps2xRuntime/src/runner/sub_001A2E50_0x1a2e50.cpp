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

// Function: sub_001A2E50
// Address: 0x1a2e50 - 0x1a2ea8
void sub_001A2E50_0x1a2e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2E50_0x1a2e50");
#endif

    switch (ctx->pc) {
        case 0x1a2e68u: goto label_1a2e68;
        default: break;
    }

    ctx->pc = 0x1a2e50u;

    // 0x1a2e50: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x1a2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1a2e54: 0x24840104  addiu       $a0, $a0, 0x104
    ctx->pc = 0x1a2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
    // 0x1a2e58: 0x441826  xor         $v1, $v0, $a0
    ctx->pc = 0x1a2e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1a2e5c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a2e5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a2e60: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A2E60u;
    {
        const bool branch_taken_0x1a2e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e60) {
            ctx->pc = 0x1A2E98u;
            goto label_1a2e98;
        }
    }
    ctx->pc = 0x1A2E68u;
label_1a2e68:
    // 0x1a2e68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a2e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2e6c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2E6Cu;
    {
        const bool branch_taken_0x1a2e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a2e6c) {
            ctx->pc = 0x1A2E80u;
            goto label_1a2e80;
        }
    }
    ctx->pc = 0x1A2E74u;
    // 0x1a2e74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A2E74u;
    {
        const bool branch_taken_0x1a2e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e74) {
            ctx->pc = 0x1A2EA0u;
            goto label_1a2ea0;
        }
    }
    ctx->pc = 0x1A2E7Cu;
    // 0x1a2e7c: 0x0  nop
    ctx->pc = 0x1a2e7cu;
    // NOP
label_1a2e80:
    // 0x1a2e80: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a2e84: 0x441826  xor         $v1, $v0, $a0
    ctx->pc = 0x1a2e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1a2e88: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a2e88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a2e8c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A2E8Cu;
    {
        const bool branch_taken_0x1a2e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2e8c) {
            ctx->pc = 0x1A2E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2e68;
        }
    }
    ctx->pc = 0x1A2E94u;
    // 0x1a2e94: 0x0  nop
    ctx->pc = 0x1a2e94u;
    // NOP
label_1a2e98:
    // 0x1a2e98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2e9c: 0x0  nop
    ctx->pc = 0x1a2e9cu;
    // NOP
label_1a2ea0:
    // 0x1a2ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2EA8u;
}

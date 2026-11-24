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

// Function: sub_00255930
// Address: 0x255930 - 0x255968
void sub_00255930_0x255930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255930_0x255930");
#endif

    ctx->pc = 0x255930u;

    // 0x255930: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x255930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255934: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x255934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x255938: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255938u;
    {
        const bool branch_taken_0x255938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255938) {
            ctx->pc = 0x255958u;
            goto label_255958;
        }
    }
    ctx->pc = 0x255940u;
    // 0x255940: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x255940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x255944: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255944u;
    {
        const bool branch_taken_0x255944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255944u;
        // 0x255948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255944) {
            ctx->pc = 0x255958u;
            goto label_255958;
        }
    }
    ctx->pc = 0x25594Cu;
    // 0x25594c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25594Cu;
    {
        const bool branch_taken_0x25594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25594c) {
            ctx->pc = 0x255960u;
            goto label_255960;
        }
    }
    ctx->pc = 0x255954u;
    // 0x255954: 0x0  nop
    ctx->pc = 0x255954u;
    // NOP
label_255958:
    // 0x255958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x255958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25595c: 0x0  nop
    ctx->pc = 0x25595cu;
    // NOP
label_255960:
    // 0x255960: 0x3e00008  jr          $ra
    ctx->pc = 0x255960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255968u;
}

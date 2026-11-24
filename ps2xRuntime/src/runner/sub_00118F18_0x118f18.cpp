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

// Function: sub_00118F18
// Address: 0x118f18 - 0x118f50
void sub_00118F18_0x118f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118F18_0x118f18");
#endif

    ctx->pc = 0x118f18u;

    // 0x118f18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x118f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118f1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118F1Cu;
    {
        const bool branch_taken_0x118f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F1Cu;
        // 0x118f20: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f1c) {
            ctx->pc = 0x118F2Cu;
            goto label_118f2c;
        }
    }
    ctx->pc = 0x118F24u;
    // 0x118f24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118F24u;
    {
        const bool branch_taken_0x118f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F24u;
        // 0x118f28: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f24) {
            ctx->pc = 0x118F34u;
            goto label_118f34;
        }
    }
    ctx->pc = 0x118F2Cu;
label_118f2c:
    // 0x118f2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x118f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x118f30: 0xac434160  sw          $v1, 0x4160($v0)
    ctx->pc = 0x118f30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x404160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x404160u, _value); } while (0);
label_118f34:
    // 0x118f34: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x118F34u;
    {
        const bool branch_taken_0x118f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x118f34) {
            ctx->pc = 0x118F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118F34u;
            // 0x118f38: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118F48u;
            goto label_118f48;
        }
    }
    ctx->pc = 0x118F3Cu;
    // 0x118f3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x118f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118f40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x118f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x118f44: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x118f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_118f48:
    // 0x118f48: 0x3e00008  jr          $ra
    ctx->pc = 0x118F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F48u;
        // 0x118f4c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F50u;
}

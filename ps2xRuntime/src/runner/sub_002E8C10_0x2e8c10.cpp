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

// Function: sub_002E8C10
// Address: 0x2e8c10 - 0x2e8c48
void sub_002E8C10_0x2e8c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8C10_0x2e8c10");
#endif

    ctx->pc = 0x2e8c10u;

    // 0x2e8c10: 0xa0850228  sb          $a1, 0x228($a0)
    ctx->pc = 0x2e8c10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 552), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e8c14: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8C14u;
    {
        const bool branch_taken_0x2e8c14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C14u;
        // 0x2e8c18: 0xa0800229  sb          $zero, 0x229($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 553), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c14) {
            ctx->pc = 0x2E8C30u;
            goto label_2e8c30;
        }
    }
    ctx->pc = 0x2E8C1Cu;
    // 0x2e8c1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8c20: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2e8c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2e8c24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8C24u;
    {
        const bool branch_taken_0x2e8c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C24u;
        // 0x2e8c28: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c24) {
            ctx->pc = 0x2E8C40u;
            goto label_2e8c40;
        }
    }
    ctx->pc = 0x2E8C2Cu;
    // 0x2e8c2c: 0x0  nop
    ctx->pc = 0x2e8c2cu;
    // NOP
label_2e8c30:
    // 0x2e8c30: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2e8c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8c34: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2e8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2e8c38: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e8c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e8c3c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2e8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2e8c40:
    // 0x2e8c40: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8C48u;
}

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

// Function: sub_002E2C60
// Address: 0x2e2c60 - 0x2e2c9c
void sub_002E2C60_0x2e2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2C60_0x2e2c60");
#endif

    switch (ctx->pc) {
        case 0x2e2c88u: goto label_2e2c88;
        default: break;
    }

    ctx->pc = 0x2e2c60u;

    // 0x2e2c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2c64: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e2c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2c6c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x2e2c6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e2c70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2C70u;
    {
        const bool branch_taken_0x2e2c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C70u;
        // 0x2e2c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2c70) {
            ctx->pc = 0x2E2C80u;
            goto label_2e2c80;
        }
    }
    ctx->pc = 0x2E2C78u;
    // 0x2e2c78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2C78u;
    {
        const bool branch_taken_0x2e2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c78) {
            ctx->pc = 0x2E2C90u;
            goto label_2e2c90;
        }
    }
    ctx->pc = 0x2E2C80u;
label_2e2c80:
    // 0x2e2c80: 0xc0b8aec  jal         func_2E2BB0
    ctx->pc = 0x2E2C80u;
    SET_GPR_U32(ctx, 31, 0x2E2C88u);
    ctx->pc = 0x2E2BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2BB0u, 0x2E2C80u, 0x2E2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C88u;
label_2e2c88:
    // 0x2e2c88: 0x24020840  addiu       $v0, $zero, 0x840
    ctx->pc = 0x2e2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x2e2c8c: 0x0  nop
    ctx->pc = 0x2e2c8cu;
    // NOP
label_2e2c90:
    // 0x2e2c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2c94: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C94u;
        // 0x2e2c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2C9Cu;
}

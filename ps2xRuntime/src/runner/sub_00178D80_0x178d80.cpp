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

// Function: sub_00178D80
// Address: 0x178d80 - 0x178dc8
void sub_00178D80_0x178d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178D80_0x178d80");
#endif

    ctx->pc = 0x178d80u;

    // 0x178d80: 0x8c872df0  lw          $a3, 0x2DF0($a0)
    ctx->pc = 0x178d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11760)));
    // 0x178d84: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x178d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x178d88: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x178d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x178d8c: 0x8c832df4  lw          $v1, 0x2DF4($a0)
    ctx->pc = 0x178d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11764)));
    // 0x178d90: 0x462824  and         $a1, $v0, $a2
    ctx->pc = 0x178d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x178d94: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x178d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x178d98: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x178d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x178d9c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x178d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x178da0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x178da0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x178da4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x178DA4u;
    {
        const bool branch_taken_0x178da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x178da4) {
            ctx->pc = 0x178DB8u;
            goto label_178db8;
        }
    }
    ctx->pc = 0x178DACu;
    // 0x178dac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178DACu;
    {
        const bool branch_taken_0x178dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DACu;
        // 0x178db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178dac) {
            ctx->pc = 0x178DC0u;
            goto label_178dc0;
        }
    }
    ctx->pc = 0x178DB4u;
    // 0x178db4: 0x0  nop
    ctx->pc = 0x178db4u;
    // NOP
label_178db8:
    // 0x178db8: 0xac852df0  sw          $a1, 0x2DF0($a0)
    ctx->pc = 0x178db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11760), GPR_U32(ctx, 5));
    // 0x178dbc: 0x0  nop
    ctx->pc = 0x178dbcu;
    // NOP
label_178dc0:
    // 0x178dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x178DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178DC8u;
}

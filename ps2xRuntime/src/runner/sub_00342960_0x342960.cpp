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

// Function: sub_00342960
// Address: 0x342960 - 0x3429b0
void sub_00342960_0x342960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342960_0x342960");
#endif

    switch (ctx->pc) {
        case 0x342968u: goto label_342968;
        default: break;
    }

    ctx->pc = 0x342960u;

    // 0x342960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x342960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342964: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x342964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342968:
    // 0x342968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x342968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34296c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34296Cu;
    {
        const bool branch_taken_0x34296c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34296Cu;
        // 0x342970: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34296c) {
            ctx->pc = 0x342990u;
            goto label_342990;
        }
    }
    ctx->pc = 0x342974u;
    // 0x342974: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x342974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x342978: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x342978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x34297c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x342980: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x342980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x342984: 0xac6506c0  sw          $a1, 0x6C0($v1)
    ctx->pc = 0x342984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1728), GPR_U32(ctx, 5));
    // 0x342988: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342988u;
    {
        const bool branch_taken_0x342988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342988u;
        // 0x34298c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342988) {
            ctx->pc = 0x3429A8u;
            goto label_3429a8;
        }
    }
    ctx->pc = 0x342990u;
label_342990:
    // 0x342990: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x342990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x342994: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x342994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x342998: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x342998u;
    {
        const bool branch_taken_0x342998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342998u;
        // 0x34299c: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342998) {
            ctx->pc = 0x342968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342968;
        }
    }
    ctx->pc = 0x3429A0u;
    // 0x3429a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3429a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3429a4: 0x0  nop
    ctx->pc = 0x3429a4u;
    // NOP
label_3429a8:
    // 0x3429a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3429A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3429B0u;
}

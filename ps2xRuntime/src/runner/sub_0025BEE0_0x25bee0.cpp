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

// Function: sub_0025BEE0
// Address: 0x25bee0 - 0x25bf58
void sub_0025BEE0_0x25bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BEE0_0x25bee0");
#endif

    ctx->pc = 0x25bee0u;

    // 0x25bee0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25BEE0u;
    {
        const bool branch_taken_0x25bee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEE0u;
        // 0x25bee4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bee0) {
            ctx->pc = 0x25BEF0u;
            goto label_25bef0;
        }
    }
    ctx->pc = 0x25BEE8u;
    // 0x25bee8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25BEE8u;
    {
        const bool branch_taken_0x25bee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bee8) {
            ctx->pc = 0x25BF50u;
            goto label_25bf50;
        }
    }
    ctx->pc = 0x25BEF0u;
label_25bef0:
    // 0x25bef0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x25bef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25bef4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x25bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x25bef8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x25bef8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25befc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x25BEFCu;
    {
        const bool branch_taken_0x25befc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BEFCu;
        // 0x25bf00: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25befc) {
            ctx->pc = 0x25BF08u;
            goto label_25bf08;
        }
    }
    ctx->pc = 0x25BF04u;
    // 0x25bf04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25bf04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25bf08:
    // 0x25bf08: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25BF08u;
    {
        const bool branch_taken_0x25bf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf08) {
            ctx->pc = 0x25BF48u;
            goto label_25bf48;
        }
    }
    ctx->pc = 0x25BF10u;
    // 0x25bf10: 0x908308e8  lbu         $v1, 0x8E8($a0)
    ctx->pc = 0x25bf10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2280)));
    // 0x25bf14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bf18: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BF18u;
    {
        const bool branch_taken_0x25bf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25bf18) {
            ctx->pc = 0x25BF38u;
            goto label_25bf38;
        }
    }
    ctx->pc = 0x25BF20u;
    // 0x25bf20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25BF20u;
    {
        const bool branch_taken_0x25bf20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf20) {
            ctx->pc = 0x25BF30u;
            goto label_25bf30;
        }
    }
    ctx->pc = 0x25BF28u;
    // 0x25bf28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25BF28u;
    {
        const bool branch_taken_0x25bf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf28) {
            ctx->pc = 0x25BF40u;
            goto label_25bf40;
        }
    }
    ctx->pc = 0x25BF30u;
label_25bf30:
    // 0x25bf30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25BF30u;
    {
        const bool branch_taken_0x25bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF30u;
        // 0x25bf34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf30) {
            ctx->pc = 0x25BF50u;
            goto label_25bf50;
        }
    }
    ctx->pc = 0x25BF38u;
label_25bf38:
    // 0x25bf38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25BF38u;
    {
        const bool branch_taken_0x25bf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf38) {
            ctx->pc = 0x25BF50u;
            goto label_25bf50;
        }
    }
    ctx->pc = 0x25BF40u;
label_25bf40:
    // 0x25bf40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25BF40u;
    {
        const bool branch_taken_0x25bf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF40u;
        // 0x25bf44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf40) {
            ctx->pc = 0x25BF50u;
            goto label_25bf50;
        }
    }
    ctx->pc = 0x25BF48u;
label_25bf48:
    // 0x25bf48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25bf4c: 0x0  nop
    ctx->pc = 0x25bf4cu;
    // NOP
label_25bf50:
    // 0x25bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x25BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BF58u;
}

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

// Function: sub_0032FAD0
// Address: 0x32fad0 - 0x32fb40
void sub_0032FAD0_0x32fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FAD0_0x32fad0");
#endif

    switch (ctx->pc) {
        case 0x32fb00u: goto label_32fb00;
        default: break;
    }

    ctx->pc = 0x32fad0u;

    // 0x32fad0: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x32fad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32fad4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x32fad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x32fad8: 0x30430f00  andi        $v1, $v0, 0xF00
    ctx->pc = 0x32fad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x32fadc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fae0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x32fae0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x32fae4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x32fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x32fae8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32fae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32faec: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x32faecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32faf0: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x32faf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32faf4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x32FAF4u;
    {
        const bool branch_taken_0x32faf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAF4u;
        // 0x32faf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32faf4) {
            ctx->pc = 0x32FB30u;
            goto label_32fb30;
        }
    }
    ctx->pc = 0x32FAFCu;
    // 0x32fafc: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x32fafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_32fb00:
    // 0x32fb00: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x32fb00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32fb04: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x32fb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x32fb08: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x32fb08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32fb0c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x32fb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x32fb10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32FB10u;
    {
        const bool branch_taken_0x32fb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fb10) {
            ctx->pc = 0x32FB20u;
            goto label_32fb20;
        }
    }
    ctx->pc = 0x32FB18u;
    // 0x32fb18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32FB18u;
    {
        const bool branch_taken_0x32fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fb18) {
            ctx->pc = 0x32FB38u;
            goto label_32fb38;
        }
    }
    ctx->pc = 0x32FB20u;
label_32fb20:
    // 0x32fb20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32fb24: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x32fb24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32fb28: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x32FB28u;
    {
        const bool branch_taken_0x32fb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB28u;
        // 0x32fb2c: 0x24c6000a  addiu       $a2, $a2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb28) {
            ctx->pc = 0x32FB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fb00;
        }
    }
    ctx->pc = 0x32FB30u;
label_32fb30:
    // 0x32fb30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32fb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb34: 0x0  nop
    ctx->pc = 0x32fb34u;
    // NOP
label_32fb38:
    // 0x32fb38: 0x3e00008  jr          $ra
    ctx->pc = 0x32FB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FB40u;
}

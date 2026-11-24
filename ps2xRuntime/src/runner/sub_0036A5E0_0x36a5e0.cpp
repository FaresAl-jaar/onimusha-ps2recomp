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

// Function: sub_0036A5E0
// Address: 0x36a5e0 - 0x36a678
void sub_0036A5E0_0x36a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A5E0_0x36a5e0");
#endif

    switch (ctx->pc) {
        case 0x36a640u: goto label_36a640;
        default: break;
    }

    ctx->pc = 0x36a5e0u;

    // 0x36a5e0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x36a5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x36a5e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x36a5e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36a5e8: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A5E8u;
    {
        const bool branch_taken_0x36a5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x36A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5E8u;
        // 0x36a5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a5e8) {
            ctx->pc = 0x36A5F8u;
            goto label_36a5f8;
        }
    }
    ctx->pc = 0x36A5F0u;
    // 0x36a5f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x36A5F0u;
    {
        const bool branch_taken_0x36a5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a5f0) {
            ctx->pc = 0x36A670u;
            goto label_36a670;
        }
    }
    ctx->pc = 0x36A5F8u;
label_36a5f8:
    // 0x36a5f8: 0x28620950  slti        $v0, $v1, 0x950
    ctx->pc = 0x36a5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2384) ? 1 : 0);
    // 0x36a5fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A5FCu;
    {
        const bool branch_taken_0x36a5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5FCu;
        // 0x36a600: 0x28610982  slti        $at, $v1, 0x982 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2434) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a5fc) {
            ctx->pc = 0x36A610u;
            goto label_36a610;
        }
    }
    ctx->pc = 0x36A604u;
    // 0x36a604: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A604u;
    {
        const bool branch_taken_0x36a604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a604) {
            ctx->pc = 0x36A618u;
            goto label_36a618;
        }
    }
    ctx->pc = 0x36A60Cu;
    // 0x36a60c: 0x0  nop
    ctx->pc = 0x36a60cu;
    // NOP
label_36a610:
    // 0x36a610: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36A610u;
    {
        const bool branch_taken_0x36a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A610u;
        // 0x36a614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a610) {
            ctx->pc = 0x36A670u;
            goto label_36a670;
        }
    }
    ctx->pc = 0x36A618u;
label_36a618:
    // 0x36a618: 0x2462f6b0  addiu       $v0, $v1, -0x950
    ctx->pc = 0x36a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964912));
    // 0x36a61c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x36a61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36a620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36a620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a624: 0x8f828bf0  lw          $v0, -0x7410($gp)
    ctx->pc = 0x36a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937584)));
    // 0x36a628: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x36a628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36a62c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x36a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36a630: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x36a630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36a634: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x36a634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x36a638: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36a638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36a63c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x36a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36a640:
    // 0x36a640: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x36a640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36a644: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A644u;
    {
        const bool branch_taken_0x36a644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x36A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A644u;
        // 0x36a648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a644) {
            ctx->pc = 0x36A658u;
            goto label_36a658;
        }
    }
    ctx->pc = 0x36A64Cu;
    // 0x36a64c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36A64Cu;
    {
        const bool branch_taken_0x36a64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a64c) {
            ctx->pc = 0x36A670u;
            goto label_36a670;
        }
    }
    ctx->pc = 0x36A654u;
    // 0x36a654: 0x0  nop
    ctx->pc = 0x36a654u;
    // NOP
label_36a658:
    // 0x36a658: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36a65c: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x36a65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x36a660: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36A660u;
    {
        const bool branch_taken_0x36a660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A660u;
        // 0x36a664: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a660) {
            ctx->pc = 0x36A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a640;
        }
    }
    ctx->pc = 0x36A668u;
    // 0x36a668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a66c: 0x0  nop
    ctx->pc = 0x36a66cu;
    // NOP
label_36a670:
    // 0x36a670: 0x3e00008  jr          $ra
    ctx->pc = 0x36A670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A678u;
}

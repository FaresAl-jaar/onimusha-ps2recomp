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

// Function: sub_0033A8E0
// Address: 0x33a8e0 - 0x33a94c
void sub_0033A8E0_0x33a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A8E0_0x33a8e0");
#endif

    switch (ctx->pc) {
        case 0x33a8f8u: goto label_33a8f8;
        case 0x33a918u: goto label_33a918;
        default: break;
    }

    ctx->pc = 0x33a8e0u;

    // 0x33a8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a8e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33a8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a8ec: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33a8f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33a8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a8f4: 0x0  nop
    ctx->pc = 0x33a8f4u;
    // NOP
label_33a8f8:
    // 0x33a8f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33a8fc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33A8FCu;
    {
        const bool branch_taken_0x33a8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8FCu;
        // 0x33a900: 0x61140  sll         $v0, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8fc) {
            ctx->pc = 0x33A928u;
            goto label_33a928;
        }
    }
    ctx->pc = 0x33A904u;
    // 0x33a904: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33a908: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x33a908u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x33a90c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x33a910: 0xc0ce2fc  jal         func_338BF0
    ctx->pc = 0x33A910u;
    SET_GPR_U32(ctx, 31, 0x33A918u);
    ctx->pc = 0x33A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A910u;
    // 0x33a914: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338BF0u, 0x33A910u, 0x33A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A918u;
label_33a918:
    // 0x33a918: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A918u;
    {
        const bool branch_taken_0x33a918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a918) {
            ctx->pc = 0x33A938u;
            goto label_33a938;
        }
    }
    ctx->pc = 0x33A920u;
    // 0x33a920: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33A920u;
    {
        const bool branch_taken_0x33a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A920u;
        // 0x33a924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a920) {
            ctx->pc = 0x33A940u;
            goto label_33a940;
        }
    }
    ctx->pc = 0x33A928u;
label_33a928:
    // 0x33a928: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33a928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33a92c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x33a92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33a930: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x33A930u;
    {
        const bool branch_taken_0x33a930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A930u;
        // 0x33a934: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a930) {
            ctx->pc = 0x33A8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a8f8;
        }
    }
    ctx->pc = 0x33A938u;
label_33a938:
    // 0x33a938: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33a938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a93c: 0x0  nop
    ctx->pc = 0x33a93cu;
    // NOP
label_33a940:
    // 0x33a940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a944: 0x3e00008  jr          $ra
    ctx->pc = 0x33A944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A944u;
        // 0x33a948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A94Cu;
}

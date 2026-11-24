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

// Function: sub_0025CF20
// Address: 0x25cf20 - 0x25cfac
void sub_0025CF20_0x25cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CF20_0x25cf20");
#endif

    switch (ctx->pc) {
        case 0x25cf38u: goto label_25cf38;
        default: break;
    }

    ctx->pc = 0x25cf20u;

    // 0x25cf20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25cf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cf24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cf28: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25cf2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cf30: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25CF30u;
    SET_GPR_U32(ctx, 31, 0x25CF38u);
    ctx->pc = 0x25CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF30u;
    // 0x25cf34: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25CF30u, 0x25CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF38u;
label_25cf38:
    // 0x25cf38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CF38u;
    {
        const bool branch_taken_0x25cf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cf38) {
            ctx->pc = 0x25CF48u;
            goto label_25cf48;
        }
    }
    ctx->pc = 0x25CF40u;
    // 0x25cf40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25CF40u;
    {
        const bool branch_taken_0x25cf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF40u;
        // 0x25cf44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf40) {
            ctx->pc = 0x25CFA0u;
            goto label_25cfa0;
        }
    }
    ctx->pc = 0x25CF48u;
label_25cf48:
    // 0x25cf48: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x25cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x25cf4c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CF4Cu;
    {
        const bool branch_taken_0x25cf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cf4c) {
            ctx->pc = 0x25CF60u;
            goto label_25cf60;
        }
    }
    ctx->pc = 0x25CF54u;
    // 0x25cf54: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25CF54u;
    {
        const bool branch_taken_0x25cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF54u;
        // 0x25cf58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf54) {
            ctx->pc = 0x25CFA0u;
            goto label_25cfa0;
        }
    }
    ctx->pc = 0x25CF5Cu;
    // 0x25cf5c: 0x0  nop
    ctx->pc = 0x25cf5cu;
    // NOP
label_25cf60:
    // 0x25cf60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25cf60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25cf64: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x25cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x25cf68: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x25cf68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25cf6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x25CF6Cu;
    {
        const bool branch_taken_0x25cf6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF6Cu;
        // 0x25cf70: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf6c) {
            ctx->pc = 0x25CF78u;
            goto label_25cf78;
        }
    }
    ctx->pc = 0x25CF74u;
    // 0x25cf74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25cf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cf78:
    // 0x25cf78: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CF78u;
    {
        const bool branch_taken_0x25cf78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cf78) {
            ctx->pc = 0x25CF88u;
            goto label_25cf88;
        }
    }
    ctx->pc = 0x25CF80u;
    // 0x25cf80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25CF80u;
    {
        const bool branch_taken_0x25cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF80u;
        // 0x25cf84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf80) {
            ctx->pc = 0x25CFA0u;
            goto label_25cfa0;
        }
    }
    ctx->pc = 0x25CF88u;
label_25cf88:
    // 0x25cf88: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x25cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x25cf8c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25cf8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cf90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CF90u;
    {
        const bool branch_taken_0x25cf90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cf90) {
            ctx->pc = 0x25CFA0u;
            goto label_25cfa0;
        }
    }
    ctx->pc = 0x25CF98u;
    // 0x25cf98: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25CF98u;
    {
        const bool branch_taken_0x25cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF98u;
        // 0x25cf9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf98) {
            ctx->pc = 0x25CFA0u;
            goto label_25cfa0;
        }
    }
    ctx->pc = 0x25CFA0u;
label_25cfa0:
    // 0x25cfa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x25CFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFA4u;
        // 0x25cfa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CFACu;
}

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

// Function: sub_00180E70
// Address: 0x180e70 - 0x180ec8
void sub_00180E70_0x180e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180E70_0x180e70");
#endif

    switch (ctx->pc) {
        case 0x180e80u: goto label_180e80;
        default: break;
    }

    ctx->pc = 0x180e70u;

    // 0x180e70: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x180e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x180e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x180e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e7c: 0x0  nop
    ctx->pc = 0x180e7cu;
    // NOP
label_180e80:
    // 0x180e80: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x180e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x180e84: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x180E84u;
    {
        const bool branch_taken_0x180e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x180e84) {
            ctx->pc = 0x180EA8u;
            goto label_180ea8;
        }
    }
    ctx->pc = 0x180E8Cu;
    // 0x180e8c: 0x908200ca  lbu         $v0, 0xCA($a0)
    ctx->pc = 0x180e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 202)));
    // 0x180e90: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x180e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x180e94: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x180e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x180e98: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180e9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x180E9Cu;
    {
        const bool branch_taken_0x180e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E9Cu;
        // 0x180ea0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e9c) {
            ctx->pc = 0x180EC0u;
            goto label_180ec0;
        }
    }
    ctx->pc = 0x180EA4u;
    // 0x180ea4: 0x0  nop
    ctx->pc = 0x180ea4u;
    // NOP
label_180ea8:
    // 0x180ea8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x180ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x180eac: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x180eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x180eb0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x180eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x180eb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x180EB4u;
    {
        const bool branch_taken_0x180eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EB4u;
        // 0x180eb8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180eb4) {
            ctx->pc = 0x180E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180e80;
        }
    }
    ctx->pc = 0x180EBCu;
    // 0x180ebc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x180ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_180ec0:
    // 0x180ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x180EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180EC8u;
}

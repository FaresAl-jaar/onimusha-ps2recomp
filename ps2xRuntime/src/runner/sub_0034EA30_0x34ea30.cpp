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

// Function: sub_0034EA30
// Address: 0x34ea30 - 0x34ea84
void sub_0034EA30_0x34ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EA30_0x34ea30");
#endif

    ctx->pc = 0x34ea30u;

    // 0x34ea30: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x34ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34ea34: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34ea34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34ea38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EA38u;
    {
        const bool branch_taken_0x34ea38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ea38) {
            ctx->pc = 0x34EA48u;
            goto label_34ea48;
        }
    }
    ctx->pc = 0x34EA40u;
    // 0x34ea40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34EA40u;
    {
        const bool branch_taken_0x34ea40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA40u;
        // 0x34ea44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea40) {
            ctx->pc = 0x34EA68u;
            goto label_34ea68;
        }
    }
    ctx->pc = 0x34EA48u;
label_34ea48:
    // 0x34ea48: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34ea48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34ea4c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34EA4Cu;
    {
        const bool branch_taken_0x34ea4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ea4c) {
            ctx->pc = 0x34EA60u;
            goto label_34ea60;
        }
    }
    ctx->pc = 0x34EA54u;
    // 0x34ea54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EA54u;
    {
        const bool branch_taken_0x34ea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA54u;
        // 0x34ea58: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea54) {
            ctx->pc = 0x34EA68u;
            goto label_34ea68;
        }
    }
    ctx->pc = 0x34EA5Cu;
    // 0x34ea5c: 0x0  nop
    ctx->pc = 0x34ea5cu;
    // NOP
label_34ea60:
    // 0x34ea60: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34ea64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34ea68:
    // 0x34ea68: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x34ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34ea6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34ea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ea70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ea74: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x34ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x34ea78: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x34ea78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x34ea7c: 0x3e00008  jr          $ra
    ctx->pc = 0x34EA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA7Cu;
        // 0x34ea80: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EA84u;
}

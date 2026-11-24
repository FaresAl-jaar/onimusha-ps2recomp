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

// Function: sub_002F4C30
// Address: 0x2f4c30 - 0x2f4c90
void sub_002F4C30_0x2f4c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4C30_0x2f4c30");
#endif

    switch (ctx->pc) {
        case 0x2f4c50u: goto label_2f4c50;
        case 0x2f4c70u: goto label_2f4c70;
        default: break;
    }

    ctx->pc = 0x2f4c30u;

    // 0x2f4c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f4c34: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2f4c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f4c38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f4c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f4c3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4c44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f4c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c48: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x2F4C48u;
    SET_GPR_U32(ctx, 31, 0x2F4C50u);
    ctx->pc = 0x2F4C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C48u;
    // 0x2f4c4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2F4C48u, 0x2F4C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C50u;
label_2f4c50:
    // 0x2f4c50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4C50u;
    {
        const bool branch_taken_0x2f4c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4c50) {
            ctx->pc = 0x2F4C60u;
            goto label_2f4c60;
        }
    }
    ctx->pc = 0x2F4C58u;
    // 0x2f4c58: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2f4c58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4c5c: 0x0  nop
    ctx->pc = 0x2f4c5cu;
    // NOP
label_2f4c60:
    // 0x2f4c60: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4C60u;
    {
        const bool branch_taken_0x2f4c60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C60u;
        // 0x2f4c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c60) {
            ctx->pc = 0x2F4C78u;
            goto label_2f4c78;
        }
    }
    ctx->pc = 0x2F4C68u;
    // 0x2f4c68: 0xc0bd2d8  jal         func_2F4B60
    ctx->pc = 0x2F4C68u;
    SET_GPR_U32(ctx, 31, 0x2F4C70u);
    ctx->pc = 0x2F4C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C68u;
    // 0x2f4c6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B60u, 0x2F4C68u, 0x2F4C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C70u;
label_2f4c70:
    // 0x2f4c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c74: 0x0  nop
    ctx->pc = 0x2f4c74u;
    // NOP
label_2f4c78:
    // 0x2f4c78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f4c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f4c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4c88: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C88u;
        // 0x2f4c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4C90u;
}

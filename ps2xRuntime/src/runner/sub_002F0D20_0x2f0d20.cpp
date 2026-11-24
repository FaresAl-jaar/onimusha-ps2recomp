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

// Function: sub_002F0D20
// Address: 0x2f0d20 - 0x2f0d94
void sub_002F0D20_0x2f0d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0D20_0x2f0d20");
#endif

    switch (ctx->pc) {
        case 0x2f0d50u: goto label_2f0d50;
        case 0x2f0d78u: goto label_2f0d78;
        default: break;
    }

    ctx->pc = 0x2f0d20u;

    // 0x2f0d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f0d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f0d24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f0d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f0d28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f0d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f0d2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f0d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f0d30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f0d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f0d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f0d38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f0d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f0d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f0d40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f0d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d44: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f0d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d48: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F0D48u;
    SET_GPR_U32(ctx, 31, 0x2F0D50u);
    ctx->pc = 0x2F0D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D48u;
    // 0x2f0d4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F0D48u, 0x2F0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D50u;
label_2f0d50:
    // 0x2f0d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f0d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d58: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f0d58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d5c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f0d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0d64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d68: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x2f0d68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2f0d6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2f0d6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d70: 0xc0d109c  jal         func_344270
    ctx->pc = 0x2F0D70u;
    SET_GPR_U32(ctx, 31, 0x2F0D78u);
    ctx->pc = 0x2F0D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D70u;
    // 0x2f0d74: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344270u, 0x2F0D70u, 0x2F0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D78u;
label_2f0d78:
    // 0x2f0d78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f0d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f0d7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f0d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0d80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f0d80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0d84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f0d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0d88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f0d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D8Cu;
        // 0x2f0d90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0D94u;
}

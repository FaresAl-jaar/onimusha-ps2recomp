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

// Function: sub_002F0F10
// Address: 0x2f0f10 - 0x2f0f80
void sub_002F0F10_0x2f0f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0F10_0x2f0f10");
#endif

    switch (ctx->pc) {
        case 0x2f0f40u: goto label_2f0f40;
        case 0x2f0f64u: goto label_2f0f64;
        default: break;
    }

    ctx->pc = 0x2f0f10u;

    // 0x2f0f10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f0f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f0f14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f0f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f0f18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f0f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f0f1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f0f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f0f20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f0f20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f0f28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f0f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0f30: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f0f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f34: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f0f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f38: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F0F38u;
    SET_GPR_U32(ctx, 31, 0x2F0F40u);
    ctx->pc = 0x2F0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F38u;
    // 0x2f0f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F0F38u, 0x2F0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F40u;
label_2f0f40:
    // 0x2f0f40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f0f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f48: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f0f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f4c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f0f4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0f54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f0f58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f5c: 0xc0d4e74  jal         func_3539D0
    ctx->pc = 0x2F0F5Cu;
    SET_GPR_U32(ctx, 31, 0x2F0F64u);
    ctx->pc = 0x2F0F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F5Cu;
    // 0x2f0f60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3539D0u, 0x2F0F5Cu, 0x2F0F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F64u;
label_2f0f64:
    // 0x2f0f64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f0f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0f68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f0f68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0f6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f0f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0f78: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F78u;
        // 0x2f0f7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0F80u;
}

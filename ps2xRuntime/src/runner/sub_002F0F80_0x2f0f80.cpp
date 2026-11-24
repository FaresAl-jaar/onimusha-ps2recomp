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

// Function: sub_002F0F80
// Address: 0x2f0f80 - 0x2f0ffc
void sub_002F0F80_0x2f0f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0F80_0x2f0f80");
#endif

    switch (ctx->pc) {
        case 0x2f0fb8u: goto label_2f0fb8;
        case 0x2f0fdcu: goto label_2f0fdc;
        default: break;
    }

    ctx->pc = 0x2f0f80u;

    // 0x2f0f80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f0f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f0f84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f0f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f0f88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f0f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f0f8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f0f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f0f90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f0f90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f0f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f0f98: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f0f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f0fa0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f0fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0fa8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f0fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f0facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fb0: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F0FB0u;
    SET_GPR_U32(ctx, 31, 0x2F0FB8u);
    ctx->pc = 0x2F0FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FB0u;
    // 0x2f0fb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F0FB0u, 0x2F0FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0FB8u;
label_2f0fb8:
    // 0x2f0fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0fbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fc0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f0fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fc4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f0fc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fc8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f0fc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fcc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2f0fccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0fd4: 0xc0d4bd0  jal         func_352F40
    ctx->pc = 0x2F0FD4u;
    SET_GPR_U32(ctx, 31, 0x2F0FDCu);
    ctx->pc = 0x2F0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0FD4u;
    // 0x2f0fd8: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352F40u, 0x2F0FD4u, 0x2F0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0FDCu;
label_2f0fdc:
    // 0x2f0fdc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f0fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f0fe0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f0fe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0fe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f0fe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0fe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f0fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FF4u;
        // 0x2f0ff8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0FFCu;
}

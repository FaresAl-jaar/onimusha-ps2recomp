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

// Function: sub_002F0DA0
// Address: 0x2f0da0 - 0x2f0e1c
void sub_002F0DA0_0x2f0da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0DA0_0x2f0da0");
#endif

    switch (ctx->pc) {
        case 0x2f0dd8u: goto label_2f0dd8;
        case 0x2f0dfcu: goto label_2f0dfc;
        default: break;
    }

    ctx->pc = 0x2f0da0u;

    // 0x2f0da0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f0da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f0da4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f0da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f0da8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f0da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f0dac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f0dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f0db0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f0db0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0db4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f0db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f0db8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f0db8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0dbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f0dc0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f0dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0dc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0dc8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f0dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0dcc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f0dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0dd0: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F0DD0u;
    SET_GPR_U32(ctx, 31, 0x2F0DD8u);
    ctx->pc = 0x2F0DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0DD0u;
    // 0x2f0dd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F0DD0u, 0x2F0DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0DD8u;
label_2f0dd8:
    // 0x2f0dd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ddc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f0ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0de0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f0de0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0de4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f0de4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0de8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2f0de8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0dec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0df0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0df4: 0xc0d2a2c  jal         func_34A8B0
    ctx->pc = 0x2F0DF4u;
    SET_GPR_U32(ctx, 31, 0x2F0DFCu);
    ctx->pc = 0x2F0DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0DF4u;
    // 0x2f0df8: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A8B0u, 0x2F0DF4u, 0x2F0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0DFCu;
label_2f0dfc:
    // 0x2f0dfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f0dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f0e00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f0e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0e04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f0e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0e08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f0e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0e14: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E14u;
        // 0x2f0e18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0E1Cu;
}

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

// Function: sub_002F1940
// Address: 0x2f1940 - 0x2f19c0
void sub_002F1940_0x2f1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1940_0x2f1940");
#endif

    switch (ctx->pc) {
        case 0x2f1978u: goto label_2f1978;
        case 0x2f19a0u: goto label_2f19a0;
        default: break;
    }

    ctx->pc = 0x2f1940u;

    // 0x2f1940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f1940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f1944: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f1948: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f1948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2f194c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f1950: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f1950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1954: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f1954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f1958: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f195c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f1960: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f1960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1964: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f1964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f1968: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f1968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f196c: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f1970: 0xc0bc2dc  jal         func_2F0B70
    ctx->pc = 0x2F1970u;
    SET_GPR_U32(ctx, 31, 0x2F1978u);
    ctx->pc = 0x2F1974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1970u;
    // 0x2f1974: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B70u, 0x2F1970u, 0x2F1978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1978u;
label_2f1978:
    // 0x2f1978: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f1978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f197c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f197cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1980: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f1980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1984: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f1984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f198c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f198cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1990: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f1990u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1994: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2f1994u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1998: 0xc0dadf4  jal         func_36B7D0
    ctx->pc = 0x2F1998u;
    SET_GPR_U32(ctx, 31, 0x2F19A0u);
    ctx->pc = 0x2F199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1998u;
    // 0x2f199c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B7D0u, 0x2F1998u, 0x2F19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19A0u;
label_2f19a0:
    // 0x2f19a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f19a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f19a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f19a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f19a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f19a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f19ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f19acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f19b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f19b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f19b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f19b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f19b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F19B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19B8u;
        // 0x2f19bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F19B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F19C0u;
}

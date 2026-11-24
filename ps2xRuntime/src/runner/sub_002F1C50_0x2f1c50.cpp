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

// Function: sub_002F1C50
// Address: 0x2f1c50 - 0x2f1cb0
void sub_002F1C50_0x2f1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1C50_0x2f1c50");
#endif

    switch (ctx->pc) {
        case 0x2f1c78u: goto label_2f1c78;
        case 0x2f1c98u: goto label_2f1c98;
        default: break;
    }

    ctx->pc = 0x2f1c50u;

    // 0x2f1c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f1c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f1c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f1c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1c60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f1c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1c68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f1c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c6c: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f1c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f1c70: 0xc0bc2dc  jal         func_2F0B70
    ctx->pc = 0x2F1C70u;
    SET_GPR_U32(ctx, 31, 0x2F1C78u);
    ctx->pc = 0x2F1C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C70u;
    // 0x2f1c74: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B70u, 0x2F1C70u, 0x2F1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C78u;
label_2f1c78:
    // 0x2f1c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f1c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c80: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2f1c80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c88: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c8c: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x2f1c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f1c90: 0xc0e24b8  jal         func_3892E0
    ctx->pc = 0x2F1C90u;
    SET_GPR_U32(ctx, 31, 0x2F1C98u);
    ctx->pc = 0x2F1C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C90u;
    // 0x2f1c94: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3892E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3892E0u, 0x2F1C90u, 0x2F1C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C98u;
label_2f1c98:
    // 0x2f1c98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1c9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f1c9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1CA8u;
        // 0x2f1cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1CB0u;
}

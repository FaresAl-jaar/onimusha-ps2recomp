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

// Function: sub_002F19C0
// Address: 0x2f19c0 - 0x2f1a3c
void sub_002F19C0_0x2f19c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F19C0_0x2f19c0");
#endif

    switch (ctx->pc) {
        case 0x2f19f8u: goto label_2f19f8;
        case 0x2f1a1cu: goto label_2f1a1c;
        default: break;
    }

    ctx->pc = 0x2f19c0u;

    // 0x2f19c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f19c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f19c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f19c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f19c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f19c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f19cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f19ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f19d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f19d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f19d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f19d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f19d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f19dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f19e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f19e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f19e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f19e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f19e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19ec: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f19ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f19f0: 0xc0bc2dc  jal         func_2F0B70
    ctx->pc = 0x2F19F0u;
    SET_GPR_U32(ctx, 31, 0x2F19F8u);
    ctx->pc = 0x2F19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F19F0u;
    // 0x2f19f4: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B70u, 0x2F19F0u, 0x2F19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F19F8u;
label_2f19f8:
    // 0x2f19f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f19f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f19fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f19fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a00: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f1a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a04: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f1a04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a08: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2f1a08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a14: 0xc0dcc8c  jal         func_373230
    ctx->pc = 0x2F1A14u;
    SET_GPR_U32(ctx, 31, 0x2F1A1Cu);
    ctx->pc = 0x2F1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1A14u;
    // 0x2f1a18: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373230u, 0x2F1A14u, 0x2F1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1A1Cu;
label_2f1a1c:
    // 0x2f1a1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f1a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1a20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f1a20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f1a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f1a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1A34u;
        // 0x2f1a38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1A3Cu;
}

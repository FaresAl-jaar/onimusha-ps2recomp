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

// Function: sub_002F1580
// Address: 0x2f1580 - 0x2f15fc
void sub_002F1580_0x2f1580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1580_0x2f1580");
#endif

    switch (ctx->pc) {
        case 0x2f15b8u: goto label_2f15b8;
        case 0x2f15dcu: goto label_2f15dc;
        default: break;
    }

    ctx->pc = 0x2f1580u;

    // 0x2f1580: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f1584: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f1584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f1588: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f1588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f158c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f1590: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f1590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1594: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f1594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1598: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f159c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f159cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f15a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f15a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f15a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f15a8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f15a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15ac: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f15acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f15b0: 0xc0973c8  jal         func_25CF20
    ctx->pc = 0x2F15B0u;
    SET_GPR_U32(ctx, 31, 0x2F15B8u);
    ctx->pc = 0x2F15B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15B0u;
    // 0x2f15b4: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CF20u, 0x2F15B0u, 0x2F15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15B8u;
label_2f15b8:
    // 0x2f15b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f15b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f15bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f15c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15c4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f15c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15c8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2f15c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f15ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f15d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f15d4: 0xc0c156c  jal         func_3055B0
    ctx->pc = 0x2F15D4u;
    SET_GPR_U32(ctx, 31, 0x2F15DCu);
    ctx->pc = 0x2F15D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F15D4u;
    // 0x2f15d8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3055B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3055B0u, 0x2F15D4u, 0x2F15DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15DCu;
label_2f15dc:
    // 0x2f15dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f15dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f15e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f15e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f15e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f15e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f15e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f15e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f15ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f15ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f15f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f15f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f15f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F15F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F15F4u;
        // 0x2f15f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F15F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F15FCu;
}

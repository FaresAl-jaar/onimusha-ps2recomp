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

// Function: sub_002F1600
// Address: 0x2f1600 - 0x2f1680
void sub_002F1600_0x2f1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1600_0x2f1600");
#endif

    switch (ctx->pc) {
        case 0x2f1638u: goto label_2f1638;
        case 0x2f1660u: goto label_2f1660;
        default: break;
    }

    ctx->pc = 0x2f1600u;

    // 0x2f1600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f1604: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f1604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f1608: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f1608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2f160c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f1610: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f1610u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1614: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f1614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f1618: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f161c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f1620: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f1620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1624: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f1624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f1628: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f1628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f162c: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f1630: 0xc0973c8  jal         func_25CF20
    ctx->pc = 0x2F1630u;
    SET_GPR_U32(ctx, 31, 0x2F1638u);
    ctx->pc = 0x2F1634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1630u;
    // 0x2f1634: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CF20u, 0x2F1630u, 0x2F1638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1638u;
label_2f1638:
    // 0x2f1638: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f1638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f163c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f163cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1640: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f1640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1644: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f1644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f164c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f164cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1650: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f1650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1654: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x2f1654u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f1658: 0xc0c1708  jal         func_305C20
    ctx->pc = 0x2F1658u;
    SET_GPR_U32(ctx, 31, 0x2F1660u);
    ctx->pc = 0x2F165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1658u;
    // 0x2f165c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305C20u, 0x2F1658u, 0x2F1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1660u;
label_2f1660:
    // 0x2f1660: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f1660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f1664: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f1664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1668: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f1668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f166c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f166cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1670: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f1670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1674: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f1674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1678: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1678u;
        // 0x2f167c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1680u;
}

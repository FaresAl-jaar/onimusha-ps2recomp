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

// Function: sub_002F1710
// Address: 0x2f1710 - 0x2f1790
void sub_002F1710_0x2f1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1710_0x2f1710");
#endif

    switch (ctx->pc) {
        case 0x2f1748u: goto label_2f1748;
        case 0x2f1770u: goto label_2f1770;
        default: break;
    }

    ctx->pc = 0x2f1710u;

    // 0x2f1710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f1710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f1714: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f1714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f1718: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f1718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2f171c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f1720: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f1720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1724: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f1724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f1728: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f172c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f1730: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f1730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f1734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f1738: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f1738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f173c: 0x8ca407c0  lw          $a0, 0x7C0($a1)
    ctx->pc = 0x2f173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x2f1740: 0xc0bc2dc  jal         func_2F0B70
    ctx->pc = 0x2F1740u;
    SET_GPR_U32(ctx, 31, 0x2F1748u);
    ctx->pc = 0x2F1744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1740u;
    // 0x2f1744: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0B70u, 0x2F1740u, 0x2F1748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1748u;
label_2f1748:
    // 0x2f1748: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f1748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f174c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f174cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1750: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f1750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1754: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f1754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f175c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f175cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1760: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2f1760u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1764: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x2f1764u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f1768: 0xc0c6ec0  jal         func_31BB00
    ctx->pc = 0x2F1768u;
    SET_GPR_U32(ctx, 31, 0x2F1770u);
    ctx->pc = 0x2F176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1768u;
    // 0x2f176c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB00u, 0x2F1768u, 0x2F1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1770u;
label_2f1770:
    // 0x2f1770: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f1770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f1774: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f1774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1778: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f1778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f177c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f177cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1780: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f1780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1784: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f1784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1788: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1788u;
        // 0x2f178c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1790u;
}

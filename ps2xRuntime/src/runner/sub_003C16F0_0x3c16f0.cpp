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

// Function: sub_003C16F0
// Address: 0x3c16f0 - 0x3c177c
void sub_003C16F0_0x3c16f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C16F0_0x3c16f0");
#endif

    switch (ctx->pc) {
        case 0x3c171cu: goto label_3c171c;
        case 0x3c174cu: goto label_3c174c;
        case 0x3c1768u: goto label_3c1768;
        default: break;
    }

    ctx->pc = 0x3c16f0u;

    // 0x3c16f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c16f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3c16f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c16fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c16fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c1700: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c1700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c1704: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c1704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1708: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x3c1708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x3c170c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c170cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1710: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x3c1710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x3c1714: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3C1714u;
    SET_GPR_U32(ctx, 31, 0x3C171Cu);
    ctx->pc = 0x3C1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1714u;
    // 0x3c1718: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3C1714u, 0x3C171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C171Cu;
label_3c171c:
    // 0x3c171c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c171cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c1720: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c1720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c1724: 0x2442e1f0  addiu       $v0, $v0, -0x1E10
    ctx->pc = 0x3c1724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959600));
    // 0x3c1728: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x3c1728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3c172c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c172cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E1F0u));
    // 0x3c1730: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3c1730u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3c1734: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3c1734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c1738: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c1738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c173c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3c173cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3c1740: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3c1740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c1744: 0xc041460  jal         func_105180
    ctx->pc = 0x3C1744u;
    SET_GPR_U32(ctx, 31, 0x3C174Cu);
    ctx->pc = 0x3C1748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1744u;
    // 0x3c1748: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3C1744u, 0x3C174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C174Cu;
label_3c174c:
    // 0x3c174c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3c174cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1750: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x3c1750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3c1754: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3c1754u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c1758: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3c1758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3c175c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c175cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1760: 0xc041494  jal         func_105250
    ctx->pc = 0x3C1760u;
    SET_GPR_U32(ctx, 31, 0x3C1768u);
    ctx->pc = 0x3C1764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1760u;
    // 0x3c1764: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x3C1760u, 0x3C1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1768u;
label_3c1768:
    // 0x3c1768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c1768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c176c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c176cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c1770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c1774: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1774u;
        // 0x3c1778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C177Cu;
}

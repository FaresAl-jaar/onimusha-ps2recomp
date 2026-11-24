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

// Function: sub_001D9550
// Address: 0x1d9550 - 0x1d95c0
void sub_001D9550_0x1d9550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9550_0x1d9550");
#endif

    switch (ctx->pc) {
        case 0x1d9574u: goto label_1d9574;
        case 0x1d9580u: goto label_1d9580;
        case 0x1d958cu: goto label_1d958c;
        case 0x1d959cu: goto label_1d959c;
        case 0x1d95acu: goto label_1d95ac;
        default: break;
    }

    ctx->pc = 0x1d9550u;

    // 0x1d9550: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1d9554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d955c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9564: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d9564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9568: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x1d9568u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d956c: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x1D956Cu;
    SET_GPR_U32(ctx, 31, 0x1D9574u);
    ctx->pc = 0x1D9570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D956Cu;
    // 0x1d9570: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x1D956Cu, 0x1D9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9574u;
label_1d9574:
    // 0x1d9574: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x1d9574u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d9578: 0xc04d594  jal         func_135650
    ctx->pc = 0x1D9578u;
    SET_GPR_U32(ctx, 31, 0x1D9580u);
    ctx->pc = 0x1D957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9578u;
    // 0x1d957c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x1D9578u, 0x1D9580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9580u;
label_1d9580:
    // 0x1d9580: 0x86050008  lh          $a1, 0x8($s0)
    ctx->pc = 0x1d9580u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d9584: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1D9584u;
    SET_GPR_U32(ctx, 31, 0x1D958Cu);
    ctx->pc = 0x1D9588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9584u;
    // 0x1d9588: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1D9584u, 0x1D958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D958Cu;
label_1d958c:
    // 0x1d958c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9590: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d9590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d9594: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D9594u;
    SET_GPR_U32(ctx, 31, 0x1D959Cu);
    ctx->pc = 0x1D9598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9594u;
    // 0x1d9598: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D9594u, 0x1D959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D959Cu;
label_1d959c:
    // 0x1d959c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d95a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95a4: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D95A4u;
    SET_GPR_U32(ctx, 31, 0x1D95ACu);
    ctx->pc = 0x1D95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95A4u;
    // 0x1d95a8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D95A4u, 0x1D95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95ACu;
label_1d95ac:
    // 0x1d95ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d95acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d95b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d95b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d95b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d95b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d95b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D95B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95B8u;
        // 0x1d95bc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D95B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D95C0u;
}

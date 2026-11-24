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

// Function: sub_001526B0
// Address: 0x1526b0 - 0x152714
void sub_001526B0_0x1526b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001526B0_0x1526b0");
#endif

    switch (ctx->pc) {
        case 0x1526c8u: goto label_1526c8;
        case 0x1526fcu: goto label_1526fc;
        case 0x152708u: goto label_152708;
        default: break;
    }

    ctx->pc = 0x1526b0u;

    // 0x1526b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1526b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1526b4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1526b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x1526b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1526b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1526bc: 0x8f85857c  lw          $a1, -0x7A84($gp)
    ctx->pc = 0x1526bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935932)));
    // 0x1526c0: 0xc04485a  jal         func_112168
    ctx->pc = 0x1526C0u;
    SET_GPR_U32(ctx, 31, 0x1526C8u);
    ctx->pc = 0x1526C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1526C0u;
    // 0x1526c4: 0x24841160  addiu       $a0, $a0, 0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112168u, 0x1526C0u, 0x1526C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526C8u;
label_1526c8:
    // 0x1526c8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1526c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x1526cc: 0x3c027777  lui         $v0, 0x7777
    ctx->pc = 0x1526ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30583 << 16));
    // 0x1526d0: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x1526d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x1526d4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x1526d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x1526d8: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x1526d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x1526dc: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x1526dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x1526e0: 0x34457779  ori         $a1, $v0, 0x7779
    ctx->pc = 0x1526e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30585);
    // 0x1526e4: 0x24c62720  addiu       $a2, $a2, 0x2720
    ctx->pc = 0x1526e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10016));
    // 0x1526e8: 0x24e707c0  addiu       $a3, $a3, 0x7C0
    ctx->pc = 0x1526e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1984));
    // 0x1526ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1526ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1526f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526f4: 0xc044880  jal         func_112200
    ctx->pc = 0x1526F4u;
    SET_GPR_U32(ctx, 31, 0x1526FCu);
    ctx->pc = 0x1526F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1526F4u;
    // 0x1526f8: 0x254a1160  addiu       $t2, $t2, 0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112200u, 0x1526F4u, 0x1526FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526FCu;
label_1526fc:
    // 0x1526fc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1526fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x152700: 0xc044986  jal         func_112618
    ctx->pc = 0x152700u;
    SET_GPR_U32(ctx, 31, 0x152708u);
    ctx->pc = 0x152704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152700u;
    // 0x152704: 0x24841160  addiu       $a0, $a0, 0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112618u, 0x152700u, 0x152708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152708u;
label_152708:
    // 0x152708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15270c: 0x3e00008  jr          $ra
    ctx->pc = 0x15270Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15270Cu;
        // 0x152710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15270Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152714u;
}

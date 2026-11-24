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

// Function: sub_001D96A0
// Address: 0x1d96a0 - 0x1d9710
void sub_001D96A0_0x1d96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D96A0_0x1d96a0");
#endif

    switch (ctx->pc) {
        case 0x1d96c4u: goto label_1d96c4;
        case 0x1d96d0u: goto label_1d96d0;
        case 0x1d96dcu: goto label_1d96dc;
        case 0x1d96ecu: goto label_1d96ec;
        case 0x1d96fcu: goto label_1d96fc;
        default: break;
    }

    ctx->pc = 0x1d96a0u;

    // 0x1d96a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d96a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1d96a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d96a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d96a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d96a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d96ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d96acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d96b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d96b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d96b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96b8: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x1d96b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d96bc: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x1D96BCu;
    SET_GPR_U32(ctx, 31, 0x1D96C4u);
    ctx->pc = 0x1D96C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D96BCu;
    // 0x1d96c0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x1D96BCu, 0x1D96C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D96C4u;
label_1d96c4:
    // 0x1d96c4: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x1d96c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d96c8: 0xc04d594  jal         func_135650
    ctx->pc = 0x1D96C8u;
    SET_GPR_U32(ctx, 31, 0x1D96D0u);
    ctx->pc = 0x1D96CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D96C8u;
    // 0x1d96cc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x1D96C8u, 0x1D96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D96D0u;
label_1d96d0:
    // 0x1d96d0: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x1d96d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d96d4: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1D96D4u;
    SET_GPR_U32(ctx, 31, 0x1D96DCu);
    ctx->pc = 0x1D96D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D96D4u;
    // 0x1d96d8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1D96D4u, 0x1D96DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D96DCu;
label_1d96dc:
    // 0x1d96dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d96dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96e0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d96e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d96e4: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D96E4u;
    SET_GPR_U32(ctx, 31, 0x1D96ECu);
    ctx->pc = 0x1D96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D96E4u;
    // 0x1d96e8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D96E4u, 0x1D96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D96ECu;
label_1d96ec:
    // 0x1d96ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d96ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d96f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96f4: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D96F4u;
    SET_GPR_U32(ctx, 31, 0x1D96FCu);
    ctx->pc = 0x1D96F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D96F4u;
    // 0x1d96f8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D96F4u, 0x1D96FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D96FCu;
label_1d96fc:
    // 0x1d96fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d96fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9708: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9708u;
        // 0x1d970c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9710u;
}

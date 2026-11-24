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

// Function: sub_001D95C0
// Address: 0x1d95c0 - 0x1d9630
void sub_001D95C0_0x1d95c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D95C0_0x1d95c0");
#endif

    switch (ctx->pc) {
        case 0x1d95e4u: goto label_1d95e4;
        case 0x1d95f0u: goto label_1d95f0;
        case 0x1d95fcu: goto label_1d95fc;
        case 0x1d960cu: goto label_1d960c;
        case 0x1d961cu: goto label_1d961c;
        default: break;
    }

    ctx->pc = 0x1d95c0u;

    // 0x1d95c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d95c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1d95c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d95c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d95c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d95c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d95cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d95ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d95d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d95d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d95d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95d8: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x1d95d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d95dc: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x1D95DCu;
    SET_GPR_U32(ctx, 31, 0x1D95E4u);
    ctx->pc = 0x1D95E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95DCu;
    // 0x1d95e0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x1D95DCu, 0x1D95E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95E4u;
label_1d95e4:
    // 0x1d95e4: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x1d95e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d95e8: 0xc04d594  jal         func_135650
    ctx->pc = 0x1D95E8u;
    SET_GPR_U32(ctx, 31, 0x1D95F0u);
    ctx->pc = 0x1D95ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95E8u;
    // 0x1d95ec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x1D95E8u, 0x1D95F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95F0u;
label_1d95f0:
    // 0x1d95f0: 0x86050008  lh          $a1, 0x8($s0)
    ctx->pc = 0x1d95f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d95f4: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1D95F4u;
    SET_GPR_U32(ctx, 31, 0x1D95FCu);
    ctx->pc = 0x1D95F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95F4u;
    // 0x1d95f8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1D95F4u, 0x1D95FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95FCu;
label_1d95fc:
    // 0x1d95fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d95fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9600: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1d9600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d9604: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D9604u;
    SET_GPR_U32(ctx, 31, 0x1D960Cu);
    ctx->pc = 0x1D9608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9604u;
    // 0x1d9608: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D9604u, 0x1D960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D960Cu;
label_1d960c:
    // 0x1d960c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9610: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d9610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9614: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D9614u;
    SET_GPR_U32(ctx, 31, 0x1D961Cu);
    ctx->pc = 0x1D9618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9614u;
    // 0x1d9618: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D9614u, 0x1D961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D961Cu;
label_1d961c:
    // 0x1d961c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d961cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9628: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9628u;
        // 0x1d962c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9630u;
}

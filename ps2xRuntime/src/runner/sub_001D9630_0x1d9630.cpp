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

// Function: sub_001D9630
// Address: 0x1d9630 - 0x1d96a0
void sub_001D9630_0x1d9630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9630_0x1d9630");
#endif

    switch (ctx->pc) {
        case 0x1d9654u: goto label_1d9654;
        case 0x1d9660u: goto label_1d9660;
        case 0x1d966cu: goto label_1d966c;
        case 0x1d967cu: goto label_1d967c;
        case 0x1d968cu: goto label_1d968c;
        default: break;
    }

    ctx->pc = 0x1d9630u;

    // 0x1d9630: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d9630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1d9634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d963c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9644: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d9644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9648: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x1d9648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d964c: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x1D964Cu;
    SET_GPR_U32(ctx, 31, 0x1D9654u);
    ctx->pc = 0x1D9650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D964Cu;
    // 0x1d9650: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x1D964Cu, 0x1D9654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9654u;
label_1d9654:
    // 0x1d9654: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x1d9654u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d9658: 0xc04d594  jal         func_135650
    ctx->pc = 0x1D9658u;
    SET_GPR_U32(ctx, 31, 0x1D9660u);
    ctx->pc = 0x1D965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9658u;
    // 0x1d965c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x1D9658u, 0x1D9660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9660u;
label_1d9660:
    // 0x1d9660: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x1d9660u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d9664: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1D9664u;
    SET_GPR_U32(ctx, 31, 0x1D966Cu);
    ctx->pc = 0x1D9668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9664u;
    // 0x1d9668: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1D9664u, 0x1D966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D966Cu;
label_1d966c:
    // 0x1d966c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9670: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d9670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d9674: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D9674u;
    SET_GPR_U32(ctx, 31, 0x1D967Cu);
    ctx->pc = 0x1D9678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9674u;
    // 0x1d9678: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D9674u, 0x1D967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D967Cu;
label_1d967c:
    // 0x1d967c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9680: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d9680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9684: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D9684u;
    SET_GPR_U32(ctx, 31, 0x1D968Cu);
    ctx->pc = 0x1D9688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9684u;
    // 0x1d9688: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D9684u, 0x1D968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D968Cu;
label_1d968c:
    // 0x1d968c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d968cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9698: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9698u;
        // 0x1d969c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D96A0u;
}

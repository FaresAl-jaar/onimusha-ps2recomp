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

// Function: sub_00345890
// Address: 0x345890 - 0x3458c4
void sub_00345890_0x345890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345890_0x345890");
#endif

    switch (ctx->pc) {
        case 0x3458a8u: goto label_3458a8;
        case 0x3458b4u: goto label_3458b4;
        default: break;
    }

    ctx->pc = 0x345890u;

    // 0x345890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x345894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x345898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34589c: 0x8c850550  lw          $a1, 0x550($a0)
    ctx->pc = 0x34589cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x3458a0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3458A0u;
    SET_GPR_U32(ctx, 31, 0x3458A8u);
    ctx->pc = 0x3458A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3458A0u;
    // 0x3458a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3458A0u, 0x3458A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3458A8u;
label_3458a8:
    // 0x3458a8: 0x8e050554  lw          $a1, 0x554($s0)
    ctx->pc = 0x3458a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x3458ac: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3458ACu;
    SET_GPR_U32(ctx, 31, 0x3458B4u);
    ctx->pc = 0x3458B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3458ACu;
    // 0x3458b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3458ACu, 0x3458B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3458B4u;
label_3458b4:
    // 0x3458b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3458b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3458b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3458b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3458bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3458BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3458C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458BCu;
        // 0x3458c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3458BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3458C4u;
}

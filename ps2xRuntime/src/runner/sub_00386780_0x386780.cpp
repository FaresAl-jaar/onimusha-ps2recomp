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

// Function: sub_00386780
// Address: 0x386780 - 0x3867bc
void sub_00386780_0x386780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386780_0x386780");
#endif

    switch (ctx->pc) {
        case 0x386798u: goto label_386798;
        case 0x3867acu: goto label_3867ac;
        default: break;
    }

    ctx->pc = 0x386780u;

    // 0x386780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x386780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x386784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x386784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x386788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x386788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38678c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38678cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386790: 0xc07bd78  jal         func_1EF5E0
    ctx->pc = 0x386790u;
    SET_GPR_U32(ctx, 31, 0x386798u);
    ctx->pc = 0x386794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386790u;
    // 0x386794: 0x8c840110  lw          $a0, 0x110($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5E0u, 0x386790u, 0x386798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386798u;
label_386798:
    // 0x386798: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x386798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x38679c: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x38679cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x3867a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3867a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867a4: 0xc07bbc8  jal         func_1EEF20
    ctx->pc = 0x3867A4u;
    SET_GPR_U32(ctx, 31, 0x3867ACu);
    ctx->pc = 0x3867A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867A4u;
    // 0x3867a8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF20u, 0x3867A4u, 0x3867ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3867ACu;
label_3867ac:
    // 0x3867ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3867acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3867b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3867b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3867b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3867B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3867B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3867B4u;
        // 0x3867b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3867B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3867BCu;
}

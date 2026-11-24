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

// Function: sub_001870A0
// Address: 0x1870a0 - 0x1870d4
void sub_001870A0_0x1870a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001870A0_0x1870a0");
#endif

    switch (ctx->pc) {
        case 0x1870b8u: goto label_1870b8;
        case 0x1870c4u: goto label_1870c4;
        default: break;
    }

    ctx->pc = 0x1870a0u;

    // 0x1870a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1870a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1870a4: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1870a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1870a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1870a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1870ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1870acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1870b0: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x1870B0u;
    SET_GPR_U32(ctx, 31, 0x1870B8u);
    ctx->pc = 0x1870B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870B0u;
    // 0x1870b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x1870B0u, 0x1870B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870B8u;
label_1870b8:
    // 0x1870b8: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x1870b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1870bc: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x1870BCu;
    SET_GPR_U32(ctx, 31, 0x1870C4u);
    ctx->pc = 0x1870C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870BCu;
    // 0x1870c0: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x1870BCu, 0x1870C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870C4u;
label_1870c4:
    // 0x1870c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1870c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1870c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1870c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1870cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1870CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1870D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870CCu;
        // 0x1870d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1870CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1870D4u;
}

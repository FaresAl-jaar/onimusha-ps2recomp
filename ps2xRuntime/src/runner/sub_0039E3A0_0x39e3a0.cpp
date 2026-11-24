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

// Function: sub_0039E3A0
// Address: 0x39e3a0 - 0x39e3dc
void sub_0039E3A0_0x39e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E3A0_0x39e3a0");
#endif

    switch (ctx->pc) {
        case 0x39e3b8u: goto label_39e3b8;
        case 0x39e3c4u: goto label_39e3c4;
        case 0x39e3ccu: goto label_39e3cc;
        default: break;
    }

    ctx->pc = 0x39e3a0u;

    // 0x39e3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39e3a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39e3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39e3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e3b0: 0xc097834  jal         func_25E0D0
    ctx->pc = 0x39E3B0u;
    SET_GPR_U32(ctx, 31, 0x39E3B8u);
    ctx->pc = 0x39E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3B0u;
    // 0x39e3b4: 0x8c842bf4  lw          $a0, 0x2BF4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0D0u, 0x39E3B0u, 0x39E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3B8u;
label_39e3b8:
    // 0x39e3b8: 0xae022bf4  sw          $v0, 0x2BF4($s0)
    ctx->pc = 0x39e3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11252), GPR_U32(ctx, 2));
    // 0x39e3bc: 0xc0e7010  jal         func_39C040
    ctx->pc = 0x39E3BCu;
    SET_GPR_U32(ctx, 31, 0x39E3C4u);
    ctx->pc = 0x39E3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3BCu;
    // 0x39e3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C040u, 0x39E3BCu, 0x39E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3C4u;
label_39e3c4:
    // 0x39e3c4: 0xc0a6188  jal         func_298620
    ctx->pc = 0x39E3C4u;
    SET_GPR_U32(ctx, 31, 0x39E3CCu);
    ctx->pc = 0x39E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3C4u;
    // 0x39e3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x39E3C4u, 0x39E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3CCu;
label_39e3cc:
    // 0x39e3cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39e3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e3d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39e3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x39E3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3D4u;
        // 0x39e3d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E3DCu;
}

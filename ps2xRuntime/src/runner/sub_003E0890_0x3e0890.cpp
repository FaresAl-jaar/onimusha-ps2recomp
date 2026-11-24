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

// Function: sub_003E0890
// Address: 0x3e0890 - 0x3e08c0
void sub_003E0890_0x3e0890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0890_0x3e0890");
#endif

    switch (ctx->pc) {
        case 0x3e08a8u: goto label_3e08a8;
        case 0x3e08b0u: goto label_3e08b0;
        default: break;
    }

    ctx->pc = 0x3e0890u;

    // 0x3e0890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e0894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e0894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e0898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e089c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e089cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e08a0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3E08A0u;
    SET_GPR_U32(ctx, 31, 0x3E08A8u);
    ctx->pc = 0x3E08A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E08A0u;
    // 0x3e08a4: 0x8c842c74  lw          $a0, 0x2C74($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3E08A0u, 0x3E08A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E08A8u;
label_3e08a8:
    // 0x3e08a8: 0xc0a4d18  jal         func_293460
    ctx->pc = 0x3E08A8u;
    SET_GPR_U32(ctx, 31, 0x3E08B0u);
    ctx->pc = 0x3E08ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E08A8u;
    // 0x3e08ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293460u, 0x3E08A8u, 0x3E08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E08B0u;
label_3e08b0:
    // 0x3e08b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e08b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e08b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e08b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e08b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E08B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E08B8u;
        // 0x3e08bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E08B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E08C0u;
}

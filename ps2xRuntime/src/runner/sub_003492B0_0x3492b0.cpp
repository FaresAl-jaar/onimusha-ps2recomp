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

// Function: sub_003492B0
// Address: 0x3492b0 - 0x3492d8
void sub_003492B0_0x3492b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003492B0_0x3492b0");
#endif

    switch (ctx->pc) {
        case 0x3492c4u: goto label_3492c4;
        default: break;
    }

    ctx->pc = 0x3492b0u;

    // 0x3492b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3492b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3492b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3492b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3492b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3492b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3492bc: 0xc0d26c4  jal         func_349B10
    ctx->pc = 0x3492BCu;
    SET_GPR_U32(ctx, 31, 0x3492C4u);
    ctx->pc = 0x3492C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3492BCu;
    // 0x3492c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349B10u, 0x3492BCu, 0x3492C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492C4u;
label_3492c4:
    // 0x3492c4: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x3492c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x3492c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3492c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3492cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3492ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3492d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3492D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3492D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492D0u;
        // 0x3492d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3492D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3492D8u;
}

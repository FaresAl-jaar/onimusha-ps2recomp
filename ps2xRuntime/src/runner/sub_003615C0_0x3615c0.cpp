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

// Function: sub_003615C0
// Address: 0x3615c0 - 0x3615f0
void sub_003615C0_0x3615c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003615C0_0x3615c0");
#endif

    switch (ctx->pc) {
        case 0x3615d4u: goto label_3615d4;
        case 0x3615e0u: goto label_3615e0;
        default: break;
    }

    ctx->pc = 0x3615c0u;

    // 0x3615c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3615c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3615c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3615c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3615c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3615c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3615cc: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3615CCu;
    SET_GPR_U32(ctx, 31, 0x3615D4u);
    ctx->pc = 0x3615D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3615CCu;
    // 0x3615d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3615CCu, 0x3615D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615D4u;
label_3615d4:
    // 0x3615d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3615d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3615d8: 0xc0bc638  jal         func_2F18E0
    ctx->pc = 0x3615D8u;
    SET_GPR_U32(ctx, 31, 0x3615E0u);
    ctx->pc = 0x3615DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3615D8u;
    // 0x3615dc: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F18E0u, 0x3615D8u, 0x3615E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3615E0u;
label_3615e0:
    // 0x3615e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3615e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3615e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3615e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3615e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3615E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3615ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3615E8u;
        // 0x3615ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3615E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3615F0u;
}

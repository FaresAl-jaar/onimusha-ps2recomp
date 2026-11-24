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

// Function: sub_0026BAA0
// Address: 0x26baa0 - 0x26baec
void sub_0026BAA0_0x26baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BAA0_0x26baa0");
#endif

    switch (ctx->pc) {
        case 0x26bad4u: goto label_26bad4;
        case 0x26badcu: goto label_26badc;
        default: break;
    }

    ctx->pc = 0x26baa0u;

    // 0x26baa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26baa4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x26baa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26baa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26baac: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26baacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26bab4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x26bab4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26bab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26babc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x26babcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bac0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26bac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bac4: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x26bac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x26bac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26bac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bacc: 0xc0a2964  jal         func_28A590
    ctx->pc = 0x26BACCu;
    SET_GPR_U32(ctx, 31, 0x26BAD4u);
    ctx->pc = 0x26BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BACCu;
    // 0x26bad0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A590u, 0x26BACCu, 0x26BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAD4u;
label_26bad4:
    // 0x26bad4: 0xc09ae64  jal         func_26B990
    ctx->pc = 0x26BAD4u;
    SET_GPR_U32(ctx, 31, 0x26BADCu);
    ctx->pc = 0x26BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BAD4u;
    // 0x26bad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B990u, 0x26BAD4u, 0x26BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BADCu;
label_26badc:
    // 0x26badc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26badcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bae4: 0x3e00008  jr          $ra
    ctx->pc = 0x26BAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAE4u;
        // 0x26bae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BAECu;
}

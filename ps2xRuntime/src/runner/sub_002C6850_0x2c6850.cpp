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

// Function: sub_002C6850
// Address: 0x2c6850 - 0x2c6890
void sub_002C6850_0x2c6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6850_0x2c6850");
#endif

    switch (ctx->pc) {
        case 0x2c686cu: goto label_2c686c;
        case 0x2c6878u: goto label_2c6878;
        default: break;
    }

    ctx->pc = 0x2c6850u;

    // 0x2c6850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c6854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c685c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6864: 0xc0b226c  jal         func_2C89B0
    ctx->pc = 0x2C6864u;
    SET_GPR_U32(ctx, 31, 0x2C686Cu);
    ctx->pc = 0x2C6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6864u;
    // 0x2c6868: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C89B0u, 0x2C6864u, 0x2C686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C686Cu;
label_2c686c:
    // 0x2c686c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6870: 0xc0af0fc  jal         func_2BC3F0
    ctx->pc = 0x2C6870u;
    SET_GPR_U32(ctx, 31, 0x2C6878u);
    ctx->pc = 0x2C6874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6870u;
    // 0x2c6874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC3F0u, 0x2C6870u, 0x2C6878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6878u;
label_2c6878:
    // 0x2c6878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c687c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c687cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6880: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6888: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6888u;
        // 0x2c688c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6890u;
}

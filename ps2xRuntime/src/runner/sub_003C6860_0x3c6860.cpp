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

// Function: sub_003C6860
// Address: 0x3c6860 - 0x3c6894
void sub_003C6860_0x3c6860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6860_0x3c6860");
#endif

    switch (ctx->pc) {
        case 0x3c687cu: goto label_3c687c;
        default: break;
    }

    ctx->pc = 0x3c6860u;

    // 0x3c6860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c6860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c6864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c6864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c6868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c6868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c686c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c6870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c6870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6874: 0xc0f1a38  jal         func_3C68E0
    ctx->pc = 0x3C6874u;
    SET_GPR_U32(ctx, 31, 0x3C687Cu);
    ctx->pc = 0x3C6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6874u;
    // 0x3c6878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C68E0u, 0x3C6874u, 0x3C687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C687Cu;
label_3c687c:
    // 0x3c687c: 0xae3005b8  sw          $s0, 0x5B8($s1)
    ctx->pc = 0x3c687cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 16));
    // 0x3c6880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c6880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c6884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c6888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c688c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C688Cu;
        // 0x3c6890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6894u;
}

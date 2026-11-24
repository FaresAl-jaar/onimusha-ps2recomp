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

// Function: sub_00104100
// Address: 0x104100 - 0x10413c
void sub_00104100_0x104100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104100_0x104100");
#endif

    switch (ctx->pc) {
        case 0x104118u: goto label_104118;
        case 0x104124u: goto label_104124;
        default: break;
    }

    ctx->pc = 0x104100u;

    // 0x104100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104108: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10410c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104110: 0xc0438c4  jal         func_10E310
    ctx->pc = 0x104110u;
    SET_GPR_U32(ctx, 31, 0x104118u);
    ctx->pc = 0x104114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104110u;
    // 0x104114: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E310u, 0x104110u, 0x104118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104118u;
label_104118:
    // 0x104118: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x104118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10411c: 0xc0438cc  jal         func_10E330
    ctx->pc = 0x10411Cu;
    SET_GPR_U32(ctx, 31, 0x104124u);
    ctx->pc = 0x104120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10411Cu;
    // 0x104120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E330u, 0x10411Cu, 0x104124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104124u;
label_104124:
    // 0x104124: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x104124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10412c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10412cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104134: 0x3e00008  jr          $ra
    ctx->pc = 0x104134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104134u;
        // 0x104138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10413Cu;
}

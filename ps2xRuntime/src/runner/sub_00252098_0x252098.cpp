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

// Function: sub_00252098
// Address: 0x252098 - 0x2520d0
void sub_00252098_0x252098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252098_0x252098");
#endif

    switch (ctx->pc) {
        case 0x2520acu: goto label_2520ac;
        case 0x2520b4u: goto label_2520b4;
        case 0x2520bcu: goto label_2520bc;
        default: break;
    }

    ctx->pc = 0x252098u;

    // 0x252098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25209c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25209cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2520a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2520a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2520a4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x2520A4u;
    SET_GPR_U32(ctx, 31, 0x2520ACu);
    ctx->pc = 0x2520A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520A4u;
    // 0x2520a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2520A4u, 0x2520ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520ACu;
label_2520ac:
    // 0x2520ac: 0xc094834  jal         func_2520D0
    ctx->pc = 0x2520ACu;
    SET_GPR_U32(ctx, 31, 0x2520B4u);
    ctx->pc = 0x2520B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520ACu;
    // 0x2520b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2520D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2520D0u, 0x2520ACu, 0x2520B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520B4u;
label_2520b4:
    // 0x2520b4: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x2520B4u;
    SET_GPR_U32(ctx, 31, 0x2520BCu);
    ctx->pc = 0x2520B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520B4u;
    // 0x2520b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x2520B4u, 0x2520BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520BCu;
label_2520bc:
    // 0x2520bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2520bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2520c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2520c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2520c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2520c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2520C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2520CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520C8u;
        // 0x2520cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2520C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2520D0u;
}

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

// Function: sub_002DE340
// Address: 0x2de340 - 0x2de374
void sub_002DE340_0x2de340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE340_0x2de340");
#endif

    switch (ctx->pc) {
        case 0x2de354u: goto label_2de354;
        case 0x2de364u: goto label_2de364;
        default: break;
    }

    ctx->pc = 0x2de340u;

    // 0x2de340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de34c: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x2DE34Cu;
    SET_GPR_U32(ctx, 31, 0x2DE354u);
    ctx->pc = 0x2DE350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE34Cu;
    // 0x2de350: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x2DE34Cu, 0x2DE354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE354u;
label_2de354:
    // 0x2de354: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2de354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2de358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de35c: 0xc0b78ec  jal         func_2DE3B0
    ctx->pc = 0x2DE35Cu;
    SET_GPR_U32(ctx, 31, 0x2DE364u);
    ctx->pc = 0x2DE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE35Cu;
    // 0x2de360: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE3B0u, 0x2DE35Cu, 0x2DE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE364u;
label_2de364:
    // 0x2de364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de36c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE36Cu;
        // 0x2de370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE374u;
}

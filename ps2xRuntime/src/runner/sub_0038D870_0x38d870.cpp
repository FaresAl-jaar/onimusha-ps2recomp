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

// Function: sub_0038D870
// Address: 0x38d870 - 0x38d8b4
void sub_0038D870_0x38d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D870_0x38d870");
#endif

    switch (ctx->pc) {
        case 0x38d898u: goto label_38d898;
        case 0x38d8a4u: goto label_38d8a4;
        default: break;
    }

    ctx->pc = 0x38d870u;

    // 0x38d870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38d874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38d878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38d87c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x38d87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x38d880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38d884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38d884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d888: 0xa0820404  sb          $v0, 0x404($a0)
    ctx->pc = 0x38d888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1028), (uint8_t)GPR_U32(ctx, 2));
    // 0x38d88c: 0x90256ad0  lbu         $a1, 0x6AD0($at)
    ctx->pc = 0x38d88cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x7E6AD0u));
    // 0x38d890: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x38D890u;
    SET_GPR_U32(ctx, 31, 0x38D898u);
    ctx->pc = 0x38D894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D890u;
    // 0x38d894: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x38D890u, 0x38D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D898u;
label_38d898:
    // 0x38d898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d89c: 0xc0e3630  jal         func_38D8C0
    ctx->pc = 0x38D89Cu;
    SET_GPR_U32(ctx, 31, 0x38D8A4u);
    ctx->pc = 0x38D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D89Cu;
    // 0x38d8a0: 0xa2000404  sb          $zero, 0x404($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1028), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D8C0u, 0x38D89Cu, 0x38D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D8A4u;
label_38d8a4:
    // 0x38d8a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x38D8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8ACu;
        // 0x38d8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D8B4u;
}

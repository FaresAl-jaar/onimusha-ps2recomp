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

// Function: sub_001D04E0
// Address: 0x1d04e0 - 0x1d0524
void sub_001D04E0_0x1d04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D04E0_0x1d04e0");
#endif

    switch (ctx->pc) {
        case 0x1d050cu: goto label_1d050c;
        default: break;
    }

    ctx->pc = 0x1d04e0u;

    // 0x1d04e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d04e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d04e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d04e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d04e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d04ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d04ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04f0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D04F0u;
    {
        const bool branch_taken_0x1d04f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04F0u;
        // 0x1d04f4: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04f0) {
            ctx->pc = 0x1D0510u;
            goto label_1d0510;
        }
    }
    ctx->pc = 0x1D04F8u;
    // 0x1d04f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d04f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d04fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D04FCu;
    {
        const bool branch_taken_0x1d04fc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1d04fc) {
            ctx->pc = 0x1D0510u;
            goto label_1d0510;
        }
    }
    ctx->pc = 0x1D0504u;
    // 0x1d0504: 0xc040148  jal         func_100520
    ctx->pc = 0x1D0504u;
    SET_GPR_U32(ctx, 31, 0x1D050Cu);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x1D0504u, 0x1D050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D050Cu;
label_1d050c:
    // 0x1d050c: 0x0  nop
    ctx->pc = 0x1d050cu;
    // NOP
label_1d0510:
    // 0x1d0510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d051c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D051Cu;
        // 0x1d0520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D051Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0524u;
}

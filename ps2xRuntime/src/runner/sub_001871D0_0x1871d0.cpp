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

// Function: sub_001871D0
// Address: 0x1871d0 - 0x187210
void sub_001871D0_0x1871d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001871D0_0x1871d0");
#endif

    switch (ctx->pc) {
        case 0x1871e4u: goto label_1871e4;
        case 0x187200u: goto label_187200;
        default: break;
    }

    ctx->pc = 0x1871d0u;

    // 0x1871d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1871d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1871d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1871d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1871d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1871d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1871dc: 0xc046028  jal         func_1180A0
    ctx->pc = 0x1871DCu;
    SET_GPR_U32(ctx, 31, 0x1871E4u);
    ctx->pc = 0x1871E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1871DCu;
    // 0x1871e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x1871DCu, 0x1871E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871E4u;
label_1871e4:
    // 0x1871e4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1871e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1871e8: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x1871e8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 16)); // MMIO: 0x1000e010
    // 0x1871ec: 0xf  sync
    ctx->pc = 0x1871ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1871f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1871F0u;
    {
        const bool branch_taken_0x1871f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1871f0) {
            ctx->pc = 0x187200u;
            goto label_187200;
        }
    }
    ctx->pc = 0x1871F8u;
    // 0x1871f8: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x1871F8u;
    SET_GPR_U32(ctx, 31, 0x187200u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x1871F8u, 0x187200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187200u;
label_187200:
    // 0x187200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187208: 0x3e00008  jr          $ra
    ctx->pc = 0x187208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187208u;
        // 0x18720c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187210u;
}

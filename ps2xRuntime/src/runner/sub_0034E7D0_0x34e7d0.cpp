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

// Function: sub_0034E7D0
// Address: 0x34e7d0 - 0x34e800
void sub_0034E7D0_0x34e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E7D0_0x34e7d0");
#endif

    switch (ctx->pc) {
        case 0x34e7e4u: goto label_34e7e4;
        default: break;
    }

    ctx->pc = 0x34e7d0u;

    // 0x34e7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e7d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34e7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e7dc: 0xc0d34dc  jal         func_34D370
    ctx->pc = 0x34E7DCu;
    SET_GPR_U32(ctx, 31, 0x34E7E4u);
    ctx->pc = 0x34E7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E7DCu;
    // 0x34e7e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D370u, 0x34E7DCu, 0x34E7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E7E4u;
label_34e7e4:
    // 0x34e7e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34e7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34e7e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34e7ec: 0xa2030040  sb          $v1, 0x40($s0)
    ctx->pc = 0x34e7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34e7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x34E7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7F8u;
        // 0x34e7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E800u;
}

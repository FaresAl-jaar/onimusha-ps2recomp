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

// Function: sub_0029E9E0
// Address: 0x29e9e0 - 0x29ea30
void sub_0029E9E0_0x29e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E9E0_0x29e9e0");
#endif

    ctx->pc = 0x29e9e0u;

    // 0x29e9e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x29e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x29e9e4: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x29e9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x29e9e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x29e9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29e9ec: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x29e9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x29e9f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29e9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29e9f4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x29e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x29e9f8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x29e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29e9fc: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x29e9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x29ea00: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x29ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x29ea04: 0xfca60010  sd          $a2, 0x10($a1)
    ctx->pc = 0x29ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 6));
    // 0x29ea08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ea0c: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x29ea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x29ea10: 0xfca70020  sd          $a3, 0x20($a1)
    ctx->pc = 0x29ea10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 7));
    // 0x29ea14: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x29ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x29ea18: 0xfca90028  sd          $t1, 0x28($a1)
    ctx->pc = 0x29ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 9));
    // 0x29ea1c: 0xfca40030  sd          $a0, 0x30($a1)
    ctx->pc = 0x29ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 4));
    // 0x29ea20: 0xfca30038  sd          $v1, 0x38($a1)
    ctx->pc = 0x29ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 3));
    // 0x29ea24: 0xfca80040  sd          $t0, 0x40($a1)
    ctx->pc = 0x29ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 8));
    // 0x29ea28: 0x3e00008  jr          $ra
    ctx->pc = 0x29EA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA28u;
        // 0x29ea2c: 0xfca00048  sd          $zero, 0x48($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EA30u;
}

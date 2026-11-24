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

// Function: sub_002985A0
// Address: 0x2985a0 - 0x2985dc
void sub_002985A0_0x2985a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002985A0_0x2985a0");
#endif

    ctx->pc = 0x2985a0u;

    // 0x2985a0: 0x908606d8  lbu         $a2, 0x6D8($a0)
    ctx->pc = 0x2985a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1752)));
    // 0x2985a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2985a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2985a8: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2985A8u;
    {
        const bool branch_taken_0x2985a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2985ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985A8u;
        // 0x2985ac: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985a8) {
            ctx->pc = 0x2985B8u;
            goto label_2985b8;
        }
    }
    ctx->pc = 0x2985B0u;
    // 0x2985b0: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2985B0u;
    {
        const bool branch_taken_0x2985b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2985b0) {
            ctx->pc = 0x2985C0u;
            goto label_2985c0;
        }
    }
    ctx->pc = 0x2985B8u;
label_2985b8:
    // 0x2985b8: 0xfc8006e0  sd          $zero, 0x6E0($a0)
    ctx->pc = 0x2985b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1760), GPR_U64(ctx, 0));
    // 0x2985bc: 0x0  nop
    ctx->pc = 0x2985bcu;
    // NOP
label_2985c0:
    // 0x2985c0: 0xfc8506e8  sd          $a1, 0x6E8($a0)
    ctx->pc = 0x2985c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1768), GPR_U64(ctx, 5));
    // 0x2985c4: 0xdc8606e0  ld          $a2, 0x6E0($a0)
    ctx->pc = 0x2985c4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 1760)));
    // 0x2985c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2985c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2985cc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x2985ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2985d0: 0xfc8506e0  sd          $a1, 0x6E0($a0)
    ctx->pc = 0x2985d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1760), GPR_U64(ctx, 5));
    // 0x2985d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2985D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2985D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985D4u;
        // 0x2985d8: 0xa08306d8  sb          $v1, 0x6D8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1752), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2985D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2985DCu;
}

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

// Function: sub_002589F0
// Address: 0x2589f0 - 0x258a38
void sub_002589F0_0x2589f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002589F0_0x2589f0");
#endif

    switch (ctx->pc) {
        case 0x258a00u: goto label_258a00;
        default: break;
    }

    ctx->pc = 0x2589f0u;

    // 0x2589f0: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x2589f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x2589f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2589f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2589f8: 0x24a5edf0  addiu       $a1, $a1, -0x1210
    ctx->pc = 0x2589f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962672));
    // 0x2589fc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2589fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_258a00:
    // 0x258a00: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x258a00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x258a04: 0xa0a40040  sb          $a0, 0x40($a1)
    ctx->pc = 0x258a04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x258a08: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x258a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x258a0c: 0xa0a40080  sb          $a0, 0x80($a1)
    ctx->pc = 0x258a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x258a10: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x258a10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x258a14: 0xa0a400c0  sb          $a0, 0xC0($a1)
    ctx->pc = 0x258a14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 192), (uint8_t)GPR_U32(ctx, 4));
    // 0x258a18: 0xa0a40100  sb          $a0, 0x100($a1)
    ctx->pc = 0x258a18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x258a1c: 0xa0a40140  sb          $a0, 0x140($a1)
    ctx->pc = 0x258a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 320), (uint8_t)GPR_U32(ctx, 4));
    // 0x258a20: 0xa0a40180  sb          $a0, 0x180($a1)
    ctx->pc = 0x258a20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 384), (uint8_t)GPR_U32(ctx, 4));
    // 0x258a24: 0xa0a401c0  sb          $a0, 0x1C0($a1)
    ctx->pc = 0x258a24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 448), (uint8_t)GPR_U32(ctx, 4));
    // 0x258a28: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x258A28u;
    {
        const bool branch_taken_0x258a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A28u;
        // 0x258a2c: 0x24a50200  addiu       $a1, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a28) {
            ctx->pc = 0x258A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258a00;
        }
    }
    ctx->pc = 0x258A30u;
    // 0x258a30: 0x3e00008  jr          $ra
    ctx->pc = 0x258A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258A38u;
}

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

// Function: sub_00146290
// Address: 0x146290 - 0x1462ec
void sub_00146290_0x146290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146290_0x146290");
#endif

    switch (ctx->pc) {
        case 0x1462a0u: goto label_1462a0;
        case 0x1462c8u: goto label_1462c8;
        default: break;
    }

    ctx->pc = 0x146290u;

    // 0x146290: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x146290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146294: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x146294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x146298: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x146298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x14629c: 0x0  nop
    ctx->pc = 0x14629cu;
    // NOP
label_1462a0:
    // 0x1462a0: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x1462a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1462a4: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x1462a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x1462a8: 0x2463ffcc  addiu       $v1, $v1, -0x34
    ctx->pc = 0x1462a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967244));
    // 0x1462ac: 0xa0600020  sb          $zero, 0x20($v1)
    ctx->pc = 0x1462acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1462b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1462b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1462b4: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1462B4u;
    {
        const bool branch_taken_0x1462b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1462B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462B4u;
        // 0x1462b8: 0xa0600021  sb          $zero, 0x21($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 33), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462b4) {
            ctx->pc = 0x1462A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1462a0;
        }
    }
    ctx->pc = 0x1462BCu;
    // 0x1462bc: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1462bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1462c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1462c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1462c4: 0x0  nop
    ctx->pc = 0x1462c4u;
    // NOP
label_1462c8:
    // 0x1462c8: 0x2484ffac  addiu       $a0, $a0, -0x54
    ctx->pc = 0x1462c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
    // 0x1462cc: 0xa0800100  sb          $zero, 0x100($a0)
    ctx->pc = 0x1462ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x1462d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1462d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1462d4: 0xa0800101  sb          $zero, 0x101($a0)
    ctx->pc = 0x1462d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 0));
    // 0x1462d8: 0x0  nop
    ctx->pc = 0x1462d8u;
    // NOP
    // 0x1462dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1462DCu;
    {
        const bool branch_taken_0x1462dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1462dc) {
            ctx->pc = 0x1462C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1462c8;
        }
    }
    ctx->pc = 0x1462E4u;
    // 0x1462e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1462E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1462E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1462ECu;
}

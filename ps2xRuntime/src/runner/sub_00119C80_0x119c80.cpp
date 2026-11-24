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

// Function: sub_00119C80
// Address: 0x119c80 - 0x119ccc
void sub_00119C80_0x119c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119C80_0x119c80");
#endif

    switch (ctx->pc) {
        case 0x119ca0u: goto label_119ca0;
        default: break;
    }

    ctx->pc = 0x119c80u;

    // 0x119c80: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x119c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x119c84: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x119c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x119c88: 0x24a23b40  addiu       $v0, $a1, 0x3B40
    ctx->pc = 0x119c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15168));
    // 0x119c8c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x119c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x119c90: 0xac623f40  sw          $v0, 0x3F40($v1)
    ctx->pc = 0x119c90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x693F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x693F40u, _value); } while (0);
    // 0x119c94: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x119c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x119c98: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x119c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x119c9c: 0x0  nop
    ctx->pc = 0x119c9cu;
    // NOP
label_119ca0:
    // 0x119ca0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x119ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x119ca4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x119ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x119ca8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x119ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x119cac: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x119cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x119cb0: 0x0  nop
    ctx->pc = 0x119cb0u;
    // NOP
    // 0x119cb4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119CB4u;
    {
        const bool branch_taken_0x119cb4 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x119cb4) {
            ctx->pc = 0x119CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119ca0;
        }
    }
    ctx->pc = 0x119CBCu;
    // 0x119cbc: 0x24a33b40  addiu       $v1, $a1, 0x3B40
    ctx->pc = 0x119cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15168));
    // 0x119cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x119CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CC4u;
        // 0x119cc8: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119CCCu;
}

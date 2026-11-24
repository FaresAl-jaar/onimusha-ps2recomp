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

// Function: sub_001462F0
// Address: 0x1462f0 - 0x146330
void sub_001462F0_0x1462f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001462F0_0x1462f0");
#endif

    switch (ctx->pc) {
        case 0x146300u: goto label_146300;
        default: break;
    }

    ctx->pc = 0x1462f0u;

    // 0x1462f0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1462f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1462f4: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x1462f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1462f8: 0x248500d0  addiu       $a1, $a0, 0xD0
    ctx->pc = 0x1462f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x1462fc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1462fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_146300:
    // 0x146300: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x146300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x146304: 0xacc000f0  sw          $zero, 0xF0($a2)
    ctx->pc = 0x146304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 0));
    // 0x146308: 0x24a5ffcc  addiu       $a1, $a1, -0x34
    ctx->pc = 0x146308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967244));
    // 0x14630c: 0xa0a00020  sb          $zero, 0x20($a1)
    ctx->pc = 0x14630cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x146310: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x146310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x146314: 0xa0a00021  sb          $zero, 0x21($a1)
    ctx->pc = 0x146314u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x146318: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x146318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x14631c: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x14631cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x146320: 0x14e0fff7  bnez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x146320u;
    {
        const bool branch_taken_0x146320 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x146324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146320u;
        // 0x146324: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146320) {
            ctx->pc = 0x146300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146300;
        }
    }
    ctx->pc = 0x146328u;
    // 0x146328: 0x3e00008  jr          $ra
    ctx->pc = 0x146328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146330u;
}

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

// Function: sub_0038D750
// Address: 0x38d750 - 0x38d798
void sub_0038D750_0x38d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D750_0x38d750");
#endif

    switch (ctx->pc) {
        case 0x38d760u: goto label_38d760;
        default: break;
    }

    ctx->pc = 0x38d750u;

    // 0x38d750: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38d750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x38d754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38d754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d758: 0xa0800404  sb          $zero, 0x404($a0)
    ctx->pc = 0x38d758u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1028), (uint8_t)GPR_U32(ctx, 0));
    // 0x38d75c: 0x0  nop
    ctx->pc = 0x38d75cu;
    // NOP
label_38d760:
    // 0x38d760: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x38d760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x38d764: 0xa0a0040c  sb          $zero, 0x40C($a1)
    ctx->pc = 0x38d764u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1036), (uint8_t)GPR_U32(ctx, 0));
    // 0x38d768: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x38d768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x38d76c: 0xa0a0040d  sb          $zero, 0x40D($a1)
    ctx->pc = 0x38d76cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1037), (uint8_t)GPR_U32(ctx, 0));
    // 0x38d770: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x38d770u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x38d774: 0xa0a0040e  sb          $zero, 0x40E($a1)
    ctx->pc = 0x38d774u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1038), (uint8_t)GPR_U32(ctx, 0));
    // 0x38d778: 0xa0a0040f  sb          $zero, 0x40F($a1)
    ctx->pc = 0x38d778u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x38d77c: 0xa0a00410  sb          $zero, 0x410($a1)
    ctx->pc = 0x38d77cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1040), (uint8_t)GPR_U32(ctx, 0));
    // 0x38d780: 0xa0a00411  sb          $zero, 0x411($a1)
    ctx->pc = 0x38d780u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1041), (uint8_t)GPR_U32(ctx, 0));
    // 0x38d784: 0xa0a00412  sb          $zero, 0x412($a1)
    ctx->pc = 0x38d784u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1042), (uint8_t)GPR_U32(ctx, 0));
    // 0x38d788: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x38D788u;
    {
        const bool branch_taken_0x38d788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D788u;
        // 0x38d78c: 0xa0a00413  sb          $zero, 0x413($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d788) {
            ctx->pc = 0x38D760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38d760;
        }
    }
    ctx->pc = 0x38D790u;
    // 0x38d790: 0x3e00008  jr          $ra
    ctx->pc = 0x38D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D798u;
}

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

// Function: sub_0020D9F0
// Address: 0x20d9f0 - 0x20da38
void sub_0020D9F0_0x20d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D9F0_0x20d9f0");
#endif

    switch (ctx->pc) {
        case 0x20da14u: goto label_20da14;
        default: break;
    }

    ctx->pc = 0x20d9f0u;

    // 0x20d9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d9f4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20d9f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20d9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d9fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20d9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20da00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20da00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20da08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20da08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da0c: 0xc083d42  jal         func_20F508
    ctx->pc = 0x20DA0Cu;
    SET_GPR_U32(ctx, 31, 0x20DA14u);
    ctx->pc = 0x20DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA0Cu;
    // 0x20da10: 0x8c85200c  lw          $a1, 0x200C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F508u, 0x20DA0Cu, 0x20DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA14u;
label_20da14:
    // 0x20da14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20da14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20da18: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20da18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20da1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x20da20: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x20da20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x20da24: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20da24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20da28: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20da28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20da2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20da2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20da30: 0x3e00008  jr          $ra
    ctx->pc = 0x20DA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA30u;
        // 0x20da34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DA38u;
}

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

// Function: sub_00104E70
// Address: 0x104e70 - 0x104e9c
void sub_00104E70_0x104e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104E70_0x104e70");
#endif

    ctx->pc = 0x104e70u;

    // 0x104e70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x104e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104e74: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x104e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x104e78: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x104e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x104e7c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x104e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x104e80: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x104e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x104e84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x104e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104e88: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x104e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x104e8c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x104e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x104e90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x104e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x104e94: 0x3e00008  jr          $ra
    ctx->pc = 0x104E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E94u;
        // 0x104e98: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104E9Cu;
}

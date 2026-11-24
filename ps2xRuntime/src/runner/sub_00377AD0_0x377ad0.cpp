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

// Function: sub_00377AD0
// Address: 0x377ad0 - 0x377b10
void sub_00377AD0_0x377ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377AD0_0x377ad0");
#endif

    ctx->pc = 0x377ad0u;

    // 0x377ad0: 0x8f838c14  lw          $v1, -0x73EC($gp)
    ctx->pc = 0x377ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937620)));
    // 0x377ad4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x377AD4u;
    {
        const bool branch_taken_0x377ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377ad4) {
            ctx->pc = 0x377AF0u;
            goto label_377af0;
        }
    }
    ctx->pc = 0x377ADCu;
    // 0x377adc: 0xac8305b8  sw          $v1, 0x5B8($a0)
    ctx->pc = 0x377adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 3));
    // 0x377ae0: 0x8f838c14  lw          $v1, -0x73EC($gp)
    ctx->pc = 0x377ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937620)));
    // 0x377ae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x377AE4u;
    {
        const bool branch_taken_0x377ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377AE4u;
        // 0x377ae8: 0xac6405bc  sw          $a0, 0x5BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ae4) {
            ctx->pc = 0x377AF8u;
            goto label_377af8;
        }
    }
    ctx->pc = 0x377AECu;
    // 0x377aec: 0x0  nop
    ctx->pc = 0x377aecu;
    // NOP
label_377af0:
    // 0x377af0: 0xaf848c10  sw          $a0, -0x73F0($gp)
    ctx->pc = 0x377af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 4));
    // 0x377af4: 0xac8005b8  sw          $zero, 0x5B8($a0)
    ctx->pc = 0x377af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 0));
label_377af8:
    // 0x377af8: 0xac8005bc  sw          $zero, 0x5BC($a0)
    ctx->pc = 0x377af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1468), GPR_U32(ctx, 0));
    // 0x377afc: 0x8f838c18  lw          $v1, -0x73E8($gp)
    ctx->pc = 0x377afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
    // 0x377b00: 0xaf848c14  sw          $a0, -0x73EC($gp)
    ctx->pc = 0x377b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 4));
    // 0x377b04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x377b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x377b08: 0x3e00008  jr          $ra
    ctx->pc = 0x377B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B08u;
        // 0x377b0c: 0xaf838c18  sw          $v1, -0x73E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377B10u;
}

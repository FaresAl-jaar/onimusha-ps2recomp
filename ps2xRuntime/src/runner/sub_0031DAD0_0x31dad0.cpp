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

// Function: sub_0031DAD0
// Address: 0x31dad0 - 0x31daf4
void sub_0031DAD0_0x31dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DAD0_0x31dad0");
#endif

    ctx->pc = 0x31dad0u;

    // 0x31dad0: 0x8f828b34  lw          $v0, -0x74CC($gp)
    ctx->pc = 0x31dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x31dad4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DAD4u;
    {
        const bool branch_taken_0x31dad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAD4u;
        // 0x31dad8: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dad4) {
            ctx->pc = 0x31DAE8u;
            goto label_31dae8;
        }
    }
    ctx->pc = 0x31DADCu;
    // 0x31dadc: 0x2442ea00  addiu       $v0, $v0, -0x1600
    ctx->pc = 0x31dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961664));
    // 0x31dae0: 0xaf828b34  sw          $v0, -0x74CC($gp)
    ctx->pc = 0x31dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 2));
    // 0x31dae4: 0x0  nop
    ctx->pc = 0x31dae4u;
    // NOP
label_31dae8:
    // 0x31dae8: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x31dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x31daec: 0x80c72f0  j           func_31CBC0
    ctx->pc = 0x31DAECu;
    ctx->pc = 0x31DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DAECu;
    // 0x31daf0: 0x2484e7d0  addiu       $a0, $a0, -0x1830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CBC0u;
    sub_0031CBC0_0x31cbc0(rdram, ctx, runtime); return;
    ctx->pc = 0x31DAF4u;
}

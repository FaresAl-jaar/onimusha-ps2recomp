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

// Function: sub_0023C4F8
// Address: 0x23c4f8 - 0x23c528
void sub_0023C4F8_0x23c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C4F8_0x23c4f8");
#endif

    ctx->pc = 0x23c4f8u;

    // 0x23c4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c4fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C4FCu;
    {
        const bool branch_taken_0x23c4fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4FCu;
        // 0x23c500: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4fc) {
            ctx->pc = 0x23C518u;
            goto label_23c518;
        }
    }
    ctx->pc = 0x23C504u;
    // 0x23c504: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23c504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23c508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c50c: 0x2484b738  addiu       $a0, $a0, -0x48C8
    ctx->pc = 0x23c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948664));
    // 0x23c510: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23C510u;
    ctx->pc = 0x23C514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C510u;
    // 0x23c514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23C518u;
label_23c518:
    // 0x23c518: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23c518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23c51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c520: 0x808daac  j           func_236AB0
    ctx->pc = 0x23C520u;
    ctx->pc = 0x23C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C520u;
    // 0x23c524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB0u;
    sub_00236AB0_0x236ab0(rdram, ctx, runtime); return;
    ctx->pc = 0x23C528u;
}

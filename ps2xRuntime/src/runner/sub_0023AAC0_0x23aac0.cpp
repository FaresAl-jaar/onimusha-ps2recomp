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

// Function: sub_0023AAC0
// Address: 0x23aac0 - 0x23aaf0
void sub_0023AAC0_0x23aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AAC0_0x23aac0");
#endif

    switch (ctx->pc) {
        case 0x23aad8u: goto label_23aad8;
        default: break;
    }

    ctx->pc = 0x23aac0u;

    // 0x23aac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23aac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23aac4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AAC4u;
    {
        const bool branch_taken_0x23aac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAC4u;
        // 0x23aac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aac4) {
            ctx->pc = 0x23AAE0u;
            goto label_23aae0;
        }
    }
    ctx->pc = 0x23AACCu;
    // 0x23aacc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23aad0: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23AAD0u;
    SET_GPR_U32(ctx, 31, 0x23AAD8u);
    ctx->pc = 0x23AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAD0u;
    // 0x23aad4: 0x2484b308  addiu       $a0, $a0, -0x4CF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23AAD0u, 0x23AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AAD8u;
label_23aad8:
    // 0x23aad8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23AAD8u;
    {
        const bool branch_taken_0x23aad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAD8u;
        // 0x23aadc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aad8) {
            ctx->pc = 0x23AAE4u;
            goto label_23aae4;
        }
    }
    ctx->pc = 0x23AAE0u;
label_23aae0:
    // 0x23aae0: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x23aae0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
label_23aae4:
    // 0x23aae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23aae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aae8: 0x3e00008  jr          $ra
    ctx->pc = 0x23AAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAE8u;
        // 0x23aaec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AAF0u;
}

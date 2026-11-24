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

// Function: sub_0039FEA0
// Address: 0x39fea0 - 0x39fedc
void sub_0039FEA0_0x39fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FEA0_0x39fea0");
#endif

    switch (ctx->pc) {
        case 0x39fec8u: goto label_39fec8;
        default: break;
    }

    ctx->pc = 0x39fea0u;

    // 0x39fea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39fea4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39fea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39feac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39FEACu;
    {
        const bool branch_taken_0x39feac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEACu;
        // 0x39feb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39feac) {
            ctx->pc = 0x39FED0u;
            goto label_39fed0;
        }
    }
    ctx->pc = 0x39FEB4u;
    // 0x39feb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39feb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39feb8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x39feb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39febc: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x39febcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x39fec0: 0xc052ef8  jal         func_14BBE0
    ctx->pc = 0x39FEC0u;
    SET_GPR_U32(ctx, 31, 0x39FEC8u);
    ctx->pc = 0x39FEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEC0u;
    // 0x39fec4: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BBE0u, 0x39FEC0u, 0x39FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEC8u;
label_39fec8:
    // 0x39fec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39fecc: 0x0  nop
    ctx->pc = 0x39feccu;
    // NOP
label_39fed0:
    // 0x39fed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39fed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39fed4: 0x3e00008  jr          $ra
    ctx->pc = 0x39FED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FED4u;
        // 0x39fed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FEDCu;
}
